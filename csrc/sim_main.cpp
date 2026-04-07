#include <stdio.h>
#include <verilated.h>
#include "Vtop.h"
#include "verilated_fst_c.h" 
#include <memory>

double sc_time_stamp() { return 0; }

uint64_t max_sim_steps = 1000;
uint64_t current_step = 0;

int main(int argc, char** argv) {
    Verilated::mkdir("logs");

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

    while (!contextp->gotFinish() && current_step < max_sim_steps) {
        contextp->timeInc(1);
        top->clk = !top->clk;
        top->eval();
        tfp->dump(contextp->time());

        current_step++;
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
