// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproc_full_axi.h for the primary calling header

#include "Vproc_full_axi__pch.h"
#include "Vproc_full_axi__Syms.h"
#include "Vproc_full_axi___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproc_full_axi___024root___dump_triggers__stl(Vproc_full_axi___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vproc_full_axi___024root___eval_triggers__stl(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_triggers__stl\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vproc_full_axi___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
