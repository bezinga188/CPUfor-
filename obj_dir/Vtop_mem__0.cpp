// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_mem___ico_sequent__TOP__top__my_mem__0(Vtop_mem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mem___ico_sequent__TOP__top__my_mem__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1192, vlSymsp->TOP.clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.clk;
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

void Vtop_mem___nba_sequent__TOP__top__my_mem__0(Vtop_mem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mem___nba_sequent__TOP__top__my_mem__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __PVT___unused_ok;
    __PVT___unused_ok = 0;
    CData/*7:0*/ __VdlyVal__mem__v0;
    __VdlyVal__mem__v0 = 0;
    CData/*4:0*/ __VdlyLsb__mem__v0;
    __VdlyLsb__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__mem__v0;
    __VdlyDim0__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__mem__v0;
    __VdlySet__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__mem__v1;
    __VdlyVal__mem__v1 = 0;
    CData/*4:0*/ __VdlyLsb__mem__v1;
    __VdlyLsb__mem__v1 = 0;
    SData/*13:0*/ __VdlyDim0__mem__v1;
    __VdlyDim0__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__mem__v1;
    __VdlySet__mem__v1 = 0;
    IData/*31:0*/ __VdlyVal__mem__v2;
    __VdlyVal__mem__v2 = 0;
    SData/*13:0*/ __VdlyDim0__mem__v2;
    __VdlyDim0__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__mem__v2;
    __VdlySet__mem__v2 = 0;
    IData/*31:0*/ __VdlyVal__mem__v3;
    __VdlyVal__mem__v3 = 0;
    SData/*13:0*/ __VdlyDim0__mem__v3;
    __VdlyDim0__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__mem__v3;
    __VdlySet__mem__v3 = 0;
    IData/*31:0*/ __VdlyVal__mem__v4;
    __VdlyVal__mem__v4 = 0;
    SData/*13:0*/ __VdlyDim0__mem__v4;
    __VdlyDim0__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__mem__v4;
    __VdlySet__mem__v4 = 0;
    // Body
    __VdlySet__mem__v0 = 0U;
    __VdlySet__mem__v1 = 0U;
    __VdlySet__mem__v2 = 0U;
    __VdlySet__mem__v3 = 0U;
    __VdlySet__mem__v4 = 0U;
    if (vlSymsp->TOP__top.__PVT__memwena) {
        if ((0U == (7U & (vlSymsp->TOP__top.__PVT__my_cu__DOT__inst 
                          >> 0x0000000cU)))) {
            ++(vlSymsp->__Vcoverage[1411]);
            __PVT___unused_ok = (((~ ((IData)(0x000000ffU) 
                                      << (0x0000001fU 
                                          & VL_SHIFTL_III(5,5,32, 
                                                          (3U 
                                                           & vlSymsp->TOP__top.__PVT__alurslt), 3U)))) 
                                  & __PVT___unused_ok) 
                                 | (0x00000000ffffffffULL 
                                    & ((0x000000ffU 
                                        & vlSymsp->TOP__top.__PVT__GPRread2) 
                                       << (0x0000001fU 
                                           & VL_SHIFTL_III(5,5,32, 
                                                           (3U 
                                                            & vlSymsp->TOP__top.__PVT__alurslt), 3U)))));
            __VdlyVal__mem__v0 = (0x000000ffU & vlSymsp->TOP__top.__PVT__GPRread2);
            __VdlyLsb__mem__v0 = (0x0000001fU & VL_SHIFTL_III(5,5,32, 
                                                              (3U 
                                                               & vlSymsp->TOP__top.__PVT__alurslt), 3U));
            __VdlyDim0__mem__v0 = (0x00003fffU & (vlSymsp->TOP__top.__PVT__alurslt 
                                                  >> 2U));
            __VdlySet__mem__v0 = 1U;
        } else if ((1U == (7U & (vlSymsp->TOP__top.__PVT__my_cu__DOT__inst 
                                 >> 0x0000000cU)))) {
            ++(vlSymsp->__Vcoverage[1412]);
            __PVT___unused_ok = (((~ ((IData)(0x0000ffffU) 
                                      << (0x0000001fU 
                                          & VL_SHIFTL_III(5,5,32, 
                                                          (3U 
                                                           & vlSymsp->TOP__top.__PVT__alurslt), 4U)))) 
                                  & __PVT___unused_ok) 
                                 | (0x00000000ffffffffULL 
                                    & ((0x0000ffffU 
                                        & vlSymsp->TOP__top.__PVT__GPRread2) 
                                       << (0x0000001fU 
                                           & VL_SHIFTL_III(5,5,32, 
                                                           (3U 
                                                            & vlSymsp->TOP__top.__PVT__alurslt), 4U)))));
            __VdlyVal__mem__v1 = (0x0000ffffU & vlSymsp->TOP__top.__PVT__GPRread2);
            __VdlyLsb__mem__v1 = (0x0000001fU & VL_SHIFTL_III(5,5,32, 
                                                              (3U 
                                                               & vlSymsp->TOP__top.__PVT__alurslt), 4U));
            __VdlyDim0__mem__v1 = (0x00003fffU & (vlSymsp->TOP__top.__PVT__alurslt 
                                                  >> 2U));
            __VdlySet__mem__v1 = 1U;
        } else if ((2U == (7U & (vlSymsp->TOP__top.__PVT__my_cu__DOT__inst 
                                 >> 0x0000000cU)))) {
            ++(vlSymsp->__Vcoverage[1413]);
            __PVT___unused_ok = vlSymsp->TOP__top.__PVT__GPRread2;
            __VdlyVal__mem__v2 = vlSymsp->TOP__top.__PVT__GPRread2;
            __VdlyDim0__mem__v2 = (0x00003fffU & (vlSymsp->TOP__top.__PVT__alurslt 
                                                  >> 2U));
            __VdlySet__mem__v2 = 1U;
        } else {
            __VdlyVal__mem__v3 = vlSelfRef.mem[(0x00003fffU 
                                                & (vlSymsp->TOP__top.__PVT__alurslt 
                                                   >> 2U))];
            __VdlyDim0__mem__v3 = (0x00003fffU & (vlSymsp->TOP__top.__PVT__alurslt 
                                                  >> 2U));
            __VdlySet__mem__v3 = 1U;
            ++(vlSymsp->__Vcoverage[1414]);
        }
        ++(vlSymsp->__Vcoverage[1415]);
    } else {
        __VdlyVal__mem__v4 = vlSelfRef.mem[(0x00003fffU 
                                            & (vlSymsp->TOP__top.__PVT__alurslt 
                                               >> 2U))];
        __VdlyDim0__mem__v4 = (0x00003fffU & (vlSymsp->TOP__top.__PVT__alurslt 
                                              >> 2U));
        __VdlySet__mem__v4 = 1U;
        ++(vlSymsp->__Vcoverage[1416]);
    }
    ++(vlSymsp->__Vcoverage[1417]);
    if (__VdlySet__mem__v0) {
        vlSelfRef.mem[__VdlyDim0__mem__v0] = (((~ ((IData)(0x000000ffU) 
                                                   << (IData)(__VdlyLsb__mem__v0))) 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v0]) 
                                              | (0x00000000ffffffffULL 
                                                 & ((IData)(__VdlyVal__mem__v0) 
                                                    << (IData)(__VdlyLsb__mem__v0))));
    }
    if (__VdlySet__mem__v1) {
        vlSelfRef.mem[__VdlyDim0__mem__v1] = (((~ ((IData)(0x0000ffffU) 
                                                   << (IData)(__VdlyLsb__mem__v1))) 
                                               & vlSelfRef.mem
                                               [__VdlyDim0__mem__v1]) 
                                              | (0x00000000ffffffffULL 
                                                 & ((IData)(__VdlyVal__mem__v1) 
                                                    << (IData)(__VdlyLsb__mem__v1))));
    }
    if (__VdlySet__mem__v2) {
        vlSelfRef.mem[__VdlyDim0__mem__v2] = __VdlyVal__mem__v2;
    }
    if (__VdlySet__mem__v3) {
        vlSelfRef.mem[__VdlyDim0__mem__v3] = __VdlyVal__mem__v3;
    }
    if (__VdlySet__mem__v4) {
        vlSelfRef.mem[__VdlyDim0__mem__v4] = __VdlyVal__mem__v4;
    }
}

void Vtop_mem___nba_sequent__TOP__top__my_mem__1(Vtop_mem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mem___nba_sequent__TOP__top__my_mem__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
