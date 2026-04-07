// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSymsp->TOP.clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.clk;
    }
    if (((IData)(vlSymsp->TOP.rst_n) ^ (IData)(vlSelfRef.__Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2, vlSymsp->TOP.rst_n, vlSelfRef.__Vtogcov__rst_n);
        vlSelfRef.__Vtogcov__rst_n = vlSymsp->TOP.rst_n;
    }
}

void Vtop_top___ico_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((vlSymsp->TOP__top__my_mem.__PVT__dataout ^ vlSelfRef.__Vtogcov__memdata_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 664, vlSymsp->TOP__top__my_mem.__PVT__dataout, vlSelfRef.__Vtogcov__memdata_out);
        vlSelfRef.__Vtogcov__memdata_out = vlSymsp->TOP__top__my_mem.__PVT__dataout;
    }
    vlSelfRef.__PVT__GPRdata_in = 0U;
    if ((2U & (IData)(vlSelfRef.__PVT__GPRwsel))) {
        if ((1U & (IData)(vlSelfRef.__PVT__GPRwsel))) {
            vlSelfRef.__PVT__GPRdata_in = vlSymsp->TOP__top__my_mem.__PVT__dataout;
            ++(vlSymsp->__Vcoverage[231]);
        } else {
            vlSelfRef.__PVT__GPRdata_in = vlSelfRef.__PVT__alurslt;
            ++(vlSymsp->__Vcoverage[230]);
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__GPRwsel))) {
        vlSelfRef.__PVT__GPRdata_in = vlSelfRef.__PVT__CUgprdirect;
        ++(vlSymsp->__Vcoverage[229]);
    } else {
        vlSelfRef.__PVT__GPRdata_in = ((IData)(4U) 
                                       + vlSelfRef.__PVT__addrout);
        ++(vlSymsp->__Vcoverage[228]);
    }
    ++(vlSymsp->__Vcoverage[232]);
    if ((vlSelfRef.__PVT__GPRdata_in ^ vlSelfRef.__Vtogcov__GPRdata_in)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 164, vlSelfRef.__PVT__GPRdata_in, vlSelfRef.__Vtogcov__GPRdata_in);
        vlSelfRef.__Vtogcov__GPRdata_in = vlSelfRef.__PVT__GPRdata_in;
    }
}

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ my_alu__DOT____VdfgExtracted_hfa3a9851__0;
    my_alu__DOT____VdfgExtracted_hfa3a9851__0 = 0;
    CData/*0:0*/ my_alu__DOT____VdfgExtracted_hfb2fd40a__0;
    my_alu__DOT____VdfgExtracted_hfb2fd40a__0 = 0;
    CData/*0:0*/ my_alu__DOT____VdfgExtracted_hfd4c778e__0;
    my_alu__DOT____VdfgExtracted_hfd4c778e__0 = 0;
    CData/*0:0*/ my_alu__DOT____VdfgExtracted_hfa9d1137__0;
    my_alu__DOT____VdfgExtracted_hfa9d1137__0 = 0;
    CData/*0:0*/ my_alu__DOT____VdfgExtracted_hfbc523a1__0;
    my_alu__DOT____VdfgExtracted_hfbc523a1__0 = 0;
    CData/*0:0*/ my_alu__DOT____VdfgExtracted_hfaa98a6d__1;
    my_alu__DOT____VdfgExtracted_hfaa98a6d__1 = 0;
    CData/*0:0*/ my_alu__DOT____VdfgExtracted_hfa99407d__1;
    my_alu__DOT____VdfgExtracted_hfa99407d__1 = 0;
    IData/*31:0*/ __Vdly__addrout;
    __Vdly__addrout = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v0;
    __VdlySet__my_GPR__DOT__GPR__v0 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v1;
    __VdlySet__my_GPR__DOT__GPR__v1 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v2;
    __VdlySet__my_GPR__DOT__GPR__v2 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v3;
    __VdlySet__my_GPR__DOT__GPR__v3 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v4;
    __VdlySet__my_GPR__DOT__GPR__v4 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v5;
    __VdlySet__my_GPR__DOT__GPR__v5 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v6;
    __VdlySet__my_GPR__DOT__GPR__v6 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v7;
    __VdlySet__my_GPR__DOT__GPR__v7 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v8;
    __VdlySet__my_GPR__DOT__GPR__v8 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v9;
    __VdlySet__my_GPR__DOT__GPR__v9 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v10;
    __VdlySet__my_GPR__DOT__GPR__v10 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v11;
    __VdlySet__my_GPR__DOT__GPR__v11 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v12;
    __VdlySet__my_GPR__DOT__GPR__v12 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v13;
    __VdlySet__my_GPR__DOT__GPR__v13 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v14;
    __VdlySet__my_GPR__DOT__GPR__v14 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v15;
    __VdlySet__my_GPR__DOT__GPR__v15 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v16;
    __VdlySet__my_GPR__DOT__GPR__v16 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v17;
    __VdlySet__my_GPR__DOT__GPR__v17 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v18;
    __VdlySet__my_GPR__DOT__GPR__v18 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v19;
    __VdlySet__my_GPR__DOT__GPR__v19 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v20;
    __VdlySet__my_GPR__DOT__GPR__v20 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v21;
    __VdlySet__my_GPR__DOT__GPR__v21 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v22;
    __VdlySet__my_GPR__DOT__GPR__v22 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v23;
    __VdlySet__my_GPR__DOT__GPR__v23 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v24;
    __VdlySet__my_GPR__DOT__GPR__v24 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v25;
    __VdlySet__my_GPR__DOT__GPR__v25 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v26;
    __VdlySet__my_GPR__DOT__GPR__v26 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v27;
    __VdlySet__my_GPR__DOT__GPR__v27 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v28;
    __VdlySet__my_GPR__DOT__GPR__v28 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v29;
    __VdlySet__my_GPR__DOT__GPR__v29 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v30;
    __VdlySet__my_GPR__DOT__GPR__v30 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v31;
    __VdlySet__my_GPR__DOT__GPR__v31 = 0;
    IData/*31:0*/ __VdlyVal__my_GPR__DOT__GPR__v32;
    __VdlyVal__my_GPR__DOT__GPR__v32 = 0;
    CData/*4:0*/ __VdlyDim0__my_GPR__DOT__GPR__v32;
    __VdlyDim0__my_GPR__DOT__GPR__v32 = 0;
    CData/*0:0*/ __VdlySet__my_GPR__DOT__GPR__v32;
    __VdlySet__my_GPR__DOT__GPR__v32 = 0;
    // Body
    __Vdly__addrout = vlSelfRef.__PVT__addrout;
    __VdlySet__my_GPR__DOT__GPR__v0 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v1 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v2 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v3 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v4 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v5 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v6 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v7 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v8 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v9 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v10 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v11 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v12 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v13 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v14 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v15 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v16 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v17 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v18 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v19 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v20 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v21 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v22 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v23 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v24 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v25 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v26 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v27 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v28 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v29 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v30 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v31 = 0U;
    __VdlySet__my_GPR__DOT__GPR__v32 = 0U;
    if (vlSymsp->TOP.rst_n) {
        ++(vlSymsp->__Vcoverage[756]);
        __Vdly__addrout = 0U;
    } else if (vlSelfRef.__PVT__PCsel) {
        ++(vlSymsp->__Vcoverage[755]);
        __Vdly__addrout = vlSelfRef.__PVT__alurslt;
    } else {
        __Vdly__addrout = ((IData)(4U) + vlSelfRef.__PVT__addrout);
        ++(vlSymsp->__Vcoverage[751]);
        if ((1U & (~ (IData)(vlSelfRef.__PVT__PCsel)))) {
            ++(vlSymsp->__Vcoverage[753]);
        }
        if (vlSelfRef.__PVT__PCsel) {
            ++(vlSymsp->__Vcoverage[754]);
        }
    }
    ++(vlSymsp->__Vcoverage[757]);
    if (vlSymsp->TOP.rst_n) {
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v0 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v1 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v2 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v3 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v4 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v5 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v6 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v7 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v8 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v9 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v10 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v11 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v12 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v13 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v14 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v15 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v16 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v17 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v18 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v19 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v20 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v21 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v22 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v23 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v24 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v25 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v26 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v27 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v28 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v29 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v30 = 1U;
        ++(vlSymsp->__Vcoverage[739]);
        __VdlySet__my_GPR__DOT__GPR__v31 = 1U;
        ++(vlSymsp->__Vcoverage[745]);
    } else {
        if (((IData)(vlSelfRef.__PVT__GPRwena) & (0U 
                                                  != 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                                      >> 7U))))) {
            ++(vlSymsp->__Vcoverage[740]);
            __VdlyVal__my_GPR__DOT__GPR__v32 = vlSelfRef.__PVT__GPRdata_in;
            __VdlyDim0__my_GPR__DOT__GPR__v32 = (0x0000001fU 
                                                 & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                                    >> 7U));
            __VdlySet__my_GPR__DOT__GPR__v32 = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[741]);
        }
        if (((IData)(vlSelfRef.__PVT__GPRwena) & (0U 
                                                  != 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                                      >> 7U))))) {
            ++(vlSymsp->__Vcoverage[742]);
        }
        if ((0U == (0x0000001fU & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                   >> 7U)))) {
            ++(vlSymsp->__Vcoverage[743]);
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__GPRwena)))) {
            ++(vlSymsp->__Vcoverage[744]);
        }
    }
    ++(vlSymsp->__Vcoverage[746]);
    vlSelfRef.__PVT__addrout = __Vdly__addrout;
    if (__VdlySet__my_GPR__DOT__GPR__v0) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[0U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v1) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[1U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v2) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[2U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v3) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[3U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v4) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[4U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v5) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[5U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v6) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[6U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v7) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[7U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v8) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[8U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v9) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[9U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v10) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[10U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v11) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[11U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v12) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[12U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v13) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[13U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v14) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[14U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v15) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[15U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v16) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[16U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v17) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[17U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v18) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[18U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v19) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[19U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v20) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[20U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v21) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[21U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v22) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[22U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v23) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[23U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v24) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[24U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v25) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[25U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v26) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[26U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v27) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[27U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v28) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[28U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v29) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[29U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v30) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[30U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v31) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[31U] = 0U;
    }
    if (__VdlySet__my_GPR__DOT__GPR__v32) {
        vlSelfRef.__PVT__my_GPR__DOT__GPR[__VdlyDim0__my_GPR__DOT__GPR__v32] 
            = __VdlyVal__my_GPR__DOT__GPR__v32;
    }
    if ((vlSelfRef.__PVT__addrout ^ vlSelfRef.__Vtogcov__addrout)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 299, vlSelfRef.__PVT__addrout, vlSelfRef.__Vtogcov__addrout);
        vlSelfRef.__Vtogcov__addrout = vlSelfRef.__PVT__addrout;
    }
    if ((0x00003fffU & (vlSelfRef.__PVT__addrout ^ (IData)(vlSelfRef.my_ireg__DOT____Vtogcov__addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(14, vlSymsp->__Vcoverage + 1139, vlSelfRef.__PVT__addrout, vlSelfRef.my_ireg__DOT____Vtogcov__addr);
        vlSelfRef.my_ireg__DOT____Vtogcov__addr = (0x00003fffU 
                                                   & vlSelfRef.__PVT__addrout);
    }
    if ((0x00000fffU & ((vlSelfRef.__PVT__addrout >> 2U) 
                        ^ (IData)(vlSelfRef.my_ireg__DOT____Vtogcov__word_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1168, 
                               (vlSelfRef.__PVT__addrout 
                                >> 2U), vlSelfRef.my_ireg__DOT____Vtogcov__word_addr);
        vlSelfRef.my_ireg__DOT____Vtogcov__word_addr 
            = (0x00000fffU & (vlSelfRef.__PVT__addrout 
                              >> 2U));
    }
    vlSelfRef.__PVT__my_cu__DOT__inst = vlSelfRef.__PVT__my_ireg__DOT__rom
        [(0x00000fffU & (vlSelfRef.__PVT__addrout >> 2U))];
    if ((0x0000001fU & ((vlSelfRef.__PVT__my_cu__DOT__inst 
                         >> 0x0000000fU) ^ (IData)(vlSelfRef.__Vtogcov__GPRrsel1)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 6, 
                               (vlSelfRef.__PVT__my_cu__DOT__inst 
                                >> 0x0000000fU), vlSelfRef.__Vtogcov__GPRrsel1);
        vlSelfRef.__Vtogcov__GPRrsel1 = (0x0000001fU 
                                         & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                            >> 0x0000000fU));
    }
    if ((0x0000001fU & ((vlSelfRef.__PVT__my_cu__DOT__inst 
                         >> 0x00000014U) ^ (IData)(vlSelfRef.__Vtogcov__GPRrsel2)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 16, 
                               (vlSelfRef.__PVT__my_cu__DOT__inst 
                                >> 0x00000014U), vlSelfRef.__Vtogcov__GPRrsel2);
        vlSelfRef.__Vtogcov__GPRrsel2 = (0x0000001fU 
                                         & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                            >> 0x00000014U));
    }
    if ((0x0000001fU & ((vlSelfRef.__PVT__my_cu__DOT__inst 
                         >> 7U) ^ (IData)(vlSelfRef.__Vtogcov__GPRwregsel)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 26, 
                               (vlSelfRef.__PVT__my_cu__DOT__inst 
                                >> 7U), vlSelfRef.__Vtogcov__GPRwregsel);
        vlSelfRef.__Vtogcov__GPRwregsel = (0x0000001fU 
                                           & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                              >> 7U));
    }
    if ((vlSelfRef.__PVT__my_cu__DOT__inst ^ vlSelfRef.__Vtogcov__CUinst)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 370, vlSelfRef.__PVT__my_cu__DOT__inst, vlSelfRef.__Vtogcov__CUinst);
        vlSelfRef.__Vtogcov__CUinst = vlSelfRef.__PVT__my_cu__DOT__inst;
    }
    if ((7U & ((vlSelfRef.__PVT__my_cu__DOT__inst >> 0x0000000cU) 
               ^ (IData)(vlSelfRef.__Vtogcov__alufsel)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 452, 
                               (vlSelfRef.__PVT__my_cu__DOT__inst 
                                >> 0x0000000cU), vlSelfRef.__Vtogcov__alufsel);
        vlSelfRef.__Vtogcov__alufsel = (7U & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                              >> 0x0000000cU));
    }
    if ((0x0000007fU & (vlSelfRef.__PVT__my_cu__DOT__inst 
                        ^ (IData)(vlSelfRef.__Vtogcov__opcode)))) {
        VL_COV_TOGGLE_CHG_ST_I(7, vlSymsp->__Vcoverage + 458, vlSelfRef.__PVT__my_cu__DOT__inst, vlSelfRef.__Vtogcov__opcode);
        vlSelfRef.__Vtogcov__opcode = (0x0000007fU 
                                       & vlSelfRef.__PVT__my_cu__DOT__inst);
    }
    if ((0U == (0x0000001fU & (vlSelfRef.__PVT__my_cu__DOT__inst 
                               >> 0x0000000fU)))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelfRef.my_GPR__DOT____VlemCond_0 = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelfRef.my_GPR__DOT____VlemCond_0 = vlSelfRef.__PVT__my_GPR__DOT__GPR
            [(0x0000001fU & (vlSelfRef.__PVT__my_cu__DOT__inst 
                             >> 0x0000000fU))];
    }
    vlSelfRef.__PVT__GPRread1 = vlSelfRef.my_GPR__DOT____VlemCond_0;
    if ((0U == (0x0000001fU & (vlSelfRef.__PVT__my_cu__DOT__inst 
                               >> 0x0000000fU)))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelfRef.my_GPR__DOT____VlemCond_1 = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelfRef.my_GPR__DOT____VlemCond_1 = vlSelfRef.__PVT__my_GPR__DOT__GPR
            [(0x0000001fU & (vlSelfRef.__PVT__my_cu__DOT__inst 
                             >> 0x00000014U))];
    }
    vlSelfRef.__PVT__GPRread2 = vlSelfRef.my_GPR__DOT____VlemCond_1;
    vlSelfRef.__PVT__GPRwena = 0U;
    vlSelfRef.__PVT__CUgprdirect = 0U;
    vlSelfRef.__PVT__alusel = 2U;
    vlSelfRef.__PVT__aluinvert = 0U;
    vlSelfRef.__PVT__alusral = 0U;
    vlSelfRef.__PVT__imm_out = 0U;
    vlSelfRef.__PVT__GPRwsel = 0U;
    vlSelfRef.__PVT__memwena = 0U;
    vlSelfRef.__PVT__btype = 0U;
    vlSelfRef.__PVT__j = 0U;
    if ((0x00000040U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
        if ((0x00000020U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            if ((0x00000010U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                ++(vlSymsp->__Vcoverage[737]);
            } else if ((8U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                if ((4U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                    if ((2U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                        if ((1U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                            vlSelfRef.__PVT__GPRwena = 1U;
                            vlSelfRef.__PVT__GPRwsel = 0U;
                            vlSelfRef.__PVT__alusel = 0U;
                            vlSelfRef.__PVT__j = 1U;
                            vlSelfRef.__PVT__imm_out 
                                = (((- (IData)((vlSelfRef.__PVT__my_cu__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                                 >> 0x14U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                            >> 0x00000014U))));
                            ++(vlSymsp->__Vcoverage[730]);
                        } else {
                            ++(vlSymsp->__Vcoverage[737]);
                        }
                    } else {
                        ++(vlSymsp->__Vcoverage[737]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[737]);
                }
            } else if ((4U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                if ((2U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                    if ((1U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                        vlSelfRef.__PVT__GPRwena = 1U;
                        vlSelfRef.__PVT__GPRwsel = 0U;
                        vlSelfRef.__PVT__alusel = 2U;
                        vlSelfRef.__PVT__j = 1U;
                        vlSelfRef.__PVT__imm_out = 
                            (((- (IData)((vlSelfRef.__PVT__my_cu__DOT__inst 
                                          >> 0x1fU))) 
                              << 0x0000000cU) | (vlSelfRef.__PVT__my_cu__DOT__inst 
                                                 >> 0x14U));
                        ++(vlSymsp->__Vcoverage[731]);
                    } else {
                        ++(vlSymsp->__Vcoverage[737]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[737]);
                }
            } else if ((2U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                if ((1U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                    vlSelfRef.__PVT__aluinvert = 1U;
                    vlSelfRef.__PVT__alusel = 3U;
                    vlSelfRef.__PVT__btype = 1U;
                    ++(vlSymsp->__Vcoverage[732]);
                } else {
                    ++(vlSymsp->__Vcoverage[737]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[737]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[737]);
        }
    } else if ((0x00000020U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
        if ((0x00000010U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            if ((8U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                ++(vlSymsp->__Vcoverage[737]);
            } else if ((4U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                if ((2U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                    if ((1U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                        vlSelfRef.__PVT__GPRwena = 1U;
                        vlSelfRef.__PVT__GPRwsel = 1U;
                        vlSelfRef.__PVT__CUgprdirect 
                            = (0xfffff000U & vlSelfRef.__PVT__my_cu__DOT__inst);
                        ++(vlSymsp->__Vcoverage[728]);
                    } else {
                        ++(vlSymsp->__Vcoverage[737]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[737]);
                }
            } else if ((2U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                if ((1U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                    vlSelfRef.__PVT__alusel = 3U;
                    vlSelfRef.__PVT__GPRwsel = 2U;
                    vlSelfRef.__PVT__GPRwena = 1U;
                    vlSelfRef.__PVT__alusral = (1U 
                                                & (vlSelfRef.__PVT__my_cu__DOT__inst 
                                                   >> 0x1eU));
                    ++(vlSymsp->__Vcoverage[736]);
                } else {
                    ++(vlSymsp->__Vcoverage[737]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[737]);
            }
        } else if ((8U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            ++(vlSymsp->__Vcoverage[737]);
        } else if ((4U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            ++(vlSymsp->__Vcoverage[737]);
        } else if ((2U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            if ((1U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                vlSelfRef.__PVT__alusel = 2U;
                vlSelfRef.__PVT__memwena = 1U;
                ++(vlSymsp->__Vcoverage[734]);
            } else {
                ++(vlSymsp->__Vcoverage[737]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[737]);
        }
    } else if ((0x00000010U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
        if ((8U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            ++(vlSymsp->__Vcoverage[737]);
        } else if ((4U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            if ((2U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                if ((1U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                    vlSelfRef.__PVT__GPRwena = 1U;
                    vlSelfRef.__PVT__GPRwsel = 2U;
                    vlSelfRef.__PVT__alusel = 0U;
                    vlSelfRef.__PVT__imm_out = (0xfffff000U 
                                                & vlSelfRef.__PVT__my_cu__DOT__inst);
                    ++(vlSymsp->__Vcoverage[729]);
                } else {
                    ++(vlSymsp->__Vcoverage[737]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[737]);
            }
        } else if ((2U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            if ((1U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                vlSelfRef.__PVT__imm_out = (((- (IData)(
                                                        (vlSelfRef.__PVT__my_cu__DOT__inst 
                                                         >> 0x1fU))) 
                                             << 0x0000000cU) 
                                            | (vlSelfRef.__PVT__my_cu__DOT__inst 
                                               >> 0x14U));
                vlSelfRef.__PVT__alusel = 2U;
                vlSelfRef.__PVT__GPRwsel = 2U;
                vlSelfRef.__PVT__GPRwena = 1U;
                ++(vlSymsp->__Vcoverage[735]);
            } else {
                ++(vlSymsp->__Vcoverage[737]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[737]);
        }
    } else if ((8U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
        ++(vlSymsp->__Vcoverage[737]);
    } else if ((4U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
        ++(vlSymsp->__Vcoverage[737]);
    } else if ((2U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
        if ((1U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            vlSelfRef.__PVT__alusel = 2U;
            vlSelfRef.__PVT__GPRwsel = 3U;
            vlSelfRef.__PVT__GPRwena = 1U;
            ++(vlSymsp->__Vcoverage[733]);
        } else {
            ++(vlSymsp->__Vcoverage[737]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[737]);
    }
    ++(vlSymsp->__Vcoverage[738]);
    if ((vlSelfRef.__PVT__GPRread1 ^ vlSelfRef.__Vtogcov__GPRread1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 36, vlSelfRef.__PVT__GPRread1, vlSelfRef.__Vtogcov__GPRread1);
        vlSelfRef.__Vtogcov__GPRread1 = vlSelfRef.__PVT__GPRread1;
    }
    if ((vlSelfRef.__PVT__GPRread2 ^ vlSelfRef.__Vtogcov__GPRread2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 100, vlSelfRef.__PVT__GPRread2, vlSelfRef.__Vtogcov__GPRread2);
        vlSelfRef.__Vtogcov__GPRread2 = vlSelfRef.__PVT__GPRread2;
    }
    if (((IData)(vlSelfRef.__PVT__GPRwena) ^ (IData)(vlSelfRef.__Vtogcov__GPRwena))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4, vlSelfRef.__PVT__GPRwena, vlSelfRef.__Vtogcov__GPRwena);
        vlSelfRef.__Vtogcov__GPRwena = vlSelfRef.__PVT__GPRwena;
    }
    if (((IData)(vlSelfRef.__PVT__memwena) ^ (IData)(vlSelfRef.__Vtogcov__memwena))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 440, vlSelfRef.__PVT__memwena, vlSelfRef.__Vtogcov__memwena);
        vlSelfRef.__Vtogcov__memwena = vlSelfRef.__PVT__memwena;
    }
    if (((IData)(vlSelfRef.__PVT__btype) ^ (IData)(vlSelfRef.__Vtogcov__btype))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 438, vlSelfRef.__PVT__btype, vlSelfRef.__Vtogcov__btype);
        vlSelfRef.__Vtogcov__btype = vlSelfRef.__PVT__btype;
    }
    if (((IData)(vlSelfRef.__PVT__j) ^ (IData)(vlSelfRef.__Vtogcov__j))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 442, vlSelfRef.__PVT__j, vlSelfRef.__Vtogcov__j);
        vlSelfRef.__Vtogcov__j = vlSelfRef.__PVT__j;
    }
    if ((vlSelfRef.__PVT__CUgprdirect ^ vlSelfRef.__Vtogcov__CUgprdirect)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 536, vlSelfRef.__PVT__CUgprdirect, vlSelfRef.__Vtogcov__CUgprdirect);
        vlSelfRef.__Vtogcov__CUgprdirect = vlSelfRef.__PVT__CUgprdirect;
    }
    if (((IData)(vlSelfRef.__PVT__GPRwsel) ^ (IData)(vlSelfRef.__Vtogcov__GPRwsel))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 448, vlSelfRef.__PVT__GPRwsel, vlSelfRef.__Vtogcov__GPRwsel);
        vlSelfRef.__Vtogcov__GPRwsel = vlSelfRef.__PVT__GPRwsel;
    }
    if (((IData)(vlSelfRef.__PVT__alusral) ^ (IData)(vlSelfRef.__Vtogcov__alusral))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 436, vlSelfRef.__PVT__alusral, vlSelfRef.__Vtogcov__alusral);
        vlSelfRef.__Vtogcov__alusral = vlSelfRef.__PVT__alusral;
    }
    if (((IData)(vlSelfRef.__PVT__aluinvert) ^ (IData)(vlSelfRef.__Vtogcov__aluinvert))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 434, vlSelfRef.__PVT__aluinvert, vlSelfRef.__Vtogcov__aluinvert);
        vlSelfRef.__Vtogcov__aluinvert = vlSelfRef.__PVT__aluinvert;
    }
    if ((vlSelfRef.__PVT__imm_out ^ vlSelfRef.__Vtogcov__imm_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 472, vlSelfRef.__PVT__imm_out, vlSelfRef.__Vtogcov__imm_out);
        vlSelfRef.__Vtogcov__imm_out = vlSelfRef.__PVT__imm_out;
    }
    if (((IData)(vlSelfRef.__PVT__alusel) ^ (IData)(vlSelfRef.__Vtogcov__alusel))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 444, vlSelfRef.__PVT__alusel, vlSelfRef.__Vtogcov__alusel);
        vlSelfRef.__Vtogcov__alusel = vlSelfRef.__PVT__alusel;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__alusel))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelfRef.my_alu__DOT____VlemCond_0 = vlSelfRef.__PVT__GPRread1;
    } else {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelfRef.my_alu__DOT____VlemCond_0 = vlSelfRef.__PVT__addrout;
    }
    vlSelfRef.__PVT__my_alu__DOT__rs1 = vlSelfRef.my_alu__DOT____VlemCond_0;
    if ((1U & (IData)(vlSelfRef.__PVT__alusel))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelfRef.my_alu__DOT____VlemCond_1 = vlSelfRef.__PVT__GPRread2;
    } else {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelfRef.my_alu__DOT____VlemCond_1 = vlSelfRef.__PVT__imm_out;
    }
    vlSelfRef.__PVT__my_alu__DOT__in1 = vlSelfRef.my_alu__DOT____VlemCond_1;
    if ((vlSelfRef.__PVT__my_alu__DOT__rs1 ^ vlSelfRef.my_alu__DOT____Vtogcov__rs1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 758, vlSelfRef.__PVT__my_alu__DOT__rs1, vlSelfRef.my_alu__DOT____Vtogcov__rs1);
        vlSelfRef.my_alu__DOT____Vtogcov__rs1 = vlSelfRef.__PVT__my_alu__DOT__rs1;
    }
    if ((vlSelfRef.__PVT__my_alu__DOT__in1 ^ vlSelfRef.my_alu__DOT____Vtogcov__in1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 822, vlSelfRef.__PVT__my_alu__DOT__in1, vlSelfRef.my_alu__DOT____Vtogcov__in1);
        vlSelfRef.my_alu__DOT____Vtogcov__in1 = vlSelfRef.__PVT__my_alu__DOT__in1;
    }
    if (vlSelfRef.__PVT__aluinvert) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelfRef.my_alu__DOT____VlemCond_2 = (~ vlSelfRef.__PVT__my_alu__DOT__in1);
    } else {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelfRef.my_alu__DOT____VlemCond_2 = vlSelfRef.__PVT__my_alu__DOT__in1;
    }
    vlSelfRef.__PVT__my_alu__DOT__in2 = vlSelfRef.my_alu__DOT____VlemCond_2;
    if ((vlSelfRef.__PVT__my_alu__DOT__in2 ^ vlSelfRef.my_alu__DOT____Vtogcov__in2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 886, vlSelfRef.__PVT__my_alu__DOT__in2, vlSelfRef.my_alu__DOT____Vtogcov__in2);
        vlSelfRef.my_alu__DOT____Vtogcov__in2 = vlSelfRef.__PVT__my_alu__DOT__in2;
    }
    my_alu__DOT____VdfgExtracted_hfa3a9851__0 = (vlSelfRef.__PVT__my_alu__DOT__in2 
                                                 + vlSelfRef.__PVT__my_alu__DOT__rs1);
    my_alu__DOT____VdfgExtracted_hfd4c778e__0 = VL_LTS_III(32, vlSelfRef.__PVT__my_alu__DOT__rs1, vlSelfRef.__PVT__my_alu__DOT__in2);
    my_alu__DOT____VdfgExtracted_hfa9d1137__0 = (vlSelfRef.__PVT__my_alu__DOT__rs1 
                                                 < vlSelfRef.__PVT__my_alu__DOT__in2);
    my_alu__DOT____VdfgExtracted_hfb2fd40a__0 = (vlSelfRef.__PVT__my_alu__DOT__in2 
                                                 == vlSelfRef.__PVT__my_alu__DOT__rs1);
    my_alu__DOT____VdfgExtracted_hfbc523a1__0 = (vlSelfRef.__PVT__my_alu__DOT__rs1 
                                                 != vlSelfRef.__PVT__my_alu__DOT__in2);
    my_alu__DOT____VdfgExtracted_hfaa98a6d__1 = VL_GTES_III(32, vlSelfRef.__PVT__my_alu__DOT__rs1, vlSelfRef.__PVT__my_alu__DOT__in2);
    my_alu__DOT____VdfgExtracted_hfa99407d__1 = (vlSelfRef.__PVT__my_alu__DOT__rs1 
                                                 >= vlSelfRef.__PVT__my_alu__DOT__in2);
    vlSelfRef.__PVT__my_alu__DOT__sra_full = ((((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSelfRef.__PVT__my_alu__DOT__rs1 
                                                                            >> 0x0000001fU))))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.__PVT__my_alu__DOT__rs1))) 
                                              >> (0x0000001fU 
                                                  & vlSelfRef.__PVT__my_alu__DOT__in2));
    if ((vlSelfRef.__PVT__my_alu__DOT__sra_full ^ vlSelfRef.my_alu__DOT____Vtogcov__sra_full)) {
        VL_COV_TOGGLE_CHG_ST_Q(64, vlSymsp->__Vcoverage + 956, vlSelfRef.__PVT__my_alu__DOT__sra_full, vlSelfRef.my_alu__DOT____Vtogcov__sra_full);
        vlSelfRef.my_alu__DOT____Vtogcov__sra_full 
            = vlSelfRef.__PVT__my_alu__DOT__sra_full;
    }
    vlSelfRef.__PVT__alubout = 0U;
    if (((0x13U == (0x0000007fU & vlSelfRef.__PVT__my_cu__DOT__inst)) 
         | (0x33U == (0x0000007fU & vlSelfRef.__PVT__my_cu__DOT__inst)))) {
        if ((0x00004000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            if ((0x00002000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                if ((0x00001000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                    vlSelfRef.__PVT__alurslt = (vlSelfRef.__PVT__my_alu__DOT__in2 
                                                & vlSelfRef.__PVT__my_alu__DOT__rs1);
                    ++(vlSymsp->__Vcoverage[1099]);
                } else {
                    vlSelfRef.__PVT__alurslt = (vlSelfRef.__PVT__my_alu__DOT__in2 
                                                | vlSelfRef.__PVT__my_alu__DOT__rs1);
                    ++(vlSymsp->__Vcoverage[1098]);
                }
            } else if ((0x00001000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                if (vlSelfRef.__PVT__alusral) {
                    ++(vlSymsp->__Vcoverage[1095]);
                    vlSelfRef.my_alu__DOT____VlemCond_4 
                        = (IData)(vlSelfRef.__PVT__my_alu__DOT__sra_full);
                } else {
                    ++(vlSymsp->__Vcoverage[1096]);
                    vlSelfRef.my_alu__DOT____VlemCond_4 
                        = (vlSelfRef.__PVT__my_alu__DOT__rs1 
                           >> (0x0000001fU & vlSelfRef.__PVT__my_alu__DOT__in2));
                }
                vlSelfRef.__PVT__alurslt = vlSelfRef.my_alu__DOT____VlemCond_4;
                ++(vlSymsp->__Vcoverage[1097]);
            } else {
                vlSelfRef.__PVT__alurslt = (vlSelfRef.__PVT__my_alu__DOT__in2 
                                            ^ vlSelfRef.__PVT__my_alu__DOT__rs1);
                ++(vlSymsp->__Vcoverage[1092]);
            }
        } else if ((0x00002000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            if ((0x00001000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                vlSelfRef.__PVT__alurslt = my_alu__DOT____VdfgExtracted_hfa9d1137__0;
                ++(vlSymsp->__Vcoverage[1091]);
            } else {
                vlSelfRef.__PVT__alurslt = my_alu__DOT____VdfgExtracted_hfd4c778e__0;
                ++(vlSymsp->__Vcoverage[1090]);
            }
        } else if ((0x00001000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            vlSelfRef.__PVT__alurslt = (vlSelfRef.__PVT__my_alu__DOT__rs1 
                                        << (0x0000001fU 
                                            & vlSelfRef.__PVT__my_alu__DOT__in2));
            ++(vlSymsp->__Vcoverage[1089]);
        } else {
            if (vlSelfRef.__PVT__alusral) {
                ++(vlSymsp->__Vcoverage[1086]);
                vlSelfRef.my_alu__DOT____VlemCond_3 
                    = (vlSelfRef.__PVT__my_alu__DOT__rs1 
                       - vlSelfRef.__PVT__my_alu__DOT__in2);
            } else {
                ++(vlSymsp->__Vcoverage[1087]);
                vlSelfRef.my_alu__DOT____VlemCond_3 
                    = my_alu__DOT____VdfgExtracted_hfa3a9851__0;
            }
            vlSelfRef.__PVT__alurslt = vlSelfRef.my_alu__DOT____VlemCond_3;
            ++(vlSymsp->__Vcoverage[1088]);
        }
        if (vlSelfRef.__PVT__alusral) {
            ++(vlSymsp->__Vcoverage[1084]);
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__alusral)))) {
            ++(vlSymsp->__Vcoverage[1085]);
        }
        if (vlSelfRef.__PVT__alusral) {
            ++(vlSymsp->__Vcoverage[1093]);
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__alusral)))) {
            ++(vlSymsp->__Vcoverage[1094]);
        }
        ++(vlSymsp->__Vcoverage[1134]);
    } else if ((0x67U == (0x0000007fU & vlSelfRef.__PVT__my_cu__DOT__inst))) {
        vlSelfRef.__PVT__alurslt = (0xfffffffeU & my_alu__DOT____VdfgExtracted_hfa3a9851__0);
        ++(vlSymsp->__Vcoverage[1133]);
    } else if ((0x23U == (0x0000007fU & vlSelfRef.__PVT__my_cu__DOT__inst))) {
        if ((0x00004000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            if ((0x00002000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                if ((0x00001000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                    if (my_alu__DOT____VdfgExtracted_hfa99407d__1) {
                        ++(vlSymsp->__Vcoverage[1127]);
                        vlSelfRef.my_alu__DOT____VlemCond_10 = 1U;
                    } else {
                        ++(vlSymsp->__Vcoverage[1128]);
                        vlSelfRef.my_alu__DOT____VlemCond_10 = 0U;
                    }
                    vlSelfRef.__PVT__alubout = vlSelfRef.my_alu__DOT____VlemCond_10;
                    ++(vlSymsp->__Vcoverage[1129]);
                } else {
                    if (my_alu__DOT____VdfgExtracted_hfa9d1137__0) {
                        ++(vlSymsp->__Vcoverage[1122]);
                        vlSelfRef.my_alu__DOT____VlemCond_9 = 1U;
                    } else {
                        ++(vlSymsp->__Vcoverage[1123]);
                        vlSelfRef.my_alu__DOT____VlemCond_9 = 0U;
                    }
                    vlSelfRef.__PVT__alubout = vlSelfRef.my_alu__DOT____VlemCond_9;
                    ++(vlSymsp->__Vcoverage[1124]);
                }
            } else if ((0x00001000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
                if (my_alu__DOT____VdfgExtracted_hfaa98a6d__1) {
                    ++(vlSymsp->__Vcoverage[1117]);
                    vlSelfRef.my_alu__DOT____VlemCond_8 = 1U;
                } else {
                    ++(vlSymsp->__Vcoverage[1118]);
                    vlSelfRef.my_alu__DOT____VlemCond_8 = 0U;
                }
                vlSelfRef.__PVT__alubout = vlSelfRef.my_alu__DOT____VlemCond_8;
                ++(vlSymsp->__Vcoverage[1119]);
            } else {
                if (my_alu__DOT____VdfgExtracted_hfd4c778e__0) {
                    ++(vlSymsp->__Vcoverage[1112]);
                    vlSelfRef.my_alu__DOT____VlemCond_7 = 1U;
                } else {
                    ++(vlSymsp->__Vcoverage[1113]);
                    vlSelfRef.my_alu__DOT____VlemCond_7 = 0U;
                }
                vlSelfRef.__PVT__alubout = vlSelfRef.my_alu__DOT____VlemCond_7;
                ++(vlSymsp->__Vcoverage[1114]);
            }
        } else if ((0x00002000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            vlSelfRef.__PVT__alubout = 0U;
            ++(vlSymsp->__Vcoverage[1130]);
        } else if ((0x00001000U & vlSelfRef.__PVT__my_cu__DOT__inst)) {
            if (my_alu__DOT____VdfgExtracted_hfb2fd40a__0) {
                ++(vlSymsp->__Vcoverage[1107]);
                vlSelfRef.my_alu__DOT____VlemCond_6 = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1108]);
                vlSelfRef.my_alu__DOT____VlemCond_6 = 1U;
            }
            vlSelfRef.__PVT__alubout = vlSelfRef.my_alu__DOT____VlemCond_6;
            ++(vlSymsp->__Vcoverage[1109]);
        } else {
            if (my_alu__DOT____VdfgExtracted_hfb2fd40a__0) {
                ++(vlSymsp->__Vcoverage[1102]);
                vlSelfRef.my_alu__DOT____VlemCond_5 = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1103]);
                vlSelfRef.my_alu__DOT____VlemCond_5 = 0U;
            }
            vlSelfRef.__PVT__alubout = vlSelfRef.my_alu__DOT____VlemCond_5;
            ++(vlSymsp->__Vcoverage[1104]);
        }
        vlSelfRef.__PVT__alurslt = (vlSelfRef.__PVT__addrout 
                                    + vlSelfRef.__PVT__imm_out);
        if (my_alu__DOT____VdfgExtracted_hfb2fd40a__0) {
            ++(vlSymsp->__Vcoverage[1100]);
        }
        if (my_alu__DOT____VdfgExtracted_hfbc523a1__0) {
            ++(vlSymsp->__Vcoverage[1101]);
        }
        if (my_alu__DOT____VdfgExtracted_hfb2fd40a__0) {
            ++(vlSymsp->__Vcoverage[1105]);
        }
        if (my_alu__DOT____VdfgExtracted_hfbc523a1__0) {
            ++(vlSymsp->__Vcoverage[1106]);
        }
        if (my_alu__DOT____VdfgExtracted_hfd4c778e__0) {
            ++(vlSymsp->__Vcoverage[1110]);
        }
        if (my_alu__DOT____VdfgExtracted_hfaa98a6d__1) {
            ++(vlSymsp->__Vcoverage[1111]);
        }
        if (my_alu__DOT____VdfgExtracted_hfaa98a6d__1) {
            ++(vlSymsp->__Vcoverage[1115]);
        }
        if (my_alu__DOT____VdfgExtracted_hfd4c778e__0) {
            ++(vlSymsp->__Vcoverage[1116]);
        }
        if (my_alu__DOT____VdfgExtracted_hfa9d1137__0) {
            ++(vlSymsp->__Vcoverage[1120]);
        }
        if (my_alu__DOT____VdfgExtracted_hfa99407d__1) {
            ++(vlSymsp->__Vcoverage[1121]);
        }
        if (my_alu__DOT____VdfgExtracted_hfa99407d__1) {
            ++(vlSymsp->__Vcoverage[1125]);
        }
        if (my_alu__DOT____VdfgExtracted_hfa9d1137__0) {
            ++(vlSymsp->__Vcoverage[1126]);
        }
        ++(vlSymsp->__Vcoverage[1131]);
    } else {
        vlSelfRef.__PVT__alurslt = my_alu__DOT____VdfgExtracted_hfa3a9851__0;
        ++(vlSymsp->__Vcoverage[1132]);
    }
    if ((0x33U == (0x0000007fU & vlSelfRef.__PVT__my_cu__DOT__inst))) {
        ++(vlSymsp->__Vcoverage[1135]);
    }
    if ((0x13U == (0x0000007fU & vlSelfRef.__PVT__my_cu__DOT__inst))) {
        ++(vlSymsp->__Vcoverage[1136]);
    }
    if (((0x13U != (0x0000007fU & vlSelfRef.__PVT__my_cu__DOT__inst)) 
         & (0x33U != (0x0000007fU & vlSelfRef.__PVT__my_cu__DOT__inst)))) {
        ++(vlSymsp->__Vcoverage[1137]);
    }
    ++(vlSymsp->__Vcoverage[1138]);
    if ((vlSelfRef.__PVT__alubout ^ vlSelfRef.__Vtogcov__alubout)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 600, vlSelfRef.__PVT__alubout, vlSelfRef.__Vtogcov__alubout);
        vlSelfRef.__Vtogcov__alubout = vlSelfRef.__PVT__alubout;
    }
    if ((((IData)(vlSelfRef.__PVT__btype) & vlSelfRef.__PVT__alubout) 
         | (IData)(vlSelfRef.__PVT__j))) {
        vlSelfRef.__PVT__PCsel = 1U;
        ++(vlSymsp->__Vcoverage[363]);
    } else {
        vlSelfRef.__PVT__PCsel = 0U;
        ++(vlSymsp->__Vcoverage[364]);
    }
    if (vlSelfRef.__PVT__j) {
        ++(vlSymsp->__Vcoverage[365]);
    }
    if (((IData)(vlSelfRef.__PVT__btype) & vlSelfRef.__PVT__alubout)) {
        ++(vlSymsp->__Vcoverage[366]);
    }
    if ((1U & ((~ vlSelfRef.__PVT__alubout) & (~ (IData)(vlSelfRef.__PVT__j))))) {
        ++(vlSymsp->__Vcoverage[367]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__btype)) 
               & (~ (IData)(vlSelfRef.__PVT__j))))) {
        ++(vlSymsp->__Vcoverage[368]);
    }
    ++(vlSymsp->__Vcoverage[369]);
    if ((vlSelfRef.__PVT__alurslt ^ vlSelfRef.__Vtogcov__PCjalrin)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 235, vlSelfRef.__PVT__alurslt, vlSelfRef.__Vtogcov__PCjalrin);
        vlSelfRef.__Vtogcov__PCjalrin = vlSelfRef.__PVT__alurslt;
    }
    if (((IData)(vlSelfRef.__PVT__PCsel) ^ (IData)(vlSelfRef.__Vtogcov__PCsel))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 233, vlSelfRef.__PVT__PCsel, vlSelfRef.__Vtogcov__PCsel);
        vlSelfRef.__Vtogcov__PCsel = vlSelfRef.__PVT__PCsel;
    }
}
