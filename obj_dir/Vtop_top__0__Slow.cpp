// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_top___eval_initial__TOP__top(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__my_GPR__DOT__GPR[0U] = 0U;
    VL_READMEM_N(true, 32, 4096, 0, "program.hex"s,  &(vlSelfRef.__PVT__my_ireg__DOT__rom)
                 , 0, ~0ULL);
    ++(vlSymsp->__Vcoverage[1167]);
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
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
    // Body
    if (((IData)(vlSymsp->TOP.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSymsp->TOP.clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.clk;
    }
    if (((IData)(vlSymsp->TOP.rst_n) ^ (IData)(vlSelfRef.__Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2, vlSymsp->TOP.rst_n, vlSelfRef.__Vtogcov__rst_n);
        vlSelfRef.__Vtogcov__rst_n = vlSymsp->TOP.rst_n;
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

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__GPRwena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6687718815602743649ull);
    vlSelf->__PVT__GPRread1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11204727708448614389ull);
    vlSelf->__PVT__GPRread2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6653007047148055291ull);
    vlSelf->__PVT__GPRdata_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2917876348275121864ull);
    vlSelf->__PVT__PCsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14703987748579682657ull);
    vlSelf->__PVT__addrout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16695428585264741263ull);
    vlSelf->__PVT__aluinvert = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7639497230007308613ull);
    vlSelf->__PVT__alusral = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3518742834653162716ull);
    vlSelf->__PVT__btype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11568488922192053583ull);
    vlSelf->__PVT__memwena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17141901634104010693ull);
    vlSelf->__PVT__j = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15917291556903334389ull);
    vlSelf->__PVT__alusel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7422613635141657327ull);
    vlSelf->__PVT__GPRwsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12516119166500262618ull);
    vlSelf->__PVT__imm_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1148775013925536020ull);
    vlSelf->__PVT__CUgprdirect = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 660701726732327212ull);
    vlSelf->__PVT__alurslt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18080648330754199913ull);
    vlSelf->__PVT__alubout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10122910843919101136ull);
    vlSelf->__Vtogcov__clk = 0;
    vlSelf->__Vtogcov__rst_n = 0;
    vlSelf->__Vtogcov__GPRwena = 0;
    vlSelf->__Vtogcov__GPRrsel1 = 0;
    vlSelf->__Vtogcov__GPRrsel2 = 0;
    vlSelf->__Vtogcov__GPRwregsel = 0;
    vlSelf->__Vtogcov__GPRread1 = 0;
    vlSelf->__Vtogcov__GPRread2 = 0;
    vlSelf->__Vtogcov__GPRdata_in = 0;
    vlSelf->__Vtogcov__PCsel = 0;
    vlSelf->__Vtogcov__PCjalrin = 0;
    vlSelf->__Vtogcov__addrout = 0;
    vlSelf->__Vtogcov__CUinst = 0;
    vlSelf->__Vtogcov__aluinvert = 0;
    vlSelf->__Vtogcov__alusral = 0;
    vlSelf->__Vtogcov__btype = 0;
    vlSelf->__Vtogcov__memwena = 0;
    vlSelf->__Vtogcov__j = 0;
    vlSelf->__Vtogcov__alusel = 0;
    vlSelf->__Vtogcov__GPRwsel = 0;
    vlSelf->__Vtogcov__alufsel = 0;
    vlSelf->__Vtogcov__opcode = 0;
    vlSelf->__Vtogcov__imm_out = 0;
    vlSelf->__Vtogcov__CUgprdirect = 0;
    vlSelf->__Vtogcov__alubout = 0;
    vlSelf->__Vtogcov__memdata_out = 0;
    vlSelf->__PVT__my_cu__DOT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1110064568858681367ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_GPR__DOT__GPR[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16236745358135835035ull);
    }
    vlSelf->__PVT__my_alu__DOT__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7061209266303532924ull);
    vlSelf->__PVT__my_alu__DOT__in1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8391608484065410603ull);
    vlSelf->__PVT__my_alu__DOT__in2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6620154024944065058ull);
    vlSelf->__PVT__my_alu__DOT__sra_full = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12774542790677549453ull);
    vlSelf->my_alu__DOT____Vtogcov__rs1 = 0;
    vlSelf->my_alu__DOT____Vtogcov__in1 = 0;
    vlSelf->my_alu__DOT____Vtogcov__in2 = 0;
    vlSelf->my_alu__DOT____Vtogcov__sra_full = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->__PVT__my_ireg__DOT__rom[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11034392220084949288ull);
    }
    vlSelf->my_ireg__DOT____Vtogcov__addr = 0;
    vlSelf->my_ireg__DOT____Vtogcov__word_addr = 0;
}

