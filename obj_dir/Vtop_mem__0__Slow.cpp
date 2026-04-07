// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_mem___eval_initial__TOP__top__my_mem(Vtop_mem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mem___eval_initial__TOP__top__my_mem\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    ++(vlSymsp->__Vcoverage[1410]);
}

VL_ATTR_COLD void Vtop_mem___stl_sequent__TOP__top__my_mem__0(Vtop_mem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mem___stl_sequent__TOP__top__my_mem__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1192, vlSymsp->TOP.clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.clk;
    }
    if ((7U & ((vlSymsp->TOP__top.__PVT__my_cu__DOT__inst 
                >> 0x0000000cU) ^ (IData)(vlSelfRef.__Vtogcov__func3in)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 1196, 
                               (vlSymsp->TOP__top.__PVT__my_cu__DOT__inst 
                                >> 0x0000000cU), vlSelfRef.__Vtogcov__func3in);
        vlSelfRef.__Vtogcov__func3in = (7U & (vlSymsp->TOP__top.__PVT__my_cu__DOT__inst 
                                              >> 0x0000000cU));
    }
    if ((vlSymsp->TOP__top.__PVT__GPRread2 ^ vlSelfRef.__Vtogcov__datain)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1234, vlSymsp->TOP__top.__PVT__GPRread2, vlSelfRef.__Vtogcov__datain);
        vlSelfRef.__Vtogcov__datain = vlSymsp->TOP__top.__PVT__GPRread2;
    }
    if (((IData)(vlSymsp->TOP__top.__PVT__memwena) 
         ^ (IData)(vlSelfRef.__Vtogcov__wena))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1194, vlSymsp->TOP__top.__PVT__memwena, vlSelfRef.__Vtogcov__wena);
        vlSelfRef.__Vtogcov__wena = vlSymsp->TOP__top.__PVT__memwena;
    }
    if ((0x0000ffffU & (vlSymsp->TOP__top.__PVT__alurslt 
                        ^ (IData)(vlSelfRef.__Vtogcov__addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 1202, vlSymsp->TOP__top.__PVT__alurslt, vlSelfRef.__Vtogcov__addr);
        vlSelfRef.__Vtogcov__addr = (0x0000ffffU & vlSymsp->TOP__top.__PVT__alurslt);
    }
    if ((0x00003fffU & ((vlSymsp->TOP__top.__PVT__alurslt 
                         >> 2U) ^ (IData)(vlSelfRef.__Vtogcov__addrin)))) {
        VL_COV_TOGGLE_CHG_ST_I(14, vlSymsp->__Vcoverage + 1362, 
                               (vlSymsp->TOP__top.__PVT__alurslt 
                                >> 2U), vlSelfRef.__Vtogcov__addrin);
        vlSelfRef.__Vtogcov__addrin = (0x00003fffU 
                                       & (vlSymsp->TOP__top.__PVT__alurslt 
                                          >> 2U));
    }
    if ((0x0000001fU & (VL_SHIFTL_III(5,5,32, (3U & vlSymsp->TOP__top.__PVT__alurslt), 3U) 
                        ^ (IData)(vlSelfRef.__Vtogcov__lb)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 1390, 
                               VL_SHIFTL_III(5,5,32, 
                                             (3U & vlSymsp->TOP__top.__PVT__alurslt), 3U), vlSelfRef.__Vtogcov__lb);
        vlSelfRef.__Vtogcov__lb = (0x0000001fU & VL_SHIFTL_III(5,5,32, 
                                                               (3U 
                                                                & vlSymsp->TOP__top.__PVT__alurslt), 3U));
    }
    if ((0x0000001fU & (VL_SHIFTL_III(5,5,32, (3U & vlSymsp->TOP__top.__PVT__alurslt), 4U) 
                        ^ (IData)(vlSelfRef.__Vtogcov__lh)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 1400, 
                               VL_SHIFTL_III(5,5,32, 
                                             (3U & vlSymsp->TOP__top.__PVT__alurslt), 4U), vlSelfRef.__Vtogcov__lh);
        vlSelfRef.__Vtogcov__lh = (0x0000001fU & VL_SHIFTL_III(5,5,32, 
                                                               (3U 
                                                                & vlSymsp->TOP__top.__PVT__alurslt), 4U));
    }
    if ((0x00004000U & vlSymsp->TOP__top.__PVT__my_cu__DOT__inst)) {
        if ((0x00002000U & vlSymsp->TOP__top.__PVT__my_cu__DOT__inst)) {
            vlSelfRef.__PVT__dataout = 0U;
            ++(vlSymsp->__Vcoverage[1423]);
        } else if ((0x00001000U & vlSymsp->TOP__top.__PVT__my_cu__DOT__inst)) {
            vlSelfRef.__PVT__dataout = (0x0000ffffU 
                                        & (vlSelfRef.mem
                                           [(0x00003fffU 
                                             & (vlSymsp->TOP__top.__PVT__alurslt 
                                                >> 2U))] 
                                           >> (0x0000001fU 
                                               & VL_SHIFTL_III(5,5,32, 
                                                               (3U 
                                                                & vlSymsp->TOP__top.__PVT__alurslt), 4U))));
            ++(vlSymsp->__Vcoverage[1422]);
        } else {
            vlSelfRef.__PVT__dataout = (0x000000ffU 
                                        & (vlSelfRef.mem
                                           [(0x00003fffU 
                                             & (vlSymsp->TOP__top.__PVT__alurslt 
                                                >> 2U))] 
                                           >> (0x0000001fU 
                                               & VL_SHIFTL_III(5,5,32, 
                                                               (3U 
                                                                & vlSymsp->TOP__top.__PVT__alurslt), 3U))));
            ++(vlSymsp->__Vcoverage[1421]);
        }
    } else if ((0x00002000U & vlSymsp->TOP__top.__PVT__my_cu__DOT__inst)) {
        if ((0x00001000U & vlSymsp->TOP__top.__PVT__my_cu__DOT__inst)) {
            vlSelfRef.__PVT__dataout = 0U;
            ++(vlSymsp->__Vcoverage[1423]);
        } else {
            vlSelfRef.__PVT__dataout = vlSelfRef.mem
                [(0x00003fffU & (vlSymsp->TOP__top.__PVT__alurslt 
                                 >> 2U))];
            ++(vlSymsp->__Vcoverage[1420]);
        }
    } else if ((0x00001000U & vlSymsp->TOP__top.__PVT__my_cu__DOT__inst)) {
        vlSelfRef.__PVT__dataout = (((- (IData)((1U 
                                                 & (vlSelfRef.mem
                                                    [
                                                    (0x00003fffU 
                                                     & (vlSymsp->TOP__top.__PVT__alurslt 
                                                        >> 2U))] 
                                                    >> 
                                                    (0x0000001fU 
                                                     & ((IData)(0x0fU) 
                                                        + 
                                                        VL_SHIFTL_III(5,5,32, 
                                                                      (3U 
                                                                       & vlSymsp->TOP__top.__PVT__alurslt), 4U))))))) 
                                     << 0x00000010U) 
                                    | (0x0000ffffU 
                                       & (vlSelfRef.mem
                                          [(0x00003fffU 
                                            & (vlSymsp->TOP__top.__PVT__alurslt 
                                               >> 2U))] 
                                          >> (0x0000001fU 
                                              & VL_SHIFTL_III(5,5,32, 
                                                              (3U 
                                                               & vlSymsp->TOP__top.__PVT__alurslt), 4U)))));
        ++(vlSymsp->__Vcoverage[1419]);
    } else {
        vlSelfRef.__PVT__dataout = (((- (IData)((1U 
                                                 & (vlSelfRef.mem
                                                    [
                                                    (0x00003fffU 
                                                     & (vlSymsp->TOP__top.__PVT__alurslt 
                                                        >> 2U))] 
                                                    >> 
                                                    (0x0000001fU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_SHIFTL_III(5,5,32, 
                                                                      (3U 
                                                                       & vlSymsp->TOP__top.__PVT__alurslt), 3U))))))) 
                                     << 8U) | (0x000000ffU 
                                               & (vlSelfRef.mem
                                                  [
                                                  (0x00003fffU 
                                                   & (vlSymsp->TOP__top.__PVT__alurslt 
                                                      >> 2U))] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (3U 
                                                                    & vlSymsp->TOP__top.__PVT__alurslt), 3U)))));
        ++(vlSymsp->__Vcoverage[1418]);
    }
    ++(vlSymsp->__Vcoverage[1424]);
    if ((vlSelfRef.__PVT__dataout ^ vlSelfRef.__Vtogcov__dataout)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1298, vlSelfRef.__PVT__dataout, vlSelfRef.__Vtogcov__dataout);
        vlSelfRef.__Vtogcov__dataout = vlSelfRef.__PVT__dataout;
    }
}

