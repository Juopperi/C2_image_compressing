// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdct8x8_chen_2d.h for the primary calling header

#ifndef VERILATED_VDCT8X8_CHEN_2D___024ROOT_H_
#define VERILATED_VDCT8X8_CHEN_2D___024ROOT_H_  // guard

#include "verilated.h"


class Vdct8x8_chen_2d__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdct8x8_chen_2d___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(in_valid,0,0);
        VL_OUT8(in_ready,0,0);
        VL_OUT8(out_valid,0,0);
        VL_IN8(out_ready,0,0);
        CData/*2:0*/ dct8x8_chen_2d__DOT__state;
        CData/*2:0*/ dct8x8_chen_2d__DOT__nstate;
        CData/*2:0*/ dct8x8_chen_2d__DOT__row_cnt;
        CData/*2:0*/ dct8x8_chen_2d__DOT__col_cnt;
        CData/*0:0*/ dct8x8_chen_2d__DOT__we_trans;
        CData/*0:0*/ dct8x8_chen_2d__DOT__core_in_valid;
        CData/*2:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__state;
        CData/*2:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__nstate;
        CData/*2:0*/ __Vdly__dct8x8_chen_2d__DOT__row_cnt;
        CData/*2:0*/ __Vdly__dct8x8_chen_2d__DOT__col_cnt;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        VL_INW(in_data,2047,0,64);
        VL_OUTW(out_data,2047,0,64);
        IData/*31:0*/ dct8x8_chen_2d__DOT__unnamedblk1__DOT__j;
        IData/*31:0*/ dct8x8_chen_2d__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ dct8x8_chen_2d__DOT__unnamedblk5__DOT__j;
        IData/*31:0*/ dct8x8_chen_2d__DOT__unnamedblk6__DOT__j;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__s0;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__s1;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__s2;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__s3;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__d0;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__d1;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__d2;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__d3;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__e0;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__e1;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__e2;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__e3;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__b0;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__b1;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__b2;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__b3;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__b4;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__b5;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__b6;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__b7;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__t_b1;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__t_b5;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result;
        IData/*31:0*/ dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p;
    };
    struct {
        QData/*47:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p;
        VlUnpacked<IData/*31:0*/, 64> dct8x8_chen_2d__DOT__input_buffer;
        VlUnpacked<IData/*31:0*/, 64> dct8x8_chen_2d__DOT__output_buffer;
        VlUnpacked<IData/*31:0*/, 64> dct8x8_chen_2d__DOT__trans_buff;
        VlUnpacked<IData/*31:0*/, 8> dct8x8_chen_2d__DOT__wdata_trans;
        VlUnpacked<CData/*5:0*/, 8> dct8x8_chen_2d__DOT__raddr_trans;
        VlUnpacked<IData/*31:0*/, 8> dct8x8_chen_2d__DOT__rdata_trans;
        VlUnpacked<IData/*31:0*/, 8> dct8x8_chen_2d__DOT__core_in;
        VlUnpacked<IData/*31:0*/, 8> dct8x8_chen_2d__DOT__core_out;
        VlUnpacked<IData/*31:0*/, 8> dct8x8_chen_2d__DOT__u_dct__DOT__y;
        VlUnpacked<QData/*47:0*/, 8> dct8x8_chen_2d__DOT__u_dct__DOT__job;
        VlUnpacked<IData/*31:0*/, 8> dct8x8_chen_2d__DOT__u_dct__DOT__mul_y;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdct8x8_chen_2d__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdct8x8_chen_2d___024root(Vdct8x8_chen_2d__Syms* symsp, const char* v__name);
    ~Vdct8x8_chen_2d___024root();
    VL_UNCOPYABLE(Vdct8x8_chen_2d___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
