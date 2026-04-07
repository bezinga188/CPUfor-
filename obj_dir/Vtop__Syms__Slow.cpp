// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(446);
    // Setup sub module instances
    TOP__top.ctor(this, "top");
    TOP__top__my_mem.ctor(this, "top.my_mem");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.top = &TOP__top;
    TOP__top.my_mem = &TOP__top__my_mem;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top.__Vconfigure(true);
    TOP__top__my_mem.__Vconfigure(true);
    // Setup scopes
    __Vscopep_top__my_mem = new VerilatedScope{this, "top.my_mem", "my_mem", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_top__my_mem->varInsert("mem", &(TOP__top__my_mem.mem), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,16383 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_top__my_mem, __Vscopep_top__my_mem = nullptr);
    // Tear down sub module instances
    TOP__top__my_mem.dtor();
    TOP__top.dtor();
}
