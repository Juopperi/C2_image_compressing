// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect.h for the primary calling header

#include "Vconnect__pch.h"
#include "Vconnect__Syms.h"
#include "Vconnect___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect___024root___dump_triggers__stl(Vconnect___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconnect___024root___eval_triggers__stl(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_triggers__stl\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconnect___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
