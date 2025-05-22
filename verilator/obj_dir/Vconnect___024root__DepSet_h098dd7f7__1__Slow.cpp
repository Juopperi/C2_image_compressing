// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect.h for the primary calling header

#include "Vconnect__pch.h"
#include "Vconnect___024root.h"

VL_ATTR_COLD void Vconnect___024root___eval_triggers__stl(Vconnect___024root* vlSelf);
VL_ATTR_COLD void Vconnect___024root___eval_stl(Vconnect___024root* vlSelf);

VL_ATTR_COLD bool Vconnect___024root___eval_phase__stl(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_phase__stl\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconnect___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vconnect___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect___024root___dump_triggers__ico(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___dump_triggers__ico\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect___024root___dump_triggers__act(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___dump_triggers__act\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect___024root___dump_triggers__nba(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___dump_triggers__nba\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconnect___024root____Vm_traceActivitySetAll(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root____Vm_traceActivitySetAll\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vconnect___024root___ctor_var_reset(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___ctor_var_reset\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->r_all);
    VL_RAND_RESET_W(512, vlSelf->g_all);
    VL_RAND_RESET_W(512, vlSelf->b_all);
    VL_RAND_RESET_W(1024, vlSelf->y_quantized);
    VL_RAND_RESET_W(1024, vlSelf->cb_quantized);
    VL_RAND_RESET_W(1024, vlSelf->cr_quantized);
    vlSelf->done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->connect__DOT__dct_y_out);
    VL_RAND_RESET_W(2048, vlSelf->connect__DOT__dct_cb_out);
    VL_RAND_RESET_W(2048, vlSelf->connect__DOT__dct_cr_out);
    vlSelf->connect__DOT__quant_y_done = VL_RAND_RESET_I(1);
    vlSelf->connect__DOT__quant_cb_done = VL_RAND_RESET_I(1);
    vlSelf->connect__DOT__quant_cr_done = VL_RAND_RESET_I(1);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__batch_count = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(2048, vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__y_reg);
    VL_RAND_RESET_W(2048, vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__cb_reg);
    VL_RAND_RESET_W(2048, vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__cr_reg);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__done_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__r_core[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__g_core[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__b_core[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__y_core[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__cb_core[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__cr_core[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->connect__DOT__dct_y__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_y__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_y__DOT__row_cnt = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_y__DOT__col_cnt = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__input_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__output_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__trans_buff[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_y__DOT__we_trans = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__wdata_trans[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__raddr_trans[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__rdata_trans[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_y__DOT__core_in_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__core_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__core_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_y__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->connect__DOT__dct_y__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->connect__DOT__dct_y__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->connect__DOT__dct_y__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__s0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__s1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__s2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__s3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__d0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__d1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__d2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__d3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__e0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__e1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__e2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__e3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__b0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__b2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__b3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__b4 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__b5 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__b6 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__b7 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__y[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__t_b1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__t_b5 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__job[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cb__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_cb__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_cb__DOT__row_cnt = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_cb__DOT__col_cnt = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__input_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__output_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__trans_buff[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_cb__DOT__we_trans = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__wdata_trans[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__raddr_trans[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__rdata_trans[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_cb__DOT__core_in_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__core_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__core_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_cb__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->connect__DOT__dct_cb__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->connect__DOT__dct_cb__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->connect__DOT__dct_cb__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__s0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__s1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__s2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__s3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__d0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__d1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__d2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__d3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__e0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__e1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__e2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__e3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__b0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__b2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__b3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__b4 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__b5 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__b6 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__b7 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__y[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__t_b1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__t_b5 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__job[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cr__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_cr__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_cr__DOT__row_cnt = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_cr__DOT__col_cnt = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__input_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__output_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__trans_buff[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_cr__DOT__we_trans = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__wdata_trans[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__raddr_trans[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__rdata_trans[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_cr__DOT__core_in_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__core_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__core_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_cr__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->connect__DOT__dct_cr__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->connect__DOT__dct_cr__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->connect__DOT__dct_cr__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__s0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__s1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__s2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__s3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__d0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__d1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__d2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__d3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__e0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__e1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__e2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__e3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__b0 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__b2 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__b3 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__b4 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__b5 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__b6 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__b7 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__y[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__t_b1 = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__t_b5 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__job[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_y__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->connect__DOT__quant_y__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->connect__DOT__quant_y__DOT__cycle_cnt = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__quant_y__DOT__addr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__quant_y__DOT__luma_table_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__quant_y__DOT__chroma_table_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__quant_y__DOT__result_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__quant_y__DOT__pixel_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__quant_y__DOT__qtable_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__quant_y__DOT__mul_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__quant_y__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_y__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_y__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_y__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_y__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_y__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_y__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_y__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_y__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cb__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->connect__DOT__quant_cb__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->connect__DOT__quant_cb__DOT__cycle_cnt = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__quant_cb__DOT__addr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__quant_cb__DOT__luma_table_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__quant_cb__DOT__chroma_table_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__quant_cb__DOT__result_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__quant_cb__DOT__pixel_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__quant_cb__DOT__qtable_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__quant_cb__DOT__mul_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__quant_cb__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cr__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->connect__DOT__quant_cr__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->connect__DOT__quant_cr__DOT__cycle_cnt = VL_RAND_RESET_I(3);
    vlSelf->connect__DOT__quant_cr__DOT__addr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__quant_cr__DOT__luma_table_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__quant_cr__DOT__chroma_table_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->connect__DOT__quant_cr__DOT__result_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__quant_cr__DOT__pixel_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__quant_cr__DOT__qtable_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->connect__DOT__quant_cr__DOT__mul_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->connect__DOT__quant_cr__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->__Vdly__connect__DOT__rgb2ycbcr_inst__DOT__batch_count = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__connect__DOT__dct_y__DOT__row_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__connect__DOT__dct_y__DOT__col_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__connect__DOT__dct_cb__DOT__row_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__connect__DOT__dct_cb__DOT__col_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__connect__DOT__dct_cr__DOT__row_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__connect__DOT__dct_cr__DOT__col_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
