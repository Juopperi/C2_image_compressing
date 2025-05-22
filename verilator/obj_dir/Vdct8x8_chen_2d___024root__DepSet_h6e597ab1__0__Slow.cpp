// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdct8x8_chen_2d.h for the primary calling header

#include "Vdct8x8_chen_2d__pch.h"
#include "Vdct8x8_chen_2d___024root.h"

VL_ATTR_COLD void Vdct8x8_chen_2d___024root___eval_static(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___eval_static\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root___eval_initial(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___eval_initial\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root___eval_final(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___eval_final\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdct8x8_chen_2d___024root___dump_triggers__stl(Vdct8x8_chen_2d___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdct8x8_chen_2d___024root___eval_phase__stl(Vdct8x8_chen_2d___024root* vlSelf);

VL_ATTR_COLD void Vdct8x8_chen_2d___024root___eval_settle(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___eval_settle\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdct8x8_chen_2d___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/dct8x8_chen_2d.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdct8x8_chen_2d___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdct8x8_chen_2d___024root___dump_triggers__stl(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___dump_triggers__stl\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdct8x8_chen_2d___024root___stl_sequent__TOP__0(Vdct8x8_chen_2d___024root* vlSelf);
VL_ATTR_COLD void Vdct8x8_chen_2d___024root____Vm_traceActivitySetAll(Vdct8x8_chen_2d___024root* vlSelf);

VL_ATTR_COLD void Vdct8x8_chen_2d___024root___eval_stl(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___eval_stl\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdct8x8_chen_2d___024root___stl_sequent__TOP__0(vlSelf);
        Vdct8x8_chen_2d___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 16> Vdct8x8_chen_2d__ConstPool__TABLE_hd61edfd7_0;

VL_ATTR_COLD void Vdct8x8_chen_2d___024root___stl_sequent__TOP__0(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___stl_sequent__TOP__0\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.out_data[0U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0U];
    vlSelfRef.out_data[1U] = (IData)((((QData)((IData)(
                                                       vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                       [2U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                                   [1U]))));
    vlSelfRef.out_data[2U] = (IData)(((((QData)((IData)(
                                                        vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                        [2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                                    [1U]))) 
                                      >> 0x20U));
    vlSelfRef.out_data[3U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [3U];
    vlSelfRef.out_data[4U] = (IData)((((QData)((IData)(
                                                       vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                       [5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                                   [4U]))));
    vlSelfRef.out_data[5U] = (IData)(((((QData)((IData)(
                                                        vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                        [5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                                    [4U]))) 
                                      >> 0x20U));
    vlSelfRef.out_data[6U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [6U];
    vlSelfRef.out_data[7U] = (IData)((((QData)((IData)(
                                                       vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                       [8U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                                   [7U]))));
    vlSelfRef.out_data[8U] = (IData)(((((QData)((IData)(
                                                        vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                        [8U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                                    [7U]))) 
                                      >> 0x20U));
    vlSelfRef.out_data[9U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [9U];
    vlSelfRef.out_data[0xaU] = (IData)((((QData)((IData)(
                                                         vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                         [0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0xaU]))));
    vlSelfRef.out_data[0xbU] = (IData)(((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0xbU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0xaU]))) 
                                        >> 0x20U));
    vlSelfRef.out_data[0xcU] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0xcU];
    vlSelfRef.out_data[0xdU] = (IData)((((QData)((IData)(
                                                         vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                         [0xeU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0xdU]))));
    vlSelfRef.out_data[0xeU] = (IData)(((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0xeU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0xdU]))) 
                                        >> 0x20U));
    vlSelfRef.out_data[0xfU] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0xfU];
    vlSelfRef.out_data[0x10U] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x11U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x10U]))));
    vlSelfRef.out_data[0x11U] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x11U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x10U]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x12U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x12U];
    vlSelfRef.out_data[0x13U] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x14U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x13U]))));
    vlSelfRef.out_data[0x14U] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x14U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x13U]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x15U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x15U];
    vlSelfRef.out_data[0x16U] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x17U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x16U]))));
    vlSelfRef.out_data[0x17U] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x17U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x16U]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x18U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x18U];
    vlSelfRef.out_data[0x19U] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x1aU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x19U]))));
    vlSelfRef.out_data[0x1aU] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x1aU])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x19U]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x1bU] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x1bU];
    vlSelfRef.out_data[0x1cU] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x1dU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x1cU]))));
    vlSelfRef.out_data[0x1dU] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x1dU])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x1cU]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x1eU] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x1eU];
    vlSelfRef.out_data[0x1fU] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x20U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x1fU]))));
    vlSelfRef.out_data[0x20U] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x20U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x1fU]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x21U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x21U];
    vlSelfRef.out_data[0x22U] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x23U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x22U]))));
    vlSelfRef.out_data[0x23U] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x23U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x22U]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x24U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x24U];
    vlSelfRef.out_data[0x25U] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x26U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x25U]))));
    vlSelfRef.out_data[0x26U] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x26U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x25U]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x27U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x27U];
    vlSelfRef.out_data[0x28U] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x29U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x28U]))));
    vlSelfRef.out_data[0x29U] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x29U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x28U]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x2aU] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x2aU];
    vlSelfRef.out_data[0x2bU] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x2cU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x2bU]))));
    vlSelfRef.out_data[0x2cU] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x2cU])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x2bU]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x2dU] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x2dU];
    vlSelfRef.out_data[0x2eU] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x2fU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x2eU]))));
    vlSelfRef.out_data[0x2fU] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x2fU])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x2eU]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x30U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x30U];
    vlSelfRef.out_data[0x31U] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x32U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x31U]))));
    vlSelfRef.out_data[0x32U] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x32U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x31U]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x33U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x33U];
    vlSelfRef.out_data[0x34U] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x35U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x34U]))));
    vlSelfRef.out_data[0x35U] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x35U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x34U]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x36U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x36U];
    vlSelfRef.out_data[0x37U] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x38U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x37U]))));
    vlSelfRef.out_data[0x38U] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x38U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x37U]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x39U] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x39U];
    vlSelfRef.out_data[0x3aU] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x3bU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x3aU]))));
    vlSelfRef.out_data[0x3bU] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x3bU])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x3aU]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x3cU] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x3cU];
    vlSelfRef.out_data[0x3dU] = (IData)((((QData)((IData)(
                                                          vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                          [0x3eU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x3dU]))));
    vlSelfRef.out_data[0x3eU] = (IData)(((((QData)((IData)(
                                                           vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                           [0x3eU])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
                                                            [0x3dU]))) 
                                         >> 0x20U));
    vlSelfRef.out_data[0x3fU] = vlSelfRef.dct8x8_chen_2d__DOT__output_buffer
        [0x3fU];
    vlSelfRef.in_ready = (0U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state));
    vlSelfRef.out_valid = (5U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state));
    vlSelfRef.dct8x8_chen_2d__DOT__we_trans = ((2U 
                                                == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state)) 
                                               & (5U 
                                                  == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state)));
    vlSelfRef.dct8x8_chen_2d__DOT__nstate = vlSelfRef.dct8x8_chen_2d__DOT__state;
    if ((4U & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.dct8x8_chen_2d__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state))) {
                if (vlSelfRef.out_ready) {
                    vlSelfRef.dct8x8_chen_2d__DOT__nstate = 0U;
                }
            } else if ((5U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))) {
                vlSelfRef.dct8x8_chen_2d__DOT__nstate 
                    = ((7U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt))
                        ? 5U : 3U);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))) {
                vlSelfRef.dct8x8_chen_2d__DOT__nstate = 4U;
            }
        } else if ((5U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))) {
            vlSelfRef.dct8x8_chen_2d__DOT__nstate = 
                ((7U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt))
                  ? 3U : 1U);
        }
    } else if ((1U & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state))) {
        if ((0U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))) {
            vlSelfRef.dct8x8_chen_2d__DOT__nstate = 2U;
        }
    } else if (vlSelfRef.in_valid) {
        vlSelfRef.dct8x8_chen_2d__DOT__nstate = 1U;
    }
    vlSelfRef.dct8x8_chen_2d__DOT__core_in_valid = 
        ((1U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state)) 
         | (3U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state)));
    vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[0U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [0U];
    vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[1U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [1U];
    vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[2U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [2U];
    vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[3U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [3U];
    vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[4U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [4U];
    vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[5U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [5U];
    vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[6U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [6U];
    vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[7U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [7U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_out[7U] = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [7U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_out[6U] = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [6U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_out[5U] = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [5U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_out[4U] = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [4U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_out[3U] = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [3U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_out[2U] = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [2U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_out[1U] = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [1U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_out[0U] = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
        [0U];
    vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[0U] 
        = (0x3fU & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt));
    vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[1U] 
        = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt)));
    vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[2U] 
        = (0x3fU & ((IData)(0x10U) + (IData)(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt)));
    vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[3U] 
        = (0x3fU & ((IData)(0x18U) + (IData)(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt)));
    vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[4U] 
        = (0x3fU & ((IData)(0x20U) + (IData)(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt)));
    vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[5U] 
        = (0x3fU & ((IData)(0x28U) + (IData)(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt)));
    vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[6U] 
        = (0x3fU & ((IData)(0x30U) + (IData)(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt)));
    vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[7U] 
        = (0x3fU & ((IData)(0x38U) + (IData)(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt)));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[0U] = 0ULL;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[1U] = 0ULL;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[2U] = 0ULL;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[3U] = 0ULL;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[4U] = 0ULL;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[5U] = 0ULL;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[6U] = 0ULL;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[7U] = 0ULL;
    if ((4U & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state)))) {
                vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[0U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b3)) 
                                    << 0x10U));
                vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[1U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b4)) 
                                    << 0x10U));
                vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[2U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b5)) 
                                    << 0x10U));
                vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[3U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b6)) 
                                    << 0x10U));
                vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[4U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b7)) 
                                    << 0x10U));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))) {
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[0U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[1U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[2U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[3U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[4U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[5U] 
                = (0x2d41ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b0)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[6U] 
                = (0x4000ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b1)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[7U] 
                = (0x4000ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b2)) 
                                << 0x10U));
        } else {
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[0U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[1U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[2U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[3U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[4U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[5U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[6U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[7U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
        }
    } else if ((1U & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))) {
        vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[0U] 
            = (0x5a82ULL | ((QData)((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e0 
                                             - vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e1))) 
                            << 0x10U));
        vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[1U] 
            = (0x7642ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e2)) 
                            << 0x10U));
        vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[2U] 
            = (0x30fcULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e3)) 
                            << 0x10U));
        vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[3U] 
            = (0x30fcULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e2)) 
                            << 0x10U));
        vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[4U] 
            = (0x7642ULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e3)) 
                            << 0x10U));
        vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[5U] 
            = (0x7d8aULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d0)) 
                            << 0x10U));
        vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[6U] 
            = (0x6a6eULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d1)) 
                            << 0x10U));
        vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job[7U] 
            = (0x471dULL | ((QData)((IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d2)) 
                            << 0x10U));
    }
    __Vtableidx1 = (((IData)(vlSelfRef.dct8x8_chen_2d__DOT__core_in_valid) 
                     << 3U) | (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__nstate 
        = Vdct8x8_chen_2d__ConstPool__TABLE_hd61edfd7_0
        [__Vtableidx1];
    vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[0U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__trans_buff
        [vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans
        [0U]];
    vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[1U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__trans_buff
        [vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans
        [1U]];
    vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[2U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__trans_buff
        [vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans
        [2U]];
    vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[3U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__trans_buff
        [vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans
        [3U]];
    vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[4U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__trans_buff
        [vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans
        [4U]];
    vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[5U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__trans_buff
        [vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans
        [5U]];
    vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[6U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__trans_buff
        [vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans
        [6U]];
    vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[7U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__trans_buff
        [vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans
        [7U]];
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                                [0U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                       [0U]))))));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                                [1U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                       [1U]))))));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                                [2U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                       [2U]))))));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                                [3U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                       [3U]))))));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                                [4U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                       [4U]))))));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                                [5U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                       [5U]))))));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                                [6U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                       [6U]))))));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                                [7U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                                       [7U]))))));
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.dct8x8_chen_2d__DOT__core_in[0U] = vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans
        [0U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_in[1U] = vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans
        [1U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_in[2U] = vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans
        [2U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_in[3U] = vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans
        [3U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_in[4U] = vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans
        [4U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_in[5U] = vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans
        [5U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_in[6U] = vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans
        [6U];
    vlSelfRef.dct8x8_chen_2d__DOT__core_in[7U] = vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans
        [7U];
    if ((1U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__state))) {
        vlSelfRef.dct8x8_chen_2d__DOT__unnamedblk5__DOT__j = 8U;
        vlSelfRef.dct8x8_chen_2d__DOT__core_in[0U] 
            = vlSelfRef.dct8x8_chen_2d__DOT__input_buffer
            [(0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt), 3U))];
        vlSelfRef.dct8x8_chen_2d__DOT__core_in[1U] 
            = vlSelfRef.dct8x8_chen_2d__DOT__input_buffer
            [(0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt), 3U)))];
        vlSelfRef.dct8x8_chen_2d__DOT__core_in[2U] 
            = vlSelfRef.dct8x8_chen_2d__DOT__input_buffer
            [(0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt), 3U)))];
        vlSelfRef.dct8x8_chen_2d__DOT__core_in[3U] 
            = vlSelfRef.dct8x8_chen_2d__DOT__input_buffer
            [(0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt), 3U)))];
        vlSelfRef.dct8x8_chen_2d__DOT__core_in[4U] 
            = vlSelfRef.dct8x8_chen_2d__DOT__input_buffer
            [(0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt), 3U)))];
        vlSelfRef.dct8x8_chen_2d__DOT__core_in[5U] 
            = vlSelfRef.dct8x8_chen_2d__DOT__input_buffer
            [(0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt), 3U)))];
        vlSelfRef.dct8x8_chen_2d__DOT__core_in[6U] 
            = vlSelfRef.dct8x8_chen_2d__DOT__input_buffer
            [(0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt), 3U)))];
        vlSelfRef.dct8x8_chen_2d__DOT__core_in[7U] 
            = vlSelfRef.dct8x8_chen_2d__DOT__input_buffer
            [(0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt), 3U)))];
    }
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[0U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[1U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[2U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[3U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[4U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[5U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[6U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result;
    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[7U] 
        = vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result;
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root___eval_triggers__stl(Vdct8x8_chen_2d___024root* vlSelf);

VL_ATTR_COLD bool Vdct8x8_chen_2d___024root___eval_phase__stl(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___eval_phase__stl\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdct8x8_chen_2d___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdct8x8_chen_2d___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdct8x8_chen_2d___024root___dump_triggers__ico(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___dump_triggers__ico\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vdct8x8_chen_2d___024root___dump_triggers__act(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___dump_triggers__act\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdct8x8_chen_2d___024root___dump_triggers__nba(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___dump_triggers__nba\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdct8x8_chen_2d___024root____Vm_traceActivitySetAll(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root____Vm_traceActivitySetAll\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root___ctor_var_reset(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___ctor_var_reset\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->in_valid = VL_RAND_RESET_I(1);
    vlSelf->in_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->in_data);
    vlSelf->out_valid = VL_RAND_RESET_I(1);
    vlSelf->out_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->out_data);
    vlSelf->dct8x8_chen_2d__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->dct8x8_chen_2d__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->dct8x8_chen_2d__DOT__row_cnt = VL_RAND_RESET_I(3);
    vlSelf->dct8x8_chen_2d__DOT__col_cnt = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__input_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__output_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__trans_buff[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->dct8x8_chen_2d__DOT__we_trans = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__wdata_trans[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__raddr_trans[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__rdata_trans[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->dct8x8_chen_2d__DOT__core_in_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__core_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__core_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->dct8x8_chen_2d__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->dct8x8_chen_2d__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->dct8x8_chen_2d__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->dct8x8_chen_2d__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__s0 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__s1 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__s2 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__s3 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__d0 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__d1 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__d2 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__d3 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__e0 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__e1 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__e2 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__e3 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__b0 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__b2 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__b3 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__b4 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__b5 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__b6 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__b7 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__y[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__t_b1 = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__t_b5 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__job[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->__Vdly__dct8x8_chen_2d__DOT__row_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__dct8x8_chen_2d__DOT__col_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