VL_ATTR_COLD void Vtop_mem___ctor_var_reset(Vtop_mem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mem___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__wena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17291379765151979396ull);
    vlSelf->__PVT__func3in = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8748229651535022657ull);
    vlSelf->__PVT__addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14934084843038794831ull);
    vlSelf->__PVT__datain = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17659702766115087858ull);
    vlSelf->__PVT__dataout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17613296019095025167ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4032165174000709208ull);
    }
    vlSelf->__Vtogcov__clk = 0;
    vlSelf->__Vtogcov__wena = 0;
    vlSelf->__Vtogcov__func3in = 0;
    vlSelf->__Vtogcov__addr = 0;
    vlSelf->__Vtogcov__datain = 0;
    vlSelf->__Vtogcov__dataout = 0;
    vlSelf->__Vtogcov__addrin = 0;
    vlSelf->__Vtogcov__lb = 0;
    vlSelf->__Vtogcov__lh = 0;
}

VL_ATTR_COLD void Vtop_mem___configure_coverage(Vtop_mem* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mem___configure_coverage\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1192]), first, "vsrc/mem.v", 2, 11, "", "v_toggle/mem", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1194]), first, "vsrc/mem.v", 2, 16, "", "v_toggle/mem", "wena");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[1196]), first, "vsrc/mem.v", 3, 17, "", "v_toggle/mem", "func3in");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, &(vlSymsp->__Vcoverage[1202]), first, "vsrc/mem.v", 4, 18, "", "v_toggle/mem", "addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1234]), first, "vsrc/mem.v", 5, 18, "", "v_toggle/mem", "datain");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1298]), first, "vsrc/mem.v", 6, 23, "", "v_toggle/mem", "dataout");
    vlSelf->__vlCoverToggleInsert(0, 13, 1, &(vlSymsp->__Vcoverage[1362]), first, "vsrc/mem.v", 10, 17, "", "v_toggle/mem", "addrin");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[1390]), first, "vsrc/mem.v", 11, 15, "", "v_toggle/mem", "lb");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[1390]), first, "vsrc/mem.v", 11, 19, "", "v_toggle/mem", "sb");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[1400]), first, "vsrc/mem.v", 12, 15, "", "v_toggle/mem", "lh");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[1400]), first, "vsrc/mem.v", 12, 19, "", "v_toggle/mem", "sh");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1410]), first, "vsrc/mem.v", 14, 5, "", "v_line/mem", "block", "14-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1411]), first, "vsrc/mem.v", 27, 23, "", "v_line/mem", "case", "27-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1412]), first, "vsrc/mem.v", 31, 23, "", "v_line/mem", "case", "31-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1413]), first, "vsrc/mem.v", 35, 23, "", "v_line/mem", "case", "35-37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1414]), first, "vsrc/mem.v", 39, 17, "", "v_line/mem", "case", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1415]), first, "vsrc/mem.v", 25, 9, "", "v_branch/mem", "if", "25-26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1416]), first, "vsrc/mem.v", 25, 10, "", "v_branch/mem", "else", "42-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1417]), first, "vsrc/mem.v", 24, 5, "", "v_line/mem", "block", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1418]), first, "vsrc/mem.v", 49, 20, "", "v_line/mem", "case", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1419]), first, "vsrc/mem.v", 50, 20, "", "v_line/mem", "case", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1420]), first, "vsrc/mem.v", 51, 20, "", "v_line/mem", "case", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1421]), first, "vsrc/mem.v", 52, 20, "", "v_line/mem", "case", "52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1422]), first, "vsrc/mem.v", 53, 20, "", "v_line/mem", "case", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1423]), first, "vsrc/mem.v", 54, 13, "", "v_line/mem", "case", "54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1424]), first, "vsrc/mem.v", 47, 5, "", "v_line/mem", "block", "47-48");
}
