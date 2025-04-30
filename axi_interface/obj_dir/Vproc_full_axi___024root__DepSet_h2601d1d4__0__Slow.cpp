// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproc_full_axi.h for the primary calling header

#include "Vproc_full_axi__pch.h"
#include "Vproc_full_axi___024root.h"

VL_ATTR_COLD void Vproc_full_axi___024root___eval_static(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_static\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__S_AXI_ACLK__0 
        = vlSelfRef.S_AXI_ACLK;
}

VL_ATTR_COLD void Vproc_full_axi___024root___eval_initial(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_initial\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vproc_full_axi___024root___eval_final(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_final\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproc_full_axi___024root___dump_triggers__stl(Vproc_full_axi___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vproc_full_axi___024root___eval_phase__stl(Vproc_full_axi___024root* vlSelf);

VL_ATTR_COLD void Vproc_full_axi___024root___eval_settle(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_settle\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vproc_full_axi___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("proc_full_axi.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vproc_full_axi___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproc_full_axi___024root___dump_triggers__stl(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___dump_triggers__stl\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vproc_full_axi___024root___stl_sequent__TOP__0(Vproc_full_axi___024root* vlSelf);

VL_ATTR_COLD void Vproc_full_axi___024root___eval_stl(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_stl\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vproc_full_axi___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vproc_full_axi___024root___stl_sequent__TOP__0(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___stl_sequent__TOP__0\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.S_AXI_AWREADY = vlSelfRef.proc_full_axi__DOT__axi_awready;
    vlSelfRef.S_AXI_WREADY = vlSelfRef.proc_full_axi__DOT__axi_wready;
    vlSelfRef.S_AXI_BID = vlSelfRef.proc_full_axi__DOT__axi_bid;
    vlSelfRef.S_AXI_BRESP = vlSelfRef.proc_full_axi__DOT__axi_bresp;
    vlSelfRef.S_AXI_BUSER = vlSelfRef.proc_full_axi__DOT__axi_buser;
    vlSelfRef.S_AXI_BVALID = vlSelfRef.proc_full_axi__DOT__axi_bvalid;
    vlSelfRef.S_AXI_ARREADY = vlSelfRef.proc_full_axi__DOT__axi_arready;
    vlSelfRef.S_AXI_RID = vlSelfRef.proc_full_axi__DOT__axi_rid;
    vlSelfRef.S_AXI_RRESP = vlSelfRef.proc_full_axi__DOT__axi_rresp;
    vlSelfRef.S_AXI_RLAST = vlSelfRef.proc_full_axi__DOT__axi_rlast;
    vlSelfRef.S_AXI_RUSER = vlSelfRef.proc_full_axi__DOT__axi_ruser;
    vlSelfRef.S_AXI_RVALID = vlSelfRef.proc_full_axi__DOT__axi_rvalid;
    vlSelfRef.proc_full_axi__DOT__aw_wrap_en = (((IData)(vlSelfRef.proc_full_axi__DOT__axi_awaddr) 
                                                 & VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U)) 
                                                == 
                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U));
    vlSelfRef.proc_full_axi__DOT__ar_wrap_en = (((IData)(vlSelfRef.proc_full_axi__DOT__axi_araddr) 
                                                 & VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U)) 
                                                == 
                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U));
    vlSelfRef.S_AXI_RDATA = ((4U == (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                              ? (IData)(vlSelfRef.proc_full_axi__DOT__done_reg)
                              : ((0U == (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                                  ? (IData)(vlSelfRef.proc_full_axi__DOT__start_reg)
                                  : ((0x40U & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                                      ? ((0x20U & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                                          ? vlSelfRef.proc_full_axi__DOT__out_buf
                                         [(0x1fU & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))]
                                          : vlSelfRef.proc_full_axi__DOT__in_buf
                                         [(0x1fU & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))])
                                      : 0xdeadbeefU)));
}

VL_ATTR_COLD void Vproc_full_axi___024root___eval_triggers__stl(Vproc_full_axi___024root* vlSelf);

VL_ATTR_COLD bool Vproc_full_axi___024root___eval_phase__stl(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_phase__stl\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vproc_full_axi___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vproc_full_axi___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproc_full_axi___024root___dump_triggers__act(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___dump_triggers__act\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge S_AXI_ACLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproc_full_axi___024root___dump_triggers__nba(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___dump_triggers__nba\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge S_AXI_ACLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vproc_full_axi___024root___ctor_var_reset(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___ctor_var_reset\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->S_AXI_ACLK = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_ARESETN = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_AWID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_AWADDR = VL_RAND_RESET_I(7);
    vlSelf->S_AXI_AWLEN = VL_RAND_RESET_I(8);
    vlSelf->S_AXI_AWSIZE = VL_RAND_RESET_I(3);
    vlSelf->S_AXI_AWBURST = VL_RAND_RESET_I(2);
    vlSelf->S_AXI_AWLOCK = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_AWCACHE = VL_RAND_RESET_I(4);
    vlSelf->S_AXI_AWPROT = VL_RAND_RESET_I(3);
    vlSelf->S_AXI_AWQOS = VL_RAND_RESET_I(4);
    vlSelf->S_AXI_AWREGION = VL_RAND_RESET_I(4);
    vlSelf->S_AXI_AWUSER = VL_RAND_RESET_I(2);
    vlSelf->S_AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_WDATA = VL_RAND_RESET_I(32);
    vlSelf->S_AXI_WSTRB = VL_RAND_RESET_I(4);
    vlSelf->S_AXI_WLAST = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_WUSER = VL_RAND_RESET_I(2);
    vlSelf->S_AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_BID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_BRESP = VL_RAND_RESET_I(2);
    vlSelf->S_AXI_BUSER = VL_RAND_RESET_I(2);
    vlSelf->S_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_ARID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_ARADDR = VL_RAND_RESET_I(7);
    vlSelf->S_AXI_ARLEN = VL_RAND_RESET_I(8);
    vlSelf->S_AXI_ARSIZE = VL_RAND_RESET_I(3);
    vlSelf->S_AXI_ARBURST = VL_RAND_RESET_I(2);
    vlSelf->S_AXI_ARLOCK = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_ARCACHE = VL_RAND_RESET_I(4);
    vlSelf->S_AXI_ARPROT = VL_RAND_RESET_I(3);
    vlSelf->S_AXI_ARQOS = VL_RAND_RESET_I(4);
    vlSelf->S_AXI_ARREGION = VL_RAND_RESET_I(4);
    vlSelf->S_AXI_ARUSER = VL_RAND_RESET_I(2);
    vlSelf->S_AXI_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_RID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_RDATA = VL_RAND_RESET_I(32);
    vlSelf->S_AXI_RRESP = VL_RAND_RESET_I(2);
    vlSelf->S_AXI_RLAST = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_RUSER = VL_RAND_RESET_I(2);
    vlSelf->S_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->S_AXI_RREADY = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->proc_full_axi__DOT__in_buf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->proc_full_axi__DOT__out_buf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->proc_full_axi__DOT__start_reg = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__done_reg = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__axi_awaddr = VL_RAND_RESET_I(7);
    vlSelf->proc_full_axi__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__axi_bid = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->proc_full_axi__DOT__axi_buser = VL_RAND_RESET_I(2);
    vlSelf->proc_full_axi__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__axi_araddr = VL_RAND_RESET_I(7);
    vlSelf->proc_full_axi__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__axi_rid = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->proc_full_axi__DOT__axi_rlast = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__axi_ruser = VL_RAND_RESET_I(2);
    vlSelf->proc_full_axi__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__aw_wrap_en = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__ar_wrap_en = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__axi_awlen_cntr = VL_RAND_RESET_I(8);
    vlSelf->proc_full_axi__DOT__axi_arlen_cntr = VL_RAND_RESET_I(8);
    vlSelf->proc_full_axi__DOT__axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->proc_full_axi__DOT__axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->proc_full_axi__DOT__axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->proc_full_axi__DOT__axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->proc_full_axi__DOT__awaddr_latched = VL_RAND_RESET_I(7);
    vlSelf->proc_full_axi__DOT__araddr_latched = VL_RAND_RESET_I(7);
    vlSelf->proc_full_axi__DOT__core_busy = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__core_done = VL_RAND_RESET_I(1);
    vlSelf->proc_full_axi__DOT__state_read = VL_RAND_RESET_I(2);
    vlSelf->proc_full_axi__DOT__state_write = VL_RAND_RESET_I(2);
    vlSelf->proc_full_axi__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->proc_full_axi__DOT__u_core__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->proc_full_axi__DOT__u_core__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->proc_full_axi__DOT__u_core__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__S_AXI_ACLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
