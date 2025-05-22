// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect.h for the primary calling header

#include "Vconnect__pch.h"
#include "Vconnect___024root.h"

void Vconnect___024root___ico_sequent__TOP__0(Vconnect___024root* vlSelf);

void Vconnect___024root___eval_ico(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_ico\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vconnect___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vconnect___024root___ico_sequent__TOP__0(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___ico_sequent__TOP__0\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__k = 8U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state 
        = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state;
    if ((0U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))) {
        if (vlSelfRef.start) {
            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))) {
        if ((7U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count))) {
            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state = 0U;
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[0U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[1U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[2U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[3U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[4U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[5U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[6U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[7U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[0U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[1U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[2U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[3U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[4U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[5U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[6U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[7U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[0U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[1U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[2U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[3U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[4U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[5U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[6U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[7U] = 0U;
    if (((1U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state)) 
         | ((0U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state)) 
            & (IData)(vlSelfRef.start)))) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__k = 8U;
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[0U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[0U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[0U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[1U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[1U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[1U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[2U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[2U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[2U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[3U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[3U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[3U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[4U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[4U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[4U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[5U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[5U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[5U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[6U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[6U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[6U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[7U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[7U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[7U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
}

void Vconnect___024root___eval_triggers__ico(Vconnect___024root* vlSelf);

bool Vconnect___024root___eval_phase__ico(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_phase__ico\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vconnect___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vconnect___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vconnect___024root___eval_act(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_act\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vconnect___024root___nba_sequent__TOP__0(Vconnect___024root* vlSelf);
void Vconnect___024root___nba_sequent__TOP__1(Vconnect___024root* vlSelf);
void Vconnect___024root___nba_sequent__TOP__2(Vconnect___024root* vlSelf);
void Vconnect___024root___nba_comb__TOP__0(Vconnect___024root* vlSelf);

void Vconnect___024root___eval_nba(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_nba\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vconnect___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vconnect___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vconnect___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vconnect___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vconnect___024root___nba_sequent__TOP__0(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___nba_sequent__TOP__0\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout;
    __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index;
    __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index = 0;
    IData/*31:0*/ __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout;
    __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index;
    __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index = 0;
    IData/*31:0*/ __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout;
    __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index;
    __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index = 0;
    CData/*2:0*/ __Vdly__connect__DOT__quant_y__DOT__cycle_cnt;
    __Vdly__connect__DOT__quant_y__DOT__cycle_cnt = 0;
    CData/*5:0*/ __Vdly__connect__DOT__quant_y__DOT__addr;
    __Vdly__connect__DOT__quant_y__DOT__addr = 0;
    CData/*2:0*/ __Vdly__connect__DOT__quant_cb__DOT__cycle_cnt;
    __Vdly__connect__DOT__quant_cb__DOT__cycle_cnt = 0;
    CData/*5:0*/ __Vdly__connect__DOT__quant_cb__DOT__addr;
    __Vdly__connect__DOT__quant_cb__DOT__addr = 0;
    CData/*2:0*/ __Vdly__connect__DOT__quant_cr__DOT__cycle_cnt;
    __Vdly__connect__DOT__quant_cr__DOT__cycle_cnt = 0;
    CData/*5:0*/ __Vdly__connect__DOT__quant_cr__DOT__addr;
    __Vdly__connect__DOT__quant_cr__DOT__addr = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v0;
    __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v0;
    __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__pixel_in__v0;
    __VdlySet__connect__DOT__quant_y__DOT__pixel_in__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v0;
    __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v0;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v1;
    __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v1;
    __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v1 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v1;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v2;
    __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v2;
    __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v2 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v2;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v3;
    __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v3;
    __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v3 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v3;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v4;
    __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v4;
    __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v4 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v4;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v5;
    __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v5;
    __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v5 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v5;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v6;
    __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v6;
    __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v6 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v6;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v7;
    __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v7;
    __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v7 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v7;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v7 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v64;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v64 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v64;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v64 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v64;
    __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v64 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v65;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v65 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v65;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v65 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v66;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v66 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v66;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v66 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v67;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v67 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v67;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v67 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v68;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v68 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v68;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v68 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v69;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v69 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v69;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v69 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v70;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v70 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v70;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v70 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v71;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v71 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v71;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v71 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v72;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v72 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v72;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v72 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v72;
    __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v72 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v73;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v73 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v73;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v73 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v74;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v74 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v74;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v74 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v75;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v75 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v75;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v75 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v76;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v76 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v76;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v76 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v77;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v77 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v77;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v77 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v78;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v78 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v78;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v78 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v79;
    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v79 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v79;
    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v79 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v0;
    __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v0;
    __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__pixel_in__v0;
    __VdlySet__connect__DOT__quant_cb__DOT__pixel_in__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v0;
    __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v0;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v1;
    __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v1;
    __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v1 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v1;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v2;
    __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v2;
    __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v2 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v2;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v3;
    __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v3;
    __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v3 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v3;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v4;
    __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v4;
    __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v4 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v4;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v5;
    __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v5;
    __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v5 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v5;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v6;
    __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v6;
    __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v6 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v6;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v7;
    __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v7;
    __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v7 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v7;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v7 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v64;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v64 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v64;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v64 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v64;
    __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v64 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v65;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v65 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v65;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v65 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v66;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v66 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v66;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v66 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v67;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v67 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v67;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v67 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v68;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v68 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v68;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v68 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v69;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v69 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v69;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v69 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v70;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v70 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v70;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v70 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v71;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v71 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v71;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v71 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v72;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v72 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v72;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v72 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v72;
    __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v72 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v73;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v73 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v73;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v73 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v74;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v74 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v74;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v74 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v75;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v75 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v75;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v75 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v76;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v76 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v76;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v76 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v77;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v77 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v77;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v77 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v78;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v78 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v78;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v78 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v79;
    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v79 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v79;
    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v79 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v0;
    __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v0;
    __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__pixel_in__v0;
    __VdlySet__connect__DOT__quant_cr__DOT__pixel_in__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v0;
    __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v0;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v1;
    __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v1;
    __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v1 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v1;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v2;
    __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v2;
    __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v2 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v2;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v3;
    __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v3;
    __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v3 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v3;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v4;
    __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v4;
    __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v4 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v4;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v5;
    __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v5;
    __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v5 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v5;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v6;
    __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v6;
    __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v6 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v6;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v7;
    __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v7;
    __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v7 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v7;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v7 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v64;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v64 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v64;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v64 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v64;
    __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v64 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v65;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v65 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v65;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v65 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v66;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v66 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v66;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v66 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v67;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v67 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v67;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v67 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v68;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v68 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v68;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v68 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v69;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v69 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v69;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v69 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v70;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v70 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v70;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v70 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v71;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v71 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v71;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v71 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v72;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v72 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v72;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v72 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v72;
    __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v72 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v73;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v73 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v73;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v73 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v74;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v74 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v74;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v74 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v75;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v75 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v75;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v75 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v76;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v76 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v76;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v76 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v77;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v77 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v77;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v77 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v78;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v78 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v78;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v78 = 0;
    SData/*15:0*/ __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v79;
    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v79 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v79;
    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v79 = 0;
    // Body
    vlSelfRef.__Vdly__connect__DOT__dct_y__DOT__row_cnt 
        = vlSelfRef.connect__DOT__dct_y__DOT__row_cnt;
    vlSelfRef.__Vdly__connect__DOT__dct_cb__DOT__row_cnt 
        = vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt;
    vlSelfRef.__Vdly__connect__DOT__dct_cr__DOT__row_cnt 
        = vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt;
    vlSelfRef.__Vdly__connect__DOT__dct_y__DOT__col_cnt 
        = vlSelfRef.connect__DOT__dct_y__DOT__col_cnt;
    vlSelfRef.__Vdly__connect__DOT__dct_cb__DOT__col_cnt 
        = vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt;
    vlSelfRef.__Vdly__connect__DOT__dct_cr__DOT__col_cnt 
        = vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt;
    __Vdly__connect__DOT__quant_y__DOT__addr = vlSelfRef.connect__DOT__quant_y__DOT__addr;
    __Vdly__connect__DOT__quant_cb__DOT__addr = vlSelfRef.connect__DOT__quant_cb__DOT__addr;
    __Vdly__connect__DOT__quant_cr__DOT__addr = vlSelfRef.connect__DOT__quant_cr__DOT__addr;
    __Vdly__connect__DOT__quant_y__DOT__cycle_cnt = vlSelfRef.connect__DOT__quant_y__DOT__cycle_cnt;
    __Vdly__connect__DOT__quant_cb__DOT__cycle_cnt 
        = vlSelfRef.connect__DOT__quant_cb__DOT__cycle_cnt;
    __Vdly__connect__DOT__quant_cr__DOT__cycle_cnt 
        = vlSelfRef.connect__DOT__quant_cr__DOT__cycle_cnt;
    __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v0 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v64 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v72 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v0 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v64 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v72 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v0 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v64 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v72 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__pixel_in__v0 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v7 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__pixel_in__v0 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v7 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__pixel_in__v0 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v7 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v0 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v1 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v2 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v3 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v4 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v5 = 0U;
    __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v6 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v0 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v1 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v2 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v3 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v4 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v5 = 0U;
    __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v6 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v0 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v1 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v2 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v3 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v4 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v5 = 0U;
    __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v6 = 0U;
    vlSelfRef.__Vdly__connect__DOT__rgb2ycbcr_inst__DOT__batch_count 
        = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count;
    if (vlSelfRef.rst) {
        vlSelfRef.__Vdly__connect__DOT__dct_y__DOT__row_cnt = 0U;
        vlSelfRef.__Vdly__connect__DOT__dct_cb__DOT__row_cnt = 0U;
        vlSelfRef.__Vdly__connect__DOT__dct_cr__DOT__row_cnt = 0U;
        vlSelfRef.__Vdly__connect__DOT__dct_y__DOT__col_cnt = 0U;
        vlSelfRef.__Vdly__connect__DOT__dct_cb__DOT__col_cnt = 0U;
        vlSelfRef.__Vdly__connect__DOT__dct_cr__DOT__col_cnt = 0U;
        vlSelfRef.connect__DOT__quant_y__DOT__j = 0x40U;
        __Vdly__connect__DOT__quant_y__DOT__cycle_cnt = 0U;
        __Vdly__connect__DOT__quant_y__DOT__addr = 0U;
        __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v0 = 1U;
        vlSelfRef.connect__DOT__quant_cb__DOT__j = 0x40U;
        __Vdly__connect__DOT__quant_cb__DOT__cycle_cnt = 0U;
        __Vdly__connect__DOT__quant_cb__DOT__addr = 0U;
        __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v0 = 1U;
        vlSelfRef.connect__DOT__quant_cr__DOT__j = 0x40U;
        __Vdly__connect__DOT__quant_cr__DOT__cycle_cnt = 0U;
        __Vdly__connect__DOT__quant_cr__DOT__addr = 0U;
        __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v0 = 1U;
        vlSelfRef.connect__DOT__quant_y_done = 0U;
        vlSelfRef.connect__DOT__quant_cb_done = 0U;
        vlSelfRef.connect__DOT__quant_cr_done = 0U;
        vlSelfRef.connect__DOT__quant_y__DOT__state = 0U;
        vlSelfRef.connect__DOT__quant_cb__DOT__state = 0U;
        vlSelfRef.connect__DOT__quant_cr__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))) {
            vlSelfRef.__Vdly__connect__DOT__dct_y__DOT__row_cnt = 0U;
            vlSelfRef.__Vdly__connect__DOT__dct_y__DOT__col_cnt = 0U;
        } else {
            if (((2U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state)) 
                 & (5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state)))) {
                vlSelfRef.__Vdly__connect__DOT__dct_y__DOT__row_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt)));
            }
            if (((4U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state)) 
                 & (5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state)))) {
                vlSelfRef.__Vdly__connect__DOT__dct_y__DOT__col_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
            }
        }
        if ((0U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))) {
            vlSelfRef.__Vdly__connect__DOT__dct_cb__DOT__row_cnt = 0U;
            vlSelfRef.__Vdly__connect__DOT__dct_cb__DOT__col_cnt = 0U;
        } else {
            if (((2U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state)) 
                 & (5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state)))) {
                vlSelfRef.__Vdly__connect__DOT__dct_cb__DOT__row_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt)));
            }
            if (((4U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state)) 
                 & (5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state)))) {
                vlSelfRef.__Vdly__connect__DOT__dct_cb__DOT__col_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
            }
        }
        if ((0U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))) {
            vlSelfRef.__Vdly__connect__DOT__dct_cr__DOT__row_cnt = 0U;
            vlSelfRef.__Vdly__connect__DOT__dct_cr__DOT__col_cnt = 0U;
        } else {
            if (((2U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state)) 
                 & (5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state)))) {
                vlSelfRef.__Vdly__connect__DOT__dct_cr__DOT__row_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt)));
            }
            if (((4U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state)) 
                 & (5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state)))) {
                vlSelfRef.__Vdly__connect__DOT__dct_cr__DOT__col_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
            }
        }
        if ((0U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))) {
            __Vdly__connect__DOT__quant_y__DOT__cycle_cnt = 0U;
            __Vdly__connect__DOT__quant_y__DOT__addr = 0U;
            vlSelfRef.connect__DOT__quant_y_done = 0U;
        } else {
            if ((1U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))) {
                __Vdly__connect__DOT__quant_y__DOT__cycle_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__cycle_cnt)));
                __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v0 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_y_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_y_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr), 5U))));
                __VdlySet__connect__DOT__quant_y__DOT__pixel_in__v0 = 1U;
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index 
                    = vlSelfRef.connect__DOT__quant_y__DOT__addr;
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom
                    [__Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index];
                __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v0 
                    = __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v0 = 1U;
                __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v1 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_y_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_y_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom
                    [__Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index];
                __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v1 
                    = __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v1 = 1U;
                __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v2 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_y_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(2U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_y_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(2U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom
                    [__Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index];
                __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v2 
                    = __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v2 = 1U;
                __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v3 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_y_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(3U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(3U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_y_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(3U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(3U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom
                    [__Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index];
                __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v3 
                    = __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v3 = 1U;
                __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v4 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(4U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_y_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(4U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(4U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_y_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(4U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(4U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(4U) + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom
                    [__Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index];
                __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v4 
                    = __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v4 = 1U;
                __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v5 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(5U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_y_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(5U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(5U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_y_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(5U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(5U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(5U) + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom
                    [__Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index];
                __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v5 
                    = __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v5 = 1U;
                __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v6 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(6U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_y_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(6U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(6U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_y_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(6U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(6U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(6U) + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom
                    [__Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index];
                __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v6 
                    = __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v6 = 1U;
                __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v7 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(7U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_y_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(7U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(7U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_y_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(7U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(7U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(7U) + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)));
                __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom
                    [__Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__index];
                __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v7 
                    = __Vfunc_connect__DOT__quant_y__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__connect__DOT__quant_y__DOT__qtable_in__v7 = 1U;
                vlSelfRef.connect__DOT__quant_y__DOT__j = 8U;
                if ((0U < (IData)(vlSelfRef.connect__DOT__quant_y__DOT__cycle_cnt))) {
                    vlSelfRef.connect__DOT__quant_y__DOT__j = 8U;
                    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v64 
                        = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                           [0U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v64 
                        = (0x3fU & ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                    - (IData)(8U)));
                    __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v64 = 1U;
                    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v65 
                        = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                           [1U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v65 
                        = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v66 
                        = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                           [2U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v66 
                        = (0x3fU & ((IData)(2U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v67 
                        = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                           [3U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v67 
                        = (0x3fU & ((IData)(3U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v68 
                        = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                           [4U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v68 
                        = (0x3fU & ((IData)(4U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v69 
                        = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                           [5U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v69 
                        = (0x3fU & ((IData)(5U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v70 
                        = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                           [6U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v70 
                        = (0x3fU & ((IData)(6U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v71 
                        = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                           [7U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v71 
                        = (0x3fU & ((IData)(7U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                                   - (IData)(8U))));
                }
                __Vdly__connect__DOT__quant_y__DOT__addr 
                    = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr)));
            } else if ((2U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))) {
                vlSelfRef.connect__DOT__quant_y__DOT__j = 8U;
                __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v72 
                    = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                       [0U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v72 
                    = (0x3fU & ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                - (IData)(8U)));
                __VdlySet__connect__DOT__quant_y__DOT__result_buffer__v72 = 1U;
                __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v73 
                    = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                       [1U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v73 
                    = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v74 
                    = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                       [2U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v74 
                    = (0x3fU & ((IData)(2U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v75 
                    = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                       [3U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v75 
                    = (0x3fU & ((IData)(3U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v76 
                    = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                       [4U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v76 
                    = (0x3fU & ((IData)(4U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v77 
                    = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                       [5U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v77 
                    = (0x3fU & ((IData)(5U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v78 
                    = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                       [6U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v78 
                    = (0x3fU & ((IData)(6U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v79 
                    = (vlSelfRef.connect__DOT__quant_y__DOT__mul_out
                       [7U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v79 
                    = (0x3fU & ((IData)(7U) + ((IData)(vlSelfRef.connect__DOT__quant_y__DOT__addr) 
                                               - (IData)(8U))));
            }
            if ((1U != (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))) {
                if ((2U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))) {
                    vlSelfRef.connect__DOT__quant_y_done = 1U;
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))) {
            __Vdly__connect__DOT__quant_cb__DOT__cycle_cnt = 0U;
            __Vdly__connect__DOT__quant_cb__DOT__addr = 0U;
            vlSelfRef.connect__DOT__quant_cb_done = 0U;
        } else {
            if ((1U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))) {
                __Vdly__connect__DOT__quant_cb__DOT__cycle_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__cycle_cnt)));
                __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v0 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cb_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cb_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr), 5U))));
                __VdlySet__connect__DOT__quant_cb__DOT__pixel_in__v0 = 1U;
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index 
                    = vlSelfRef.connect__DOT__quant_cb__DOT__addr;
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index];
                __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v0 
                    = __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v0 = 1U;
                __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v1 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cb_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cb_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index];
                __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v1 
                    = __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v1 = 1U;
                __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v2 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cb_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(2U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cb_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(2U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index];
                __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v2 
                    = __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v2 = 1U;
                __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v3 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cb_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(3U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(3U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cb_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(3U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(3U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index];
                __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v3 
                    = __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v3 = 1U;
                __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v4 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(4U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cb_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(4U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(4U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cb_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(4U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(4U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(4U) + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index];
                __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v4 
                    = __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v4 = 1U;
                __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v5 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(5U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cb_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(5U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(5U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cb_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(5U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(5U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(5U) + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index];
                __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v5 
                    = __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v5 = 1U;
                __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v6 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(6U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cb_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(6U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(6U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cb_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(6U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(6U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(6U) + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index];
                __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v6 
                    = __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v6 = 1U;
                __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v7 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(7U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cb_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(7U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(7U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cb_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(7U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(7U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(7U) + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)));
                __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__index];
                __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v7 
                    = __Vfunc_connect__DOT__quant_cb__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v7 = 1U;
                vlSelfRef.connect__DOT__quant_cb__DOT__j = 8U;
                if ((0U < (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__cycle_cnt))) {
                    vlSelfRef.connect__DOT__quant_cb__DOT__j = 8U;
                    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v64 
                        = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                           [0U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v64 
                        = (0x3fU & ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                    - (IData)(8U)));
                    __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v64 = 1U;
                    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v65 
                        = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                           [1U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v65 
                        = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v66 
                        = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                           [2U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v66 
                        = (0x3fU & ((IData)(2U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v67 
                        = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                           [3U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v67 
                        = (0x3fU & ((IData)(3U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v68 
                        = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                           [4U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v68 
                        = (0x3fU & ((IData)(4U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v69 
                        = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                           [5U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v69 
                        = (0x3fU & ((IData)(5U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v70 
                        = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                           [6U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v70 
                        = (0x3fU & ((IData)(6U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v71 
                        = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                           [7U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v71 
                        = (0x3fU & ((IData)(7U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                                   - (IData)(8U))));
                }
                __Vdly__connect__DOT__quant_cb__DOT__addr 
                    = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr)));
            } else if ((2U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))) {
                vlSelfRef.connect__DOT__quant_cb__DOT__j = 8U;
                __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v72 
                    = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                       [0U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v72 
                    = (0x3fU & ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                - (IData)(8U)));
                __VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v72 = 1U;
                __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v73 
                    = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                       [1U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v73 
                    = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v74 
                    = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                       [2U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v74 
                    = (0x3fU & ((IData)(2U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v75 
                    = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                       [3U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v75 
                    = (0x3fU & ((IData)(3U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v76 
                    = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                       [4U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v76 
                    = (0x3fU & ((IData)(4U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v77 
                    = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                       [5U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v77 
                    = (0x3fU & ((IData)(5U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v78 
                    = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                       [6U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v78 
                    = (0x3fU & ((IData)(6U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v79 
                    = (vlSelfRef.connect__DOT__quant_cb__DOT__mul_out
                       [7U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v79 
                    = (0x3fU & ((IData)(7U) + ((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__addr) 
                                               - (IData)(8U))));
            }
            if ((1U != (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))) {
                if ((2U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))) {
                    vlSelfRef.connect__DOT__quant_cb_done = 1U;
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))) {
            __Vdly__connect__DOT__quant_cr__DOT__cycle_cnt = 0U;
            __Vdly__connect__DOT__quant_cr__DOT__addr = 0U;
            vlSelfRef.connect__DOT__quant_cr_done = 0U;
        } else {
            if ((1U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))) {
                __Vdly__connect__DOT__quant_cr__DOT__cycle_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__cycle_cnt)));
                __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v0 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cr_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cr_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr), 5U))));
                __VdlySet__connect__DOT__quant_cr__DOT__pixel_in__v0 = 1U;
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index 
                    = vlSelfRef.connect__DOT__quant_cr__DOT__addr;
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index];
                __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v0 
                    = __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout;
                __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v0 = 1U;
                __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v1 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cr_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cr_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index];
                __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v1 
                    = __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout;
                __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v1 = 1U;
                __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v2 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cr_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(2U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cr_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(2U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index 
                    = (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index];
                __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v2 
                    = __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout;
                __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v2 = 1U;
                __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v3 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cr_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(3U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(3U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cr_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(3U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(3U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index 
                    = (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index];
                __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v3 
                    = __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout;
                __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v3 = 1U;
                __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v4 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(4U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cr_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(4U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(4U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cr_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(4U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(4U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index 
                    = (0x3fU & ((IData)(4U) + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index];
                __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v4 
                    = __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout;
                __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v4 = 1U;
                __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v5 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(5U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cr_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(5U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(5U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cr_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(5U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(5U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index 
                    = (0x3fU & ((IData)(5U) + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index];
                __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v5 
                    = __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout;
                __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v5 = 1U;
                __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v6 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(6U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cr_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(6U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(6U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cr_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(6U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(6U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index 
                    = (0x3fU & ((IData)(6U) + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index];
                __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v6 
                    = __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout;
                __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v6 = 1U;
                __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v7 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(7U) 
                                                       + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.connect__DOT__dct_cr_out[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(7U) 
                                                            + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(7U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))))) 
                       | (vlSelfRef.connect__DOT__dct_cr_out[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(7U) 
                                                   + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(7U) 
                                                                  + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)), 5U))));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index 
                    = (0x3fU & ((IData)(7U) + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)));
                __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout 
                    = vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom
                    [__Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__index];
                __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v7 
                    = __Vfunc_connect__DOT__quant_cr__DOT__get_qtable_value__2__Vfuncout;
                __VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v7 = 1U;
                vlSelfRef.connect__DOT__quant_cr__DOT__j = 8U;
                if ((0U < (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__cycle_cnt))) {
                    vlSelfRef.connect__DOT__quant_cr__DOT__j = 8U;
                    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v64 
                        = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                           [0U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v64 
                        = (0x3fU & ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                    - (IData)(8U)));
                    __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v64 = 1U;
                    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v65 
                        = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                           [1U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v65 
                        = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v66 
                        = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                           [2U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v66 
                        = (0x3fU & ((IData)(2U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v67 
                        = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                           [3U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v67 
                        = (0x3fU & ((IData)(3U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v68 
                        = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                           [4U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v68 
                        = (0x3fU & ((IData)(4U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v69 
                        = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                           [5U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v69 
                        = (0x3fU & ((IData)(5U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v70 
                        = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                           [6U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v70 
                        = (0x3fU & ((IData)(6U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v71 
                        = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                           [7U] >> 0x10U);
                    __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v71 
                        = (0x3fU & ((IData)(7U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                                   - (IData)(8U))));
                }
                __Vdly__connect__DOT__quant_cr__DOT__addr 
                    = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr)));
            } else if ((2U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))) {
                vlSelfRef.connect__DOT__quant_cr__DOT__j = 8U;
                __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v72 
                    = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                       [0U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v72 
                    = (0x3fU & ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                - (IData)(8U)));
                __VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v72 = 1U;
                __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v73 
                    = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                       [1U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v73 
                    = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v74 
                    = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                       [2U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v74 
                    = (0x3fU & ((IData)(2U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v75 
                    = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                       [3U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v75 
                    = (0x3fU & ((IData)(3U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v76 
                    = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                       [4U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v76 
                    = (0x3fU & ((IData)(4U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v77 
                    = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                       [5U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v77 
                    = (0x3fU & ((IData)(5U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v78 
                    = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                       [6U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v78 
                    = (0x3fU & ((IData)(6U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v79 
                    = (vlSelfRef.connect__DOT__quant_cr__DOT__mul_out
                       [7U] >> 0x10U);
                __VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v79 
                    = (0x3fU & ((IData)(7U) + ((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__addr) 
                                               - (IData)(8U))));
            }
            if ((1U != (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))) {
                if ((2U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))) {
                    vlSelfRef.connect__DOT__quant_cr_done = 1U;
                }
            }
        }
        vlSelfRef.connect__DOT__quant_y__DOT__state 
            = vlSelfRef.connect__DOT__quant_y__DOT__next_state;
        vlSelfRef.connect__DOT__quant_cb__DOT__state 
            = vlSelfRef.connect__DOT__quant_cb__DOT__next_state;
        vlSelfRef.connect__DOT__quant_cr__DOT__state 
            = vlSelfRef.connect__DOT__quant_cr__DOT__next_state;
    }
    vlSelfRef.connect__DOT__quant_y__DOT__addr = __Vdly__connect__DOT__quant_y__DOT__addr;
    vlSelfRef.connect__DOT__quant_y__DOT__cycle_cnt 
        = __Vdly__connect__DOT__quant_y__DOT__cycle_cnt;
    if (__VdlySet__connect__DOT__quant_y__DOT__result_buffer__v0) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__result_buffer__v64) {
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v64] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v64;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v65] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v65;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v66] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v66;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v67] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v67;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v68] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v68;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v69] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v69;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v70] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v70;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v71] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v71;
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__result_buffer__v72) {
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v72] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v72;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v73] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v73;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v74] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v74;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v75] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v75;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v76] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v76;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v77] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v77;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v78] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v78;
        vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_y__DOT__result_buffer__v79] 
            = __VdlyVal__connect__DOT__quant_y__DOT__result_buffer__v79;
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__pixel_in__v0) {
        vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[0U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v0;
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__qtable_in__v0) {
        vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[1U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v1;
        vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[0U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v0;
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__qtable_in__v1) {
        vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[2U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v2;
        vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[1U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v1;
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__qtable_in__v2) {
        vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[3U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v3;
        vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[2U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v2;
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__qtable_in__v3) {
        vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[4U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v4;
        vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[3U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v3;
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__qtable_in__v4) {
        vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[5U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v5;
        vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[4U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v4;
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__qtable_in__v5) {
        vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[6U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v6;
        vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[5U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v5;
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__qtable_in__v6) {
        vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[7U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__pixel_in__v7;
        vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[6U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v6;
    }
    if (__VdlySet__connect__DOT__quant_y__DOT__qtable_in__v7) {
        vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[7U] 
            = __VdlyVal__connect__DOT__quant_y__DOT__qtable_in__v7;
    }
    vlSelfRef.connect__DOT__quant_cb__DOT__addr = __Vdly__connect__DOT__quant_cb__DOT__addr;
    vlSelfRef.connect__DOT__quant_cb__DOT__cycle_cnt 
        = __Vdly__connect__DOT__quant_cb__DOT__cycle_cnt;
    if (__VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v0) {
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v64) {
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v64] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v64;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v65] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v65;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v66] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v66;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v67] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v67;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v68] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v68;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v69] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v69;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v70] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v70;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v71] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v71;
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__result_buffer__v72) {
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v72] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v72;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v73] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v73;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v74] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v74;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v75] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v75;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v76] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v76;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v77] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v77;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v78] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v78;
        vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cb__DOT__result_buffer__v79] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__result_buffer__v79;
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__pixel_in__v0) {
        vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[0U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v0;
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v0) {
        vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[1U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v1;
        vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[0U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v0;
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v1) {
        vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[2U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v2;
        vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[1U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v1;
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v2) {
        vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[3U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v3;
        vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[2U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v2;
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v3) {
        vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[4U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v4;
        vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[3U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v3;
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v4) {
        vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[5U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v5;
        vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[4U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v4;
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v5) {
        vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[6U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v6;
        vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[5U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v5;
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v6) {
        vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[7U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__pixel_in__v7;
        vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[6U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v6;
    }
    if (__VdlySet__connect__DOT__quant_cb__DOT__qtable_in__v7) {
        vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[7U] 
            = __VdlyVal__connect__DOT__quant_cb__DOT__qtable_in__v7;
    }
    vlSelfRef.connect__DOT__quant_cr__DOT__addr = __Vdly__connect__DOT__quant_cr__DOT__addr;
    vlSelfRef.connect__DOT__quant_cr__DOT__cycle_cnt 
        = __Vdly__connect__DOT__quant_cr__DOT__cycle_cnt;
    if (__VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v0) {
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v64) {
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v64] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v64;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v65] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v65;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v66] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v66;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v67] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v67;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v68] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v68;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v69] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v69;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v70] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v70;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v71] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v71;
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__result_buffer__v72) {
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v72] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v72;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v73] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v73;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v74] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v74;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v75] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v75;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v76] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v76;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v77] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v77;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v78] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v78;
        vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[__VdlyDim0__connect__DOT__quant_cr__DOT__result_buffer__v79] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__result_buffer__v79;
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__pixel_in__v0) {
        vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[0U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v0;
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v0) {
        vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[1U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v1;
        vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[0U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v0;
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v1) {
        vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[2U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v2;
        vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[1U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v1;
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v2) {
        vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[3U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v3;
        vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[2U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v2;
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v3) {
        vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[4U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v4;
        vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[3U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v3;
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v4) {
        vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[5U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v5;
        vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[4U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v4;
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v5) {
        vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[6U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v6;
        vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[5U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v5;
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v6) {
        vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[7U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__pixel_in__v7;
        vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[6U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v6;
    }
    if (__VdlySet__connect__DOT__quant_cr__DOT__qtable_in__v7) {
        vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[7U] 
            = __VdlyVal__connect__DOT__quant_cr__DOT__qtable_in__v7;
    }
    vlSelfRef.y_quantized[0U] = (IData)((((QData)((IData)(
                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                            [2U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [1U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [0U]))));
    vlSelfRef.y_quantized[1U] = ((0xffff0000U & vlSelfRef.y_quantized[1U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [2U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [1U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0U]))) 
                                            >> 0x20U)));
    vlSelfRef.y_quantized[1U] = ((0xffffU & vlSelfRef.y_quantized[1U]) 
                                 | ((IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [5U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [4U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [3U])))) 
                                    << 0x10U));
    vlSelfRef.y_quantized[2U] = (((IData)((((QData)((IData)(
                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [5U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [4U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [3U])))) 
                                  >> 0x10U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                            [5U] 
                                                                            << 0x10U) 
                                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [4U]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [3U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelfRef.y_quantized[3U] = (IData)((((QData)((IData)(
                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                            [8U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [7U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [6U]))));
    vlSelfRef.y_quantized[4U] = ((0xffff0000U & vlSelfRef.y_quantized[4U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [8U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [7U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [6U]))) 
                                            >> 0x20U)));
    vlSelfRef.y_quantized[4U] = ((0xffffU & vlSelfRef.y_quantized[4U]) 
                                 | ((IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0xbU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0xaU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [9U])))) 
                                    << 0x10U));
    vlSelfRef.y_quantized[5U] = (((IData)((((QData)((IData)(
                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0xbU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0xaU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [9U])))) 
                                  >> 0x10U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                            [0xbU] 
                                                                            << 0x10U) 
                                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [0xaU]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [9U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelfRef.y_quantized[6U] = (IData)((((QData)((IData)(
                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                            [0xeU] 
                                                            << 0x10U) 
                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [0xdU]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [0xcU]))));
    vlSelfRef.y_quantized[7U] = ((0xffff0000U & vlSelfRef.y_quantized[7U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0xeU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0xdU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0xcU]))) 
                                            >> 0x20U)));
    vlSelfRef.y_quantized[7U] = ((0xffffU & vlSelfRef.y_quantized[7U]) 
                                 | ((IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x11U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x10U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0xfU])))) 
                                    << 0x10U));
    vlSelfRef.y_quantized[8U] = (((IData)((((QData)((IData)(
                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x11U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0x10U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0xfU])))) 
                                  >> 0x10U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                            [0x11U] 
                                                                            << 0x10U) 
                                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [0x10U]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [0xfU]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelfRef.y_quantized[9U] = (IData)((((QData)((IData)(
                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                            [0x14U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [0x13U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [0x12U]))));
    vlSelfRef.y_quantized[0xaU] = ((0xffff0000U & vlSelfRef.y_quantized[0xaU]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x14U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x13U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x12U]))) 
                                              >> 0x20U)));
    vlSelfRef.y_quantized[0xaU] = ((0xffffU & vlSelfRef.y_quantized[0xaU]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x17U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x16U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x15U])))) 
                                      << 0x10U));
    vlSelfRef.y_quantized[0xbU] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x17U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x16U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x15U])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x17U] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                             [0x16U]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                             [0x15U]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.y_quantized[0xcU] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x1aU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0x19U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0x18U]))));
    vlSelfRef.y_quantized[0xdU] = ((0xffff0000U & vlSelfRef.y_quantized[0xdU]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x1aU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x19U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x18U]))) 
                                              >> 0x20U)));
    vlSelfRef.y_quantized[0xdU] = ((0xffffU & vlSelfRef.y_quantized[0xdU]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x1dU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x1cU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x1bU])))) 
                                      << 0x10U));
    vlSelfRef.y_quantized[0xeU] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x1dU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x1cU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x1bU])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x1dU] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                             [0x1cU]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                             [0x1bU]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.y_quantized[0xfU] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x20U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0x1fU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0x1eU]))));
    vlSelfRef.y_quantized[0x10U] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x10U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x20U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x1fU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x1eU]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x10U] = ((0xffffU & vlSelfRef.y_quantized[0x10U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x23U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x22U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x21U])))) 
                                       << 0x10U));
    vlSelfRef.y_quantized[0x11U] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x23U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x22U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x21U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                               [0x23U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x22U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x21U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.y_quantized[0x12U] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x26U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x25U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x24U]))));
    vlSelfRef.y_quantized[0x13U] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x13U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x26U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x25U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x24U]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x13U] = ((0xffffU & vlSelfRef.y_quantized[0x13U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x29U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x28U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x27U])))) 
                                       << 0x10U));
    vlSelfRef.y_quantized[0x14U] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x29U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x28U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x27U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                               [0x29U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x28U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x27U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.y_quantized[0x15U] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x2cU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x2bU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x2aU]))));
    vlSelfRef.y_quantized[0x16U] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x16U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x2cU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x2bU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x2aU]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x16U] = ((0xffffU & vlSelfRef.y_quantized[0x16U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x2fU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x2eU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x2dU])))) 
                                       << 0x10U));
    vlSelfRef.y_quantized[0x17U] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x2fU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x2eU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x2dU])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                               [0x2fU] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x2eU]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x2dU]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.y_quantized[0x18U] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x32U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x31U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x30U]))));
    vlSelfRef.y_quantized[0x19U] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x19U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x32U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x31U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x30U]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x19U] = ((0xffffU & vlSelfRef.y_quantized[0x19U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x35U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x34U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x33U])))) 
                                       << 0x10U));
    vlSelfRef.y_quantized[0x1aU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x35U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x34U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x33U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                               [0x35U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x34U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x33U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.y_quantized[0x1bU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x38U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x37U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x36U]))));
    vlSelfRef.y_quantized[0x1cU] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x1cU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x38U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x37U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x36U]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x1cU] = ((0xffffU & vlSelfRef.y_quantized[0x1cU]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x3bU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x3aU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x39U])))) 
                                       << 0x10U));
    vlSelfRef.y_quantized[0x1dU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x3bU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x3aU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x39U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                               [0x3bU] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x3aU]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x39U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.y_quantized[0x1eU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x3eU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x3dU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x3cU]))));
    vlSelfRef.y_quantized[0x1fU] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x1fU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x3eU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x3dU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x3cU]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x1fU] = ((0xffffU & vlSelfRef.y_quantized[0x1fU]) 
                                    | (vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                       [0x3fU] << 0x10U));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [0U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [0U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [1U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [1U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [2U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [2U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [3U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [3U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [4U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [4U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [5U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [5U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [6U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [6U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [7U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [7U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.cb_quantized[0U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                             [2U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [1U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [0U]))));
    vlSelfRef.cb_quantized[1U] = ((0xffff0000U & vlSelfRef.cb_quantized[1U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [2U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [1U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0U]))) 
                                             >> 0x20U)));
    vlSelfRef.cb_quantized[1U] = ((0xffffU & vlSelfRef.cb_quantized[1U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [5U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [4U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [3U])))) 
                                     << 0x10U));
    vlSelfRef.cb_quantized[2U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [5U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [4U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [3U])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                             [5U] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [4U]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [3U]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cb_quantized[3U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                             [8U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [7U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [6U]))));
    vlSelfRef.cb_quantized[4U] = ((0xffff0000U & vlSelfRef.cb_quantized[4U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [8U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [7U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [6U]))) 
                                             >> 0x20U)));
    vlSelfRef.cb_quantized[4U] = ((0xffffU & vlSelfRef.cb_quantized[4U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0xbU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0xaU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [9U])))) 
                                     << 0x10U));
    vlSelfRef.cb_quantized[5U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0xbU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0xaU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [9U])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                             [0xbU] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [0xaU]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [9U]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cb_quantized[6U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                             [0xeU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [0xdU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [0xcU]))));
    vlSelfRef.cb_quantized[7U] = ((0xffff0000U & vlSelfRef.cb_quantized[7U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0xeU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0xdU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0xcU]))) 
                                             >> 0x20U)));
    vlSelfRef.cb_quantized[7U] = ((0xffffU & vlSelfRef.cb_quantized[7U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x11U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x10U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0xfU])))) 
                                     << 0x10U));
    vlSelfRef.cb_quantized[8U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x11U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0x10U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0xfU])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                             [0x11U] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [0x10U]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [0xfU]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cb_quantized[9U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                             [0x14U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [0x13U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [0x12U]))));
    vlSelfRef.cb_quantized[0xaU] = ((0xffff0000U & 
                                     vlSelfRef.cb_quantized[0xaU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x14U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x13U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x12U]))) 
                                               >> 0x20U)));
    vlSelfRef.cb_quantized[0xaU] = ((0xffffU & vlSelfRef.cb_quantized[0xaU]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x17U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x16U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x15U])))) 
                                       << 0x10U));
    vlSelfRef.cb_quantized[0xbU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x17U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x16U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x15U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x17U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                              [0x16U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                              [0x15U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.cb_quantized[0xcU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x1aU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0x19U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0x18U]))));
    vlSelfRef.cb_quantized[0xdU] = ((0xffff0000U & 
                                     vlSelfRef.cb_quantized[0xdU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x1aU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x19U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x18U]))) 
                                               >> 0x20U)));
    vlSelfRef.cb_quantized[0xdU] = ((0xffffU & vlSelfRef.cb_quantized[0xdU]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x1dU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x1cU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x1bU])))) 
                                       << 0x10U));
    vlSelfRef.cb_quantized[0xeU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x1dU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x1cU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x1bU])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x1dU] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                              [0x1cU]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                              [0x1bU]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.cb_quantized[0xfU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x20U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0x1fU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0x1eU]))));
    vlSelfRef.cb_quantized[0x10U] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x10U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x20U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x1fU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x1eU]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x10U] = ((0xffffU & vlSelfRef.cb_quantized[0x10U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x23U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x22U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x21U])))) 
                                        << 0x10U));
    vlSelfRef.cb_quantized[0x11U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x23U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x22U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x21U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                                [0x23U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x22U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x21U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cb_quantized[0x12U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x26U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x25U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x24U]))));
    vlSelfRef.cb_quantized[0x13U] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x13U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x26U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x25U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x24U]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x13U] = ((0xffffU & vlSelfRef.cb_quantized[0x13U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x29U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x28U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x27U])))) 
                                        << 0x10U));
    vlSelfRef.cb_quantized[0x14U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x29U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x28U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x27U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                                [0x29U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x28U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x27U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cb_quantized[0x15U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x2cU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x2bU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x2aU]))));
    vlSelfRef.cb_quantized[0x16U] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x16U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x2cU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x2bU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x2aU]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x16U] = ((0xffffU & vlSelfRef.cb_quantized[0x16U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x2fU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x2eU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x2dU])))) 
                                        << 0x10U));
    vlSelfRef.cb_quantized[0x17U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x2fU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x2eU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x2dU])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                                [0x2fU] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x2eU]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x2dU]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cb_quantized[0x18U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x32U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x31U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x30U]))));
    vlSelfRef.cb_quantized[0x19U] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x19U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x32U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x31U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x30U]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x19U] = ((0xffffU & vlSelfRef.cb_quantized[0x19U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x35U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x34U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x33U])))) 
                                        << 0x10U));
    vlSelfRef.cb_quantized[0x1aU] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x35U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x34U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x33U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                                [0x35U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x34U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x33U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cb_quantized[0x1bU] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x38U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x37U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x36U]))));
    vlSelfRef.cb_quantized[0x1cU] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x1cU]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x38U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x37U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x36U]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x1cU] = ((0xffffU & vlSelfRef.cb_quantized[0x1cU]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x3bU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x3aU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x39U])))) 
                                        << 0x10U));
    vlSelfRef.cb_quantized[0x1dU] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x3bU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x3aU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x39U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                                [0x3bU] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x3aU]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x39U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cb_quantized[0x1eU] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x3eU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x3dU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x3cU]))));
    vlSelfRef.cb_quantized[0x1fU] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x1fU]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x3eU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x3dU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x3cU]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x1fU] = ((0xffffU & vlSelfRef.cb_quantized[0x1fU]) 
                                     | (vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                        [0x3fU] << 0x10U));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [0U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [0U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [1U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [1U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [2U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [2U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [3U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [3U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [4U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [4U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [5U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [5U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [6U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [6U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [7U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [7U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.cr_quantized[0U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                             [2U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [1U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [0U]))));
    vlSelfRef.cr_quantized[1U] = ((0xffff0000U & vlSelfRef.cr_quantized[1U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [2U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [1U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0U]))) 
                                             >> 0x20U)));
    vlSelfRef.cr_quantized[1U] = ((0xffffU & vlSelfRef.cr_quantized[1U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [5U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [4U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [3U])))) 
                                     << 0x10U));
    vlSelfRef.cr_quantized[2U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [5U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [4U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [3U])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                             [5U] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [4U]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [3U]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cr_quantized[3U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                             [8U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [7U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [6U]))));
    vlSelfRef.cr_quantized[4U] = ((0xffff0000U & vlSelfRef.cr_quantized[4U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [8U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [7U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [6U]))) 
                                             >> 0x20U)));
    vlSelfRef.cr_quantized[4U] = ((0xffffU & vlSelfRef.cr_quantized[4U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0xbU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0xaU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [9U])))) 
                                     << 0x10U));
    vlSelfRef.cr_quantized[5U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0xbU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0xaU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [9U])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                             [0xbU] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [0xaU]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [9U]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cr_quantized[6U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                             [0xeU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [0xdU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [0xcU]))));
    vlSelfRef.cr_quantized[7U] = ((0xffff0000U & vlSelfRef.cr_quantized[7U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0xeU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0xdU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0xcU]))) 
                                             >> 0x20U)));
    vlSelfRef.cr_quantized[7U] = ((0xffffU & vlSelfRef.cr_quantized[7U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x11U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x10U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0xfU])))) 
                                     << 0x10U));
    vlSelfRef.cr_quantized[8U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x11U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0x10U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0xfU])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                             [0x11U] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [0x10U]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [0xfU]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cr_quantized[9U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                             [0x14U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [0x13U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [0x12U]))));
    vlSelfRef.cr_quantized[0xaU] = ((0xffff0000U & 
                                     vlSelfRef.cr_quantized[0xaU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x14U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x13U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x12U]))) 
                                               >> 0x20U)));
    vlSelfRef.cr_quantized[0xaU] = ((0xffffU & vlSelfRef.cr_quantized[0xaU]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x17U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x16U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x15U])))) 
                                       << 0x10U));
    vlSelfRef.cr_quantized[0xbU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x17U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x16U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x15U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x17U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                              [0x16U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                              [0x15U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.cr_quantized[0xcU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x1aU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0x19U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0x18U]))));
    vlSelfRef.cr_quantized[0xdU] = ((0xffff0000U & 
                                     vlSelfRef.cr_quantized[0xdU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x1aU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x19U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x18U]))) 
                                               >> 0x20U)));
    vlSelfRef.cr_quantized[0xdU] = ((0xffffU & vlSelfRef.cr_quantized[0xdU]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x1dU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x1cU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x1bU])))) 
                                       << 0x10U));
    vlSelfRef.cr_quantized[0xeU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x1dU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x1cU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x1bU])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x1dU] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                              [0x1cU]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                              [0x1bU]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.cr_quantized[0xfU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x20U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0x1fU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0x1eU]))));
    vlSelfRef.cr_quantized[0x10U] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x10U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x20U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x1fU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x1eU]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x10U] = ((0xffffU & vlSelfRef.cr_quantized[0x10U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x23U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x22U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x21U])))) 
                                        << 0x10U));
    vlSelfRef.cr_quantized[0x11U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x23U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x22U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x21U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                                [0x23U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x22U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x21U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cr_quantized[0x12U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x26U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x25U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x24U]))));
    vlSelfRef.cr_quantized[0x13U] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x13U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x26U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x25U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x24U]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x13U] = ((0xffffU & vlSelfRef.cr_quantized[0x13U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x29U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x28U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x27U])))) 
                                        << 0x10U));
    vlSelfRef.cr_quantized[0x14U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x29U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x28U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x27U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                                [0x29U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x28U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x27U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cr_quantized[0x15U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x2cU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x2bU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x2aU]))));
    vlSelfRef.cr_quantized[0x16U] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x16U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x2cU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x2bU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x2aU]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x16U] = ((0xffffU & vlSelfRef.cr_quantized[0x16U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x2fU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x2eU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x2dU])))) 
                                        << 0x10U));
    vlSelfRef.cr_quantized[0x17U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x2fU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x2eU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x2dU])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                                [0x2fU] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x2eU]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x2dU]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cr_quantized[0x18U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x32U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x31U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x30U]))));
    vlSelfRef.cr_quantized[0x19U] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x19U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x32U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x31U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x30U]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x19U] = ((0xffffU & vlSelfRef.cr_quantized[0x19U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x35U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x34U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x33U])))) 
                                        << 0x10U));
    vlSelfRef.cr_quantized[0x1aU] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x35U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x34U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x33U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                                [0x35U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x34U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x33U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cr_quantized[0x1bU] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x38U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x37U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x36U]))));
    vlSelfRef.cr_quantized[0x1cU] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x1cU]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x38U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x37U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x36U]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x1cU] = ((0xffffU & vlSelfRef.cr_quantized[0x1cU]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x3bU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x3aU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x39U])))) 
                                        << 0x10U));
    vlSelfRef.cr_quantized[0x1dU] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x3bU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x3aU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x39U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                                [0x3bU] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x3aU]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x39U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cr_quantized[0x1eU] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x3eU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x3dU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x3cU]))));
    vlSelfRef.cr_quantized[0x1fU] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x1fU]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x3eU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x3dU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x3cU]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x1fU] = ((0xffffU & vlSelfRef.cr_quantized[0x1fU]) 
                                     | (vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                        [0x3fU] << 0x10U));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [0U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [0U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [1U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [1U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [2U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [2U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [3U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [3U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [4U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [4U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [5U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [5U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [6U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [6U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [7U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [7U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.done = ((IData)(vlSelfRef.connect__DOT__quant_y_done) 
                      & ((IData)(vlSelfRef.connect__DOT__quant_cb_done) 
                         & (IData)(vlSelfRef.connect__DOT__quant_cr_done)));
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[0U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[1U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[2U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[3U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[4U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[5U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[6U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[7U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[0U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[1U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[2U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[3U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[4U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[5U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[6U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[7U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[0U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[1U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[2U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[3U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[4U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[5U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[6U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[7U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
}
