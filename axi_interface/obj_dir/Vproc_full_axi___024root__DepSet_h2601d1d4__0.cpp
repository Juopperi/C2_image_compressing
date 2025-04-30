// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproc_full_axi.h for the primary calling header

#include "Vproc_full_axi__pch.h"
#include "Vproc_full_axi___024root.h"

void Vproc_full_axi___024root___eval_act(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_act\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vproc_full_axi___024root___nba_sequent__TOP__0(Vproc_full_axi___024root* vlSelf);

void Vproc_full_axi___024root___eval_nba(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_nba\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vproc_full_axi___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vproc_full_axi___024root___nba_sequent__TOP__0(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___nba_sequent__TOP__0\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__proc_full_axi__DOT__done_reg;
    __Vdly__proc_full_axi__DOT__done_reg = 0;
    CData/*0:0*/ __Vdly__proc_full_axi__DOT__axi_awready;
    __Vdly__proc_full_axi__DOT__axi_awready = 0;
    CData/*1:0*/ __Vdly__proc_full_axi__DOT__state_write;
    __Vdly__proc_full_axi__DOT__state_write = 0;
    CData/*0:0*/ __Vdly__proc_full_axi__DOT__axi_bvalid;
    __Vdly__proc_full_axi__DOT__axi_bvalid = 0;
    CData/*1:0*/ __Vdly__proc_full_axi__DOT__state_read;
    __Vdly__proc_full_axi__DOT__state_read = 0;
    CData/*0:0*/ __Vdly__proc_full_axi__DOT__axi_arready;
    __Vdly__proc_full_axi__DOT__axi_arready = 0;
    CData/*0:0*/ __Vdly__proc_full_axi__DOT__axi_rvalid;
    __Vdly__proc_full_axi__DOT__axi_rvalid = 0;
    CData/*0:0*/ __Vdly__proc_full_axi__DOT__axi_rlast;
    __Vdly__proc_full_axi__DOT__axi_rlast = 0;
    CData/*7:0*/ __Vdly__proc_full_axi__DOT__axi_arlen;
    __Vdly__proc_full_axi__DOT__axi_arlen = 0;
    CData/*6:0*/ __Vdly__proc_full_axi__DOT__axi_awaddr;
    __Vdly__proc_full_axi__DOT__axi_awaddr = 0;
    CData/*7:0*/ __Vdly__proc_full_axi__DOT__axi_awlen_cntr;
    __Vdly__proc_full_axi__DOT__axi_awlen_cntr = 0;
    CData/*7:0*/ __Vdly__proc_full_axi__DOT__axi_arlen_cntr;
    __Vdly__proc_full_axi__DOT__axi_arlen_cntr = 0;
    CData/*6:0*/ __Vdly__proc_full_axi__DOT__axi_araddr;
    __Vdly__proc_full_axi__DOT__axi_araddr = 0;
    CData/*1:0*/ __Vdly__proc_full_axi__DOT__u_core__DOT__state;
    __Vdly__proc_full_axi__DOT__u_core__DOT__state = 0;
    CData/*7:0*/ __Vdly__proc_full_axi__DOT__u_core__DOT__cnt;
    __Vdly__proc_full_axi__DOT__u_core__DOT__cnt = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__in_buf__v0;
    __VdlyVal__proc_full_axi__DOT__in_buf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__proc_full_axi__DOT__in_buf__v0;
    __VdlyDim0__proc_full_axi__DOT__in_buf__v0 = 0;
    CData/*0:0*/ __VdlySet__proc_full_axi__DOT__in_buf__v0;
    __VdlySet__proc_full_axi__DOT__in_buf__v0 = 0;
    CData/*0:0*/ __VdlySet__proc_full_axi__DOT__in_buf__v1;
    __VdlySet__proc_full_axi__DOT__in_buf__v1 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v0;
    __VdlyVal__proc_full_axi__DOT__out_buf__v0 = 0;
    CData/*0:0*/ __VdlySet__proc_full_axi__DOT__out_buf__v0;
    __VdlySet__proc_full_axi__DOT__out_buf__v0 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v1;
    __VdlyVal__proc_full_axi__DOT__out_buf__v1 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v2;
    __VdlyVal__proc_full_axi__DOT__out_buf__v2 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v3;
    __VdlyVal__proc_full_axi__DOT__out_buf__v3 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v4;
    __VdlyVal__proc_full_axi__DOT__out_buf__v4 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v5;
    __VdlyVal__proc_full_axi__DOT__out_buf__v5 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v6;
    __VdlyVal__proc_full_axi__DOT__out_buf__v6 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v7;
    __VdlyVal__proc_full_axi__DOT__out_buf__v7 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v8;
    __VdlyVal__proc_full_axi__DOT__out_buf__v8 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v9;
    __VdlyVal__proc_full_axi__DOT__out_buf__v9 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v10;
    __VdlyVal__proc_full_axi__DOT__out_buf__v10 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v11;
    __VdlyVal__proc_full_axi__DOT__out_buf__v11 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v12;
    __VdlyVal__proc_full_axi__DOT__out_buf__v12 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v13;
    __VdlyVal__proc_full_axi__DOT__out_buf__v13 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v14;
    __VdlyVal__proc_full_axi__DOT__out_buf__v14 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v15;
    __VdlyVal__proc_full_axi__DOT__out_buf__v15 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v16;
    __VdlyVal__proc_full_axi__DOT__out_buf__v16 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v17;
    __VdlyVal__proc_full_axi__DOT__out_buf__v17 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v18;
    __VdlyVal__proc_full_axi__DOT__out_buf__v18 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v19;
    __VdlyVal__proc_full_axi__DOT__out_buf__v19 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v20;
    __VdlyVal__proc_full_axi__DOT__out_buf__v20 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v21;
    __VdlyVal__proc_full_axi__DOT__out_buf__v21 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v22;
    __VdlyVal__proc_full_axi__DOT__out_buf__v22 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v23;
    __VdlyVal__proc_full_axi__DOT__out_buf__v23 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v24;
    __VdlyVal__proc_full_axi__DOT__out_buf__v24 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v25;
    __VdlyVal__proc_full_axi__DOT__out_buf__v25 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v26;
    __VdlyVal__proc_full_axi__DOT__out_buf__v26 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v27;
    __VdlyVal__proc_full_axi__DOT__out_buf__v27 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v28;
    __VdlyVal__proc_full_axi__DOT__out_buf__v28 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v29;
    __VdlyVal__proc_full_axi__DOT__out_buf__v29 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v30;
    __VdlyVal__proc_full_axi__DOT__out_buf__v30 = 0;
    IData/*31:0*/ __VdlyVal__proc_full_axi__DOT__out_buf__v31;
    __VdlyVal__proc_full_axi__DOT__out_buf__v31 = 0;
    // Body
    __Vdly__proc_full_axi__DOT__state_write = vlSelfRef.proc_full_axi__DOT__state_write;
    __Vdly__proc_full_axi__DOT__axi_awready = vlSelfRef.proc_full_axi__DOT__axi_awready;
    __Vdly__proc_full_axi__DOT__axi_bvalid = vlSelfRef.proc_full_axi__DOT__axi_bvalid;
    __Vdly__proc_full_axi__DOT__state_read = vlSelfRef.proc_full_axi__DOT__state_read;
    __Vdly__proc_full_axi__DOT__axi_arready = vlSelfRef.proc_full_axi__DOT__axi_arready;
    __Vdly__proc_full_axi__DOT__axi_rvalid = vlSelfRef.proc_full_axi__DOT__axi_rvalid;
    __Vdly__proc_full_axi__DOT__axi_rlast = vlSelfRef.proc_full_axi__DOT__axi_rlast;
    __Vdly__proc_full_axi__DOT__axi_arlen = vlSelfRef.proc_full_axi__DOT__axi_arlen;
    __Vdly__proc_full_axi__DOT__axi_arlen_cntr = vlSelfRef.proc_full_axi__DOT__axi_arlen_cntr;
    __Vdly__proc_full_axi__DOT__axi_araddr = vlSelfRef.proc_full_axi__DOT__axi_araddr;
    __VdlySet__proc_full_axi__DOT__in_buf__v0 = 0U;
    __VdlySet__proc_full_axi__DOT__in_buf__v1 = 0U;
    __Vdly__proc_full_axi__DOT__axi_awlen_cntr = vlSelfRef.proc_full_axi__DOT__axi_awlen_cntr;
    __Vdly__proc_full_axi__DOT__axi_awaddr = vlSelfRef.proc_full_axi__DOT__axi_awaddr;
    __Vdly__proc_full_axi__DOT__u_core__DOT__state 
        = vlSelfRef.proc_full_axi__DOT__u_core__DOT__state;
    __Vdly__proc_full_axi__DOT__u_core__DOT__cnt = vlSelfRef.proc_full_axi__DOT__u_core__DOT__cnt;
    __VdlySet__proc_full_axi__DOT__out_buf__v0 = 0U;
    __Vdly__proc_full_axi__DOT__done_reg = vlSelfRef.proc_full_axi__DOT__done_reg;
    if ((1U & (~ (IData)(vlSelfRef.S_AXI_ARESETN)))) {
        vlSelfRef.proc_full_axi__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelfRef.proc_full_axi__DOT__axi_buser = 0U;
        vlSelfRef.proc_full_axi__DOT__axi_bresp = 0U;
        vlSelfRef.proc_full_axi__DOT__axi_ruser = 0U;
        vlSelfRef.proc_full_axi__DOT__axi_rresp = 0U;
    }
    if (vlSelfRef.S_AXI_ARESETN) {
        if (((IData)(vlSelfRef.S_AXI_ARVALID) & (IData)(vlSelfRef.proc_full_axi__DOT__axi_arready))) {
            __Vdly__proc_full_axi__DOT__axi_arlen_cntr = 0U;
            __Vdly__proc_full_axi__DOT__axi_araddr 
                = vlSelfRef.S_AXI_ARADDR;
            vlSelfRef.proc_full_axi__DOT__araddr_latched 
                = vlSelfRef.S_AXI_ARADDR;
        } else if (((((IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen_cntr) 
                      <= (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen)) 
                     & (IData)(vlSelfRef.proc_full_axi__DOT__axi_rvalid)) 
                    & (IData)(vlSelfRef.S_AXI_RREADY))) {
            __Vdly__proc_full_axi__DOT__axi_arlen_cntr 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen_cntr)));
            if ((0U == (IData)(vlSelfRef.proc_full_axi__DOT__axi_arburst))) {
                __Vdly__proc_full_axi__DOT__axi_araddr 
                    = vlSelfRef.proc_full_axi__DOT__axi_araddr;
            } else if ((1U == (IData)(vlSelfRef.proc_full_axi__DOT__axi_arburst))) {
                __Vdly__proc_full_axi__DOT__axi_araddr 
                    = ((3U & (IData)(__Vdly__proc_full_axi__DOT__axi_araddr)) 
                       | (0x7cU & (((IData)(1U) + ((IData)(vlSelfRef.proc_full_axi__DOT__axi_araddr) 
                                                   >> 2U)) 
                                   << 2U)));
            } else if ((2U == (IData)(vlSelfRef.proc_full_axi__DOT__axi_arburst))) {
                if (vlSelfRef.proc_full_axi__DOT__ar_wrap_en) {
                    __Vdly__proc_full_axi__DOT__axi_araddr 
                        = (0x7fU & ((IData)(vlSelfRef.proc_full_axi__DOT__axi_araddr) 
                                    - VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U)));
                } else {
                    __Vdly__proc_full_axi__DOT__axi_araddr 
                        = ((3U & (IData)(__Vdly__proc_full_axi__DOT__axi_araddr)) 
                           | (0x7cU & (((IData)(1U) 
                                        + ((IData)(vlSelfRef.proc_full_axi__DOT__axi_araddr) 
                                           >> 2U)) 
                                       << 2U)));
                }
            } else {
                __Vdly__proc_full_axi__DOT__axi_araddr 
                    = (0x7fU & ((IData)(1U) + (0x1fU 
                                               & ((IData)(vlSelfRef.proc_full_axi__DOT__axi_araddr) 
                                                  >> 2U))));
            }
        }
        if (vlSelfRef.proc_full_axi__DOT__core_done) {
            __Vdly__proc_full_axi__DOT__done_reg = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.proc_full_axi__DOT__start_reg)))) {
            __Vdly__proc_full_axi__DOT__done_reg = 0U;
        }
        if ((0U == (IData)(vlSelfRef.proc_full_axi__DOT__state_read))) {
            if (vlSelfRef.S_AXI_ARESETN) {
                __Vdly__proc_full_axi__DOT__state_read = 2U;
                __Vdly__proc_full_axi__DOT__axi_arready = 1U;
            } else {
                __Vdly__proc_full_axi__DOT__state_read 
                    = vlSelfRef.proc_full_axi__DOT__state_read;
            }
        } else if ((2U == (IData)(vlSelfRef.proc_full_axi__DOT__state_read))) {
            if (((IData)(vlSelfRef.S_AXI_ARVALID) & (IData)(vlSelfRef.proc_full_axi__DOT__axi_arready))) {
                __Vdly__proc_full_axi__DOT__state_read = 3U;
                __Vdly__proc_full_axi__DOT__axi_rvalid = 1U;
                __Vdly__proc_full_axi__DOT__axi_arready = 0U;
                vlSelfRef.proc_full_axi__DOT__axi_rid 
                    = vlSelfRef.S_AXI_ARID;
                if ((0U == (IData)(vlSelfRef.S_AXI_ARLEN))) {
                    __Vdly__proc_full_axi__DOT__axi_rlast = 1U;
                }
                vlSelfRef.proc_full_axi__DOT__axi_arburst 
                    = vlSelfRef.S_AXI_ARBURST;
                __Vdly__proc_full_axi__DOT__axi_arlen 
                    = vlSelfRef.S_AXI_ARLEN;
            } else {
                __Vdly__proc_full_axi__DOT__state_read 
                    = vlSelfRef.proc_full_axi__DOT__state_read;
            }
        } else if ((3U == (IData)(vlSelfRef.proc_full_axi__DOT__state_read))) {
            if (((((IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen_cntr) 
                   == ((IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen) 
                       - (IData)(1U))) & (~ (IData)(vlSelfRef.proc_full_axi__DOT__axi_rlast))) 
                 & (IData)(vlSelfRef.S_AXI_RREADY))) {
                __Vdly__proc_full_axi__DOT__axi_rlast = 1U;
            }
            if ((((IData)(vlSelfRef.proc_full_axi__DOT__axi_rvalid) 
                  & (IData)(vlSelfRef.S_AXI_RREADY)) 
                 & (IData)(vlSelfRef.proc_full_axi__DOT__axi_rlast))) {
                __Vdly__proc_full_axi__DOT__axi_rvalid = 0U;
                __Vdly__proc_full_axi__DOT__axi_arready = 1U;
                __Vdly__proc_full_axi__DOT__axi_rlast = 0U;
                __Vdly__proc_full_axi__DOT__state_read = 2U;
            } else {
                __Vdly__proc_full_axi__DOT__state_read 
                    = vlSelfRef.proc_full_axi__DOT__state_read;
            }
        }
        if ((0U == (IData)(vlSelfRef.proc_full_axi__DOT__u_core__DOT__state))) {
            if (vlSelfRef.proc_full_axi__DOT__start_reg) {
                vlSelfRef.proc_full_axi__DOT__u_core__DOT__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.proc_full_axi__DOT__core_busy = 1U;
                __Vdly__proc_full_axi__DOT__u_core__DOT__state = 1U;
                __Vdly__proc_full_axi__DOT__u_core__DOT__cnt = 0U;
                __VdlyVal__proc_full_axi__DOT__out_buf__v0 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0U];
                __VdlySet__proc_full_axi__DOT__out_buf__v0 = 1U;
                __VdlyVal__proc_full_axi__DOT__out_buf__v1 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [1U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v2 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [2U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v3 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [3U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v4 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [4U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v5 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [5U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v6 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [6U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v7 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [7U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v8 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [8U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v9 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [9U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v10 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0xaU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v11 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0xbU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v12 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0xcU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v13 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0xdU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v14 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0xeU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v15 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0xfU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v16 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x10U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v17 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x11U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v18 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x12U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v19 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x13U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v20 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x14U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v21 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x15U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v22 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x16U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v23 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x17U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v24 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x18U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v25 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x19U];
                __VdlyVal__proc_full_axi__DOT__out_buf__v26 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x1aU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v27 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x1bU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v28 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x1cU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v29 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x1dU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v30 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x1eU];
                __VdlyVal__proc_full_axi__DOT__out_buf__v31 
                    = vlSelfRef.proc_full_axi__DOT__in_buf
                    [0x1fU];
            }
        } else if ((1U == (IData)(vlSelfRef.proc_full_axi__DOT__u_core__DOT__state))) {
            if ((7U == (IData)(vlSelfRef.proc_full_axi__DOT__u_core__DOT__cnt))) {
                __Vdly__proc_full_axi__DOT__u_core__DOT__state = 2U;
                vlSelfRef.proc_full_axi__DOT__core_done = 1U;
                vlSelfRef.proc_full_axi__DOT__core_busy = 0U;
            } else {
                __Vdly__proc_full_axi__DOT__u_core__DOT__cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.proc_full_axi__DOT__u_core__DOT__cnt)));
            }
        } else if ((2U == (IData)(vlSelfRef.proc_full_axi__DOT__u_core__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.proc_full_axi__DOT__start_reg)))) {
                vlSelfRef.proc_full_axi__DOT__core_done = 0U;
                __Vdly__proc_full_axi__DOT__u_core__DOT__state = 0U;
            }
        } else {
            __Vdly__proc_full_axi__DOT__u_core__DOT__state = 0U;
        }
        if (((IData)(vlSelfRef.S_AXI_WVALID) & (IData)(vlSelfRef.proc_full_axi__DOT__axi_wready))) {
            if ((0U == (IData)(vlSelfRef.proc_full_axi__DOT__awaddr_latched))) {
                vlSelfRef.proc_full_axi__DOT__start_reg 
                    = (1U & vlSelfRef.S_AXI_WDATA);
            } else if ((4U == (IData)(vlSelfRef.proc_full_axi__DOT__awaddr_latched))) {
                __Vdly__proc_full_axi__DOT__done_reg 
                    = ((IData)(vlSelfRef.proc_full_axi__DOT__done_reg) 
                       & vlSelfRef.S_AXI_WDATA);
            } else if ((0x40U & (IData)(vlSelfRef.proc_full_axi__DOT__awaddr_latched))) {
                if ((1U & (~ ((IData)(vlSelfRef.proc_full_axi__DOT__awaddr_latched) 
                              >> 5U)))) {
                    __VdlyVal__proc_full_axi__DOT__in_buf__v0 
                        = vlSelfRef.S_AXI_WDATA;
                    __VdlyDim0__proc_full_axi__DOT__in_buf__v0 
                        = (0x1fU & (IData)(vlSelfRef.proc_full_axi__DOT__awaddr_latched));
                    __VdlySet__proc_full_axi__DOT__in_buf__v0 = 1U;
                }
            }
        }
        if (((IData)(vlSelfRef.S_AXI_AWVALID) & (IData)(vlSelfRef.proc_full_axi__DOT__axi_awready))) {
            if (vlSelfRef.S_AXI_WVALID) {
                if (((1U == (IData)(vlSelfRef.S_AXI_AWBURST)) 
                     | ((2U == (IData)(vlSelfRef.S_AXI_AWBURST)) 
                        & (0U != (IData)(vlSelfRef.S_AXI_AWLEN))))) {
                    __Vdly__proc_full_axi__DOT__axi_awaddr 
                        = ((3U & (IData)(__Vdly__proc_full_axi__DOT__axi_awaddr)) 
                           | (0x7cU & (((IData)(1U) 
                                        + ((IData)(vlSelfRef.S_AXI_AWADDR) 
                                           >> 2U)) 
                                       << 2U)));
                } else {
                    __Vdly__proc_full_axi__DOT__axi_awaddr 
                        = vlSelfRef.proc_full_axi__DOT__axi_awaddr;
                }
                __Vdly__proc_full_axi__DOT__axi_awlen_cntr = 1U;
            } else {
                __Vdly__proc_full_axi__DOT__axi_awaddr 
                    = vlSelfRef.S_AXI_AWADDR;
                __Vdly__proc_full_axi__DOT__axi_awlen_cntr = 0U;
            }
            vlSelfRef.proc_full_axi__DOT__awaddr_latched 
                = vlSelfRef.S_AXI_AWADDR;
        } else if ((((IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen_cntr) 
                     < (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen)) 
                    & (IData)(vlSelfRef.S_AXI_WVALID))) {
            __Vdly__proc_full_axi__DOT__axi_awlen_cntr 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen_cntr)));
            if ((0U == (IData)(vlSelfRef.proc_full_axi__DOT__axi_awburst))) {
                __Vdly__proc_full_axi__DOT__axi_awaddr 
                    = vlSelfRef.proc_full_axi__DOT__axi_awaddr;
            } else if ((1U == (IData)(vlSelfRef.proc_full_axi__DOT__axi_awburst))) {
                __Vdly__proc_full_axi__DOT__axi_awaddr 
                    = ((3U & (IData)(__Vdly__proc_full_axi__DOT__axi_awaddr)) 
                       | (0x7cU & (((IData)(1U) + ((IData)(vlSelfRef.proc_full_axi__DOT__axi_awaddr) 
                                                   >> 2U)) 
                                   << 2U)));
            } else if ((2U == (IData)(vlSelfRef.proc_full_axi__DOT__axi_awburst))) {
                if (vlSelfRef.proc_full_axi__DOT__aw_wrap_en) {
                    __Vdly__proc_full_axi__DOT__axi_awaddr 
                        = (0x7fU & ((IData)(vlSelfRef.proc_full_axi__DOT__axi_awaddr) 
                                    - VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U)));
                } else {
                    __Vdly__proc_full_axi__DOT__axi_awaddr 
                        = ((3U & (IData)(__Vdly__proc_full_axi__DOT__axi_awaddr)) 
                           | (0x7cU & (((IData)(1U) 
                                        + ((IData)(vlSelfRef.proc_full_axi__DOT__axi_awaddr) 
                                           >> 2U)) 
                                       << 2U)));
                }
            } else {
                __Vdly__proc_full_axi__DOT__axi_awaddr 
                    = (0x7fU & ((IData)(1U) + (0x1fU 
                                               & ((IData)(vlSelfRef.proc_full_axi__DOT__axi_awaddr) 
                                                  >> 2U))));
            }
        }
        if ((0U == (IData)(vlSelfRef.proc_full_axi__DOT__state_write))) {
            if (vlSelfRef.S_AXI_ARESETN) {
                __Vdly__proc_full_axi__DOT__axi_awready = 1U;
                vlSelfRef.proc_full_axi__DOT__axi_wready = 1U;
                __Vdly__proc_full_axi__DOT__state_write = 2U;
            } else {
                __Vdly__proc_full_axi__DOT__state_write 
                    = vlSelfRef.proc_full_axi__DOT__state_write;
            }
        } else if ((2U == (IData)(vlSelfRef.proc_full_axi__DOT__state_write))) {
            if (((IData)(vlSelfRef.S_AXI_AWVALID) & (IData)(vlSelfRef.proc_full_axi__DOT__axi_awready))) {
                if (((IData)(vlSelfRef.S_AXI_WVALID) 
                     & (IData)(vlSelfRef.S_AXI_WLAST))) {
                    __Vdly__proc_full_axi__DOT__axi_bvalid = 1U;
                    __Vdly__proc_full_axi__DOT__axi_awready = 1U;
                    __Vdly__proc_full_axi__DOT__state_write = 2U;
                } else {
                    if (((IData)(vlSelfRef.S_AXI_BREADY) 
                         & (IData)(vlSelfRef.proc_full_axi__DOT__axi_bvalid))) {
                        __Vdly__proc_full_axi__DOT__axi_bvalid = 0U;
                    }
                    __Vdly__proc_full_axi__DOT__state_write = 3U;
                    __Vdly__proc_full_axi__DOT__axi_awready = 0U;
                }
                vlSelfRef.proc_full_axi__DOT__axi_awburst 
                    = vlSelfRef.S_AXI_AWBURST;
                vlSelfRef.proc_full_axi__DOT__axi_awlen 
                    = vlSelfRef.S_AXI_AWLEN;
                vlSelfRef.proc_full_axi__DOT__axi_bid 
                    = vlSelfRef.S_AXI_AWID;
            } else {
                __Vdly__proc_full_axi__DOT__state_write 
                    = vlSelfRef.proc_full_axi__DOT__state_write;
                if (((IData)(vlSelfRef.S_AXI_BREADY) 
                     & (IData)(vlSelfRef.proc_full_axi__DOT__axi_bvalid))) {
                    __Vdly__proc_full_axi__DOT__axi_bvalid = 0U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.proc_full_axi__DOT__state_write))) {
            if (((IData)(vlSelfRef.S_AXI_WVALID) & (IData)(vlSelfRef.S_AXI_WLAST))) {
                __Vdly__proc_full_axi__DOT__axi_bvalid = 1U;
                __Vdly__proc_full_axi__DOT__state_write = 2U;
                __Vdly__proc_full_axi__DOT__axi_awready = 1U;
            } else {
                __Vdly__proc_full_axi__DOT__state_write 
                    = vlSelfRef.proc_full_axi__DOT__state_write;
            }
        }
    } else {
        __Vdly__proc_full_axi__DOT__axi_arlen_cntr = 0U;
        __Vdly__proc_full_axi__DOT__axi_araddr = 0U;
        __Vdly__proc_full_axi__DOT__axi_awaddr = 0U;
        __Vdly__proc_full_axi__DOT__axi_awlen_cntr = 0U;
        __Vdly__proc_full_axi__DOT__done_reg = 0U;
        vlSelfRef.proc_full_axi__DOT__araddr_latched = 0U;
        __Vdly__proc_full_axi__DOT__axi_arready = 0U;
        vlSelfRef.proc_full_axi__DOT__axi_arburst = 0U;
        __Vdly__proc_full_axi__DOT__axi_arlen = 0U;
        vlSelfRef.proc_full_axi__DOT__axi_rid = 0U;
        __Vdly__proc_full_axi__DOT__axi_rlast = 0U;
        __Vdly__proc_full_axi__DOT__axi_rvalid = 0U;
        __Vdly__proc_full_axi__DOT__state_read = 0U;
        __Vdly__proc_full_axi__DOT__u_core__DOT__state = 0U;
        vlSelfRef.proc_full_axi__DOT__core_done = 0U;
        vlSelfRef.proc_full_axi__DOT__core_busy = 0U;
        __Vdly__proc_full_axi__DOT__u_core__DOT__cnt = 0U;
        vlSelfRef.proc_full_axi__DOT__start_reg = 0U;
        __VdlySet__proc_full_axi__DOT__in_buf__v1 = 1U;
        vlSelfRef.proc_full_axi__DOT__awaddr_latched = 0U;
        __Vdly__proc_full_axi__DOT__axi_bvalid = 0U;
        __Vdly__proc_full_axi__DOT__axi_awready = 0U;
        vlSelfRef.proc_full_axi__DOT__axi_wready = 0U;
        vlSelfRef.proc_full_axi__DOT__axi_awburst = 0U;
        vlSelfRef.proc_full_axi__DOT__axi_bid = 0U;
        vlSelfRef.proc_full_axi__DOT__axi_awlen = 0U;
        __Vdly__proc_full_axi__DOT__state_write = 0U;
    }
    vlSelfRef.proc_full_axi__DOT__axi_araddr = __Vdly__proc_full_axi__DOT__axi_araddr;
    vlSelfRef.proc_full_axi__DOT__axi_awlen_cntr = __Vdly__proc_full_axi__DOT__axi_awlen_cntr;
    vlSelfRef.proc_full_axi__DOT__axi_awaddr = __Vdly__proc_full_axi__DOT__axi_awaddr;
    vlSelfRef.S_AXI_BUSER = vlSelfRef.proc_full_axi__DOT__axi_buser;
    vlSelfRef.S_AXI_BRESP = vlSelfRef.proc_full_axi__DOT__axi_bresp;
    vlSelfRef.S_AXI_RUSER = vlSelfRef.proc_full_axi__DOT__axi_ruser;
    vlSelfRef.S_AXI_RRESP = vlSelfRef.proc_full_axi__DOT__axi_rresp;
    vlSelfRef.proc_full_axi__DOT__state_read = __Vdly__proc_full_axi__DOT__state_read;
    vlSelfRef.proc_full_axi__DOT__axi_arlen_cntr = __Vdly__proc_full_axi__DOT__axi_arlen_cntr;
    vlSelfRef.proc_full_axi__DOT__axi_rlast = __Vdly__proc_full_axi__DOT__axi_rlast;
    vlSelfRef.proc_full_axi__DOT__axi_rvalid = __Vdly__proc_full_axi__DOT__axi_rvalid;
    vlSelfRef.proc_full_axi__DOT__axi_arready = __Vdly__proc_full_axi__DOT__axi_arready;
    vlSelfRef.proc_full_axi__DOT__axi_arlen = __Vdly__proc_full_axi__DOT__axi_arlen;
    vlSelfRef.proc_full_axi__DOT__u_core__DOT__state 
        = __Vdly__proc_full_axi__DOT__u_core__DOT__state;
    vlSelfRef.proc_full_axi__DOT__u_core__DOT__cnt 
        = __Vdly__proc_full_axi__DOT__u_core__DOT__cnt;
    if (__VdlySet__proc_full_axi__DOT__out_buf__v0) {
        vlSelfRef.proc_full_axi__DOT__out_buf[0U] = __VdlyVal__proc_full_axi__DOT__out_buf__v0;
        vlSelfRef.proc_full_axi__DOT__out_buf[1U] = __VdlyVal__proc_full_axi__DOT__out_buf__v1;
        vlSelfRef.proc_full_axi__DOT__out_buf[2U] = __VdlyVal__proc_full_axi__DOT__out_buf__v2;
        vlSelfRef.proc_full_axi__DOT__out_buf[3U] = __VdlyVal__proc_full_axi__DOT__out_buf__v3;
        vlSelfRef.proc_full_axi__DOT__out_buf[4U] = __VdlyVal__proc_full_axi__DOT__out_buf__v4;
        vlSelfRef.proc_full_axi__DOT__out_buf[5U] = __VdlyVal__proc_full_axi__DOT__out_buf__v5;
        vlSelfRef.proc_full_axi__DOT__out_buf[6U] = __VdlyVal__proc_full_axi__DOT__out_buf__v6;
        vlSelfRef.proc_full_axi__DOT__out_buf[7U] = __VdlyVal__proc_full_axi__DOT__out_buf__v7;
        vlSelfRef.proc_full_axi__DOT__out_buf[8U] = __VdlyVal__proc_full_axi__DOT__out_buf__v8;
        vlSelfRef.proc_full_axi__DOT__out_buf[9U] = __VdlyVal__proc_full_axi__DOT__out_buf__v9;
        vlSelfRef.proc_full_axi__DOT__out_buf[0xaU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v10;
        vlSelfRef.proc_full_axi__DOT__out_buf[0xbU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v11;
        vlSelfRef.proc_full_axi__DOT__out_buf[0xcU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v12;
        vlSelfRef.proc_full_axi__DOT__out_buf[0xdU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v13;
        vlSelfRef.proc_full_axi__DOT__out_buf[0xeU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v14;
        vlSelfRef.proc_full_axi__DOT__out_buf[0xfU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v15;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x10U] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v16;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x11U] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v17;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x12U] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v18;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x13U] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v19;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x14U] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v20;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x15U] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v21;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x16U] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v22;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x17U] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v23;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x18U] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v24;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x19U] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v25;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x1aU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v26;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x1bU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v27;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x1cU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v28;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x1dU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v29;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x1eU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v30;
        vlSelfRef.proc_full_axi__DOT__out_buf[0x1fU] 
            = __VdlyVal__proc_full_axi__DOT__out_buf__v31;
    }
    vlSelfRef.S_AXI_RID = vlSelfRef.proc_full_axi__DOT__axi_rid;
    vlSelfRef.S_AXI_RLAST = vlSelfRef.proc_full_axi__DOT__axi_rlast;
    vlSelfRef.S_AXI_RVALID = vlSelfRef.proc_full_axi__DOT__axi_rvalid;
    vlSelfRef.S_AXI_ARREADY = vlSelfRef.proc_full_axi__DOT__axi_arready;
    vlSelfRef.proc_full_axi__DOT__ar_wrap_en = (((IData)(vlSelfRef.proc_full_axi__DOT__axi_araddr) 
                                                 & VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U)) 
                                                == 
                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U));
    vlSelfRef.proc_full_axi__DOT__done_reg = __Vdly__proc_full_axi__DOT__done_reg;
    if (__VdlySet__proc_full_axi__DOT__in_buf__v0) {
        vlSelfRef.proc_full_axi__DOT__in_buf[__VdlyDim0__proc_full_axi__DOT__in_buf__v0] 
            = __VdlyVal__proc_full_axi__DOT__in_buf__v0;
    }
    if (__VdlySet__proc_full_axi__DOT__in_buf__v1) {
        vlSelfRef.proc_full_axi__DOT__in_buf[0U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[1U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[2U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[3U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[4U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[5U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[6U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[7U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[8U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[9U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0xaU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0xbU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0xcU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0xdU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0xeU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0xfU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x10U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x11U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x12U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x13U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x14U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x15U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x16U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x17U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x18U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x19U] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x1aU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x1bU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x1cU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x1dU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x1eU] = 0U;
        vlSelfRef.proc_full_axi__DOT__in_buf[0x1fU] = 0U;
    }
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
    vlSelfRef.proc_full_axi__DOT__state_write = __Vdly__proc_full_axi__DOT__state_write;
    vlSelfRef.proc_full_axi__DOT__axi_bvalid = __Vdly__proc_full_axi__DOT__axi_bvalid;
    vlSelfRef.proc_full_axi__DOT__axi_awready = __Vdly__proc_full_axi__DOT__axi_awready;
    vlSelfRef.S_AXI_WREADY = vlSelfRef.proc_full_axi__DOT__axi_wready;
    vlSelfRef.S_AXI_BVALID = vlSelfRef.proc_full_axi__DOT__axi_bvalid;
    vlSelfRef.S_AXI_BID = vlSelfRef.proc_full_axi__DOT__axi_bid;
    vlSelfRef.S_AXI_AWREADY = vlSelfRef.proc_full_axi__DOT__axi_awready;
    vlSelfRef.proc_full_axi__DOT__aw_wrap_en = (((IData)(vlSelfRef.proc_full_axi__DOT__axi_awaddr) 
                                                 & VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U)) 
                                                == 
                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U));
}

void Vproc_full_axi___024root___eval_triggers__act(Vproc_full_axi___024root* vlSelf);

bool Vproc_full_axi___024root___eval_phase__act(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_phase__act\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vproc_full_axi___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vproc_full_axi___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vproc_full_axi___024root___eval_phase__nba(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_phase__nba\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vproc_full_axi___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vproc_full_axi___024root___dump_triggers__nba(Vproc_full_axi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vproc_full_axi___024root___dump_triggers__act(Vproc_full_axi___024root* vlSelf);
#endif  // VL_DEBUG

void Vproc_full_axi___024root___eval(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vproc_full_axi___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("proc_full_axi.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vproc_full_axi___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("proc_full_axi.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vproc_full_axi___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vproc_full_axi___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vproc_full_axi___024root___eval_debug_assertions(Vproc_full_axi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root___eval_debug_assertions\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ACLK & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_ACLK");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARESETN & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_ARESETN");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWID & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_AWID");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWADDR & 0x80U)))) {
        Verilated::overWidthError("S_AXI_AWADDR");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWSIZE & 0xf8U)))) {
        Verilated::overWidthError("S_AXI_AWSIZE");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWBURST & 0xfcU)))) {
        Verilated::overWidthError("S_AXI_AWBURST");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWLOCK & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_AWLOCK");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWCACHE & 0xf0U)))) {
        Verilated::overWidthError("S_AXI_AWCACHE");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWPROT & 0xf8U)))) {
        Verilated::overWidthError("S_AXI_AWPROT");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWQOS & 0xf0U)))) {
        Verilated::overWidthError("S_AXI_AWQOS");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWREGION & 0xf0U)))) {
        Verilated::overWidthError("S_AXI_AWREGION");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWUSER & 0xfcU)))) {
        Verilated::overWidthError("S_AXI_AWUSER");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWVALID & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_AWVALID");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_WSTRB & 0xf0U)))) {
        Verilated::overWidthError("S_AXI_WSTRB");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_WLAST & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_WLAST");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_WUSER & 0xfcU)))) {
        Verilated::overWidthError("S_AXI_WUSER");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_WVALID & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_WVALID");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_BREADY & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_BREADY");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARID & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_ARID");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARADDR & 0x80U)))) {
        Verilated::overWidthError("S_AXI_ARADDR");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARSIZE & 0xf8U)))) {
        Verilated::overWidthError("S_AXI_ARSIZE");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARBURST & 0xfcU)))) {
        Verilated::overWidthError("S_AXI_ARBURST");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARLOCK & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_ARLOCK");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARCACHE & 0xf0U)))) {
        Verilated::overWidthError("S_AXI_ARCACHE");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARPROT & 0xf8U)))) {
        Verilated::overWidthError("S_AXI_ARPROT");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARQOS & 0xf0U)))) {
        Verilated::overWidthError("S_AXI_ARQOS");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARREGION & 0xf0U)))) {
        Verilated::overWidthError("S_AXI_ARREGION");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARUSER & 0xfcU)))) {
        Verilated::overWidthError("S_AXI_ARUSER");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARVALID & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_ARVALID");}
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_RREADY & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_RREADY");}
}
#endif  // VL_DEBUG