VL_ATTR_COLD void Vtop_top___configure_coverage(Vtop_top* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___configure_coverage\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "vsrc/top.v", 2, 16, "", "v_toggle/top", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2]), first, "vsrc/top.v", 3, 16, "", "v_toggle/top", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[4]), first, "vsrc/top.v", 5, 10, "", "v_toggle/top", "GPRwena");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[6]), first, "vsrc/top.v", 6, 16, "", "v_toggle/top", "GPRrsel1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[16]), first, "vsrc/top.v", 6, 26, "", "v_toggle/top", "GPRrsel2");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[26]), first, "vsrc/top.v", 6, 36, "", "v_toggle/top", "GPRwregsel");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[36]), first, "vsrc/top.v", 7, 17, "", "v_toggle/top", "GPRread1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[100]), first, "vsrc/top.v", 7, 27, "", "v_toggle/top", "GPRread2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[164]), first, "vsrc/top.v", 8, 16, "", "v_toggle/top", "GPRdata_in");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "vsrc/top.v", 13, 19, "", "v_line/top", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "vsrc/top.v", 14, 19, "", "v_line/top", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "vsrc/top.v", 15, 19, "", "v_line/top", "case", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "vsrc/top.v", 16, 19, "", "v_line/top", "case", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "vsrc/top.v", 10, 5, "", "v_line/top", "block", "10-12,18");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[233]), first, "vsrc/top.v", 21, 9, "", "v_toggle/top", "PCsel");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[235]), first, "vsrc/top.v", 22, 16, "", "v_toggle/top", "PCjalrin");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[299]), first, "vsrc/top.v", 22, 26, "", "v_toggle/top", "addrout");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "vsrc/top.v", 26, 9, "", "v_branch/top", "if", "26-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "vsrc/top.v", 26, 10, "", "v_branch/top", "else", "29-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "vsrc/top.v", 26, 32, "", "v_expr/top", "(j==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "vsrc/top.v", 26, 32, "", "v_expr/top", "(btype==1 && alubout[0]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "vsrc/top.v", 26, 32, "", "v_expr/top", "(alubout[0]==0 && j==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "vsrc/top.v", 26, 32, "", "v_expr/top", "(btype==0 && j==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "vsrc/top.v", 25, 5, "", "v_line/top", "block", "25");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[370]), first, "vsrc/top.v", 34, 17, "", "v_toggle/top", "CUinst");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[434]), first, "vsrc/top.v", 35, 10, "", "v_toggle/top", "aluinvert");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[436]), first, "vsrc/top.v", 35, 21, "", "v_toggle/top", "alusral");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[438]), first, "vsrc/top.v", 35, 30, "", "v_toggle/top", "btype");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[440]), first, "vsrc/top.v", 35, 37, "", "v_toggle/top", "memwena");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[442]), first, "vsrc/top.v", 35, 46, "", "v_toggle/top", "j");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[444]), first, "vsrc/top.v", 36, 16, "", "v_toggle/top", "alusel");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[448]), first, "vsrc/top.v", 36, 24, "", "v_toggle/top", "GPRwsel");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[452]), first, "vsrc/top.v", 37, 16, "", "v_toggle/top", "alufsel");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[452]), first, "vsrc/top.v", 37, 25, "", "v_toggle/top", "memsel");
    vlSelf->__vlCoverToggleInsert(0, 6, 1, &(vlSymsp->__Vcoverage[458]), first, "vsrc/top.v", 38, 16, "", "v_toggle/top", "opcode");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[472]), first, "vsrc/top.v", 39, 17, "", "v_toggle/top", "imm_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[536]), first, "vsrc/top.v", 39, 26, "", "v_toggle/top", "CUgprdirect");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[235]), first, "vsrc/top.v", 41, 17, "", "v_toggle/top", "alurslt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[600]), first, "vsrc/top.v", 41, 26, "", "v_toggle/top", "alubout");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[100]), first, "vsrc/top.v", 43, 17, "", "v_toggle/top", "memdata_in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[664]), first, "vsrc/top.v", 43, 29, "", "v_toggle/top", "memdata_out");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[370]), first, "vsrc/top.v", 46, 17, "", "v_toggle/top", "instout");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[370]), first, "vsrc/CU.v", 2, 18, ".my_cu", "v_toggle/CU", "inst");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[4]), first, "vsrc/CU.v", 3, 16, ".my_cu", "v_toggle/CU", "GPRwena");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[434]), first, "vsrc/CU.v", 3, 25, ".my_cu", "v_toggle/CU", "aluinv");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[436]), first, "vsrc/CU.v", 3, 33, ".my_cu", "v_toggle/CU", "alusral");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[438]), first, "vsrc/CU.v", 3, 42, ".my_cu", "v_toggle/CU", "btype");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[442]), first, "vsrc/CU.v", 3, 49, ".my_cu", "v_toggle/CU", "j");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[440]), first, "vsrc/CU.v", 3, 52, ".my_cu", "v_toggle/CU", "memwena");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[444]), first, "vsrc/CU.v", 4, 18, ".my_cu", "v_toggle/CU", "alusel");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[448]), first, "vsrc/CU.v", 4, 26, ".my_cu", "v_toggle/CU", "GPRwsel");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[452]), first, "vsrc/CU.v", 5, 18, ".my_cu", "v_toggle/CU", "alufsel");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[452]), first, "vsrc/CU.v", 5, 27, ".my_cu", "v_toggle/CU", "memsel");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[6]), first, "vsrc/CU.v", 6, 18, ".my_cu", "v_toggle/CU", "GPRrsel1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[16]), first, "vsrc/CU.v", 6, 28, ".my_cu", "v_toggle/CU", "GPRsel2");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[26]), first, "vsrc/CU.v", 6, 37, ".my_cu", "v_toggle/CU", "GPRwregsel");
    vlSelf->__vlCoverToggleInsert(0, 6, 1, &(vlSymsp->__Vcoverage[458]), first, "vsrc/CU.v", 7, 18, ".my_cu", "v_toggle/CU", "opcode");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[536]), first, "vsrc/CU.v", 8, 19, ".my_cu", "v_toggle/CU", "GPRdata_in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[472]), first, "vsrc/CU.v", 8, 31, ".my_cu", "v_toggle/CU", "imm_out");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[728]), first, "vsrc/CU.v", 30, 23, ".my_cu", "v_line/CU", "case", "30-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[729]), first, "vsrc/CU.v", 35, 23, ".my_cu", "v_line/CU", "case", "35-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[730]), first, "vsrc/CU.v", 41, 23, ".my_cu", "v_line/CU", "case", "41-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[731]), first, "vsrc/CU.v", 48, 23, ".my_cu", "v_line/CU", "case", "48-53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[732]), first, "vsrc/CU.v", 55, 23, ".my_cu", "v_line/CU", "case", "55-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[733]), first, "vsrc/CU.v", 60, 23, ".my_cu", "v_line/CU", "case", "60-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[734]), first, "vsrc/CU.v", 65, 23, ".my_cu", "v_line/CU", "case", "65-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[735]), first, "vsrc/CU.v", 69, 23, ".my_cu", "v_line/CU", "case", "69-73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[736]), first, "vsrc/CU.v", 75, 23, ".my_cu", "v_line/CU", "case", "75-79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[737]), first, "vsrc/CU.v", 81, 13, ".my_cu", "v_line/CU", "case", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[738]), first, "vsrc/CU.v", 10, 5, ".my_cu", "v_line/CU", "block", "10-16,18-27,29");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[4]), first, "vsrc/GPR.v", 2, 11, ".my_GPR", "v_toggle/GPR", "Wena");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "vsrc/GPR.v", 2, 17, ".my_GPR", "v_toggle/GPR", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2]), first, "vsrc/GPR.v", 2, 22, ".my_GPR", "v_toggle/GPR", "rst");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[26]), first, "vsrc/GPR.v", 3, 17, ".my_GPR", "v_toggle/GPR", "Wsel");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[164]), first, "vsrc/GPR.v", 4, 18, ".my_GPR", "v_toggle/GPR", "data_in");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[6]), first, "vsrc/GPR.v", 5, 17, ".my_GPR", "v_toggle/GPR", "Rsel1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[16]), first, "vsrc/GPR.v", 5, 24, ".my_GPR", "v_toggle/GPR", "Rsel2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[36]), first, "vsrc/GPR.v", 6, 23, ".my_GPR", "v_toggle/GPR", "data_out1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[100]), first, "vsrc/GPR.v", 7, 23, ".my_GPR", "v_toggle/GPR", "data_out2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[739]), first, "vsrc/GPR.v", 14, 13, ".my_GPR", "v_line/GPR", "block", "14-15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[740]), first, "vsrc/GPR.v", 17, 14, ".my_GPR", "v_branch/GPR", "if", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[741]), first, "vsrc/GPR.v", 17, 15, ".my_GPR", "v_branch/GPR", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[742]), first, "vsrc/GPR.v", 17, 22, ".my_GPR", "v_expr/GPR", "(Wena==1 && (Wsel != 5'h0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[743]), first, "vsrc/GPR.v", 17, 22, ".my_GPR", "v_expr/GPR", "((Wsel != 5'h0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[744]), first, "vsrc/GPR.v", 17, 22, ".my_GPR", "v_expr/GPR", "(Wena==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[745]), first, "vsrc/GPR.v", 13, 9, ".my_GPR", "v_line/GPR", "elsif", "13-14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[746]), first, "vsrc/GPR.v", 12, 5, ".my_GPR", "v_line/GPR", "block", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "vsrc/GPR.v", 22, 42, ".my_GPR", "v_branch/GPR", "cond_then", "22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "vsrc/GPR.v", 22, 43, ".my_GPR", "v_branch/GPR", "cond_else", "22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "vsrc/GPR.v", 23, 42, ".my_GPR", "v_branch/GPR", "cond_then", "23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "vsrc/GPR.v", 23, 43, ".my_GPR", "v_branch/GPR", "cond_else", "23");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "vsrc/PC.v", 2, 11, ".my_PC", "v_toggle/PC", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2]), first, "vsrc/PC.v", 2, 16, ".my_PC", "v_toggle/PC", "rst");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[233]), first, "vsrc/PC.v", 3, 11, ".my_PC", "v_toggle/PC", "sel");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[235]), first, "vsrc/PC.v", 4, 18, ".my_PC", "v_toggle/PC", "jalrin");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[299]), first, "vsrc/PC.v", 5, 23, ".my_PC", "v_toggle/PC", "addrout");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "vsrc/PC.v", 14, 14, ".my_PC", "v_line/PC", "if", "14-15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "vsrc/PC.v", 14, 15, ".my_PC", "v_line/PC", "else", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "vsrc/PC.v", 14, 17, ".my_PC", "v_expr/PC", "(sel==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "vsrc/PC.v", 14, 17, ".my_PC", "v_expr/PC", "(sel==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "vsrc/PC.v", 11, 14, ".my_PC", "v_line/PC", "elsif", "11-12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "vsrc/PC.v", 8, 9, ".my_PC", "v_line/PC", "elsif", "8-9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "vsrc/PC.v", 7, 5, ".my_PC", "v_line/PC", "block", "7");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[434]), first, "vsrc/alu.v", 2, 16, ".my_alu", "v_toggle/alu", "invert");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[436]), first, "vsrc/alu.v", 2, 24, ".my_alu", "v_toggle/alu", "sral");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[452]), first, "vsrc/alu.v", 3, 22, ".my_alu", "v_toggle/alu", "sel");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[444]), first, "vsrc/alu.v", 4, 22, ".my_alu", "v_toggle/alu", "insel");
    vlSelf->__vlCoverToggleInsert(0, 6, 1, &(vlSymsp->__Vcoverage[458]), first, "vsrc/alu.v", 5, 22, ".my_alu", "v_toggle/alu", "opcode");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[472]), first, "vsrc/alu.v", 6, 23, ".my_alu", "v_toggle/alu", "imm_in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[36]), first, "vsrc/alu.v", 7, 23, ".my_alu", "v_toggle/alu", "rs1in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[100]), first, "vsrc/alu.v", 7, 30, ".my_alu", "v_toggle/alu", "rs2in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[299]), first, "vsrc/alu.v", 7, 37, ".my_alu", "v_toggle/alu", "pcin");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[235]), first, "vsrc/alu.v", 8, 23, ".my_alu", "v_toggle/alu", "rslt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[600]), first, "vsrc/alu.v", 8, 29, ".my_alu", "v_toggle/alu", "bout");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[758]), first, "vsrc/alu.v", 11, 17, ".my_alu", "v_toggle/alu", "rs1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[822]), first, "vsrc/alu.v", 12, 17, ".my_alu", "v_toggle/alu", "in1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[886]), first, "vsrc/alu.v", 12, 22, ".my_alu", "v_toggle/alu", "in2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[950]), first, "vsrc/alu.v", 14, 30, ".my_alu", "v_branch/alu", "cond_then", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[951]), first, "vsrc/alu.v", 14, 31, ".my_alu", "v_branch/alu", "cond_else", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[952]), first, "vsrc/alu.v", 15, 30, ".my_alu", "v_branch/alu", "cond_then", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[953]), first, "vsrc/alu.v", 15, 31, ".my_alu", "v_branch/alu", "cond_else", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[954]), first, "vsrc/alu.v", 16, 28, ".my_alu", "v_branch/alu", "cond_then", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[955]), first, "vsrc/alu.v", 16, 29, ".my_alu", "v_branch/alu", "cond_else", "16");
    vlSelf->__vlCoverToggleInsert(0, 63, 1, &(vlSymsp->__Vcoverage[956]), first, "vsrc/alu.v", 18, 17, ".my_alu", "v_toggle/alu", "sra_full");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1084]), first, "vsrc/alu.v", 27, 30, ".my_alu", "v_expr/alu", "(sral==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1085]), first, "vsrc/alu.v", 27, 30, ".my_alu", "v_expr/alu", "(sral==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1086]), first, "vsrc/alu.v", 27, 42, ".my_alu", "v_branch/alu", "cond_then", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1087]), first, "vsrc/alu.v", 27, 43, ".my_alu", "v_branch/alu", "cond_else", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1088]), first, "vsrc/alu.v", 27, 20, ".my_alu", "v_line/alu", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1089]), first, "vsrc/alu.v", 28, 20, ".my_alu", "v_line/alu", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1090]), first, "vsrc/alu.v", 29, 20, ".my_alu", "v_line/alu", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1091]), first, "vsrc/alu.v", 30, 20, ".my_alu", "v_line/alu", "case", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "vsrc/alu.v", 31, 20, ".my_alu", "v_line/alu", "case", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1093]), first, "vsrc/alu.v", 32, 30, ".my_alu", "v_expr/alu", "(sral==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1094]), first, "vsrc/alu.v", 32, 30, ".my_alu", "v_expr/alu", "(sral==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1095]), first, "vsrc/alu.v", 32, 46, ".my_alu", "v_branch/alu", "cond_then", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1096]), first, "vsrc/alu.v", 32, 47, ".my_alu", "v_branch/alu", "cond_else", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1097]), first, "vsrc/alu.v", 32, 20, ".my_alu", "v_line/alu", "case", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1098]), first, "vsrc/alu.v", 33, 20, ".my_alu", "v_line/alu", "case", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1099]), first, "vsrc/alu.v", 34, 20, ".my_alu", "v_line/alu", "case", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1100]), first, "vsrc/alu.v", 44, 38, ".my_alu", "v_expr/alu", "((rs1 == in2)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1101]), first, "vsrc/alu.v", 44, 38, ".my_alu", "v_expr/alu", "((rs1 == in2)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1102]), first, "vsrc/alu.v", 44, 47, ".my_alu", "v_branch/alu", "cond_then", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1103]), first, "vsrc/alu.v", 44, 48, ".my_alu", "v_branch/alu", "cond_else", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1104]), first, "vsrc/alu.v", 44, 24, ".my_alu", "v_line/alu", "case", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1105]), first, "vsrc/alu.v", 45, 38, ".my_alu", "v_expr/alu", "((rs1 == in2)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1106]), first, "vsrc/alu.v", 45, 38, ".my_alu", "v_expr/alu", "((rs1 == in2)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1107]), first, "vsrc/alu.v", 45, 47, ".my_alu", "v_branch/alu", "cond_then", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1108]), first, "vsrc/alu.v", 45, 48, ".my_alu", "v_branch/alu", "cond_else", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1109]), first, "vsrc/alu.v", 45, 24, ".my_alu", "v_line/alu", "case", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1110]), first, "vsrc/alu.v", 46, 47, ".my_alu", "v_expr/alu", "((rs1 < in2)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1111]), first, "vsrc/alu.v", 46, 47, ".my_alu", "v_expr/alu", "((rs1 < in2)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1112]), first, "vsrc/alu.v", 46, 64, ".my_alu", "v_branch/alu", "cond_then", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1113]), first, "vsrc/alu.v", 46, 65, ".my_alu", "v_branch/alu", "cond_else", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1114]), first, "vsrc/alu.v", 46, 24, ".my_alu", "v_line/alu", "case", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1115]), first, "vsrc/alu.v", 47, 47, ".my_alu", "v_expr/alu", "((rs1 >= in2)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1116]), first, "vsrc/alu.v", 47, 47, ".my_alu", "v_expr/alu", "((rs1 >= in2)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1117]), first, "vsrc/alu.v", 47, 65, ".my_alu", "v_branch/alu", "cond_then", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1118]), first, "vsrc/alu.v", 47, 66, ".my_alu", "v_branch/alu", "cond_else", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1119]), first, "vsrc/alu.v", 47, 24, ".my_alu", "v_line/alu", "case", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1120]), first, "vsrc/alu.v", 48, 38, ".my_alu", "v_expr/alu", "((rs1 < in2)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1121]), first, "vsrc/alu.v", 48, 38, ".my_alu", "v_expr/alu", "((rs1 < in2)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1122]), first, "vsrc/alu.v", 48, 46, ".my_alu", "v_branch/alu", "cond_then", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1123]), first, "vsrc/alu.v", 48, 47, ".my_alu", "v_branch/alu", "cond_else", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1124]), first, "vsrc/alu.v", 48, 24, ".my_alu", "v_line/alu", "case", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1125]), first, "vsrc/alu.v", 49, 38, ".my_alu", "v_expr/alu", "((rs1 >= in2)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1126]), first, "vsrc/alu.v", 49, 38, ".my_alu", "v_expr/alu", "((rs1 >= in2)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1127]), first, "vsrc/alu.v", 49, 47, ".my_alu", "v_branch/alu", "cond_then", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1128]), first, "vsrc/alu.v", 49, 48, ".my_alu", "v_branch/alu", "cond_else", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1129]), first, "vsrc/alu.v", 49, 24, ".my_alu", "v_line/alu", "case", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1130]), first, "vsrc/alu.v", 50, 17, ".my_alu", "v_line/alu", "case", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1131]), first, "vsrc/alu.v", 42, 14, ".my_alu", "v_line/alu", "if", "42-43,52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1132]), first, "vsrc/alu.v", 42, 15, ".my_alu", "v_line/alu", "else", "55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1133]), first, "vsrc/alu.v", 38, 14, ".my_alu", "v_line/alu", "elsif", "38-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1134]), first, "vsrc/alu.v", 25, 9, ".my_alu", "v_line/alu", "elsif", "25-26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1135]), first, "vsrc/alu.v", 25, 34, ".my_alu", "v_expr/alu", "((opcode == 7'h33)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1136]), first, "vsrc/alu.v", 25, 34, ".my_alu", "v_expr/alu", "((opcode == 7'h13)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1137]), first, "vsrc/alu.v", 25, 34, ".my_alu", "v_expr/alu", "((opcode == 7'h13)==0 && (opcode == 7'h33)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1138]), first, "vsrc/alu.v", 23, 5, ".my_alu", "v_line/alu", "block", "23-24");
    vlSelf->__vlCoverToggleInsert(0, 13, 1, &(vlSymsp->__Vcoverage[1139]), first, "vsrc/ireg.v", 2, 18, ".my_ireg", "v_toggle/ireg", "addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[370]), first, "vsrc/ireg.v", 3, 19, ".my_ireg", "v_toggle/ireg", "inst");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1167]), first, "vsrc/ireg.v", 7, 5, ".my_ireg", "v_line/ireg", "block", "7-8");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[1168]), first, "vsrc/ireg.v", 11, 17, ".my_ireg", "v_toggle/ireg", "word_addr");
}
