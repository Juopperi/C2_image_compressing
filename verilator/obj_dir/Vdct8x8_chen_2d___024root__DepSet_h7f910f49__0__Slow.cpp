// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdct8x8_chen_2d.h for the primary calling header

#include "Vdct8x8_chen_2d__pch.h"
#include "Vdct8x8_chen_2d__Syms.h"
#include "Vdct8x8_chen_2d___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdct8x8_chen_2d___024root___dump_triggers__stl(Vdct8x8_chen_2d___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdct8x8_chen_2d___024root___eval_triggers__stl(Vdct8x8_chen_2d___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root___eval_triggers__stl\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdct8x8_chen_2d___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
