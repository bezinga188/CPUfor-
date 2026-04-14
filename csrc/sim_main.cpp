#include <stdio.h>
#include <verilated.h>
#include "Vtop.h"
#include "verilated_fst_c.h" 
#include <memory>
#include <assert.h>
#include <iostream>
#include "svdpi.h"  // 必须加上，否则不认识 svOpenArrayHandle
#include "Vtop__Dpi.h" //包含 Verilator 生成的 DPI 声明

/* 引入difftest */
#include <dlfcn.h>

/*定义32个寄存器，用来difftest*/
struct diff_context_t {
    uint32_t gpr[32];
    uint32_t pc;
};

void (*nemu_difftest_init)() = NULL;
void (*nemu_difftest_exec)(uint64_t) = NULL;
void (*nemu_difftest_regcpy)(void *dut, bool direction) = NULL;

uint32_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
    cpu_gpr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

double sc_time_stamp() { return 0; }

uint64_t max_sim_steps = 1000;
uint64_t current_step = 0;

void check_diff(diff_context_t *ref, uint32_t dut_pc) {
    if (ref->pc != dut_pc) {
        printf("Mismatch! PC: 硬件=%08x, 模拟器=%08x\n", dut_pc, ref->pc);
        assert(0); 
    }
    for (int i = 0; i < 32; i++) {
        if (ref->gpr[i] != cpu_gpr[i]) {
            printf("Mismatch! 寄存器 x%d: 硬件=%08x, 模拟器=%08x\n", i, cpu_gpr[i], ref->gpr[i]);
            assert(0);
        }
    }
}

int main(int argc, char** argv) {
    Verilated::mkdir("logs");

    /*加载ref,进行difftest*/
    void *handle = dlopen("./nemu/build/riscv32-nemu-interpreter", RTLD_LAZY);
    if(!handle) {
        std::cout << "fucking failed" << dlerror() << std::endl;
        return -1;
    }

    /*链接可执行文件与verilog编译过的cpp文件*/
    nemu_difftest_init = (void (*)())dlsym(handle, "difftest_init");
    nemu_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
    nemu_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");

    /*初始化测试*/
    if(nemu_difftest_init) {
        nemu_difftest_init();
        std::cout << "成功" << std::endl;
    }

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->debug(0);
    contextp->threads(1);
    contextp->randReset(2);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};

    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("wave.fst");
    
    top->rst_n = 1;
    top->clk = 0;

    for (int i = 0; i < 10; i++) {
        contextp->timeInc(1);
        top->clk = !top->clk;
        top->eval();
        tfp->dump(contextp->time());
    }
    
    top->rst_n = 0;

    diff_context_t ctx;
    ctx.pc = 0x80000000; // 假设起始地址
    nemu_difftest_regcpy(&ctx, true); // true 通常代表 TO_REF

    while (!contextp->gotFinish() && current_step < max_sim_steps) {
        contextp->timeInc(1);
        top->clk = !top->clk;
        top->eval();
        tfp->dump(contextp->time());

        if (top->clk == 0) {
        nemu_difftest_exec(1); // 模拟器跑一步
        nemu_difftest_regcpy(&ctx, false); // 取回模拟器的结果（FROM_REF）
        check_diff(&ctx, top->pc); // 开始对拍！
        }

        current_step++;

        if (top->halt) {
            printf("搞定\n");
            break;
        }
    }

    top->final();
    tfp->close();

#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif

    contextp->statsPrintSummary();

    return 0;
}
