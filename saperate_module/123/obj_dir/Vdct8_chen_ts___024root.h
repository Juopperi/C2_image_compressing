// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdct8_chen_ts.h for the primary calling header

#ifndef VERILATED_VDCT8_CHEN_TS___024ROOT_H_
#define VERILATED_VDCT8_CHEN_TS___024ROOT_H_  // guard

#include "verilated.h"


class Vdct8_chen_ts__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdct8_chen_ts___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(in_valid,0,0);
        VL_OUT8(in_ready,0,0);
        VL_IN8(component_sel,1,0);
        VL_OUT8(out_valid,0,0);
        VL_IN8(out_ready,0,0);
        CData/*0:0*/ rgb2ycbcr_quant__DOT__start_conversion;
        CData/*0:0*/ rgb2ycbcr_quant__DOT__dct_in_valid;
        CData/*0:0*/ rgb2ycbcr_quant__DOT__quant_start;
        CData/*0:0*/ rgb2ycbcr_quant__DOT__quant_done_luma;
        CData/*0:0*/ rgb2ycbcr_quant__DOT__quant_done_chroma;
        CData/*0:0*/ rgb2ycbcr_quant__DOT__quant_done;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__current_state;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__next_state;
        CData/*1:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state;
        CData/*1:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count;
        CData/*0:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__done_reg;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__state;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt;
        CData/*0:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__we_trans;
        CData/*0:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in_valid;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__nstate;
        CData/*1:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state;
        CData/*1:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__next_state;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt;
        CData/*5:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr;
        CData/*1:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state;
        CData/*1:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__next_state;
        CData/*2:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt;
        CData/*5:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr;
        CData/*2:0*/ __Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt;
        CData/*2:0*/ __Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        VL_INW(r_all,511,0,16);
        VL_INW(g_all,511,0,16);
        VL_INW(b_all,511,0,16);
        VL_OUTW(out_data,1023,0,32);
        VlWide<64>/*2047:0*/ rgb2ycbcr_quant__DOT__dct_in_data;
        VlWide<64>/*2047:0*/ rgb2ycbcr_quant__DOT__dct_out_data;
        VlWide<16>/*511:0*/ rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result;
        VlWide<16>/*511:0*/ rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__k;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__j;
        VlWide<64>/*2047:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg;
        VlWide<64>/*2047:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg;
        VlWide<64>/*2047:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result;
    };
    struct {
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result;
        IData/*23:0*/ rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk1__DOT__j;
    };
    struct {
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk5__DOT__j;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk6__DOT__j;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s0;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s1;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s2;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s3;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d0;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d1;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d2;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d3;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e0;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e1;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e2;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e3;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b0;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b1;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b2;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b3;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b4;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b5;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b6;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b7;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b1;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b5;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__j;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__j;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
        IData/*31:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p;
    };
    struct {
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p;
        QData/*47:0*/ rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p;
        VlUnpacked<CData/*7:0*/, 8> rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core;
        VlUnpacked<CData/*7:0*/, 8> rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core;
        VlUnpacked<CData/*7:0*/, 8> rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core;
        VlUnpacked<IData/*31:0*/, 64> rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer;
        VlUnpacked<IData/*31:0*/, 64> rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer;
        VlUnpacked<IData/*31:0*/, 64> rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans;
        VlUnpacked<CData/*5:0*/, 8> rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y;
        VlUnpacked<QData/*47:0*/, 8> rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y;
        VlUnpacked<IData/*31:0*/, 64> rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom;
        VlUnpacked<IData/*31:0*/, 64> rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom;
        VlUnpacked<CData/*7:0*/, 64> rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out;
        VlUnpacked<IData/*31:0*/, 64> rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom;
        VlUnpacked<IData/*31:0*/, 64> rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom;
        VlUnpacked<CData/*7:0*/, 64> rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in;
        VlUnpacked<IData/*31:0*/, 8> rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdct8_chen_ts__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdct8_chen_ts___024root(Vdct8_chen_ts__Syms* symsp, const char* v__name);
    ~Vdct8_chen_ts___024root();
    VL_UNCOPYABLE(Vdct8_chen_ts___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
