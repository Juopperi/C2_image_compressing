// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vproc_full_axi.h for the primary calling header

#ifndef VERILATED_VPROC_FULL_AXI___024ROOT_H_
#define VERILATED_VPROC_FULL_AXI___024ROOT_H_  // guard

#include "verilated.h"


class Vproc_full_axi__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vproc_full_axi___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(S_AXI_ACLK,0,0);
        VL_IN8(S_AXI_ARESETN,0,0);
        VL_IN8(S_AXI_AWID,0,0);
        VL_IN8(S_AXI_AWADDR,6,0);
        VL_IN8(S_AXI_AWLEN,7,0);
        VL_IN8(S_AXI_AWSIZE,2,0);
        VL_IN8(S_AXI_AWBURST,1,0);
        VL_IN8(S_AXI_AWLOCK,0,0);
        VL_IN8(S_AXI_AWCACHE,3,0);
        VL_IN8(S_AXI_AWPROT,2,0);
        VL_IN8(S_AXI_AWQOS,3,0);
        VL_IN8(S_AXI_AWREGION,3,0);
        VL_IN8(S_AXI_AWUSER,0,-1);
        VL_IN8(S_AXI_AWVALID,0,0);
        VL_OUT8(S_AXI_AWREADY,0,0);
        VL_IN8(S_AXI_WSTRB,3,0);
        VL_IN8(S_AXI_WLAST,0,0);
        VL_IN8(S_AXI_WUSER,0,-1);
        VL_IN8(S_AXI_WVALID,0,0);
        VL_OUT8(S_AXI_WREADY,0,0);
        VL_OUT8(S_AXI_BID,0,0);
        VL_OUT8(S_AXI_BRESP,1,0);
        VL_OUT8(S_AXI_BUSER,0,-1);
        VL_OUT8(S_AXI_BVALID,0,0);
        VL_IN8(S_AXI_BREADY,0,0);
        VL_IN8(S_AXI_ARID,0,0);
        VL_IN8(S_AXI_ARADDR,6,0);
        VL_IN8(S_AXI_ARLEN,7,0);
        VL_IN8(S_AXI_ARSIZE,2,0);
        VL_IN8(S_AXI_ARBURST,1,0);
        VL_IN8(S_AXI_ARLOCK,0,0);
        VL_IN8(S_AXI_ARCACHE,3,0);
        VL_IN8(S_AXI_ARPROT,2,0);
        VL_IN8(S_AXI_ARQOS,3,0);
        VL_IN8(S_AXI_ARREGION,3,0);
        VL_IN8(S_AXI_ARUSER,0,-1);
        VL_IN8(S_AXI_ARVALID,0,0);
        VL_OUT8(S_AXI_ARREADY,0,0);
        VL_OUT8(S_AXI_RID,0,0);
        VL_OUT8(S_AXI_RRESP,1,0);
        VL_OUT8(S_AXI_RLAST,0,0);
        VL_OUT8(S_AXI_RUSER,0,-1);
        VL_OUT8(S_AXI_RVALID,0,0);
        VL_IN8(S_AXI_RREADY,0,0);
        CData/*0:0*/ proc_full_axi__DOT__start_reg;
        CData/*0:0*/ proc_full_axi__DOT__done_reg;
        CData/*6:0*/ proc_full_axi__DOT__axi_awaddr;
        CData/*0:0*/ proc_full_axi__DOT__axi_awready;
        CData/*0:0*/ proc_full_axi__DOT__axi_wready;
        CData/*0:0*/ proc_full_axi__DOT__axi_bid;
        CData/*1:0*/ proc_full_axi__DOT__axi_bresp;
        CData/*1:0*/ proc_full_axi__DOT__axi_buser;
        CData/*0:0*/ proc_full_axi__DOT__axi_bvalid;
        CData/*6:0*/ proc_full_axi__DOT__axi_araddr;
        CData/*0:0*/ proc_full_axi__DOT__axi_arready;
        CData/*0:0*/ proc_full_axi__DOT__axi_rid;
        CData/*1:0*/ proc_full_axi__DOT__axi_rresp;
        CData/*0:0*/ proc_full_axi__DOT__axi_rlast;
        CData/*1:0*/ proc_full_axi__DOT__axi_ruser;
        CData/*0:0*/ proc_full_axi__DOT__axi_rvalid;
        CData/*0:0*/ proc_full_axi__DOT__aw_wrap_en;
        CData/*0:0*/ proc_full_axi__DOT__ar_wrap_en;
        CData/*7:0*/ proc_full_axi__DOT__axi_awlen_cntr;
        CData/*7:0*/ proc_full_axi__DOT__axi_arlen_cntr;
    };
    struct {
        CData/*1:0*/ proc_full_axi__DOT__axi_arburst;
        CData/*1:0*/ proc_full_axi__DOT__axi_awburst;
        CData/*7:0*/ proc_full_axi__DOT__axi_arlen;
        CData/*7:0*/ proc_full_axi__DOT__axi_awlen;
        CData/*6:0*/ proc_full_axi__DOT__awaddr_latched;
        CData/*6:0*/ proc_full_axi__DOT__araddr_latched;
        CData/*0:0*/ proc_full_axi__DOT__core_busy;
        CData/*0:0*/ proc_full_axi__DOT__core_done;
        CData/*1:0*/ proc_full_axi__DOT__state_read;
        CData/*1:0*/ proc_full_axi__DOT__state_write;
        CData/*1:0*/ proc_full_axi__DOT__u_core__DOT__state;
        CData/*7:0*/ proc_full_axi__DOT__u_core__DOT__cnt;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__S_AXI_ACLK__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(S_AXI_WDATA,31,0);
        VL_OUT(S_AXI_RDATA,31,0);
        IData/*31:0*/ proc_full_axi__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ proc_full_axi__DOT__u_core__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> proc_full_axi__DOT__in_buf;
        VlUnpacked<IData/*31:0*/, 32> proc_full_axi__DOT__out_buf;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vproc_full_axi__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vproc_full_axi___024root(Vproc_full_axi__Syms* symsp, const char* v__name);
    ~Vproc_full_axi___024root();
    VL_UNCOPYABLE(Vproc_full_axi___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
