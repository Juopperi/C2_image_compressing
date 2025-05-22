// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrgb2ycbcr_quant.h for the primary calling header

#include "Vrgb2ycbcr_quant__pch.h"
#include "Vrgb2ycbcr_quant___024root.h"

VL_INLINE_OPT void Vrgb2ycbcr_quant___024root___nba_sequent__TOP__1(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___nba_sequent__TOP__1\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0;
    __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v1;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v1 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v1;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v1 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v2;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v2 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v2;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v2 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v3;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v3 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v3;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v3 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v4;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v4 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v4;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v4 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v5;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v5 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v5;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v5 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v6;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v6 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v6;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v6 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v7;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v7 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v7;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v7 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v0;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v0;
    __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v1;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v1 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v2;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v3;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v3 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v4;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v4 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v5;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v5 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v6;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v6 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v7;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v7 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v8;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v8 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v9;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v9 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v10;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v10 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v11;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v11 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v12;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v12 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v13;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v13 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v14;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v14 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v15;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v15 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v16;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v16 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v17;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v17 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v18;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v18 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v19;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v19 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v20;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v20 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v21;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v21 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v22;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v22 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v23;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v23 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v24;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v24 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v25;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v25 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v26;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v26 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v27;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v27 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v28;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v28 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v29;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v29 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v30;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v30 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v31;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v31 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v32;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v32 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v33;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v33 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v34;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v34 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v35;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v35 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v36;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v36 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v37;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v37 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v38;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v38 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v39;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v39 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v40;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v40 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v41;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v41 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v42;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v42 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v43;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v43 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v44;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v44 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v45;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v45 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v46;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v46 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v47;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v47 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v48;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v48 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v49;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v49 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v50;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v50 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v51;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v51 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v52;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v52 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v53;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v53 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v54;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v54 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v55;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v55 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v56;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v56 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v57;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v57 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v58;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v58 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v59;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v59 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v60;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v60 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v61;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v61 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v62;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v62 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v63;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v63 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0;
    __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v1;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v1 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v1;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v1 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v2;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v2 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v2;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v3;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v3 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v3;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v3 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v4;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v4 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v4;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v4 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v5;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v5 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v5;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v5 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v6;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v6 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v6;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v6 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v7;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v7 = 0;
    CData/*5:0*/ __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v7;
    __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v7 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v0;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v0 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v0;
    __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v0 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v1;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v1 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v2;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v2 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v3;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v3 = 0;
    CData/*0:0*/ __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v3;
    __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v3 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v4;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v4 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v5;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v5 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v6;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v6 = 0;
    IData/*31:0*/ __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v7;
    __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v7 = 0;
    // Body
    __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v0 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v3 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0 = 0U;
    __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v0 = 0U;
    if (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__we_trans) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk1__DOT__j = 8U;
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans
            [0U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0 
            = (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U));
        __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0 = 1U;
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v1 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans
            [1U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v1 
            = (0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v2 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans
            [2U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v2 
            = (0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v3 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans
            [3U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v3 
            = (0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v4 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans
            [4U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v4 
            = (0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v5 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans
            [5U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v5 
            = (0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v6 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans
            [6U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v6 
            = (0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v7 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans
            [7U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v7 
            = (0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)));
    }
    if (((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)) 
         & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_valid))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk3__DOT__i = 0x40U;
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v0 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0U];
        __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v0 = 1U;
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v1 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[1U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v2 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[2U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v3 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[3U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v4 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[4U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v5 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[5U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v6 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[6U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v7 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[7U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v8 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[8U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v9 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[9U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v10 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0xaU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v11 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0xbU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v12 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0xcU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v13 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0xdU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v14 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0xeU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v15 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0xfU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v16 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x10U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v17 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x11U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v18 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x12U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v19 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x13U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v20 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x14U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v21 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x15U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v22 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x16U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v23 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x17U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v24 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x18U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v25 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x19U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v26 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x1aU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v27 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x1bU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v28 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x1cU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v29 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x1dU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v30 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x1eU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v31 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x1fU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v32 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x20U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v33 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x21U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v34 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x22U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v35 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x23U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v36 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x24U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v37 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x25U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v38 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x26U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v39 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x27U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v40 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x28U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v41 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x29U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v42 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x2aU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v43 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x2bU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v44 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x2cU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v45 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x2dU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v46 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x2eU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v47 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x2fU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v48 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x30U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v49 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x31U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v50 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x32U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v51 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x33U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v52 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x34U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v53 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x35U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v54 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x36U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v55 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x37U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v56 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x38U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v57 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x39U];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v58 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x3aU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v59 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x3bU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v60 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x3cU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v61 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x3dU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v62 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x3eU];
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v63 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[0x3fU];
    }
    if (((4U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)) 
         & (5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state)))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk6__DOT__j = 8U;
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out
            [0U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0 
            = (0x3fU & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt));
        __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0 = 1U;
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v1 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out
            [1U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v1 
            = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v2 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out
            [2U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v2 
            = (0x3fU & ((IData)(0x10U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v3 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out
            [3U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v3 
            = (0x3fU & ((IData)(0x18U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v4 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out
            [4U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v4 
            = (0x3fU & ((IData)(0x20U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v5 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out
            [5U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v5 
            = (0x3fU & ((IData)(0x28U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v6 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out
            [6U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v6 
            = (0x3fU & ((IData)(0x30U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
        __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v7 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out
            [7U];
        __VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v7 
            = (0x3fU & ((IData)(0x38U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
    }
    if ((1U != (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
        if ((2U != (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
            if ((3U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
                __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v0 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [5U];
                __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v0 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v1 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [6U];
                __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v2 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [7U];
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b7 
                    = (((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                         [1U] - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                         [2U]) + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                        [3U]) - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                       [4U]);
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b5 
                    = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b5 
                       + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                       [0U]);
            } else if ((4U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
                __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v3 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [0U];
                __VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v3 = 1U;
                __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v4 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [1U];
                __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v5 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [2U];
                __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v6 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [3U];
                __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v7 
                    = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [4U];
            }
        }
        if ((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b3 
                = (((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                     [1U] - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                     [2U]) - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [3U]) - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                   [4U]);
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b1 
                = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b1 
                   + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                   [0U]);
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b5 
                = ((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [5U] - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                    [6U]) + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                   [7U]);
        }
    }
    if (((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state)) 
         & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in_valid))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s3 
            = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [3U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [4U]);
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s0 
            = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [0U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [7U]);
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s2 
            = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [2U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [5U]);
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s1 
            = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [1U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [6U]);
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e3 
            = ((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                [1U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                [6U]) - (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                         [2U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                         [5U]));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e2 
            = ((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                [0U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                [7U]) - (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                         [3U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                         [4U]));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e1 
            = ((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                [1U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                [6U]) + (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                         [2U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                         [5U]));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e0 
            = ((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                [0U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                [7U]) + (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                         [3U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                         [4U]));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d3 
            = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [3U] - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [4U]);
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d2 
            = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [2U] - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [5U]);
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d0 
            = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [0U] - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [7U]);
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d1 
            = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [1U] - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
               [6U]);
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b0 
            = ((((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                  [0U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                  [7U]) + (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                           [3U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                           [4U])) + (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                     [1U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                     [6U])) + (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                               [2U] 
                                               + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                               [5U]));
    }
    if ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b6 
            = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
               [3U] - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
               [4U]);
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b2 
            = (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
               [1U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
               [2U]);
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b4 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
            [0U];
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b1 
            = ((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                [5U] + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
                [6U]) + vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y
               [7U]);
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v0;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v1] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v1;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v2] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v2;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v3] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v3;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v4] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v4;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v5] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v5;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v6] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v6;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v7] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer__v7;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v0) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[0U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v0;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[1U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v1;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[2U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v2;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v3) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[3U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v3;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[4U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v4;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[5U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v5;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[6U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v6;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[7U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y__v7;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v0;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v1] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v1;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v2] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v2;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v3] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v3;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v4] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v4;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v5] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v5;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v6] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v6;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[__VdlyDim0__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v7] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff__v7;
    }
    if (__VdlySet__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v0) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v0;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[1U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v1;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[2U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v2;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[3U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v3;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[4U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v4;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[5U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v5;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[6U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v6;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[7U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v7;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[8U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v8;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[9U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v9;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0xaU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v10;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0xbU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v11;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0xcU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v12;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0xdU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v13;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0xeU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v14;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0xfU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v15;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x10U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v16;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x11U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v17;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x12U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v18;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x13U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v19;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x14U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v20;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x15U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v21;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x16U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v22;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x17U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v23;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x18U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v24;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x19U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v25;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x1aU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v26;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x1bU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v27;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x1cU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v28;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x1dU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v29;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x1eU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v30;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x1fU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v31;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x20U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v32;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x21U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v33;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x22U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v34;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x23U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v35;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x24U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v36;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x25U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v37;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x26U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v38;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x27U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v39;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x28U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v40;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x29U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v41;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x2aU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v42;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x2bU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v43;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x2cU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v44;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x2dU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v45;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x2eU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v46;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x2fU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v47;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x30U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v48;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x31U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v49;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x32U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v50;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x33U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v51;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x34U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v52;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x35U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v53;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x36U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v54;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x37U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v55;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x38U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v56;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x39U] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v57;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x3aU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v58;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x3bU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v59;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x3cU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v60;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x3dU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v61;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x3eU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v62;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0x3fU] 
            = __VdlyVal__rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer__v63;
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [2U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [1U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [2U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [1U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[3U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [3U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [5U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [4U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [5U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [4U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[6U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [6U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [8U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [7U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [8U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [7U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[9U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [9U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0xaU] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0xbU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0xaU]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0xbU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0xbU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0xaU]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0xcU] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0xcU];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0xdU] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0xeU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0xdU]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0xeU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0xeU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0xdU]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0xfU] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0xfU];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x10U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x11U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x10U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x11U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x11U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x10U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x12U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x12U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x13U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x14U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x13U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x14U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x14U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x13U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x15U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x15U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x16U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x17U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x16U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x17U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x17U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x16U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x18U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x18U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x19U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x1aU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x19U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x1aU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x1aU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x19U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x1bU] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x1bU];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x1cU] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x1dU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x1cU]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x1dU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x1dU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x1cU]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x1eU] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x1eU];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x1fU] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x20U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x1fU]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x20U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x20U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x1fU]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x21U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x21U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x22U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x23U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x22U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x23U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x23U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x22U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x24U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x24U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x25U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x26U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x25U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x26U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x26U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x25U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x27U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x27U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x28U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x29U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x28U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x29U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x29U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x28U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x2aU] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x2aU];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x2bU] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x2cU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x2bU]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x2cU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x2cU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x2bU]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x2dU] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x2dU];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x2eU] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x2fU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x2eU]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x2fU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x2fU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x2eU]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x30U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x30U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x31U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x32U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x31U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x32U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x32U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x31U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x33U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x33U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x34U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x35U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x34U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x35U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x35U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x34U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x36U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x36U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x37U] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x38U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x37U]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x38U] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x38U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x37U]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x39U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x39U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x3aU] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x3bU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x3aU]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x3bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x3bU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x3aU]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x3cU] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x3cU];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x3dU] 
        = (IData)((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                    [0x3eU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x3dU]))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x3eU] 
        = (IData)(((((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                     [0x3eU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
                                      [0x3dU]))) >> 0x20U));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data[0x3fU] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer
        [0x3fU];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[0U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [0U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[1U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [1U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[2U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [2U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[3U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [3U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[4U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [4U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[5U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [5U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[6U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [6U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[7U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [7U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[7U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [7U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[6U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [6U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[5U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [5U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[4U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [4U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[3U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [3U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[2U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [2U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[1U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [1U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[0U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
        [0U];
}

extern const VlUnpacked<CData/*2:0*/, 256> Vrgb2ycbcr_quant__ConstPool__TABLE_hf28795f5_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vrgb2ycbcr_quant__ConstPool__TABLE_hd61edfd7_0;

VL_INLINE_OPT void Vrgb2ycbcr_quant___024root___nba_sequent__TOP__2(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___nba_sequent__TOP__2\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt 
        = vlSelfRef.__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt 
        = vlSelfRef.__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt;
    if ((0U == (IData)(vlSelfRef.component_sel))) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[__Vilp1] 
                = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    } else if ((1U == (IData)(vlSelfRef.component_sel))) {
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[__Vilp2] 
                = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
    } else if ((2U == (IData)(vlSelfRef.component_sel))) {
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[__Vilp3] 
                = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg[__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[__Vilp4] 
                = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg[__Vilp4];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_valid = 
        ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state)) 
         & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__done_reg));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[0U] 
        = (0x3fU & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[1U] 
        = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[2U] 
        = (0x3fU & ((IData)(0x10U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[3U] 
        = (0x3fU & ((IData)(0x18U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[4U] 
        = (0x3fU & ((IData)(0x20U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[5U] 
        = (0x3fU & ((IData)(0x28U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[6U] 
        = (0x3fU & ((IData)(0x30U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[7U] 
        = (0x3fU & ((IData)(0x38U) + (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt)));
    if (vlSelfRef.rst_n) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__nstate;
    } else {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state = 0U;
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state = 0U;
    }
    if ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk5__DOT__j = 8U;
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in_valid 
        = ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)) 
           | (3U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)));
    __Vtableidx1 = (((((IData)(vlSelfRef.in_valid) 
                       << 7U) | ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__done_reg) 
                                 << 6U)) | (((5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_done) 
                                               << 4U))) 
                    | (((IData)(vlSelfRef.out_ready) 
                        << 3U) | (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state)));
    vlSelfRef.rgb2ycbcr_quant__DOT__next_state = Vrgb2ycbcr_quant__ConstPool__TABLE_hf28795f5_0
        [__Vtableidx1];
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_start = (
                                                   (2U 
                                                    == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state)) 
                                                   & (5U 
                                                      == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__we_trans 
        = ((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)) 
           & (5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state;
    if ((4U & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))) {
                if ((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state))) {
                    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate = 0U;
                }
            } else if ((5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate 
                    = ((7U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt))
                        ? 5U : 3U);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate = 4U;
            }
        } else if ((5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate 
                = ((7U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt))
                    ? 3U : 1U);
        }
    } else if ((1U & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))) {
        if ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate = 2U;
        }
    } else if (vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_valid) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate = 1U;
    }
    __Vtableidx2 = (((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in_valid) 
                     << 3U) | (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__nstate 
        = Vrgb2ycbcr_quant__ConstPool__TABLE_hd61edfd7_0
        [__Vtableidx2];
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))
            ? ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_start)
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))
                               ? ((7U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt))
                                   ? 2U : 1U) : 0U));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))
            ? ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_start)
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))
                               ? ((7U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt))
                                   ? 2U : 1U) : 0U));
}

VL_INLINE_OPT void Vrgb2ycbcr_quant___024root___nba_comb__TOP__0(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___nba_comb__TOP__0\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[0U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff
        [vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans
        [0U]];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[1U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff
        [vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans
        [1U]];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[2U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff
        [vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans
        [2U]];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[3U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff
        [vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans
        [3U]];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[4U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff
        [vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans
        [4U]];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[5U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff
        [vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans
        [5U]];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[6U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff
        [vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans
        [6U]];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[7U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff
        [vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans
        [7U]];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[0U] = 0ULL;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[1U] = 0ULL;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[2U] = 0ULL;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[3U] = 0ULL;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[4U] = 0ULL;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[5U] = 0ULL;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[6U] = 0ULL;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[7U] = 0ULL;
    if ((4U & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state)))) {
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[0U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b3)) 
                                    << 0x10U));
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[1U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b4)) 
                                    << 0x10U));
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[2U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b5)) 
                                    << 0x10U));
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[3U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b6)) 
                                    << 0x10U));
                vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[4U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b7)) 
                                    << 0x10U));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[0U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[1U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[2U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[3U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[4U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[5U] 
                = (0x2d41ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b0)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[6U] 
                = (0x4000ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b1)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[7U] 
                = (0x4000ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b2)) 
                                << 0x10U));
        } else {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[0U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[1U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[2U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[3U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[4U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[5U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[6U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[7U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
        }
    } else if ((1U & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[0U] 
            = (0x5a82ULL | ((QData)((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e0 
                                             - vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e1))) 
                            << 0x10U));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[1U] 
            = (0x7642ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e2)) 
                            << 0x10U));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[2U] 
            = (0x30fcULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e3)) 
                            << 0x10U));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[3U] 
            = (0x30fcULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e2)) 
                            << 0x10U));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[4U] 
            = (0x7642ULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e3)) 
                            << 0x10U));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[5U] 
            = (0x7d8aULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d0)) 
                            << 0x10U));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[6U] 
            = (0x6a6eULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d1)) 
                            << 0x10U));
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[7U] 
            = (0x471dULL | ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d2)) 
                            << 0x10U));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[0U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans
        [0U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[1U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans
        [1U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[2U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans
        [2U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[3U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans
        [3U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[4U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans
        [4U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[5U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans
        [5U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[6U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans
        [6U];
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[7U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans
        [7U];
    if ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[0U] 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer
            [(0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U))];
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[1U] 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer
            [(0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)))];
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[2U] 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer
            [(0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)))];
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[3U] 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer
            [(0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)))];
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[4U] 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer
            [(0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)))];
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[5U] 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer
            [(0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)))];
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[6U] 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer
            [(0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)))];
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[7U] 
            = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer
            [(0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt), 3U)))];
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                                [0U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                       [0U]))))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                                [1U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                       [1U]))))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                                [2U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                       [2U]))))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                                [3U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                       [3U]))))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                                [4U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                       [4U]))))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                                [5U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                       [5U]))))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                                [6U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                       [6U]))))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                                [7U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                                       [7U]))))));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[0U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[1U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[2U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[3U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[4U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[5U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[6U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[7U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result;
}

void Vrgb2ycbcr_quant___024root___eval_triggers__act(Vrgb2ycbcr_quant___024root* vlSelf);
void Vrgb2ycbcr_quant___024root___eval_act(Vrgb2ycbcr_quant___024root* vlSelf);

bool Vrgb2ycbcr_quant___024root___eval_phase__act(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_phase__act\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vrgb2ycbcr_quant___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vrgb2ycbcr_quant___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vrgb2ycbcr_quant___024root___eval_nba(Vrgb2ycbcr_quant___024root* vlSelf);

bool Vrgb2ycbcr_quant___024root___eval_phase__nba(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_phase__nba\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vrgb2ycbcr_quant___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___dump_triggers__ico(Vrgb2ycbcr_quant___024root* vlSelf);
#endif  // VL_DEBUG
bool Vrgb2ycbcr_quant___024root___eval_phase__ico(Vrgb2ycbcr_quant___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___dump_triggers__nba(Vrgb2ycbcr_quant___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___dump_triggers__act(Vrgb2ycbcr_quant___024root* vlSelf);
#endif  // VL_DEBUG

void Vrgb2ycbcr_quant___024root___eval(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vrgb2ycbcr_quant___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/rgb2ycbcr_quant.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vrgb2ycbcr_quant___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vrgb2ycbcr_quant___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/rgb2ycbcr_quant.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrgb2ycbcr_quant___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/rgb2ycbcr_quant.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vrgb2ycbcr_quant___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vrgb2ycbcr_quant___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vrgb2ycbcr_quant___024root___eval_debug_assertions(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_debug_assertions\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.in_valid & 0xfeU)))) {
        Verilated::overWidthError("in_valid");}
    if (VL_UNLIKELY(((vlSelfRef.component_sel & 0xfcU)))) {
        Verilated::overWidthError("component_sel");}
    if (VL_UNLIKELY(((vlSelfRef.out_ready & 0xfeU)))) {
        Verilated::overWidthError("out_ready");}
}
#endif  // VL_DEBUG
