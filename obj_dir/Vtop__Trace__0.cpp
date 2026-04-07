// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__top.__PVT__GPRwena));
        bufp->chgCData(oldp+1,((0x0000001fU & (vlSymsp->TOP__top.__PVT__my_cu__DOT__inst 
                                               >> 0x0000000fU))),5);
        bufp->chgCData(oldp+2,((0x0000001fU & (vlSymsp->TOP__top.__PVT__my_cu__DOT__inst 
                                               >> 0x00000014U))),5);
        bufp->chgCData(oldp+3,((0x0000001fU & (vlSymsp->TOP__top.__PVT__my_cu__DOT__inst 
                                               >> 7U))),5);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__top.__PVT__GPRread1),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__top.__PVT__GPRread2),32);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__top.__PVT__PCsel));
        bufp->chgIData(oldp+7,(vlSymsp->TOP__top.__PVT__alurslt),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__top.__PVT__addrout),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__top.__PVT__my_cu__DOT__inst),32);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__top.__PVT__aluinvert));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__top.__PVT__alusral));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__top.__PVT__btype));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__top.__PVT__memwena));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__top.__PVT__j));
        bufp->chgCData(oldp+15,(vlSymsp->TOP__top.__PVT__alusel),2);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__top.__PVT__GPRwsel),2);
        bufp->chgCData(oldp+17,((7U & (vlSymsp->TOP__top.__PVT__my_cu__DOT__inst 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+18,((0x0000007fU & vlSymsp->TOP__top.__PVT__my_cu__DOT__inst)),7);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__top.__PVT__imm_out),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__top.__PVT__CUgprdirect),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__top.__PVT__alubout),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[0]),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[1]),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[2]),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[3]),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[4]),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[5]),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[6]),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[7]),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[8]),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[9]),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[10]),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[11]),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[12]),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[13]),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[14]),32);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[15]),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[16]),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[17]),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[18]),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[19]),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[20]),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[21]),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[22]),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[23]),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[24]),32);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[25]),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[26]),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[27]),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[28]),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[29]),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[30]),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__top.__PVT__my_GPR__DOT__GPR[31]),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__top.__PVT__my_alu__DOT__rs1),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__top.__PVT__my_alu__DOT__in1),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__top.__PVT__my_alu__DOT__in2),32);
        bufp->chgQData(oldp+57,(vlSymsp->TOP__top.__PVT__my_alu__DOT__sra_full),64);
        bufp->chgSData(oldp+59,((0x00003fffU & vlSymsp->TOP__top.__PVT__addrout)),14);
        bufp->chgSData(oldp+60,((0x00000fffU & (vlSymsp->TOP__top.__PVT__addrout 
                                                >> 2U))),12);
        bufp->chgSData(oldp+61,((0x0000ffffU & vlSymsp->TOP__top.__PVT__alurslt)),16);
        bufp->chgSData(oldp+62,((0x00003fffU & (vlSymsp->TOP__top.__PVT__alurslt 
                                                >> 2U))),14);
        bufp->chgCData(oldp+63,((0x0000001fU & VL_SHIFTL_III(5,5,32, 
                                                             (3U 
                                                              & vlSymsp->TOP__top.__PVT__alurslt), 3U))),5);
        bufp->chgCData(oldp+64,((0x0000001fU & VL_SHIFTL_III(5,5,32, 
                                                             (3U 
                                                              & vlSymsp->TOP__top.__PVT__alurslt), 4U))),5);
    }
    bufp->chgBit(oldp+65,(vlSelfRef.clk));
    bufp->chgBit(oldp+66,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+67,(vlSymsp->TOP__top.__PVT__GPRdata_in),32);
    bufp->chgIData(oldp+68,(vlSymsp->TOP__top__my_mem.__PVT__dataout),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
