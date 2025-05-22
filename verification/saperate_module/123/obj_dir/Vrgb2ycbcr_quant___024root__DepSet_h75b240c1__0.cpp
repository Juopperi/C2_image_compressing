// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrgb2ycbcr_quant.h for the primary calling header

#include "Vrgb2ycbcr_quant__pch.h"
#include "Vrgb2ycbcr_quant___024root.h"

void Vrgb2ycbcr_quant___024root___ico_sequent__TOP__0(Vrgb2ycbcr_quant___024root* vlSelf);

void Vrgb2ycbcr_quant___024root___eval_ico(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_ico\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vrgb2ycbcr_quant___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 256> Vrgb2ycbcr_quant__ConstPool__TABLE_hf28795f5_0;

VL_INLINE_OPT void Vrgb2ycbcr_quant___024root___ico_sequent__TOP__0(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___ico_sequent__TOP__0\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((0U == (IData)(vlSelfRef.component_sel))) {
        vlSelfRef.out_data[0U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U];
        vlSelfRef.out_data[1U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U];
        vlSelfRef.out_data[2U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U];
        vlSelfRef.out_data[3U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U];
        vlSelfRef.out_data[4U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U];
        vlSelfRef.out_data[5U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U];
        vlSelfRef.out_data[6U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U];
        vlSelfRef.out_data[7U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U];
        vlSelfRef.out_data[8U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U];
        vlSelfRef.out_data[9U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U];
        vlSelfRef.out_data[0xaU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU];
        vlSelfRef.out_data[0xbU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU];
        vlSelfRef.out_data[0xcU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU];
        vlSelfRef.out_data[0xdU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU];
        vlSelfRef.out_data[0xeU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU];
        vlSelfRef.out_data[0xfU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU];
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[__Vilp1] 
                = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_done 
            = vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_luma;
    } else {
        vlSelfRef.out_data[0U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U];
        vlSelfRef.out_data[1U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U];
        vlSelfRef.out_data[2U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U];
        vlSelfRef.out_data[3U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U];
        vlSelfRef.out_data[4U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U];
        vlSelfRef.out_data[5U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U];
        vlSelfRef.out_data[6U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U];
        vlSelfRef.out_data[7U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U];
        vlSelfRef.out_data[8U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U];
        vlSelfRef.out_data[9U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U];
        vlSelfRef.out_data[0xaU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU];
        vlSelfRef.out_data[0xbU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU];
        vlSelfRef.out_data[0xcU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU];
        vlSelfRef.out_data[0xdU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU];
        vlSelfRef.out_data[0xeU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU];
        vlSelfRef.out_data[0xfU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU];
        if ((1U == (IData)(vlSelfRef.component_sel))) {
            IData/*31:0*/ __Vilp2;
            __Vilp2 = 0U;
            while ((__Vilp2 <= 0x3fU)) {
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[__Vilp2] 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg[__Vilp2];
                __Vilp2 = ((IData)(1U) + __Vilp2);
            }
        } else if ((2U == (IData)(vlSelfRef.component_sel))) {
            IData/*31:0*/ __Vilp3;
            __Vilp3 = 0U;
            while ((__Vilp3 <= 0x3fU)) {
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[__Vilp3] 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg[__Vilp3];
                __Vilp3 = ((IData)(1U) + __Vilp3);
            }
        } else {
            IData/*31:0*/ __Vilp4;
            __Vilp4 = 0U;
            while ((__Vilp4 <= 0x3fU)) {
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[__Vilp4] 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg[__Vilp4];
                __Vilp4 = ((IData)(1U) + __Vilp4);
            }
        }
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_done 
            = vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_chroma;
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion 
        = ((IData)(vlSelfRef.in_ready) & (IData)(vlSelfRef.in_valid));
    __Vtableidx1 = (((((IData)(vlSelfRef.in_valid) 
                       << 7U) | ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__done_reg) 
                                 << 6U)) | (((5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_done) 
                                               << 4U))) 
                    | (((IData)(vlSelfRef.out_ready) 
                        << 3U) | (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state)));
    vlSelfRef.rgb2ycbcr_quant__DOT__next_state = Vrgb2ycbcr_quant__ConstPool__TABLE_hf28795f5_0
        [__Vtableidx1];
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__k = 8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state 
        = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state;
    if ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))) {
        if (vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion) {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))) {
        if ((7U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count))) {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state = 0U;
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[0U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[1U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[2U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[3U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[4U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[5U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[6U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[7U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[0U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[1U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[2U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[3U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[4U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[5U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[6U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[7U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[0U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[1U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[2U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[3U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[4U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[5U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[6U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[7U] = 0U;
    if (((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state)) 
         | ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state)) 
            & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion)))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__k = 8U;
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[0U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[0U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[0U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[1U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[1U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[1U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[2U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[2U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[2U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[3U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[3U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[3U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[4U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[4U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[4U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[5U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[5U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[5U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[6U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[6U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[6U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[7U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[7U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[7U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
}

void Vrgb2ycbcr_quant___024root___eval_triggers__ico(Vrgb2ycbcr_quant___024root* vlSelf);

bool Vrgb2ycbcr_quant___024root___eval_phase__ico(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_phase__ico\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vrgb2ycbcr_quant___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vrgb2ycbcr_quant___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vrgb2ycbcr_quant___024root___eval_act(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_act\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vrgb2ycbcr_quant___024root___nba_sequent__TOP__0(Vrgb2ycbcr_quant___024root* vlSelf);
void Vrgb2ycbcr_quant___024root___nba_sequent__TOP__1(Vrgb2ycbcr_quant___024root* vlSelf);
void Vrgb2ycbcr_quant___024root___nba_sequent__TOP__2(Vrgb2ycbcr_quant___024root* vlSelf);
void Vrgb2ycbcr_quant___024root___nba_comb__TOP__0(Vrgb2ycbcr_quant___024root* vlSelf);

void Vrgb2ycbcr_quant___024root___eval_nba(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_nba\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrgb2ycbcr_quant___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrgb2ycbcr_quant___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrgb2ycbcr_quant___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vrgb2ycbcr_quant___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<64>/*2047:0*/ Vrgb2ycbcr_quant__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void Vrgb2ycbcr_quant___024root___nba_sequent__TOP__0(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___nba_sequent__TOP__0\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout;
    __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index;
    __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index = 0;
    IData/*31:0*/ __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout;
    __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index;
    __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index = 0;
    CData/*2:0*/ __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt;
    __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt = 0;
    CData/*5:0*/ __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr;
    __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr = 0;
    CData/*2:0*/ __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt;
    __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt = 0;
    CData/*5:0*/ __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr;
    __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v0;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v0 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v0;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v0 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v0;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v0 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v0;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v0 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v1;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v1 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v1;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v1 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v1;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v1 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v2;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v2 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v2;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v2 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v2;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v2 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v3;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v3 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v3;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v3 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v3;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v3 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v4;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v4 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v4;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v4 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v4;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v4 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v5;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v5 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v5;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v5 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v5;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v5 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v6;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v6 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v6;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v6 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v6;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v6 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v7;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v7 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v7;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v7 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v7;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v7 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v1;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v1 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v1;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v1 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v2;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v2 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v2;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v2 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v3;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v3 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v3;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v3 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v4;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v4 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v4;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v4 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v5;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v5 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v5;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v5 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v6;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v6 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v6;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v6 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v7;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v7 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v7;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v7 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v9;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v9 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v9;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v9 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v10;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v10 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v10;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v10 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v11;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v11 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v11;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v11 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v12;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v12 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v12;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v12 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v13;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v13 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v13;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v13 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v14;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v14 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v14;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v14 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v15;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v15 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v15;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v15 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v16;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v16 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v0;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v0 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v0;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v0 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v0;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v0 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v0;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v0 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v1;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v1 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v1;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v1 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v1;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v1 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v2;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v2 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v2;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v2 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v2;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v2 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v3;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v3 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v3;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v3 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v3;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v3 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v4;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v4 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v4;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v4 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v4;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v4 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v5;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v5 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v5;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v5 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v5;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v5 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v6;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v6 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v6;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v6 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v6;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v6 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v7;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v7 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v7;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v7 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v7;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v7 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v1;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v1 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v1;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v1 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v2;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v2 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v2;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v2 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v3;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v3 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v3;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v3 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v4;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v4 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v4;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v4 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v5;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v5 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v5;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v5 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v6;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v6 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v6;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v6 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v7;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v7 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v7;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v7 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v9;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v9 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v9;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v9 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v10;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v10 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v10;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v10 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v11;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v11 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v11;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v11 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v12;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v12 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v12;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v12 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v13;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v13 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v13;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v13 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v14;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v14 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v14;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v14 = 0;
    CData/*7:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v15;
    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v15 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v15;
    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v15 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v16;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v16 = 0;
    // Body
    vlSelfRef.__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt;
    vlSelfRef.__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt;
    __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr;
    __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr;
    __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt;
    __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v16 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v16 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v0 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v7 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v0 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v7 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v0 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v1 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v2 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v3 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v4 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v5 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v6 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v0 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v1 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v2 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v3 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v4 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v5 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v6 = 0U;
    if (vlSelfRef.rst_n) {
        if ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))) {
            vlSelfRef.__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt = 0U;
            vlSelfRef.__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt = 0U;
        } else {
            if (((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)) 
                 & (5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state)))) {
                vlSelfRef.__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt)));
            }
            if (((4U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)) 
                 & (5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state)))) {
                vlSelfRef.__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
            }
        }
        if ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))) {
            __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt = 0U;
            __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr = 0U;
            vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_luma = 0U;
        } else {
            if ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))) {
                __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt)));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v0 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr), 5U))));
                __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v0 = 1U;
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr;
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v0 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v0 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v1 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v1 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v1 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v2 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(2U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(2U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v2 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v2 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v3 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(3U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(3U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(3U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(3U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v3 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v3 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v4 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(4U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(4U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(4U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(4U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(4U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(4U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v4 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v4 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v5 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(5U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(5U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(5U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(5U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(5U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(5U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v5 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v5 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v6 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(6U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(6U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(6U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(6U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(6U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(6U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v6 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v6 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v7 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(7U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(7U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(7U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(7U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(7U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index 
                    = (0x3fU & ((IData)(7U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v7 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__get_qtable_value__0__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v7 = 1U;
                vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__j = 8U;
                if ((0U < (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt))) {
                    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__j = 8U;
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                    [0U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0 
                        = (0x3fU & ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                    - (IData)(8U)));
                    __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0 = 1U;
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v1 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                    [1U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v1 
                        = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v2 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                    [2U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v2 
                        = (0x3fU & ((IData)(2U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v3 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                    [3U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v3 
                        = (0x3fU & ((IData)(3U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v4 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                    [4U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v4 
                        = (0x3fU & ((IData)(4U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v5 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                    [5U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v5 
                        = (0x3fU & ((IData)(5U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v6 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                    [6U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v6 
                        = (0x3fU & ((IData)(6U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v7 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                    [7U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v7 
                        = (0x3fU & ((IData)(7U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                }
                __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr 
                    = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr)));
            } else if ((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))) {
                vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__j = 8U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                [0U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8 
                    = (0x3fU & ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                - (IData)(8U)));
                __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v9 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                [1U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v9 
                    = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v10 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                [2U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v10 
                    = (0x3fU & ((IData)(2U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v11 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                [3U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v11 
                    = (0x3fU & ((IData)(3U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v12 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                [4U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v12 
                    = (0x3fU & ((IData)(4U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v13 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                [5U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v13 
                    = (0x3fU & ((IData)(5U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v14 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                [6U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v14 
                    = (0x3fU & ((IData)(6U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v15 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out
                                [7U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v15 
                    = (0x3fU & ((IData)(7U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr) 
                                               - (IData)(8U))));
            }
            if ((1U != (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))) {
                if ((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))) {
                    vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_luma = 1U;
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))) {
            __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt = 0U;
            __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr = 0U;
            vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_chroma = 0U;
        } else {
            if ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))) {
                __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt)));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v0 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr), 5U))));
                __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v0 = 1U;
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr;
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v0 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v0 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v1 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v1 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v1 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v2 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(2U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(2U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v2 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v2 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v3 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(3U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(3U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(3U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(3U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v3 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v3 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v4 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(4U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(4U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(4U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(4U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(4U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(4U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v4 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v4 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v5 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(5U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(5U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(5U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(5U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(5U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(5U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v5 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v5 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v6 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(6U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(6U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(6U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(6U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(6U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(6U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v6 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v6 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v7 
                    = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                      ((IData)(7U) 
                                                       + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U)))
                         ? 0U : (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                                 (((IData)(0x1fU) + 
                                   (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                           ((IData)(7U) 
                                                            + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(7U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))))) 
                       | (vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[
                          (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                  ((IData)(7U) 
                                                   + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(7U) 
                                                                  + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)), 5U))));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index 
                    = (0x3fU & ((IData)(7U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)));
                __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom
                    [__Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__index];
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v7 
                    = __Vfunc_rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__get_qtable_value__1__Vfuncout;
                __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v7 = 1U;
                vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__j = 8U;
                if ((0U < (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt))) {
                    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__j = 8U;
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                    [0U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0 
                        = (0x3fU & ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                    - (IData)(8U)));
                    __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0 = 1U;
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v1 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                    [1U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v1 
                        = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v2 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                    [2U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v2 
                        = (0x3fU & ((IData)(2U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v3 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                    [3U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v3 
                        = (0x3fU & ((IData)(3U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v4 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                    [4U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v4 
                        = (0x3fU & ((IData)(4U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v5 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                    [5U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v5 
                        = (0x3fU & ((IData)(5U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v6 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                    [6U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v6 
                        = (0x3fU & ((IData)(6U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                    __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v7 
                        = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                    [7U] >> 0x10U));
                    __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v7 
                        = (0x3fU & ((IData)(7U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                                   - (IData)(8U))));
                }
                __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr 
                    = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr)));
            } else if ((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))) {
                vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__j = 8U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                [0U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8 
                    = (0x3fU & ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                - (IData)(8U)));
                __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v9 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                [1U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v9 
                    = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v10 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                [2U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v10 
                    = (0x3fU & ((IData)(2U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v11 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                [3U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v11 
                    = (0x3fU & ((IData)(3U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v12 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                [4U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v12 
                    = (0x3fU & ((IData)(4U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v13 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                [5U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v13 
                    = (0x3fU & ((IData)(5U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v14 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                [6U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v14 
                    = (0x3fU & ((IData)(6U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                               - (IData)(8U))));
                __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v15 
                    = (0xffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out
                                [7U] >> 0x10U));
                __VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v15 
                    = (0x3fU & ((IData)(7U) + ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr) 
                                               - (IData)(8U))));
            }
            if ((1U != (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))) {
                if ((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))) {
                    vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_chroma = 1U;
                }
            }
        }
        vlSelfRef.rgb2ycbcr_quant__DOT__current_state 
            = vlSelfRef.rgb2ycbcr_quant__DOT__next_state;
        if ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))) {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__j = 8U;
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 8U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core
                            [0U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 8U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [0U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 8U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [0U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core
                            [1U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [1U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [1U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(2U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core
                            [2U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(2U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [2U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(2U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [2U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core
                            [3U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [3U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [3U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(4U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core
                            [4U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(4U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [4U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(4U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [4U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(5U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core
                            [5U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(5U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [5U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(5U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [5U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(6U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core
                            [6U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(6U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [6U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(6U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [6U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(7U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core
                            [7U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(7U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [7U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(7U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [7U]);
            if ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state))) {
                vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)));
            }
        } else {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count = 0U;
        }
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__done_reg 
            = (2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state));
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state 
            = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__next_state;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state 
            = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__next_state;
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state 
            = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state;
    } else {
        vlSelfRef.__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt = 0U;
        vlSelfRef.__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt = 0U;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__j = 0x40U;
        __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt = 0U;
        __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr = 0U;
        __VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v16 = 1U;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__j = 0x40U;
        __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt = 0U;
        __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr = 0U;
        __VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v16 = 1U;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_luma = 0U;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_chroma = 0U;
        vlSelfRef.rgb2ycbcr_quant__DOT__current_state = 0U;
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count = 0U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg[__Vilp1] 
                = Vrgb2ycbcr_quant__ConstPool__CONST_h6be9aa18_0[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg[__Vilp2] 
                = Vrgb2ycbcr_quant__ConstPool__CONST_h6be9aa18_0[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg[__Vilp3] 
                = Vrgb2ycbcr_quant__ConstPool__CONST_h6be9aa18_0[__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__done_reg = 0U;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state = 0U;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state = 0U;
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state = 0U;
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr 
        = __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt 
        = __Vdly__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt;
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v0;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v1] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v1;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v2] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v2;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v3] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v3;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v4] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v4;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v5] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v5;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v6] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v6;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v7] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v7;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v8;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v9] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v9;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v10] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v10;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v11] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v11;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v12] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v12;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v13] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v13;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v14] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v14;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v15] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v15;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer__v16) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__Vilp4] = 0U;
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v0) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[0U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v0;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v0) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[1U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v1;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[0U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v0;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v1) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[2U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v2;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[1U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v1;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v2) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[3U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v3;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[2U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v2;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v3) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[4U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v4;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[3U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v3;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v4) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[5U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v5;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[4U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v4;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v5) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[6U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v6;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[5U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v5;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v6) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[7U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in__v7;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[6U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v6;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v7) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[7U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in__v7;
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr 
        = __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt 
        = __Vdly__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt;
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v0;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v1] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v1;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v2] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v2;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v3] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v3;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v4] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v4;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v5] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v5;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v6] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v6;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v7] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v7;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v8;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v9] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v9;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v10] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v10;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v11] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v11;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v12] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v12;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v13] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v13;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v14] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v14;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v15] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v15;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer__v16) {
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__Vilp5] = 0U;
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v0) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[0U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v0;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v0) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[1U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v1;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[0U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v0;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v1) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[2U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v2;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[1U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v1;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v2) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[3U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v3;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[2U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v2;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v3) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[4U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v4;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[3U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v3;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v4) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[5U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v5;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[4U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v4;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v5) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[6U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v6;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[5U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v5;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v6) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[7U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in__v7;
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[6U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v6;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v7) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[7U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in__v7;
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [2U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                  [1U] << 8U) | vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                 [0U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [3U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [5U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                               [4U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                        [3U] >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [7U] << 0x18U) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                [6U] 
                                                << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                          [8U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                               [7U] 
                                               >> 8U)) 
                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                      [6U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0xbU] << 0x18U) | ((
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                   [0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                     [9U] 
                                                     << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [0xeU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                    [0xdU] << 8U) | 
                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                   [0xcU])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [0xfU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x11U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                               [0x10U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                           [0xfU] >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x13U] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                   [0x12U] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                          [0x14U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                  [0x13U] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x12U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x17U] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                    [0x16U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                      [0x15U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [0x1aU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                     [0x19U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                    [0x18U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [0x1bU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x1dU] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                               [0x1cU]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                           [0x1bU] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x1fU] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                   [0x1eU] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                          [0x20U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                  [0x1fU] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x1eU] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x23U] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                    [0x22U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                      [0x21U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [0x26U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                     [0x25U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                    [0x24U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [0x27U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x29U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                               [0x28U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                           [0x27U] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x2bU] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                   [0x2aU] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                          [0x2cU]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                  [0x2bU] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x2aU] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x2fU] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                    [0x2eU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                      [0x2dU] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [0x32U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                     [0x31U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                    [0x30U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [0x33U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x35U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                               [0x34U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                           [0x33U] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x37U] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                   [0x36U] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                          [0x38U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                  [0x37U] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x36U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x3bU] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                    [0x3aU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                      [0x39U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [0x3eU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                     [0x3dU] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                    [0x3cU])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [0x3fU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [0U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [0U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [1U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [1U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [2U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [2U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [3U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [3U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [4U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [4U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [5U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [5U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [6U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [6U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [7U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [7U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [2U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                  [1U] << 8U) | vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                 [0U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [3U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [5U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                               [4U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                        [3U] >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [7U] << 0x18U) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                [6U] 
                                                << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                          [8U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                               [7U] 
                                               >> 8U)) 
                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                      [6U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0xbU] << 0x18U) | ((
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                   [0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                     [9U] 
                                                     << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [0xeU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                    [0xdU] << 8U) | 
                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                   [0xcU])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [0xfU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x11U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                               [0x10U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                           [0xfU] >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x13U] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                   [0x12U] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                          [0x14U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                  [0x13U] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x12U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x17U] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                    [0x16U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                      [0x15U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [0x1aU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                     [0x19U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                    [0x18U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [0x1bU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x1dU] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                               [0x1cU]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                           [0x1bU] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x1fU] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                   [0x1eU] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                          [0x20U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                  [0x1fU] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x1eU] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x23U] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                    [0x22U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                      [0x21U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [0x26U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                     [0x25U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                    [0x24U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [0x27U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x29U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                               [0x28U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                           [0x27U] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x2bU] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                   [0x2aU] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                          [0x2cU]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                  [0x2bU] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x2aU] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x2fU] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                    [0x2eU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                      [0x2dU] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [0x32U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                     [0x31U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                    [0x30U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [0x33U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x35U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                               [0x34U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                           [0x33U] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x37U] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                   [0x36U] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                          [0x38U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                  [0x37U] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x36U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x3bU] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                    [0x3aU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                      [0x39U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [0x3eU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                     [0x3dU] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                    [0x3cU])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [0x3fU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [0U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [0U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [1U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [1U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [2U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [2U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [3U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [3U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [4U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [4U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [5U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [5U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [6U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [6U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [7U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [7U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p, 0x10U)));
    if ((0U == (IData)(vlSelfRef.component_sel))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_done 
            = vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_luma;
        vlSelfRef.out_data[0U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U];
        vlSelfRef.out_data[1U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U];
        vlSelfRef.out_data[2U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U];
        vlSelfRef.out_data[3U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U];
        vlSelfRef.out_data[4U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U];
        vlSelfRef.out_data[5U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U];
        vlSelfRef.out_data[6U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U];
        vlSelfRef.out_data[7U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U];
        vlSelfRef.out_data[8U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U];
        vlSelfRef.out_data[9U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U];
        vlSelfRef.out_data[0xaU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU];
        vlSelfRef.out_data[0xbU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU];
        vlSelfRef.out_data[0xcU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU];
        vlSelfRef.out_data[0xdU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU];
        vlSelfRef.out_data[0xeU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU];
        vlSelfRef.out_data[0xfU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU];
    } else {
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_done 
            = vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_chroma;
        vlSelfRef.out_data[0U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U];
        vlSelfRef.out_data[1U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U];
        vlSelfRef.out_data[2U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U];
        vlSelfRef.out_data[3U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U];
        vlSelfRef.out_data[4U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U];
        vlSelfRef.out_data[5U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U];
        vlSelfRef.out_data[6U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U];
        vlSelfRef.out_data[7U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U];
        vlSelfRef.out_data[8U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U];
        vlSelfRef.out_data[9U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U];
        vlSelfRef.out_data[0xaU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU];
        vlSelfRef.out_data[0xbU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU];
        vlSelfRef.out_data[0xcU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU];
        vlSelfRef.out_data[0xdU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU];
        vlSelfRef.out_data[0xeU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU];
        vlSelfRef.out_data[0xfU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU];
    }
    vlSelfRef.out_valid = (4U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state));
    vlSelfRef.in_ready = (0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[0U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[1U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[2U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[3U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[4U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[5U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[6U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[7U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[0U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[1U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[2U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[3U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[4U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[5U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[6U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[7U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion 
        = ((IData)(vlSelfRef.in_ready) & (IData)(vlSelfRef.in_valid));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__k = 8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state 
        = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state;
    if ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))) {
        if (vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion) {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))) {
        if ((7U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count))) {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state = 0U;
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[0U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[1U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[2U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[3U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[4U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[5U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[6U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[7U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[0U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[1U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[2U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[3U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[4U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[5U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[6U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[7U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[0U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[1U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[2U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[3U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[4U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[5U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[6U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[7U] = 0U;
    if (((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state)) 
         | ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state)) 
            & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion)))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__k = 8U;
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[0U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[0U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[0U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[1U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[1U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[1U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[2U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[2U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[2U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[3U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[3U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[3U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[4U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[4U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[4U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[5U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[5U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[5U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[6U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[6U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[6U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[7U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[7U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[7U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
}
