// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect.h for the primary calling header

#include "Vconnect__pch.h"
#include "Vconnect___024root.h"

VL_INLINE_OPT void Vconnect___024root___nba_sequent__TOP__1(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___nba_sequent__TOP__1\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v0;
    __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v0 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v0;
    __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_y__DOT__trans_buff__v0;
    __VdlySet__connect__DOT__dct_y__DOT__trans_buff__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v1;
    __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v1 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v1;
    __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v2;
    __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v2 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v2;
    __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v3;
    __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v3 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v3;
    __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v4;
    __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v4 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v4;
    __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v5;
    __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v5 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v5;
    __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v6;
    __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v6 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v6;
    __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v7;
    __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v7 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v7;
    __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v0;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_y__DOT__input_buffer__v0;
    __VdlySet__connect__DOT__dct_y__DOT__input_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v1;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v2;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v3;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v4;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v5;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v6;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v7;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v8;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v8 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v9;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v9 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v10;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v10 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v11;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v11 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v12;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v12 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v13;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v13 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v14;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v14 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v15;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v15 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v16;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v16 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v17;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v17 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v18;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v18 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v19;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v19 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v20;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v20 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v21;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v21 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v22;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v22 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v23;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v23 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v24;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v24 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v25;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v25 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v26;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v26 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v27;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v27 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v28;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v28 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v29;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v29 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v30;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v30 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v31;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v31 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v32;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v32 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v33;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v33 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v34;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v34 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v35;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v35 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v36;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v36 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v37;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v37 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v38;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v38 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v39;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v39 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v40;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v40 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v41;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v41 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v42;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v42 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v43;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v43 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v44;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v44 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v45;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v45 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v46;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v46 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v47;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v47 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v48;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v48 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v49;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v49 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v50;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v50 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v51;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v51 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v52;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v52 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v53;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v53 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v54;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v54 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v55;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v55 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v56;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v56 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v57;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v57 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v58;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v58 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v59;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v59 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v60;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v60 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v61;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v61 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v62;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v62 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v63;
    __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v63 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v0;
    __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v0 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v0;
    __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_y__DOT__output_buffer__v0;
    __VdlySet__connect__DOT__dct_y__DOT__output_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v1;
    __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v1 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v1;
    __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v2;
    __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v2 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v2;
    __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v3;
    __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v3 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v3;
    __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v4;
    __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v4 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v4;
    __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v5;
    __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v5 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v5;
    __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v6;
    __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v6 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v6;
    __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v7;
    __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v7 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v7;
    __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v0;
    __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_y__DOT__u_dct__DOT__y__v0;
    __VdlySet__connect__DOT__dct_y__DOT__u_dct__DOT__y__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v1;
    __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v2;
    __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v3;
    __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v3 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_y__DOT__u_dct__DOT__y__v3;
    __VdlySet__connect__DOT__dct_y__DOT__u_dct__DOT__y__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v4;
    __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v5;
    __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v6;
    __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v7;
    __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v0;
    __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v0 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v0;
    __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_cb__DOT__trans_buff__v0;
    __VdlySet__connect__DOT__dct_cb__DOT__trans_buff__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v1;
    __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v1 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v1;
    __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v2;
    __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v2 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v2;
    __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v3;
    __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v3 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v3;
    __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v4;
    __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v4 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v4;
    __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v5;
    __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v5 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v5;
    __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v6;
    __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v6 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v6;
    __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v7;
    __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v7 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v7;
    __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v0;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_cb__DOT__input_buffer__v0;
    __VdlySet__connect__DOT__dct_cb__DOT__input_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v1;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v2;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v3;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v4;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v5;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v6;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v7;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v8;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v8 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v9;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v9 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v10;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v10 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v11;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v11 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v12;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v12 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v13;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v13 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v14;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v14 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v15;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v15 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v16;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v16 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v17;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v17 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v18;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v18 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v19;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v19 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v20;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v20 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v21;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v21 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v22;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v22 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v23;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v23 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v24;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v24 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v25;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v25 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v26;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v26 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v27;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v27 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v28;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v28 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v29;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v29 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v30;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v30 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v31;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v31 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v32;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v32 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v33;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v33 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v34;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v34 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v35;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v35 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v36;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v36 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v37;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v37 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v38;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v38 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v39;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v39 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v40;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v40 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v41;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v41 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v42;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v42 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v43;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v43 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v44;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v44 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v45;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v45 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v46;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v46 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v47;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v47 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v48;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v48 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v49;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v49 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v50;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v50 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v51;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v51 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v52;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v52 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v53;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v53 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v54;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v54 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v55;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v55 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v56;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v56 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v57;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v57 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v58;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v58 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v59;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v59 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v60;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v60 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v61;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v61 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v62;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v62 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v63;
    __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v63 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v0;
    __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v0 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v0;
    __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_cb__DOT__output_buffer__v0;
    __VdlySet__connect__DOT__dct_cb__DOT__output_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v1;
    __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v1 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v1;
    __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v2;
    __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v2 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v2;
    __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v3;
    __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v3 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v3;
    __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v4;
    __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v4 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v4;
    __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v5;
    __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v5 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v5;
    __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v6;
    __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v6 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v6;
    __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v7;
    __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v7 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v7;
    __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v0;
    __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v0;
    __VdlySet__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v1;
    __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v2;
    __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v3;
    __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v3 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v3;
    __VdlySet__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v4;
    __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v5;
    __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v6;
    __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v7;
    __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v0;
    __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v0 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v0;
    __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_cr__DOT__trans_buff__v0;
    __VdlySet__connect__DOT__dct_cr__DOT__trans_buff__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v1;
    __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v1 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v1;
    __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v2;
    __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v2 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v2;
    __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v3;
    __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v3 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v3;
    __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v4;
    __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v4 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v4;
    __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v5;
    __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v5 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v5;
    __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v6;
    __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v6 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v6;
    __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v7;
    __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v7 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v7;
    __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v0;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_cr__DOT__input_buffer__v0;
    __VdlySet__connect__DOT__dct_cr__DOT__input_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v1;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v2;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v3;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v4;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v5;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v6;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v7;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v8;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v8 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v9;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v9 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v10;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v10 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v11;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v11 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v12;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v12 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v13;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v13 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v14;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v14 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v15;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v15 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v16;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v16 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v17;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v17 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v18;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v18 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v19;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v19 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v20;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v20 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v21;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v21 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v22;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v22 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v23;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v23 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v24;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v24 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v25;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v25 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v26;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v26 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v27;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v27 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v28;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v28 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v29;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v29 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v30;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v30 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v31;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v31 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v32;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v32 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v33;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v33 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v34;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v34 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v35;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v35 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v36;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v36 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v37;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v37 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v38;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v38 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v39;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v39 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v40;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v40 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v41;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v41 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v42;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v42 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v43;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v43 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v44;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v44 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v45;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v45 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v46;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v46 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v47;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v47 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v48;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v48 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v49;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v49 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v50;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v50 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v51;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v51 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v52;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v52 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v53;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v53 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v54;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v54 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v55;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v55 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v56;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v56 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v57;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v57 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v58;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v58 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v59;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v59 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v60;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v60 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v61;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v61 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v62;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v62 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v63;
    __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v63 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v0;
    __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v0 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v0;
    __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_cr__DOT__output_buffer__v0;
    __VdlySet__connect__DOT__dct_cr__DOT__output_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v1;
    __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v1 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v1;
    __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v2;
    __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v2 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v2;
    __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v3;
    __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v3 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v3;
    __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v4;
    __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v4 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v4;
    __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v5;
    __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v5 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v5;
    __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v6;
    __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v6 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v6;
    __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v7;
    __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v7 = 0;
    CData/*5:0*/ __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v7;
    __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v7 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v0;
    __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v0 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v0;
    __VdlySet__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v0 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v1;
    __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v1 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v2;
    __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v2 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v3;
    __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v3 = 0;
    CData/*0:0*/ __VdlySet__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v3;
    __VdlySet__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v3 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v4;
    __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v4 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v5;
    __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v5 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v6;
    __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v6 = 0;
    IData/*31:0*/ __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v7;
    __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v7 = 0;
    // Body
    __VdlySet__connect__DOT__dct_y__DOT__output_buffer__v0 = 0U;
    __VdlySet__connect__DOT__dct_cb__DOT__output_buffer__v0 = 0U;
    __VdlySet__connect__DOT__dct_cr__DOT__output_buffer__v0 = 0U;
    __VdlySet__connect__DOT__dct_y__DOT__u_dct__DOT__y__v0 = 0U;
    __VdlySet__connect__DOT__dct_y__DOT__u_dct__DOT__y__v3 = 0U;
    __VdlySet__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v0 = 0U;
    __VdlySet__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v3 = 0U;
    __VdlySet__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v0 = 0U;
    __VdlySet__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v3 = 0U;
    __VdlySet__connect__DOT__dct_y__DOT__trans_buff__v0 = 0U;
    __VdlySet__connect__DOT__dct_cb__DOT__trans_buff__v0 = 0U;
    __VdlySet__connect__DOT__dct_cr__DOT__trans_buff__v0 = 0U;
    __VdlySet__connect__DOT__dct_y__DOT__input_buffer__v0 = 0U;
    __VdlySet__connect__DOT__dct_cb__DOT__input_buffer__v0 = 0U;
    __VdlySet__connect__DOT__dct_cr__DOT__input_buffer__v0 = 0U;
    if (vlSelfRef.connect__DOT__dct_y__DOT__we_trans) {
        vlSelfRef.connect__DOT__dct_y__DOT__unnamedblk1__DOT__j = 8U;
        __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v0 
            = vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans
            [0U];
        __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v0 
            = (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U));
        __VdlySet__connect__DOT__dct_y__DOT__trans_buff__v0 = 1U;
        __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v1 
            = vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans
            [1U];
        __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v1 
            = (0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v2 
            = vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans
            [2U];
        __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v2 
            = (0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v3 
            = vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans
            [3U];
        __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v3 
            = (0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v4 
            = vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans
            [4U];
        __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v4 
            = (0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v5 
            = vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans
            [5U];
        __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v5 
            = (0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v6 
            = vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans
            [6U];
        __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v6 
            = (0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v7 
            = vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans
            [7U];
        __VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v7 
            = (0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)));
    }
    if (vlSelfRef.connect__DOT__dct_cb__DOT__we_trans) {
        vlSelfRef.connect__DOT__dct_cb__DOT__unnamedblk1__DOT__j = 8U;
        __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v0 
            = vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans
            [0U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v0 
            = (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U));
        __VdlySet__connect__DOT__dct_cb__DOT__trans_buff__v0 = 1U;
        __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v1 
            = vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans
            [1U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v1 
            = (0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v2 
            = vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans
            [2U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v2 
            = (0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v3 
            = vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans
            [3U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v3 
            = (0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v4 
            = vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans
            [4U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v4 
            = (0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v5 
            = vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans
            [5U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v5 
            = (0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v6 
            = vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans
            [6U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v6 
            = (0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v7 
            = vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans
            [7U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v7 
            = (0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)));
    }
    if (vlSelfRef.connect__DOT__dct_cr__DOT__we_trans) {
        vlSelfRef.connect__DOT__dct_cr__DOT__unnamedblk1__DOT__j = 8U;
        __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v0 
            = vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans
            [0U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v0 
            = (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U));
        __VdlySet__connect__DOT__dct_cr__DOT__trans_buff__v0 = 1U;
        __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v1 
            = vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans
            [1U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v1 
            = (0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v2 
            = vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans
            [2U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v2 
            = (0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v3 
            = vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans
            [3U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v3 
            = (0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v4 
            = vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans
            [4U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v4 
            = (0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v5 
            = vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans
            [5U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v5 
            = (0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v6 
            = vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans
            [6U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v6 
            = (0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)));
        __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v7 
            = vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans
            [7U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v7 
            = (0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)));
    }
    if (((4U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state)) 
         & (5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state)))) {
        vlSelfRef.connect__DOT__dct_y__DOT__unnamedblk6__DOT__j = 8U;
        __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v0 
            = vlSelfRef.connect__DOT__dct_y__DOT__core_out
            [0U];
        __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v0 
            = (0x3fU & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt));
        __VdlySet__connect__DOT__dct_y__DOT__output_buffer__v0 = 1U;
        __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v1 
            = vlSelfRef.connect__DOT__dct_y__DOT__core_out
            [1U];
        __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v1 
            = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v2 
            = vlSelfRef.connect__DOT__dct_y__DOT__core_out
            [2U];
        __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v2 
            = (0x3fU & ((IData)(0x10U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v3 
            = vlSelfRef.connect__DOT__dct_y__DOT__core_out
            [3U];
        __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v3 
            = (0x3fU & ((IData)(0x18U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v4 
            = vlSelfRef.connect__DOT__dct_y__DOT__core_out
            [4U];
        __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v4 
            = (0x3fU & ((IData)(0x20U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v5 
            = vlSelfRef.connect__DOT__dct_y__DOT__core_out
            [5U];
        __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v5 
            = (0x3fU & ((IData)(0x28U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v6 
            = vlSelfRef.connect__DOT__dct_y__DOT__core_out
            [6U];
        __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v6 
            = (0x3fU & ((IData)(0x30U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v7 
            = vlSelfRef.connect__DOT__dct_y__DOT__core_out
            [7U];
        __VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v7 
            = (0x3fU & ((IData)(0x38U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
    }
    if (((4U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state)) 
         & (5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state)))) {
        vlSelfRef.connect__DOT__dct_cb__DOT__unnamedblk6__DOT__j = 8U;
        __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v0 
            = vlSelfRef.connect__DOT__dct_cb__DOT__core_out
            [0U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v0 
            = (0x3fU & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt));
        __VdlySet__connect__DOT__dct_cb__DOT__output_buffer__v0 = 1U;
        __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v1 
            = vlSelfRef.connect__DOT__dct_cb__DOT__core_out
            [1U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v1 
            = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v2 
            = vlSelfRef.connect__DOT__dct_cb__DOT__core_out
            [2U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v2 
            = (0x3fU & ((IData)(0x10U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v3 
            = vlSelfRef.connect__DOT__dct_cb__DOT__core_out
            [3U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v3 
            = (0x3fU & ((IData)(0x18U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v4 
            = vlSelfRef.connect__DOT__dct_cb__DOT__core_out
            [4U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v4 
            = (0x3fU & ((IData)(0x20U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v5 
            = vlSelfRef.connect__DOT__dct_cb__DOT__core_out
            [5U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v5 
            = (0x3fU & ((IData)(0x28U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v6 
            = vlSelfRef.connect__DOT__dct_cb__DOT__core_out
            [6U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v6 
            = (0x3fU & ((IData)(0x30U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v7 
            = vlSelfRef.connect__DOT__dct_cb__DOT__core_out
            [7U];
        __VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v7 
            = (0x3fU & ((IData)(0x38U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
    }
    if (((4U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state)) 
         & (5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state)))) {
        vlSelfRef.connect__DOT__dct_cr__DOT__unnamedblk6__DOT__j = 8U;
        __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v0 
            = vlSelfRef.connect__DOT__dct_cr__DOT__core_out
            [0U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v0 
            = (0x3fU & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt));
        __VdlySet__connect__DOT__dct_cr__DOT__output_buffer__v0 = 1U;
        __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v1 
            = vlSelfRef.connect__DOT__dct_cr__DOT__core_out
            [1U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v1 
            = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v2 
            = vlSelfRef.connect__DOT__dct_cr__DOT__core_out
            [2U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v2 
            = (0x3fU & ((IData)(0x10U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v3 
            = vlSelfRef.connect__DOT__dct_cr__DOT__core_out
            [3U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v3 
            = (0x3fU & ((IData)(0x18U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v4 
            = vlSelfRef.connect__DOT__dct_cr__DOT__core_out
            [4U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v4 
            = (0x3fU & ((IData)(0x20U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v5 
            = vlSelfRef.connect__DOT__dct_cr__DOT__core_out
            [5U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v5 
            = (0x3fU & ((IData)(0x28U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v6 
            = vlSelfRef.connect__DOT__dct_cr__DOT__core_out
            [6U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v6 
            = (0x3fU & ((IData)(0x30U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
        __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v7 
            = vlSelfRef.connect__DOT__dct_cr__DOT__core_out
            [7U];
        __VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v7 
            = (0x3fU & ((IData)(0x38U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
    }
    if (((0U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state)) 
         & (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__done_reg))) {
        vlSelfRef.connect__DOT__dct_y__DOT__unnamedblk3__DOT__i = 0x40U;
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v0 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0U];
        __VdlySet__connect__DOT__dct_y__DOT__input_buffer__v0 = 1U;
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v1 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[1U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v2 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[2U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v3 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[3U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v4 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[4U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v5 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[5U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v6 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[6U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v7 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[7U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v8 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[8U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v9 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[9U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v10 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0xaU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v11 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0xbU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v12 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0xcU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v13 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0xdU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v14 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0xeU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v15 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0xfU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v16 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x10U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v17 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x11U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v18 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x12U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v19 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x13U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v20 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x14U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v21 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x15U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v22 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x16U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v23 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x17U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v24 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x18U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v25 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x19U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v26 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x1aU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v27 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x1bU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v28 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x1cU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v29 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x1dU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v30 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x1eU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v31 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x1fU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v32 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x20U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v33 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x21U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v34 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x22U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v35 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x23U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v36 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x24U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v37 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x25U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v38 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x26U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v39 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x27U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v40 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x28U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v41 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x29U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v42 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x2aU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v43 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x2bU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v44 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x2cU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v45 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x2dU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v46 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x2eU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v47 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x2fU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v48 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x30U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v49 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x31U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v50 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x32U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v51 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x33U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v52 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x34U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v53 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x35U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v54 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x36U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v55 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x37U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v56 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x38U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v57 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x39U];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v58 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x3aU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v59 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x3bU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v60 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x3cU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v61 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x3dU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v62 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x3eU];
        __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v63 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[0x3fU];
    }
    if (((0U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state)) 
         & (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__done_reg))) {
        vlSelfRef.connect__DOT__dct_cb__DOT__unnamedblk3__DOT__i = 0x40U;
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v0 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0U];
        __VdlySet__connect__DOT__dct_cb__DOT__input_buffer__v0 = 1U;
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v1 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[1U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v2 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[2U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v3 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[3U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v4 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[4U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v5 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[5U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v6 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[6U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v7 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[7U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v8 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[8U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v9 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[9U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v10 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0xaU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v11 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0xbU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v12 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0xcU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v13 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0xdU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v14 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0xeU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v15 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0xfU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v16 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x10U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v17 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x11U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v18 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x12U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v19 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x13U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v20 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x14U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v21 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x15U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v22 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x16U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v23 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x17U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v24 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x18U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v25 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x19U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v26 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x1aU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v27 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x1bU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v28 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x1cU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v29 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x1dU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v30 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x1eU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v31 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x1fU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v32 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x20U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v33 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x21U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v34 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x22U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v35 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x23U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v36 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x24U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v37 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x25U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v38 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x26U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v39 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x27U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v40 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x28U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v41 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x29U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v42 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x2aU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v43 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x2bU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v44 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x2cU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v45 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x2dU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v46 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x2eU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v47 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x2fU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v48 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x30U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v49 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x31U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v50 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x32U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v51 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x33U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v52 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x34U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v53 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x35U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v54 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x36U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v55 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x37U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v56 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x38U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v57 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x39U];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v58 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x3aU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v59 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x3bU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v60 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x3cU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v61 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x3dU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v62 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x3eU];
        __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v63 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[0x3fU];
    }
    if (((0U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state)) 
         & (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__done_reg))) {
        vlSelfRef.connect__DOT__dct_cr__DOT__unnamedblk3__DOT__i = 0x40U;
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v0 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0U];
        __VdlySet__connect__DOT__dct_cr__DOT__input_buffer__v0 = 1U;
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v1 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[1U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v2 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[2U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v3 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[3U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v4 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[4U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v5 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[5U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v6 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[6U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v7 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[7U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v8 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[8U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v9 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[9U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v10 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0xaU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v11 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0xbU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v12 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0xcU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v13 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0xdU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v14 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0xeU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v15 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0xfU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v16 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x10U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v17 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x11U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v18 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x12U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v19 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x13U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v20 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x14U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v21 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x15U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v22 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x16U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v23 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x17U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v24 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x18U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v25 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x19U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v26 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x1aU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v27 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x1bU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v28 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x1cU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v29 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x1dU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v30 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x1eU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v31 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x1fU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v32 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x20U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v33 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x21U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v34 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x22U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v35 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x23U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v36 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x24U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v37 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x25U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v38 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x26U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v39 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x27U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v40 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x28U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v41 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x29U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v42 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x2aU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v43 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x2bU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v44 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x2cU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v45 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x2dU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v46 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x2eU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v47 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x2fU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v48 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x30U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v49 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x31U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v50 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x32U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v51 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x33U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v52 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x34U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v53 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x35U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v54 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x36U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v55 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x37U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v56 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x38U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v57 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x39U];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v58 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x3aU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v59 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x3bU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v60 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x3cU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v61 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x3dU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v62 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x3eU];
        __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v63 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[0x3fU];
    }
    if ((1U != (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
        if ((2U != (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
            if ((3U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
                __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v0 
                    = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [5U];
                __VdlySet__connect__DOT__dct_y__DOT__u_dct__DOT__y__v0 = 1U;
                __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v1 
                    = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [6U];
                __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v2 
                    = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [7U];
                vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b7 
                    = (((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                         [1U] - vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                         [2U]) + vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                        [3U]) - vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                       [4U]);
                vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b5 
                    = (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__t_b5 
                       + vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                       [0U]);
            } else if ((4U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
                __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v3 
                    = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [0U];
                __VdlySet__connect__DOT__dct_y__DOT__u_dct__DOT__y__v3 = 1U;
                __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v4 
                    = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [1U];
                __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v5 
                    = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [2U];
                __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v6 
                    = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [3U];
                __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v7 
                    = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [4U];
            }
        }
        if ((2U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b3 
                = (((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                     [1U] - vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                     [2U]) - vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [3U]) - vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                   [4U]);
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b1 
                = (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__t_b1 
                   + vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                   [0U]);
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__t_b5 
                = ((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [5U] - vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                    [6U]) + vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                   [7U]);
        }
    }
    if ((1U != (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
        if ((2U != (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
            if ((3U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
                __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v0 
                    = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [5U];
                __VdlySet__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v0 = 1U;
                __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v1 
                    = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [6U];
                __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v2 
                    = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [7U];
                vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b7 
                    = (((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                         [1U] - vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                         [2U]) + vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                        [3U]) - vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                       [4U]);
                vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b5 
                    = (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__t_b5 
                       + vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                       [0U]);
            } else if ((4U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
                __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v3 
                    = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [0U];
                __VdlySet__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v3 = 1U;
                __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v4 
                    = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [1U];
                __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v5 
                    = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [2U];
                __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v6 
                    = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [3U];
                __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v7 
                    = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [4U];
            }
        }
        if ((2U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b3 
                = (((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                     [1U] - vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                     [2U]) - vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [3U]) - vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                   [4U]);
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b1 
                = (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__t_b1 
                   + vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                   [0U]);
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__t_b5 
                = ((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [5U] - vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                    [6U]) + vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                   [7U]);
        }
    }
    if ((1U != (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
        if ((2U != (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
            if ((3U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
                __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v0 
                    = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [5U];
                __VdlySet__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v0 = 1U;
                __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v1 
                    = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [6U];
                __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v2 
                    = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [7U];
                vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b7 
                    = (((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                         [1U] - vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                         [2U]) + vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                        [3U]) - vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                       [4U]);
                vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b5 
                    = (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__t_b5 
                       + vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                       [0U]);
            } else if ((4U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
                __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v3 
                    = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [0U];
                __VdlySet__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v3 = 1U;
                __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v4 
                    = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [1U];
                __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v5 
                    = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [2U];
                __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v6 
                    = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [3U];
                __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v7 
                    = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [4U];
            }
        }
        if ((2U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b3 
                = (((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                     [1U] - vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                     [2U]) - vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [3U]) - vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                   [4U]);
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b1 
                = (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__t_b1 
                   + vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                   [0U]);
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__t_b5 
                = ((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [5U] - vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                    [6U]) + vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                   [7U]);
        }
    }
    if (((0U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state)) 
         & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__core_in_valid))) {
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__s3 
            = (vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [3U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [4U]);
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__s0 
            = (vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [0U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [7U]);
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__s2 
            = (vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [2U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [5U]);
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__s1 
            = (vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [1U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [6U]);
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e3 
            = ((vlSelfRef.connect__DOT__dct_y__DOT__core_in
                [1U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                [6U]) - (vlSelfRef.connect__DOT__dct_y__DOT__core_in
                         [2U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                         [5U]));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e2 
            = ((vlSelfRef.connect__DOT__dct_y__DOT__core_in
                [0U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                [7U]) - (vlSelfRef.connect__DOT__dct_y__DOT__core_in
                         [3U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                         [4U]));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e1 
            = ((vlSelfRef.connect__DOT__dct_y__DOT__core_in
                [1U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                [6U]) + (vlSelfRef.connect__DOT__dct_y__DOT__core_in
                         [2U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                         [5U]));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e0 
            = ((vlSelfRef.connect__DOT__dct_y__DOT__core_in
                [0U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                [7U]) + (vlSelfRef.connect__DOT__dct_y__DOT__core_in
                         [3U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                         [4U]));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d3 
            = (vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [3U] - vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [4U]);
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d2 
            = (vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [2U] - vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [5U]);
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d0 
            = (vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [0U] - vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [7U]);
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d1 
            = (vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [1U] - vlSelfRef.connect__DOT__dct_y__DOT__core_in
               [6U]);
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b0 
            = ((((vlSelfRef.connect__DOT__dct_y__DOT__core_in
                  [0U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                  [7U]) + (vlSelfRef.connect__DOT__dct_y__DOT__core_in
                           [3U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                           [4U])) + (vlSelfRef.connect__DOT__dct_y__DOT__core_in
                                     [1U] + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                                     [6U])) + (vlSelfRef.connect__DOT__dct_y__DOT__core_in
                                               [2U] 
                                               + vlSelfRef.connect__DOT__dct_y__DOT__core_in
                                               [5U]));
    }
    if (((0U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state)) 
         & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__core_in_valid))) {
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__s3 
            = (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [3U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [4U]);
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__s0 
            = (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [0U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [7U]);
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__s2 
            = (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [2U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [5U]);
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__s1 
            = (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [1U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [6U]);
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e3 
            = ((vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                [1U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                [6U]) - (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                         [2U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                         [5U]));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e2 
            = ((vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                [0U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                [7U]) - (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                         [3U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                         [4U]));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e1 
            = ((vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                [1U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                [6U]) + (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                         [2U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                         [5U]));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e0 
            = ((vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                [0U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                [7U]) + (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                         [3U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                         [4U]));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d3 
            = (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [3U] - vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [4U]);
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d2 
            = (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [2U] - vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [5U]);
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d0 
            = (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [0U] - vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [7U]);
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d1 
            = (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [1U] - vlSelfRef.connect__DOT__dct_cb__DOT__core_in
               [6U]);
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b0 
            = ((((vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                  [0U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                  [7U]) + (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                           [3U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                           [4U])) + (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                                     [1U] + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                                     [6U])) + (vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                                               [2U] 
                                               + vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                                               [5U]));
    }
    if (((0U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state)) 
         & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__core_in_valid))) {
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__s3 
            = (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [3U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [4U]);
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__s0 
            = (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [0U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [7U]);
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__s2 
            = (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [2U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [5U]);
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__s1 
            = (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [1U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [6U]);
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e3 
            = ((vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                [1U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                [6U]) - (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                         [2U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                         [5U]));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e2 
            = ((vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                [0U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                [7U]) - (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                         [3U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                         [4U]));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e1 
            = ((vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                [1U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                [6U]) + (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                         [2U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                         [5U]));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e0 
            = ((vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                [0U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                [7U]) + (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                         [3U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                         [4U]));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d3 
            = (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [3U] - vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [4U]);
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d2 
            = (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [2U] - vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [5U]);
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d0 
            = (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [0U] - vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [7U]);
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d1 
            = (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [1U] - vlSelfRef.connect__DOT__dct_cr__DOT__core_in
               [6U]);
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b0 
            = ((((vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                  [0U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                  [7U]) + (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                           [3U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                           [4U])) + (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                                     [1U] + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                                     [6U])) + (vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                                               [2U] 
                                               + vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                                               [5U]));
    }
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b6 
            = (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
               [3U] - vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
               [4U]);
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b2 
            = (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
               [1U] + vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
               [2U]);
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b4 
            = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
            [0U];
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__t_b1 
            = ((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                [5U] + vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
                [6U]) + vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y
               [7U]);
    }
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b6 
            = (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
               [3U] - vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
               [4U]);
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b2 
            = (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
               [1U] + vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
               [2U]);
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b4 
            = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
            [0U];
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__t_b1 
            = ((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                [5U] + vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
                [6U]) + vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y
               [7U]);
    }
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b6 
            = (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
               [3U] - vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
               [4U]);
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b2 
            = (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
               [1U] + vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
               [2U]);
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b4 
            = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
            [0U];
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__t_b1 
            = ((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                [5U] + vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
                [6U]) + vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y
               [7U]);
    }
    if (__VdlySet__connect__DOT__dct_y__DOT__output_buffer__v0) {
        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v0] 
            = __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v0;
        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v1] 
            = __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v1;
        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v2] 
            = __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v2;
        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v3] 
            = __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v3;
        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v4] 
            = __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v4;
        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v5] 
            = __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v5;
        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v6] 
            = __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v6;
        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_y__DOT__output_buffer__v7] 
            = __VdlyVal__connect__DOT__dct_y__DOT__output_buffer__v7;
    }
    if (__VdlySet__connect__DOT__dct_cb__DOT__output_buffer__v0) {
        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v0] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v0;
        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v1] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v1;
        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v2] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v2;
        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v3] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v3;
        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v4] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v4;
        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v5] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v5;
        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v6] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v6;
        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cb__DOT__output_buffer__v7] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__output_buffer__v7;
    }
    if (__VdlySet__connect__DOT__dct_cr__DOT__output_buffer__v0) {
        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v0] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v0;
        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v1] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v1;
        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v2] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v2;
        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v3] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v3;
        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v4] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v4;
        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v5] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v5;
        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v6] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v6;
        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[__VdlyDim0__connect__DOT__dct_cr__DOT__output_buffer__v7] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__output_buffer__v7;
    }
    if (__VdlySet__connect__DOT__dct_y__DOT__u_dct__DOT__y__v0) {
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[0U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v0;
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[1U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v1;
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[2U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v2;
    }
    if (__VdlySet__connect__DOT__dct_y__DOT__u_dct__DOT__y__v3) {
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[3U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v3;
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[4U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v4;
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[5U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v5;
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[6U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v6;
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[7U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__u_dct__DOT__y__v7;
    }
    if (__VdlySet__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v0) {
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[0U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v0;
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[1U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v1;
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[2U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v2;
    }
    if (__VdlySet__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v3) {
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[3U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v3;
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[4U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v4;
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[5U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v5;
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[6U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v6;
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[7U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__u_dct__DOT__y__v7;
    }
    if (__VdlySet__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v0) {
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[0U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v0;
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[1U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v1;
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[2U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v2;
    }
    if (__VdlySet__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v3) {
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[3U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v3;
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[4U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v4;
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[5U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v5;
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[6U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v6;
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[7U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__u_dct__DOT__y__v7;
    }
    if (__VdlySet__connect__DOT__dct_y__DOT__trans_buff__v0) {
        vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v0] 
            = __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v0;
        vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v1] 
            = __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v1;
        vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v2] 
            = __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v2;
        vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v3] 
            = __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v3;
        vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v4] 
            = __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v4;
        vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v5] 
            = __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v5;
        vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v6] 
            = __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v6;
        vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_y__DOT__trans_buff__v7] 
            = __VdlyVal__connect__DOT__dct_y__DOT__trans_buff__v7;
    }
    if (__VdlySet__connect__DOT__dct_cb__DOT__trans_buff__v0) {
        vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v0] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v0;
        vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v1] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v1;
        vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v2] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v2;
        vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v3] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v3;
        vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v4] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v4;
        vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v5] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v5;
        vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v6] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v6;
        vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cb__DOT__trans_buff__v7] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__trans_buff__v7;
    }
    if (__VdlySet__connect__DOT__dct_cr__DOT__trans_buff__v0) {
        vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v0] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v0;
        vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v1] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v1;
        vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v2] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v2;
        vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v3] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v3;
        vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v4] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v4;
        vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v5] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v5;
        vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v6] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v6;
        vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[__VdlyDim0__connect__DOT__dct_cr__DOT__trans_buff__v7] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__trans_buff__v7;
    }
    if (__VdlySet__connect__DOT__dct_y__DOT__input_buffer__v0) {
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v0;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[1U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v1;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[2U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v2;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[3U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v3;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[4U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v4;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[5U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v5;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[6U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v6;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[7U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v7;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[8U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v8;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[9U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v9;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0xaU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v10;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0xbU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v11;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0xcU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v12;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0xdU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v13;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0xeU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v14;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0xfU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v15;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x10U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v16;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x11U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v17;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x12U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v18;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x13U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v19;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x14U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v20;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x15U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v21;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x16U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v22;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x17U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v23;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x18U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v24;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x19U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v25;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x1aU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v26;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x1bU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v27;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x1cU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v28;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x1dU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v29;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x1eU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v30;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x1fU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v31;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x20U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v32;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x21U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v33;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x22U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v34;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x23U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v35;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x24U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v36;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x25U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v37;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x26U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v38;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x27U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v39;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x28U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v40;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x29U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v41;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x2aU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v42;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x2bU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v43;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x2cU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v44;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x2dU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v45;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x2eU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v46;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x2fU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v47;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x30U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v48;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x31U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v49;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x32U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v50;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x33U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v51;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x34U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v52;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x35U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v53;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x36U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v54;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x37U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v55;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x38U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v56;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x39U] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v57;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x3aU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v58;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x3bU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v59;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x3cU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v60;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x3dU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v61;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x3eU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v62;
        vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0x3fU] 
            = __VdlyVal__connect__DOT__dct_y__DOT__input_buffer__v63;
    }
    if (__VdlySet__connect__DOT__dct_cb__DOT__input_buffer__v0) {
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v0;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[1U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v1;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[2U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v2;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[3U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v3;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[4U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v4;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[5U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v5;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[6U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v6;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[7U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v7;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[8U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v8;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[9U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v9;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0xaU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v10;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0xbU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v11;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0xcU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v12;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0xdU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v13;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0xeU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v14;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0xfU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v15;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x10U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v16;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x11U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v17;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x12U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v18;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x13U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v19;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x14U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v20;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x15U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v21;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x16U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v22;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x17U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v23;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x18U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v24;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x19U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v25;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x1aU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v26;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x1bU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v27;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x1cU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v28;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x1dU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v29;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x1eU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v30;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x1fU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v31;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x20U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v32;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x21U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v33;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x22U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v34;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x23U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v35;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x24U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v36;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x25U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v37;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x26U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v38;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x27U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v39;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x28U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v40;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x29U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v41;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x2aU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v42;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x2bU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v43;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x2cU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v44;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x2dU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v45;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x2eU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v46;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x2fU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v47;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x30U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v48;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x31U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v49;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x32U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v50;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x33U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v51;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x34U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v52;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x35U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v53;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x36U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v54;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x37U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v55;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x38U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v56;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x39U] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v57;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x3aU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v58;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x3bU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v59;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x3cU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v60;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x3dU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v61;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x3eU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v62;
        vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0x3fU] 
            = __VdlyVal__connect__DOT__dct_cb__DOT__input_buffer__v63;
    }
    if (__VdlySet__connect__DOT__dct_cr__DOT__input_buffer__v0) {
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v0;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[1U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v1;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[2U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v2;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[3U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v3;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[4U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v4;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[5U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v5;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[6U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v6;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[7U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v7;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[8U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v8;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[9U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v9;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0xaU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v10;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0xbU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v11;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0xcU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v12;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0xdU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v13;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0xeU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v14;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0xfU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v15;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x10U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v16;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x11U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v17;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x12U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v18;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x13U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v19;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x14U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v20;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x15U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v21;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x16U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v22;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x17U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v23;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x18U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v24;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x19U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v25;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x1aU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v26;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x1bU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v27;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x1cU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v28;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x1dU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v29;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x1eU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v30;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x1fU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v31;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x20U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v32;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x21U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v33;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x22U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v34;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x23U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v35;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x24U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v36;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x25U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v37;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x26U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v38;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x27U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v39;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x28U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v40;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x29U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v41;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x2aU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v42;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x2bU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v43;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x2cU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v44;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x2dU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v45;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x2eU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v46;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x2fU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v47;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x30U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v48;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x31U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v49;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x32U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v50;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x33U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v51;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x34U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v52;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x35U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v53;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x36U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v54;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x37U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v55;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x38U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v56;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x39U] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v57;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x3aU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v58;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x3bU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v59;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x3cU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v60;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x3dU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v61;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x3eU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v62;
        vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0x3fU] 
            = __VdlyVal__connect__DOT__dct_cr__DOT__input_buffer__v63;
    }
    vlSelfRef.connect__DOT__dct_y_out[0U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0U];
    vlSelfRef.connect__DOT__dct_y_out[1U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                      [2U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                       [1U]))));
    vlSelfRef.connect__DOT__dct_y_out[2U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                       [2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                        [1U]))) 
                                                     >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[3U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [3U];
    vlSelfRef.connect__DOT__dct_y_out[4U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                      [5U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                       [4U]))));
    vlSelfRef.connect__DOT__dct_y_out[5U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                       [5U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                        [4U]))) 
                                                     >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[6U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [6U];
    vlSelfRef.connect__DOT__dct_y_out[7U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                      [8U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                       [7U]))));
    vlSelfRef.connect__DOT__dct_y_out[8U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                       [8U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                        [7U]))) 
                                                     >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[9U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [9U];
    vlSelfRef.connect__DOT__dct_y_out[0xaU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                        [0xbU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0xaU]))));
    vlSelfRef.connect__DOT__dct_y_out[0xbU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0xbU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0xaU]))) 
                                                       >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0xcU] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0xcU];
    vlSelfRef.connect__DOT__dct_y_out[0xdU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                        [0xeU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0xdU]))));
    vlSelfRef.connect__DOT__dct_y_out[0xeU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0xeU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0xdU]))) 
                                                       >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0xfU] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0xfU];
    vlSelfRef.connect__DOT__dct_y_out[0x10U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x11U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x10U]))));
    vlSelfRef.connect__DOT__dct_y_out[0x11U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x11U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x10U]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x12U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x12U];
    vlSelfRef.connect__DOT__dct_y_out[0x13U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x14U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x13U]))));
    vlSelfRef.connect__DOT__dct_y_out[0x14U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x14U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x13U]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x15U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x15U];
    vlSelfRef.connect__DOT__dct_y_out[0x16U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x17U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x16U]))));
    vlSelfRef.connect__DOT__dct_y_out[0x17U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x17U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x16U]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x18U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x18U];
    vlSelfRef.connect__DOT__dct_y_out[0x19U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x1aU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x19U]))));
    vlSelfRef.connect__DOT__dct_y_out[0x1aU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x1aU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x19U]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x1bU] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x1bU];
    vlSelfRef.connect__DOT__dct_y_out[0x1cU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x1dU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x1cU]))));
    vlSelfRef.connect__DOT__dct_y_out[0x1dU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x1dU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x1cU]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x1eU] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x1eU];
    vlSelfRef.connect__DOT__dct_y_out[0x1fU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x20U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x1fU]))));
    vlSelfRef.connect__DOT__dct_y_out[0x20U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x20U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x1fU]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x21U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x21U];
    vlSelfRef.connect__DOT__dct_y_out[0x22U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x23U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x22U]))));
    vlSelfRef.connect__DOT__dct_y_out[0x23U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x23U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x22U]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x24U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x24U];
    vlSelfRef.connect__DOT__dct_y_out[0x25U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x26U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x25U]))));
    vlSelfRef.connect__DOT__dct_y_out[0x26U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x26U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x25U]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x27U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x27U];
    vlSelfRef.connect__DOT__dct_y_out[0x28U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x29U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x28U]))));
    vlSelfRef.connect__DOT__dct_y_out[0x29U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x29U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x28U]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x2aU] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x2aU];
    vlSelfRef.connect__DOT__dct_y_out[0x2bU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x2cU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x2bU]))));
    vlSelfRef.connect__DOT__dct_y_out[0x2cU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x2cU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x2bU]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x2dU] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x2dU];
    vlSelfRef.connect__DOT__dct_y_out[0x2eU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x2fU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x2eU]))));
    vlSelfRef.connect__DOT__dct_y_out[0x2fU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x2fU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x2eU]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x30U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x30U];
    vlSelfRef.connect__DOT__dct_y_out[0x31U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x32U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x31U]))));
    vlSelfRef.connect__DOT__dct_y_out[0x32U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x32U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x31U]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x33U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x33U];
    vlSelfRef.connect__DOT__dct_y_out[0x34U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x35U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x34U]))));
    vlSelfRef.connect__DOT__dct_y_out[0x35U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x35U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x34U]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x36U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x36U];
    vlSelfRef.connect__DOT__dct_y_out[0x37U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x38U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x37U]))));
    vlSelfRef.connect__DOT__dct_y_out[0x38U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x38U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x37U]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x39U] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x39U];
    vlSelfRef.connect__DOT__dct_y_out[0x3aU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x3bU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x3aU]))));
    vlSelfRef.connect__DOT__dct_y_out[0x3bU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x3bU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x3aU]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x3cU] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x3cU];
    vlSelfRef.connect__DOT__dct_y_out[0x3dU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                         [0x3eU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x3dU]))));
    vlSelfRef.connect__DOT__dct_y_out[0x3eU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                          [0x3eU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
                                                                           [0x3dU]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_y_out[0x3fU] = vlSelfRef.connect__DOT__dct_y__DOT__output_buffer
        [0x3fU];
    vlSelfRef.connect__DOT__dct_cb_out[0U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0U];
    vlSelfRef.connect__DOT__dct_cb_out[1U] = (IData)(
                                                     (((QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                       [2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                        [1U]))));
    vlSelfRef.connect__DOT__dct_cb_out[2U] = (IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                        [2U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                         [1U]))) 
                                                      >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[3U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [3U];
    vlSelfRef.connect__DOT__dct_cb_out[4U] = (IData)(
                                                     (((QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                       [5U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                        [4U]))));
    vlSelfRef.connect__DOT__dct_cb_out[5U] = (IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                        [5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                         [4U]))) 
                                                      >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[6U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [6U];
    vlSelfRef.connect__DOT__dct_cb_out[7U] = (IData)(
                                                     (((QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                       [8U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                        [7U]))));
    vlSelfRef.connect__DOT__dct_cb_out[8U] = (IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                        [8U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                         [7U]))) 
                                                      >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[9U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [9U];
    vlSelfRef.connect__DOT__dct_cb_out[0xaU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                         [0xbU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0xaU]))));
    vlSelfRef.connect__DOT__dct_cb_out[0xbU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0xbU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0xaU]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0xcU] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0xcU];
    vlSelfRef.connect__DOT__dct_cb_out[0xdU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                         [0xeU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0xdU]))));
    vlSelfRef.connect__DOT__dct_cb_out[0xeU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0xeU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0xdU]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0xfU] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0xfU];
    vlSelfRef.connect__DOT__dct_cb_out[0x10U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x11U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x10U]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x11U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x11U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x10U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x12U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x12U];
    vlSelfRef.connect__DOT__dct_cb_out[0x13U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x14U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x13U]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x14U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x14U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x13U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x15U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x15U];
    vlSelfRef.connect__DOT__dct_cb_out[0x16U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x17U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x16U]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x17U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x17U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x16U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x18U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x18U];
    vlSelfRef.connect__DOT__dct_cb_out[0x19U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x1aU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x19U]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x1aU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x1aU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x19U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x1bU] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x1bU];
    vlSelfRef.connect__DOT__dct_cb_out[0x1cU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x1dU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x1cU]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x1dU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x1dU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x1cU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x1eU] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x1eU];
    vlSelfRef.connect__DOT__dct_cb_out[0x1fU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x20U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x1fU]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x20U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x20U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x1fU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x21U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x21U];
    vlSelfRef.connect__DOT__dct_cb_out[0x22U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x23U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x22U]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x23U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x23U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x22U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x24U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x24U];
    vlSelfRef.connect__DOT__dct_cb_out[0x25U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x26U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x25U]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x26U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x26U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x25U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x27U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x27U];
    vlSelfRef.connect__DOT__dct_cb_out[0x28U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x29U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x28U]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x29U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x29U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x28U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x2aU] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x2aU];
    vlSelfRef.connect__DOT__dct_cb_out[0x2bU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x2cU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x2bU]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x2cU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x2cU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x2bU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x2dU] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x2dU];
    vlSelfRef.connect__DOT__dct_cb_out[0x2eU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x2fU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x2eU]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x2fU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x2fU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x2eU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x30U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x30U];
    vlSelfRef.connect__DOT__dct_cb_out[0x31U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x32U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x31U]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x32U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x32U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x31U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x33U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x33U];
    vlSelfRef.connect__DOT__dct_cb_out[0x34U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x35U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x34U]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x35U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x35U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x34U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x36U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x36U];
    vlSelfRef.connect__DOT__dct_cb_out[0x37U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x38U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x37U]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x38U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x38U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x37U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x39U] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x39U];
    vlSelfRef.connect__DOT__dct_cb_out[0x3aU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x3bU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x3aU]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x3bU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x3bU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x3aU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x3cU] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x3cU];
    vlSelfRef.connect__DOT__dct_cb_out[0x3dU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                          [0x3eU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x3dU]))));
    vlSelfRef.connect__DOT__dct_cb_out[0x3eU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                           [0x3eU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
                                                                            [0x3dU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cb_out[0x3fU] = vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer
        [0x3fU];
    vlSelfRef.connect__DOT__dct_cr_out[0U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0U];
    vlSelfRef.connect__DOT__dct_cr_out[1U] = (IData)(
                                                     (((QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                       [2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                        [1U]))));
    vlSelfRef.connect__DOT__dct_cr_out[2U] = (IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                        [2U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                         [1U]))) 
                                                      >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[3U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [3U];
    vlSelfRef.connect__DOT__dct_cr_out[4U] = (IData)(
                                                     (((QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                       [5U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                        [4U]))));
    vlSelfRef.connect__DOT__dct_cr_out[5U] = (IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                        [5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                         [4U]))) 
                                                      >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[6U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [6U];
    vlSelfRef.connect__DOT__dct_cr_out[7U] = (IData)(
                                                     (((QData)((IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                       [8U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                        [7U]))));
    vlSelfRef.connect__DOT__dct_cr_out[8U] = (IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                        [8U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                         [7U]))) 
                                                      >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[9U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [9U];
    vlSelfRef.connect__DOT__dct_cr_out[0xaU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                         [0xbU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0xaU]))));
    vlSelfRef.connect__DOT__dct_cr_out[0xbU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0xbU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0xaU]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0xcU] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0xcU];
    vlSelfRef.connect__DOT__dct_cr_out[0xdU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                         [0xeU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0xdU]))));
    vlSelfRef.connect__DOT__dct_cr_out[0xeU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0xeU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0xdU]))) 
                                                        >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0xfU] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0xfU];
    vlSelfRef.connect__DOT__dct_cr_out[0x10U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x11U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x10U]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x11U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x11U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x10U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x12U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x12U];
    vlSelfRef.connect__DOT__dct_cr_out[0x13U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x14U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x13U]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x14U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x14U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x13U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x15U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x15U];
    vlSelfRef.connect__DOT__dct_cr_out[0x16U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x17U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x16U]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x17U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x17U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x16U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x18U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x18U];
    vlSelfRef.connect__DOT__dct_cr_out[0x19U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x1aU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x19U]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x1aU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x1aU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x19U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x1bU] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x1bU];
    vlSelfRef.connect__DOT__dct_cr_out[0x1cU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x1dU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x1cU]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x1dU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x1dU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x1cU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x1eU] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x1eU];
    vlSelfRef.connect__DOT__dct_cr_out[0x1fU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x20U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x1fU]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x20U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x20U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x1fU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x21U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x21U];
    vlSelfRef.connect__DOT__dct_cr_out[0x22U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x23U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x22U]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x23U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x23U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x22U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x24U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x24U];
    vlSelfRef.connect__DOT__dct_cr_out[0x25U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x26U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x25U]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x26U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x26U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x25U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x27U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x27U];
    vlSelfRef.connect__DOT__dct_cr_out[0x28U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x29U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x28U]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x29U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x29U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x28U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x2aU] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x2aU];
    vlSelfRef.connect__DOT__dct_cr_out[0x2bU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x2cU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x2bU]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x2cU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x2cU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x2bU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x2dU] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x2dU];
    vlSelfRef.connect__DOT__dct_cr_out[0x2eU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x2fU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x2eU]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x2fU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x2fU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x2eU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x30U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x30U];
    vlSelfRef.connect__DOT__dct_cr_out[0x31U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x32U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x31U]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x32U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x32U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x31U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x33U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x33U];
    vlSelfRef.connect__DOT__dct_cr_out[0x34U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x35U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x34U]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x35U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x35U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x34U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x36U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x36U];
    vlSelfRef.connect__DOT__dct_cr_out[0x37U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x38U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x37U]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x38U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x38U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x37U]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x39U] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x39U];
    vlSelfRef.connect__DOT__dct_cr_out[0x3aU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x3bU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x3aU]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x3bU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x3bU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x3aU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x3cU] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x3cU];
    vlSelfRef.connect__DOT__dct_cr_out[0x3dU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                          [0x3eU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x3dU]))));
    vlSelfRef.connect__DOT__dct_cr_out[0x3eU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                           [0x3eU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
                                                                            [0x3dU]))) 
                                                         >> 0x20U));
    vlSelfRef.connect__DOT__dct_cr_out[0x3fU] = vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer
        [0x3fU];
    vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[0U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [0U];
    vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[1U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [1U];
    vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[2U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [2U];
    vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[3U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [3U];
    vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[4U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [4U];
    vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[5U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [5U];
    vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[6U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [6U];
    vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[7U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [7U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_out[7U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [7U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_out[6U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [6U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_out[5U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [5U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_out[4U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [4U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_out[3U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [3U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_out[2U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [2U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_out[1U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [1U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_out[0U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
        [0U];
    vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[0U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [0U];
    vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[1U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [1U];
    vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[2U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [2U];
    vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[3U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [3U];
    vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[4U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [4U];
    vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[5U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [5U];
    vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[6U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [6U];
    vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[7U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [7U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_out[7U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [7U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_out[6U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [6U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_out[5U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [5U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_out[4U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [4U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_out[3U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [3U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_out[2U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [2U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_out[1U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [1U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_out[0U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
        [0U];
    vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[0U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [0U];
    vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[1U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [1U];
    vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[2U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [2U];
    vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[3U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [3U];
    vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[4U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [4U];
    vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[5U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [5U];
    vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[6U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [6U];
    vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[7U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [7U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_out[7U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [7U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_out[6U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [6U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_out[5U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [5U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_out[4U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [4U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_out[3U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [3U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_out[2U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [2U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_out[1U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [1U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_out[0U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
        [0U];
}

extern const VlWide<64>/*2047:0*/ Vconnect__ConstPool__CONST_h6be9aa18_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vconnect__ConstPool__TABLE_hd61edfd7_0;

VL_INLINE_OPT void Vconnect___024root___nba_sequent__TOP__2(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___nba_sequent__TOP__2\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.connect__DOT__dct_y__DOT__col_cnt = vlSelfRef.__Vdly__connect__DOT__dct_y__DOT__col_cnt;
    vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt = vlSelfRef.__Vdly__connect__DOT__dct_cb__DOT__col_cnt;
    vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt = vlSelfRef.__Vdly__connect__DOT__dct_cr__DOT__col_cnt;
    vlSelfRef.connect__DOT__dct_y__DOT__row_cnt = vlSelfRef.__Vdly__connect__DOT__dct_y__DOT__row_cnt;
    vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt = vlSelfRef.__Vdly__connect__DOT__dct_cb__DOT__row_cnt;
    vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt = vlSelfRef.__Vdly__connect__DOT__dct_cr__DOT__row_cnt;
    vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[0U] 
        = (0x3fU & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt));
    vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[1U] 
        = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[2U] 
        = (0x3fU & ((IData)(0x10U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[3U] 
        = (0x3fU & ((IData)(0x18U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[4U] 
        = (0x3fU & ((IData)(0x20U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[5U] 
        = (0x3fU & ((IData)(0x28U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[6U] 
        = (0x3fU & ((IData)(0x30U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[7U] 
        = (0x3fU & ((IData)(0x38U) + (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[0U] 
        = (0x3fU & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt));
    vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[1U] 
        = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[2U] 
        = (0x3fU & ((IData)(0x10U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[3U] 
        = (0x3fU & ((IData)(0x18U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[4U] 
        = (0x3fU & ((IData)(0x20U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[5U] 
        = (0x3fU & ((IData)(0x28U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[6U] 
        = (0x3fU & ((IData)(0x30U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[7U] 
        = (0x3fU & ((IData)(0x38U) + (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[0U] 
        = (0x3fU & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt));
    vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[1U] 
        = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[2U] 
        = (0x3fU & ((IData)(0x10U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[3U] 
        = (0x3fU & ((IData)(0x18U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[4U] 
        = (0x3fU & ((IData)(0x20U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[5U] 
        = (0x3fU & ((IData)(0x28U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[6U] 
        = (0x3fU & ((IData)(0x30U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
    vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[7U] 
        = (0x3fU & ((IData)(0x38U) + (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt)));
    if (vlSelfRef.rst) {
        vlSelfRef.connect__DOT__dct_y__DOT__state = 0U;
        vlSelfRef.connect__DOT__dct_cb__DOT__state = 0U;
        vlSelfRef.connect__DOT__dct_cr__DOT__state = 0U;
        vlSelfRef.__Vdly__connect__DOT__rgb2ycbcr_inst__DOT__batch_count = 0U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg[__Vilp1] 
                = Vconnect__ConstPool__CONST_h6be9aa18_0[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg[__Vilp2] 
                = Vconnect__ConstPool__CONST_h6be9aa18_0[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg[__Vilp3] 
                = Vconnect__ConstPool__CONST_h6be9aa18_0[__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__done_reg = 0U;
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state = 0U;
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state = 0U;
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state = 0U;
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state = 0U;
    } else {
        vlSelfRef.connect__DOT__dct_y__DOT__state = vlSelfRef.connect__DOT__dct_y__DOT__nstate;
        vlSelfRef.connect__DOT__dct_cb__DOT__state 
            = vlSelfRef.connect__DOT__dct_cb__DOT__nstate;
        vlSelfRef.connect__DOT__dct_cr__DOT__state 
            = vlSelfRef.connect__DOT__dct_cr__DOT__nstate;
        if ((1U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))) {
            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__j = 8U;
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 8U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core
                            [0U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 8U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [0U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 8U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [0U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core
                            [1U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [1U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [1U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(2U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core
                            [2U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(2U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [2U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(2U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [2U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core
                            [3U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [3U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [3U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(4U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core
                            [4U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(4U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [4U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(4U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [4U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(5U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core
                            [5U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(5U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [5U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(5U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [5U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(6U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core
                            [6U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(6U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [6U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(6U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [6U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(7U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core
                            [7U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(7U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core
                            [7U]);
            VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(7U) 
                                                             + 
                                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count), 3U)), 5U)), vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg, 
                            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core
                            [7U]);
            if ((1U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state))) {
                vlSelfRef.__Vdly__connect__DOT__rgb2ycbcr_inst__DOT__batch_count 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)));
            }
        } else {
            vlSelfRef.__Vdly__connect__DOT__rgb2ycbcr_inst__DOT__batch_count = 0U;
        }
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__done_reg 
            = (2U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state 
            = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__nstate;
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state 
            = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__nstate;
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state 
            = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__nstate;
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state 
            = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state;
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count 
        = vlSelfRef.__Vdly__connect__DOT__rgb2ycbcr_inst__DOT__batch_count;
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))) {
        vlSelfRef.connect__DOT__dct_y__DOT__unnamedblk5__DOT__j = 8U;
    }
    vlSelfRef.connect__DOT__dct_y__DOT__core_in_valid 
        = ((1U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state)) 
           | (3U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state)));
    vlSelfRef.connect__DOT__quant_y__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))
            ? ((5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))
                               ? ((7U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__cycle_cnt))
                                   ? 2U : 1U) : 0U));
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))) {
        vlSelfRef.connect__DOT__dct_cb__DOT__unnamedblk5__DOT__j = 8U;
    }
    vlSelfRef.connect__DOT__dct_cb__DOT__core_in_valid 
        = ((1U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state)) 
           | (3U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state)));
    vlSelfRef.connect__DOT__quant_cb__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))
            ? ((5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))
                               ? ((7U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__cycle_cnt))
                                   ? 2U : 1U) : 0U));
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))) {
        vlSelfRef.connect__DOT__dct_cr__DOT__unnamedblk5__DOT__j = 8U;
    }
    vlSelfRef.connect__DOT__dct_cr__DOT__core_in_valid 
        = ((1U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state)) 
           | (3U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state)));
    vlSelfRef.connect__DOT__quant_cr__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))
            ? ((5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))
                               ? ((7U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__cycle_cnt))
                                   ? 2U : 1U) : 0U));
    vlSelfRef.connect__DOT__dct_y__DOT__we_trans = 
        ((2U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state)) 
         & (5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state)));
    vlSelfRef.connect__DOT__dct_y__DOT__nstate = vlSelfRef.connect__DOT__dct_y__DOT__state;
    if ((4U & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.connect__DOT__dct_y__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))) {
                vlSelfRef.connect__DOT__dct_y__DOT__nstate = 0U;
            } else if ((5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
                vlSelfRef.connect__DOT__dct_y__DOT__nstate 
                    = ((7U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt))
                        ? 5U : 3U);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
                vlSelfRef.connect__DOT__dct_y__DOT__nstate = 4U;
            }
        } else if ((5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_y__DOT__nstate 
                = ((7U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt))
                    ? 3U : 1U);
        }
    } else if ((1U & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))) {
        if ((0U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_y__DOT__nstate = 2U;
        }
    } else if (vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__done_reg) {
        vlSelfRef.connect__DOT__dct_y__DOT__nstate = 1U;
    }
    vlSelfRef.connect__DOT__dct_cb__DOT__we_trans = 
        ((2U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state)) 
         & (5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state)));
    vlSelfRef.connect__DOT__dct_cb__DOT__nstate = vlSelfRef.connect__DOT__dct_cb__DOT__state;
    if ((4U & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))) {
                vlSelfRef.connect__DOT__dct_cb__DOT__nstate = 0U;
            } else if ((5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
                vlSelfRef.connect__DOT__dct_cb__DOT__nstate 
                    = ((7U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt))
                        ? 5U : 3U);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
                vlSelfRef.connect__DOT__dct_cb__DOT__nstate = 4U;
            }
        } else if ((5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_cb__DOT__nstate 
                = ((7U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt))
                    ? 3U : 1U);
        }
    } else if ((1U & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))) {
        if ((0U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_cb__DOT__nstate = 2U;
        }
    } else if (vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__done_reg) {
        vlSelfRef.connect__DOT__dct_cb__DOT__nstate = 1U;
    }
    vlSelfRef.connect__DOT__dct_cr__DOT__we_trans = 
        ((2U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state)) 
         & (5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state)));
    vlSelfRef.connect__DOT__dct_cr__DOT__nstate = vlSelfRef.connect__DOT__dct_cr__DOT__state;
    if ((4U & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))) {
                vlSelfRef.connect__DOT__dct_cr__DOT__nstate = 0U;
            } else if ((5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
                vlSelfRef.connect__DOT__dct_cr__DOT__nstate 
                    = ((7U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt))
                        ? 5U : 3U);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
                vlSelfRef.connect__DOT__dct_cr__DOT__nstate = 4U;
            }
        } else if ((5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_cr__DOT__nstate 
                = ((7U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt))
                    ? 3U : 1U);
        }
    } else if ((1U & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))) {
        if ((0U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_cr__DOT__nstate = 2U;
        }
    } else if (vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__done_reg) {
        vlSelfRef.connect__DOT__dct_cr__DOT__nstate = 1U;
    }
    __Vtableidx1 = (((IData)(vlSelfRef.connect__DOT__dct_y__DOT__core_in_valid) 
                     << 3U) | (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__nstate 
        = Vconnect__ConstPool__TABLE_hd61edfd7_0[__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__core_in_valid) 
                     << 3U) | (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__nstate 
        = Vconnect__ConstPool__TABLE_hd61edfd7_0[__Vtableidx2];
    __Vtableidx3 = (((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__core_in_valid) 
                     << 3U) | (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__nstate 
        = Vconnect__ConstPool__TABLE_hd61edfd7_0[__Vtableidx3];
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__k = 8U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state 
        = vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state;
    if ((0U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))) {
        if (vlSelfRef.start) {
            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))) {
        if ((7U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count))) {
            vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state = 0U;
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[0U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[1U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[2U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[3U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[4U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[5U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[6U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[7U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[0U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[1U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[2U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[3U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[4U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[5U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[6U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[7U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[0U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[1U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[2U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[3U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[4U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[5U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[6U] = 0U;
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[7U] = 0U;
    if (((1U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state)) 
         | ((0U == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state)) 
            & (IData)(vlSelfRef.start)))) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__k = 8U;
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[0U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[0U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[0U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[1U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[1U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[1U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[2U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[2U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[2U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[3U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[3U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[3U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[4U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[4U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[4U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[5U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[5U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[5U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[6U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[6U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[6U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[7U] 
        = (((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[7U] 
        = (((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[7U] 
        = ((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
}
