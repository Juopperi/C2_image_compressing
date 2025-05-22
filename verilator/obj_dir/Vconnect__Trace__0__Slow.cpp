// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconnect__Syms.h"


VL_ATTR_COLD void Vconnect___024root__trace_init_sub__TOP__0(Vconnect___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root__trace_init_sub__TOP__0\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2441,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2442,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2443,0,"r_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+2459,0,"g_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+2475,0,"b_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+2491,0,"y_quantized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+2523,0,"cb_quantized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+2555,0,"cr_quantized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBit(c+2587,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("connect", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2441,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2442,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2443,0,"r_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+2459,0,"g_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+2475,0,"b_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+2491,0,"y_quantized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+2523,0,"cb_quantized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+2555,0,"cr_quantized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBit(c+2587,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1917,0,"rgb_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2592,0,"dummy_const",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1918,0,"y_all_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+1982,0,"cb_all_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+2046,0,"cr_all_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+2110,0,"dct_y_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2111,0,"dct_cb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2112,0,"dct_cr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2113,0,"dct_y_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2114,0,"dct_cb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2115,0,"dct_cr_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+978,0,"dct_y_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+1042,0,"dct_cb_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+1106,0,"dct_cr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+555,0,"quant_y_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"quant_cb_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"quant_cr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dct_cb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2588,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1917,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2114,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1982,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+2111,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2595,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1042,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBus(c+2116,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2117,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2118,0,"row_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2119,0,"col_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("input_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1170+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("output_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1234+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("trans_buff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1298+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2120,0,"we_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wdata_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1362+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("raddr_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2121+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rdata_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2129+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2137,0,"core_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2138,0,"core_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2139,0,"core_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2140+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("core_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1370+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2596,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("u_dct", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2597,0,"NUM_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2588,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2137,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2138,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2148,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2149,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2150,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2151,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2152,0,"in4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2153,0,"in5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2154,0,"in6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2155,0,"in7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2139,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2595,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1378,0,"out0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1379,0,"out1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1380,0,"out2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1381,0,"out3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1382,0,"out4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1383,0,"out5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1384,0,"out6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1385,0,"out7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2599,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2600,0,"C2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2601,0,"C3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2602,0,"C4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2603,0,"C6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2604,0,"SIN1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2605,0,"SIN3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2606,0,"K0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2607,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2156,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2157,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1386,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1387,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1388,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1389,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1390,0,"d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1391,0,"d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1392,0,"d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1393,0,"d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1394,0,"e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1395,0,"e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1396,0,"e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1397,0,"e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1398,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1399,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1400,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1401,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1402,0,"b4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1403,0,"b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1404,0,"b6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1405,0,"b7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1406+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1414,0,"t_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1415,0,"t_b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("job", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+2158,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2160,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2162,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2164,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2166,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2168,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2170,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2172,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2174+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2596,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("mult_inst[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2182,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2183,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2184,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2185,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2187,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2188,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2189,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2190,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2192,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2194,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2195,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2197,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2198,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2199,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2200,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2202,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2204,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2205,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2207,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2209,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2210,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2212,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2213,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2214,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2215,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2217,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2218,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2219,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2220,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1416,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2608,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1417,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2596,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2222,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1418,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dct_cr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2588,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1917,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2115,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2046,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+2112,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2595,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1106,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBus(c+2223,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2224,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2225,0,"row_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2226,0,"col_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("input_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1419+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("output_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1483+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("trans_buff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1547+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2227,0,"we_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wdata_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1611+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("raddr_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2228+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rdata_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2236+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2244,0,"core_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2245,0,"core_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2246,0,"core_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2247+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("core_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1619+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2596,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("u_dct", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2597,0,"NUM_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2588,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2244,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2245,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2255,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2256,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2257,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2258,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2259,0,"in4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2260,0,"in5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2261,0,"in6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2262,0,"in7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2246,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2595,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1627,0,"out0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1628,0,"out1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1629,0,"out2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1630,0,"out3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1631,0,"out4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1632,0,"out5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1633,0,"out6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1634,0,"out7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2599,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2600,0,"C2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2601,0,"C3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2602,0,"C4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2603,0,"C6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2604,0,"SIN1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2605,0,"SIN3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2606,0,"K0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2607,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2263,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2264,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1635,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1636,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1637,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1638,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1639,0,"d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1640,0,"d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1641,0,"d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1642,0,"d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1643,0,"e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1644,0,"e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1645,0,"e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1646,0,"e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1647,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1648,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1649,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1650,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1651,0,"b4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1652,0,"b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1653,0,"b6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1654,0,"b7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1655+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1663,0,"t_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"t_b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("job", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+2265,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2267,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2269,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2271,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2273,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2275,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2277,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2279,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2281+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2596,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("mult_inst[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2289,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2290,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2291,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2292,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2294,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2295,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2296,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2297,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2299,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2300,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2301,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2302,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2304,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2305,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2306,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2307,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2309,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2311,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2312,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2314,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2315,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2316,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2317,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2319,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2320,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2321,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2322,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2324,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2325,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2326,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2327,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1665,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2608,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1666,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2596,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2329,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1667,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dct_y", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2588,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1917,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2113,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1918,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+2110,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2595,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+978,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBus(c+2330,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2331,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2332,0,"row_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2333,0,"col_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("input_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1668+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("output_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1732+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("trans_buff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1796+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2334,0,"we_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wdata_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1860+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("raddr_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2335+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rdata_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2343+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2351,0,"core_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2352,0,"core_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2353,0,"core_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2354+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("core_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1868+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2596,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("u_dct", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2597,0,"NUM_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2588,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2351,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2352,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2362,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2363,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2364,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2365,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2366,0,"in4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2367,0,"in5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2368,0,"in6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2369,0,"in7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2353,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2595,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1876,0,"out0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1877,0,"out1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"out2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1879,0,"out3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1880,0,"out4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1881,0,"out5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1882,0,"out6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"out7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2599,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2600,0,"C2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2601,0,"C3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2602,0,"C4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2603,0,"C6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2604,0,"SIN1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2605,0,"SIN3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2606,0,"K0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2607,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2370,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2371,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1884,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1885,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1886,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1887,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1888,0,"d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1889,0,"d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1890,0,"d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1891,0,"d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1892,0,"e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1893,0,"e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1894,0,"e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1895,0,"e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1896,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1897,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1898,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1899,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1900,0,"b4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1901,0,"b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1902,0,"b6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1903,0,"b7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1904+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1912,0,"t_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1913,0,"t_b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("job", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+2372,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2374,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2376,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2378,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2380,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2382,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2384,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2386,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2388+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2596,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("mult_inst[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2396,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2397,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2398,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2399,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2401,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2402,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2403,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2404,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2406,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2407,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2408,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2409,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2411,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2412,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2413,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2414,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2416,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2417,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2418,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2419,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2421,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2422,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2423,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2424,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2426,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2427,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2428,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2429,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2431,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2433,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2598,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+2434,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1914,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2608,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1915,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2596,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2436,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1916,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("quant_cb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2609,0,"USE_LUMA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2588,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2111,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1042,0,"pixels",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+2523,0,"q_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBit(c+556,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2610,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2611,0,"PROCESSING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2612,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+558,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2589,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+559,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+560,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("luma_table_rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("chroma_table_rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("result_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+561+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pixel_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+625+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("qtable_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+633+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+641+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+649,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("GEN_MULTS[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+650,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+651,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+653,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+655,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+656,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+658,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+659,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+661,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+662,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+665,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+667,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+668,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+671,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+673,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+674,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+675,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+676,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+677,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+679,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+680,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+681,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+682,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+683,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+685,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+686,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+687,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+688,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+689,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+691,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+692,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+693,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+694,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+695,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+697,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("quant_cr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2609,0,"USE_LUMA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2588,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2112,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1106,0,"pixels",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+2555,0,"q_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBit(c+557,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2610,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2611,0,"PROCESSING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2612,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+698,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2590,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+699,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+700,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("luma_table_rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+129+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("chroma_table_rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+193+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("result_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+701+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pixel_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+765+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("qtable_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+773+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+781+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+789,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("GEN_MULTS[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+790,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+792,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+793,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+795,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+796,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+798,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+799,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+801,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+802,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+804,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+805,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+807,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+808,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+810,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+811,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+813,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+814,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+816,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+817,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+819,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+820,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+822,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+823,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+825,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+826,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+827,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+828,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+829,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+831,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+832,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+834,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+835,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+837,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("quant_y", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2613,0,"USE_LUMA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2588,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2110,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+978,0,"pixels",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+2491,0,"q_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBit(c+555,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2610,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2611,0,"PROCESSING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2612,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+838,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2591,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+839,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+840,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("luma_table_rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+257+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("chroma_table_rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+321+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("result_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+841+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pixel_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+905+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("qtable_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+913+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+921+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+929,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("GEN_MULTS[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+930,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+932,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+933,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+935,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+936,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+937,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+938,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+939,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+941,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+942,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+944,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+945,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+947,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+948,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+949,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+950,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+951,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+953,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+954,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+955,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+956,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+957,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+959,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+960,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+961,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+962,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+963,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+965,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+966,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+967,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+968,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+969,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+971,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2593,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+972,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+973,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2594,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+975,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+977,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rgb2ycbcr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2614,0,"fixed_point_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2615,0,"input_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2616,0,"PIXEL_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2615,0,"CORE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2440,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2441,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2442,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2443,0,"r_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+2459,0,"g_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+2475,0,"b_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1918,0,"y_all",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+1982,0,"cb_all",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+2046,0,"cr_all",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+1917,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+2437,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+2610,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2611,0,"PROCESSING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2612,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2438,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+386,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2439,0,"batch_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+1918,0,"y_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+1982,0,"cb_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+2046,0,"cr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+1917,0,"done_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+387+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+395+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+403+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("y_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+411+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cb_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+419+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cr_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+427+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+435,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+436,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+437,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+440,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+438,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+440,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+442,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+443,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+444,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+445,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+446,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+447,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+448,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+449,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+437,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+446,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+446,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+436,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2619,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+445,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+445,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+435,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2620,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+444,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+444,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+437,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2621,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+449,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+449,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+436,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2622,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+448,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+448,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+435,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+447,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+447,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+437,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2623,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+443,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+443,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+436,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2624,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+442,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+442,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+435,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2625,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+441,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+441,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+451,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+452,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+453,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+454,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+455,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+454,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+455,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+456,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+457,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+458,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+459,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+460,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+461,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+462,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+463,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+464,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+452,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+461,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+461,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2619,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+460,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+460,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2620,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+459,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+459,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+452,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2621,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+464,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+464,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2622,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+463,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+463,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+462,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+462,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+452,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2623,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+458,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+458,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2624,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+457,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+457,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2625,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+456,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+456,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+465,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+466,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+467,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+468,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+471,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+472,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+473,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+474,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+475,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+476,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+477,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+478,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+479,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+467,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+476,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+476,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+466,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2619,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+475,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+475,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+465,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2620,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+474,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+474,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+467,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2621,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+479,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+479,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+466,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2622,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+478,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+478,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+465,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+477,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+477,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+467,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2623,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+473,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+473,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+466,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2624,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+472,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+472,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+465,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2625,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+471,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+471,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+480,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+481,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+482,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+483,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+485,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+483,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+485,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+486,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+487,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+488,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+489,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+490,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+491,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+492,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+493,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+494,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+482,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+491,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+491,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+481,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2619,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+490,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+490,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+480,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2620,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+489,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+489,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+482,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2621,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+494,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+494,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+481,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2622,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+493,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+493,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+480,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+492,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+492,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+482,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2623,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+488,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+488,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+481,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2624,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+487,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+487,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+480,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2625,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+486,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+486,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+495,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+496,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+497,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+498,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+499,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+500,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+499,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+500,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+502,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+503,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+504,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+505,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+506,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+507,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+508,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+509,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+497,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+506,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+506,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+496,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2619,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+505,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+505,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+495,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2620,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+504,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+504,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+497,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2621,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+509,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+509,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+496,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2622,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+508,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+508,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+495,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+507,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+507,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+497,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2623,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+503,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+503,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+496,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2624,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+502,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+502,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+495,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2625,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+501,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+501,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+510,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+511,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+512,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+513,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+514,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+515,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+513,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+514,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+515,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+516,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+517,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+518,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+519,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+520,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+521,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+522,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+523,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+524,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+512,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+521,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+521,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+511,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2619,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+520,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+520,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+510,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2620,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+519,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+519,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+512,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2621,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+524,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+524,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+511,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2622,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+523,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+523,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+510,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+522,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+522,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+512,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2623,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+518,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+518,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+511,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2624,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+517,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+517,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+510,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2625,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+516,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+516,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+525,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+526,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+527,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+528,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+529,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+530,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+528,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+529,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+530,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+531,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+532,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+533,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+534,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+535,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+536,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+537,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+538,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+539,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+527,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+536,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+536,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+526,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2619,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+535,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+535,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+525,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2620,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+534,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+534,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+527,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2621,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+539,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+539,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+526,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2622,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+538,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+538,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+525,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+537,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+537,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+527,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2623,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+533,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+533,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+526,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2624,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+532,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+532,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+525,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2625,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+531,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+531,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+540,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+541,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+542,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+543,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+546,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+547,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+548,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+549,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+550,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+551,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+552,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+553,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+554,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+542,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+551,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+551,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2619,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+550,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+550,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+540,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2620,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+549,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+549,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+542,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2621,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+554,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+554,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2622,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+553,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+553,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+540,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+552,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+552,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+542,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2623,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+548,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+548,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2624,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+547,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+547,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+540,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2625,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+546,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+546,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2618,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconnect___024root__trace_init_top(Vconnect___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root__trace_init_top\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconnect___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconnect___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconnect___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconnect___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconnect___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconnect___024root__trace_register(Vconnect___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root__trace_register\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vconnect___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconnect___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconnect___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconnect___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconnect___024root__trace_const_0_sub_0(Vconnect___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconnect___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root__trace_const_0\n"); );
    // Init
    Vconnect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconnect___024root*>(voidSelf);
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconnect___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconnect___024root__trace_const_0_sub_0(Vconnect___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root__trace_const_0_sub_0\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+2592,(0x10000U),32);
    bufp->fullIData(oldp+2593,(0x20U),32);
    bufp->fullIData(oldp+2594,(0x10U),32);
    bufp->fullBit(oldp+2595,(1U));
    bufp->fullIData(oldp+2596,(8U),32);
    bufp->fullIData(oldp+2597,(8U),32);
    bufp->fullIData(oldp+2598,(0xfU),32);
    bufp->fullSData(oldp+2599,(0x7d8aU),16);
    bufp->fullSData(oldp+2600,(0x7642U),16);
    bufp->fullSData(oldp+2601,(0x6a6eU),16);
    bufp->fullSData(oldp+2602,(0x5a82U),16);
    bufp->fullSData(oldp+2603,(0x30fcU),16);
    bufp->fullSData(oldp+2604,(0x18f9U),16);
    bufp->fullSData(oldp+2605,(0x471dU),16);
    bufp->fullSData(oldp+2606,(0x2d41U),16);
    bufp->fullSData(oldp+2607,(0x4000U),16);
    bufp->fullIData(oldp+2608,(0x40U),32);
    bufp->fullIData(oldp+2609,(0U),32);
    bufp->fullCData(oldp+2610,(0U),2);
    bufp->fullCData(oldp+2611,(1U),2);
    bufp->fullCData(oldp+2612,(2U),2);
    bufp->fullIData(oldp+2613,(1U),32);
    bufp->fullIData(oldp+2614,(0x20U),32);
    bufp->fullIData(oldp+2615,(8U),32);
    bufp->fullIData(oldp+2616,(0x40U),32);
    bufp->fullSData(oldp+2617,(0x8000U),16);
    bufp->fullIData(oldp+2618,(8U),32);
    bufp->fullSData(oldp+2619,(0x54cdU),16);
    bufp->fullSData(oldp+2620,(0x2b32U),16);
    bufp->fullSData(oldp+2621,(0x14d0U),16);
    bufp->fullSData(oldp+2622,(0x6b2fU),16);
    bufp->fullSData(oldp+2623,(0x1d2fU),16);
    bufp->fullSData(oldp+2624,(0x9645U),16);
    bufp->fullSData(oldp+2625,(0x4c8bU),16);
}

VL_ATTR_COLD void Vconnect___024root__trace_full_0_sub_0(Vconnect___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconnect___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root__trace_full_0\n"); );
    // Init
    Vconnect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconnect___024root*>(voidSelf);
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconnect___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconnect___024root__trace_full_0_sub_0(Vconnect___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root__trace_full_0_sub_0\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[32]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[33]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[34]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[35]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[36]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[37]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[38]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[39]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[40]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[41]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[42]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[43]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[44]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[45]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[46]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[47]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[48]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[49]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[50]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[51]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[52]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[53]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[54]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[55]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[56]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[57]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[58]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[59]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[60]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[61]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[62]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[63]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[1]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[2]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[3]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[4]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[5]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[6]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[7]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[8]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[9]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[10]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[11]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[12]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[13]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[14]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[15]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[16]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[17]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[18]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[19]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[20]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[21]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[22]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[23]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[24]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[25]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[26]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[27]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[28]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[29]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[30]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[31]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[32]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[33]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[34]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[35]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[36]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[37]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[38]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[39]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[40]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[41]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[42]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[43]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[44]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[45]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[46]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[47]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[48]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[49]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[50]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[51]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[52]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[53]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[54]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[55]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[56]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[57]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[58]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[59]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[60]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[61]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[62]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[63]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[1]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[2]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[3]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[4]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[5]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[6]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[7]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[8]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[9]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[10]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[11]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[12]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[13]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[14]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[15]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[16]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[17]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[18]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[19]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[20]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[21]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[22]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[23]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[24]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[25]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[26]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[27]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[28]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[29]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[30]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[31]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[32]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[33]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[34]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[35]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[36]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[37]),32);
    bufp->fullIData(oldp+167,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[38]),32);
    bufp->fullIData(oldp+168,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[39]),32);
    bufp->fullIData(oldp+169,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[40]),32);
    bufp->fullIData(oldp+170,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[41]),32);
    bufp->fullIData(oldp+171,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[42]),32);
    bufp->fullIData(oldp+172,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[43]),32);
    bufp->fullIData(oldp+173,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[44]),32);
    bufp->fullIData(oldp+174,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[45]),32);
    bufp->fullIData(oldp+175,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[46]),32);
    bufp->fullIData(oldp+176,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[47]),32);
    bufp->fullIData(oldp+177,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[48]),32);
    bufp->fullIData(oldp+178,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[49]),32);
    bufp->fullIData(oldp+179,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[50]),32);
    bufp->fullIData(oldp+180,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[51]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[52]),32);
    bufp->fullIData(oldp+182,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[53]),32);
    bufp->fullIData(oldp+183,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[54]),32);
    bufp->fullIData(oldp+184,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[55]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[56]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[57]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[58]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[59]),32);
    bufp->fullIData(oldp+189,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[60]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[61]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[62]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[63]),32);
    bufp->fullIData(oldp+193,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0]),32);
    bufp->fullIData(oldp+194,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[1]),32);
    bufp->fullIData(oldp+195,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[2]),32);
    bufp->fullIData(oldp+196,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[3]),32);
    bufp->fullIData(oldp+197,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[4]),32);
    bufp->fullIData(oldp+198,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[5]),32);
    bufp->fullIData(oldp+199,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[6]),32);
    bufp->fullIData(oldp+200,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[7]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[8]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[9]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[10]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[11]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[12]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[13]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[14]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[15]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[16]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[17]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[18]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[19]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[20]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[21]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[22]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[23]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[24]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[25]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[26]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[27]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[28]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[29]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[30]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[31]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[32]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[33]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[34]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[35]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[36]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[37]),32);
    bufp->fullIData(oldp+231,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[38]),32);
    bufp->fullIData(oldp+232,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[39]),32);
    bufp->fullIData(oldp+233,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[40]),32);
    bufp->fullIData(oldp+234,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[41]),32);
    bufp->fullIData(oldp+235,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[42]),32);
    bufp->fullIData(oldp+236,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[43]),32);
    bufp->fullIData(oldp+237,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[44]),32);
    bufp->fullIData(oldp+238,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[45]),32);
    bufp->fullIData(oldp+239,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[46]),32);
    bufp->fullIData(oldp+240,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[47]),32);
    bufp->fullIData(oldp+241,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[48]),32);
    bufp->fullIData(oldp+242,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[49]),32);
    bufp->fullIData(oldp+243,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[50]),32);
    bufp->fullIData(oldp+244,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[51]),32);
    bufp->fullIData(oldp+245,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[52]),32);
    bufp->fullIData(oldp+246,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[53]),32);
    bufp->fullIData(oldp+247,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[54]),32);
    bufp->fullIData(oldp+248,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[55]),32);
    bufp->fullIData(oldp+249,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[56]),32);
    bufp->fullIData(oldp+250,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[57]),32);
    bufp->fullIData(oldp+251,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[58]),32);
    bufp->fullIData(oldp+252,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[59]),32);
    bufp->fullIData(oldp+253,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[60]),32);
    bufp->fullIData(oldp+254,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[61]),32);
    bufp->fullIData(oldp+255,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[62]),32);
    bufp->fullIData(oldp+256,(vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[63]),32);
    bufp->fullIData(oldp+257,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0]),32);
    bufp->fullIData(oldp+258,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[1]),32);
    bufp->fullIData(oldp+259,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[2]),32);
    bufp->fullIData(oldp+260,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[3]),32);
    bufp->fullIData(oldp+261,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[4]),32);
    bufp->fullIData(oldp+262,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[5]),32);
    bufp->fullIData(oldp+263,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[6]),32);
    bufp->fullIData(oldp+264,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[7]),32);
    bufp->fullIData(oldp+265,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[8]),32);
    bufp->fullIData(oldp+266,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[9]),32);
    bufp->fullIData(oldp+267,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[10]),32);
    bufp->fullIData(oldp+268,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[11]),32);
    bufp->fullIData(oldp+269,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[12]),32);
    bufp->fullIData(oldp+270,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[13]),32);
    bufp->fullIData(oldp+271,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[14]),32);
    bufp->fullIData(oldp+272,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[15]),32);
    bufp->fullIData(oldp+273,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[16]),32);
    bufp->fullIData(oldp+274,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[17]),32);
    bufp->fullIData(oldp+275,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[18]),32);
    bufp->fullIData(oldp+276,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[19]),32);
    bufp->fullIData(oldp+277,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[20]),32);
    bufp->fullIData(oldp+278,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[21]),32);
    bufp->fullIData(oldp+279,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[22]),32);
    bufp->fullIData(oldp+280,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[23]),32);
    bufp->fullIData(oldp+281,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[24]),32);
    bufp->fullIData(oldp+282,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[25]),32);
    bufp->fullIData(oldp+283,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[26]),32);
    bufp->fullIData(oldp+284,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[27]),32);
    bufp->fullIData(oldp+285,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[28]),32);
    bufp->fullIData(oldp+286,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[29]),32);
    bufp->fullIData(oldp+287,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[30]),32);
    bufp->fullIData(oldp+288,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[31]),32);
    bufp->fullIData(oldp+289,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[32]),32);
    bufp->fullIData(oldp+290,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[33]),32);
    bufp->fullIData(oldp+291,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[34]),32);
    bufp->fullIData(oldp+292,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[35]),32);
    bufp->fullIData(oldp+293,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[36]),32);
    bufp->fullIData(oldp+294,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[37]),32);
    bufp->fullIData(oldp+295,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[38]),32);
    bufp->fullIData(oldp+296,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[39]),32);
    bufp->fullIData(oldp+297,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[40]),32);
    bufp->fullIData(oldp+298,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[41]),32);
    bufp->fullIData(oldp+299,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[42]),32);
    bufp->fullIData(oldp+300,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[43]),32);
    bufp->fullIData(oldp+301,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[44]),32);
    bufp->fullIData(oldp+302,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[45]),32);
    bufp->fullIData(oldp+303,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[46]),32);
    bufp->fullIData(oldp+304,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[47]),32);
    bufp->fullIData(oldp+305,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[48]),32);
    bufp->fullIData(oldp+306,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[49]),32);
    bufp->fullIData(oldp+307,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[50]),32);
    bufp->fullIData(oldp+308,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[51]),32);
    bufp->fullIData(oldp+309,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[52]),32);
    bufp->fullIData(oldp+310,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[53]),32);
    bufp->fullIData(oldp+311,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[54]),32);
    bufp->fullIData(oldp+312,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[55]),32);
    bufp->fullIData(oldp+313,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[56]),32);
    bufp->fullIData(oldp+314,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[57]),32);
    bufp->fullIData(oldp+315,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[58]),32);
    bufp->fullIData(oldp+316,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[59]),32);
    bufp->fullIData(oldp+317,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[60]),32);
    bufp->fullIData(oldp+318,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[61]),32);
    bufp->fullIData(oldp+319,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[62]),32);
    bufp->fullIData(oldp+320,(vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[63]),32);
    bufp->fullIData(oldp+321,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0]),32);
    bufp->fullIData(oldp+322,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[1]),32);
    bufp->fullIData(oldp+323,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[2]),32);
    bufp->fullIData(oldp+324,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[3]),32);
    bufp->fullIData(oldp+325,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[4]),32);
    bufp->fullIData(oldp+326,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[5]),32);
    bufp->fullIData(oldp+327,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[6]),32);
    bufp->fullIData(oldp+328,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[7]),32);
    bufp->fullIData(oldp+329,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[8]),32);
    bufp->fullIData(oldp+330,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[9]),32);
    bufp->fullIData(oldp+331,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[10]),32);
    bufp->fullIData(oldp+332,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[11]),32);
    bufp->fullIData(oldp+333,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[12]),32);
    bufp->fullIData(oldp+334,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[13]),32);
    bufp->fullIData(oldp+335,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[14]),32);
    bufp->fullIData(oldp+336,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[15]),32);
    bufp->fullIData(oldp+337,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[16]),32);
    bufp->fullIData(oldp+338,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[17]),32);
    bufp->fullIData(oldp+339,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[18]),32);
    bufp->fullIData(oldp+340,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[19]),32);
    bufp->fullIData(oldp+341,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[20]),32);
    bufp->fullIData(oldp+342,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[21]),32);
    bufp->fullIData(oldp+343,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[22]),32);
    bufp->fullIData(oldp+344,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[23]),32);
    bufp->fullIData(oldp+345,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[24]),32);
    bufp->fullIData(oldp+346,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[25]),32);
    bufp->fullIData(oldp+347,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[26]),32);
    bufp->fullIData(oldp+348,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[27]),32);
    bufp->fullIData(oldp+349,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[28]),32);
    bufp->fullIData(oldp+350,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[29]),32);
    bufp->fullIData(oldp+351,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[30]),32);
    bufp->fullIData(oldp+352,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[31]),32);
    bufp->fullIData(oldp+353,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[32]),32);
    bufp->fullIData(oldp+354,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[33]),32);
    bufp->fullIData(oldp+355,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[34]),32);
    bufp->fullIData(oldp+356,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[35]),32);
    bufp->fullIData(oldp+357,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[36]),32);
    bufp->fullIData(oldp+358,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[37]),32);
    bufp->fullIData(oldp+359,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[38]),32);
    bufp->fullIData(oldp+360,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[39]),32);
    bufp->fullIData(oldp+361,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[40]),32);
    bufp->fullIData(oldp+362,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[41]),32);
    bufp->fullIData(oldp+363,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[42]),32);
    bufp->fullIData(oldp+364,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[43]),32);
    bufp->fullIData(oldp+365,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[44]),32);
    bufp->fullIData(oldp+366,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[45]),32);
    bufp->fullIData(oldp+367,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[46]),32);
    bufp->fullIData(oldp+368,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[47]),32);
    bufp->fullIData(oldp+369,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[48]),32);
    bufp->fullIData(oldp+370,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[49]),32);
    bufp->fullIData(oldp+371,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[50]),32);
    bufp->fullIData(oldp+372,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[51]),32);
    bufp->fullIData(oldp+373,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[52]),32);
    bufp->fullIData(oldp+374,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[53]),32);
    bufp->fullIData(oldp+375,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[54]),32);
    bufp->fullIData(oldp+376,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[55]),32);
    bufp->fullIData(oldp+377,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[56]),32);
    bufp->fullIData(oldp+378,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[57]),32);
    bufp->fullIData(oldp+379,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[58]),32);
    bufp->fullIData(oldp+380,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[59]),32);
    bufp->fullIData(oldp+381,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[60]),32);
    bufp->fullIData(oldp+382,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[61]),32);
    bufp->fullIData(oldp+383,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[62]),32);
    bufp->fullIData(oldp+384,(vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[63]),32);
    bufp->fullIData(oldp+385,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__k),32);
    bufp->fullCData(oldp+386,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__next_state),2);
    bufp->fullCData(oldp+387,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[0]),8);
    bufp->fullCData(oldp+388,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[1]),8);
    bufp->fullCData(oldp+389,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[2]),8);
    bufp->fullCData(oldp+390,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[3]),8);
    bufp->fullCData(oldp+391,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[4]),8);
    bufp->fullCData(oldp+392,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[5]),8);
    bufp->fullCData(oldp+393,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[6]),8);
    bufp->fullCData(oldp+394,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core[7]),8);
    bufp->fullCData(oldp+395,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[0]),8);
    bufp->fullCData(oldp+396,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[1]),8);
    bufp->fullCData(oldp+397,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[2]),8);
    bufp->fullCData(oldp+398,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[3]),8);
    bufp->fullCData(oldp+399,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[4]),8);
    bufp->fullCData(oldp+400,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[5]),8);
    bufp->fullCData(oldp+401,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[6]),8);
    bufp->fullCData(oldp+402,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core[7]),8);
    bufp->fullCData(oldp+403,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[0]),8);
    bufp->fullCData(oldp+404,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[1]),8);
    bufp->fullCData(oldp+405,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[2]),8);
    bufp->fullCData(oldp+406,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[3]),8);
    bufp->fullCData(oldp+407,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[4]),8);
    bufp->fullCData(oldp+408,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[5]),8);
    bufp->fullCData(oldp+409,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[6]),8);
    bufp->fullCData(oldp+410,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core[7]),8);
    bufp->fullIData(oldp+411,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[0]),32);
    bufp->fullIData(oldp+412,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[1]),32);
    bufp->fullIData(oldp+413,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[2]),32);
    bufp->fullIData(oldp+414,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[3]),32);
    bufp->fullIData(oldp+415,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[4]),32);
    bufp->fullIData(oldp+416,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[5]),32);
    bufp->fullIData(oldp+417,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[6]),32);
    bufp->fullIData(oldp+418,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_core[7]),32);
    bufp->fullIData(oldp+419,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[0]),32);
    bufp->fullIData(oldp+420,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[1]),32);
    bufp->fullIData(oldp+421,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[2]),32);
    bufp->fullIData(oldp+422,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[3]),32);
    bufp->fullIData(oldp+423,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[4]),32);
    bufp->fullIData(oldp+424,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[5]),32);
    bufp->fullIData(oldp+425,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[6]),32);
    bufp->fullIData(oldp+426,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_core[7]),32);
    bufp->fullIData(oldp+427,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[0]),32);
    bufp->fullIData(oldp+428,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[1]),32);
    bufp->fullIData(oldp+429,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[2]),32);
    bufp->fullIData(oldp+430,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[3]),32);
    bufp->fullIData(oldp+431,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[4]),32);
    bufp->fullIData(oldp+432,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[5]),32);
    bufp->fullIData(oldp+433,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[6]),32);
    bufp->fullIData(oldp+434,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_core[7]),32);
    bufp->fullCData(oldp+435,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
                              [0U]),8);
    bufp->fullCData(oldp+436,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
                              [0U]),8);
    bufp->fullCData(oldp+437,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
                              [0U]),8);
    bufp->fullIData(oldp+438,((((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+439,((((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+440,(((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+441,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+442,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+443,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+444,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+445,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+446,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+447,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+448,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+449,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+450,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
                              [1U]),8);
    bufp->fullCData(oldp+451,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
                              [1U]),8);
    bufp->fullCData(oldp+452,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
                              [1U]),8);
    bufp->fullIData(oldp+453,((((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+454,((((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+455,(((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+456,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+457,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+458,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+459,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+460,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+461,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+462,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+463,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+464,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+465,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
                              [2U]),8);
    bufp->fullCData(oldp+466,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
                              [2U]),8);
    bufp->fullCData(oldp+467,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
                              [2U]),8);
    bufp->fullIData(oldp+468,((((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+469,((((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+470,(((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+471,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+472,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+473,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+474,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+475,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+476,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+477,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+478,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+479,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+480,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
                              [3U]),8);
    bufp->fullCData(oldp+481,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
                              [3U]),8);
    bufp->fullCData(oldp+482,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
                              [3U]),8);
    bufp->fullIData(oldp+483,((((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+484,((((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+485,(((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+486,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+487,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+488,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+489,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+490,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+491,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+492,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+493,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+494,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+495,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
                              [4U]),8);
    bufp->fullCData(oldp+496,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
                              [4U]),8);
    bufp->fullCData(oldp+497,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
                              [4U]),8);
    bufp->fullIData(oldp+498,((((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+499,((((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+500,(((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+501,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+502,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+503,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+504,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+505,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+506,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+507,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+508,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+509,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+510,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
                              [5U]),8);
    bufp->fullCData(oldp+511,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
                              [5U]),8);
    bufp->fullCData(oldp+512,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
                              [5U]),8);
    bufp->fullIData(oldp+513,((((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+514,((((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+515,(((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+516,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+517,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+518,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+519,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+520,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+521,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+522,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+523,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+524,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+525,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
                              [6U]),8);
    bufp->fullCData(oldp+526,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
                              [6U]),8);
    bufp->fullCData(oldp+527,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
                              [6U]),8);
    bufp->fullIData(oldp+528,((((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+529,((((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+530,(((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+531,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+532,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+533,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+534,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+535,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+536,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+537,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+538,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+539,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+540,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__r_core
                              [7U]),8);
    bufp->fullCData(oldp+541,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__g_core
                              [7U]),8);
    bufp->fullCData(oldp+542,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__b_core
                              [7U]),8);
    bufp->fullIData(oldp+543,((((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+544,((((- vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+545,(((vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+546,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+547,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+548,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+549,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+550,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+551,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+552,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+553,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+554,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullBit(oldp+555,(vlSelfRef.connect__DOT__quant_y_done));
    bufp->fullBit(oldp+556,(vlSelfRef.connect__DOT__quant_cb_done));
    bufp->fullBit(oldp+557,(vlSelfRef.connect__DOT__quant_cr_done));
    bufp->fullCData(oldp+558,(vlSelfRef.connect__DOT__quant_cb__DOT__state),2);
    bufp->fullCData(oldp+559,(vlSelfRef.connect__DOT__quant_cb__DOT__cycle_cnt),3);
    bufp->fullCData(oldp+560,(vlSelfRef.connect__DOT__quant_cb__DOT__addr),6);
    bufp->fullSData(oldp+561,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[0]),16);
    bufp->fullSData(oldp+562,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[1]),16);
    bufp->fullSData(oldp+563,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[2]),16);
    bufp->fullSData(oldp+564,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[3]),16);
    bufp->fullSData(oldp+565,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[4]),16);
    bufp->fullSData(oldp+566,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[5]),16);
    bufp->fullSData(oldp+567,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[6]),16);
    bufp->fullSData(oldp+568,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[7]),16);
    bufp->fullSData(oldp+569,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[8]),16);
    bufp->fullSData(oldp+570,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[9]),16);
    bufp->fullSData(oldp+571,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[10]),16);
    bufp->fullSData(oldp+572,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[11]),16);
    bufp->fullSData(oldp+573,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[12]),16);
    bufp->fullSData(oldp+574,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[13]),16);
    bufp->fullSData(oldp+575,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[14]),16);
    bufp->fullSData(oldp+576,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[15]),16);
    bufp->fullSData(oldp+577,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[16]),16);
    bufp->fullSData(oldp+578,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[17]),16);
    bufp->fullSData(oldp+579,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[18]),16);
    bufp->fullSData(oldp+580,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[19]),16);
    bufp->fullSData(oldp+581,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[20]),16);
    bufp->fullSData(oldp+582,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[21]),16);
    bufp->fullSData(oldp+583,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[22]),16);
    bufp->fullSData(oldp+584,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[23]),16);
    bufp->fullSData(oldp+585,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[24]),16);
    bufp->fullSData(oldp+586,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[25]),16);
    bufp->fullSData(oldp+587,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[26]),16);
    bufp->fullSData(oldp+588,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[27]),16);
    bufp->fullSData(oldp+589,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[28]),16);
    bufp->fullSData(oldp+590,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[29]),16);
    bufp->fullSData(oldp+591,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[30]),16);
    bufp->fullSData(oldp+592,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[31]),16);
    bufp->fullSData(oldp+593,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[32]),16);
    bufp->fullSData(oldp+594,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[33]),16);
    bufp->fullSData(oldp+595,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[34]),16);
    bufp->fullSData(oldp+596,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[35]),16);
    bufp->fullSData(oldp+597,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[36]),16);
    bufp->fullSData(oldp+598,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[37]),16);
    bufp->fullSData(oldp+599,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[38]),16);
    bufp->fullSData(oldp+600,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[39]),16);
    bufp->fullSData(oldp+601,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[40]),16);
    bufp->fullSData(oldp+602,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[41]),16);
    bufp->fullSData(oldp+603,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[42]),16);
    bufp->fullSData(oldp+604,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[43]),16);
    bufp->fullSData(oldp+605,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[44]),16);
    bufp->fullSData(oldp+606,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[45]),16);
    bufp->fullSData(oldp+607,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[46]),16);
    bufp->fullSData(oldp+608,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[47]),16);
    bufp->fullSData(oldp+609,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[48]),16);
    bufp->fullSData(oldp+610,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[49]),16);
    bufp->fullSData(oldp+611,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[50]),16);
    bufp->fullSData(oldp+612,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[51]),16);
    bufp->fullSData(oldp+613,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[52]),16);
    bufp->fullSData(oldp+614,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[53]),16);
    bufp->fullSData(oldp+615,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[54]),16);
    bufp->fullSData(oldp+616,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[55]),16);
    bufp->fullSData(oldp+617,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[56]),16);
    bufp->fullSData(oldp+618,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[57]),16);
    bufp->fullSData(oldp+619,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[58]),16);
    bufp->fullSData(oldp+620,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[59]),16);
    bufp->fullSData(oldp+621,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[60]),16);
    bufp->fullSData(oldp+622,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[61]),16);
    bufp->fullSData(oldp+623,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[62]),16);
    bufp->fullSData(oldp+624,(vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer[63]),16);
    bufp->fullIData(oldp+625,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[0]),32);
    bufp->fullIData(oldp+626,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[1]),32);
    bufp->fullIData(oldp+627,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[2]),32);
    bufp->fullIData(oldp+628,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[3]),32);
    bufp->fullIData(oldp+629,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[4]),32);
    bufp->fullIData(oldp+630,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[5]),32);
    bufp->fullIData(oldp+631,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[6]),32);
    bufp->fullIData(oldp+632,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in[7]),32);
    bufp->fullIData(oldp+633,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[0]),32);
    bufp->fullIData(oldp+634,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[1]),32);
    bufp->fullIData(oldp+635,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[2]),32);
    bufp->fullIData(oldp+636,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[3]),32);
    bufp->fullIData(oldp+637,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[4]),32);
    bufp->fullIData(oldp+638,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[5]),32);
    bufp->fullIData(oldp+639,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[6]),32);
    bufp->fullIData(oldp+640,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in[7]),32);
    bufp->fullIData(oldp+641,(vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[0]),32);
    bufp->fullIData(oldp+642,(vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[1]),32);
    bufp->fullIData(oldp+643,(vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[2]),32);
    bufp->fullIData(oldp+644,(vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[3]),32);
    bufp->fullIData(oldp+645,(vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[4]),32);
    bufp->fullIData(oldp+646,(vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[5]),32);
    bufp->fullIData(oldp+647,(vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[6]),32);
    bufp->fullIData(oldp+648,(vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[7]),32);
    bufp->fullIData(oldp+649,(vlSelfRef.connect__DOT__quant_cb__DOT__j),32);
    bufp->fullIData(oldp+650,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                              [0U]),32);
    bufp->fullIData(oldp+651,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                              [0U]),32);
    bufp->fullIData(oldp+652,(vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+653,(vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+655,((0xffffU & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                               [0U])),16);
    bufp->fullIData(oldp+656,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                              [1U]),32);
    bufp->fullIData(oldp+657,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                              [1U]),32);
    bufp->fullIData(oldp+658,(vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+659,(vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+661,((0xffffU & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                               [1U])),16);
    bufp->fullIData(oldp+662,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                              [2U]),32);
    bufp->fullIData(oldp+663,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                              [2U]),32);
    bufp->fullIData(oldp+664,(vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+665,(vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+667,((0xffffU & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                               [2U])),16);
    bufp->fullIData(oldp+668,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                              [3U]),32);
    bufp->fullIData(oldp+669,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                              [3U]),32);
    bufp->fullIData(oldp+670,(vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+671,(vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+673,((0xffffU & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                               [3U])),16);
    bufp->fullIData(oldp+674,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                              [4U]),32);
    bufp->fullIData(oldp+675,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                              [4U]),32);
    bufp->fullIData(oldp+676,(vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+677,(vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+679,((0xffffU & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                               [4U])),16);
    bufp->fullIData(oldp+680,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                              [5U]),32);
    bufp->fullIData(oldp+681,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                              [5U]),32);
    bufp->fullIData(oldp+682,(vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+683,(vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+685,((0xffffU & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                               [5U])),16);
    bufp->fullIData(oldp+686,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                              [6U]),32);
    bufp->fullIData(oldp+687,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                              [6U]),32);
    bufp->fullIData(oldp+688,(vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+689,(vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+691,((0xffffU & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                               [6U])),16);
    bufp->fullIData(oldp+692,(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                              [7U]),32);
    bufp->fullIData(oldp+693,(vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                              [7U]),32);
    bufp->fullIData(oldp+694,(vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+695,(vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+697,((0xffffU & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                               [7U])),16);
    bufp->fullCData(oldp+698,(vlSelfRef.connect__DOT__quant_cr__DOT__state),2);
    bufp->fullCData(oldp+699,(vlSelfRef.connect__DOT__quant_cr__DOT__cycle_cnt),3);
    bufp->fullCData(oldp+700,(vlSelfRef.connect__DOT__quant_cr__DOT__addr),6);
    bufp->fullSData(oldp+701,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[0]),16);
    bufp->fullSData(oldp+702,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[1]),16);
    bufp->fullSData(oldp+703,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[2]),16);
    bufp->fullSData(oldp+704,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[3]),16);
    bufp->fullSData(oldp+705,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[4]),16);
    bufp->fullSData(oldp+706,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[5]),16);
    bufp->fullSData(oldp+707,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[6]),16);
    bufp->fullSData(oldp+708,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[7]),16);
    bufp->fullSData(oldp+709,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[8]),16);
    bufp->fullSData(oldp+710,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[9]),16);
    bufp->fullSData(oldp+711,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[10]),16);
    bufp->fullSData(oldp+712,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[11]),16);
    bufp->fullSData(oldp+713,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[12]),16);
    bufp->fullSData(oldp+714,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[13]),16);
    bufp->fullSData(oldp+715,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[14]),16);
    bufp->fullSData(oldp+716,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[15]),16);
    bufp->fullSData(oldp+717,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[16]),16);
    bufp->fullSData(oldp+718,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[17]),16);
    bufp->fullSData(oldp+719,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[18]),16);
    bufp->fullSData(oldp+720,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[19]),16);
    bufp->fullSData(oldp+721,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[20]),16);
    bufp->fullSData(oldp+722,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[21]),16);
    bufp->fullSData(oldp+723,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[22]),16);
    bufp->fullSData(oldp+724,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[23]),16);
    bufp->fullSData(oldp+725,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[24]),16);
    bufp->fullSData(oldp+726,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[25]),16);
    bufp->fullSData(oldp+727,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[26]),16);
    bufp->fullSData(oldp+728,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[27]),16);
    bufp->fullSData(oldp+729,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[28]),16);
    bufp->fullSData(oldp+730,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[29]),16);
    bufp->fullSData(oldp+731,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[30]),16);
    bufp->fullSData(oldp+732,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[31]),16);
    bufp->fullSData(oldp+733,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[32]),16);
    bufp->fullSData(oldp+734,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[33]),16);
    bufp->fullSData(oldp+735,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[34]),16);
    bufp->fullSData(oldp+736,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[35]),16);
    bufp->fullSData(oldp+737,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[36]),16);
    bufp->fullSData(oldp+738,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[37]),16);
    bufp->fullSData(oldp+739,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[38]),16);
    bufp->fullSData(oldp+740,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[39]),16);
    bufp->fullSData(oldp+741,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[40]),16);
    bufp->fullSData(oldp+742,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[41]),16);
    bufp->fullSData(oldp+743,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[42]),16);
    bufp->fullSData(oldp+744,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[43]),16);
    bufp->fullSData(oldp+745,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[44]),16);
    bufp->fullSData(oldp+746,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[45]),16);
    bufp->fullSData(oldp+747,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[46]),16);
    bufp->fullSData(oldp+748,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[47]),16);
    bufp->fullSData(oldp+749,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[48]),16);
    bufp->fullSData(oldp+750,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[49]),16);
    bufp->fullSData(oldp+751,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[50]),16);
    bufp->fullSData(oldp+752,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[51]),16);
    bufp->fullSData(oldp+753,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[52]),16);
    bufp->fullSData(oldp+754,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[53]),16);
    bufp->fullSData(oldp+755,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[54]),16);
    bufp->fullSData(oldp+756,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[55]),16);
    bufp->fullSData(oldp+757,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[56]),16);
    bufp->fullSData(oldp+758,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[57]),16);
    bufp->fullSData(oldp+759,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[58]),16);
    bufp->fullSData(oldp+760,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[59]),16);
    bufp->fullSData(oldp+761,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[60]),16);
    bufp->fullSData(oldp+762,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[61]),16);
    bufp->fullSData(oldp+763,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[62]),16);
    bufp->fullSData(oldp+764,(vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer[63]),16);
    bufp->fullIData(oldp+765,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[0]),32);
    bufp->fullIData(oldp+766,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[1]),32);
    bufp->fullIData(oldp+767,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[2]),32);
    bufp->fullIData(oldp+768,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[3]),32);
    bufp->fullIData(oldp+769,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[4]),32);
    bufp->fullIData(oldp+770,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[5]),32);
    bufp->fullIData(oldp+771,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[6]),32);
    bufp->fullIData(oldp+772,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in[7]),32);
    bufp->fullIData(oldp+773,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[0]),32);
    bufp->fullIData(oldp+774,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[1]),32);
    bufp->fullIData(oldp+775,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[2]),32);
    bufp->fullIData(oldp+776,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[3]),32);
    bufp->fullIData(oldp+777,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[4]),32);
    bufp->fullIData(oldp+778,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[5]),32);
    bufp->fullIData(oldp+779,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[6]),32);
    bufp->fullIData(oldp+780,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in[7]),32);
    bufp->fullIData(oldp+781,(vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[0]),32);
    bufp->fullIData(oldp+782,(vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[1]),32);
    bufp->fullIData(oldp+783,(vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[2]),32);
    bufp->fullIData(oldp+784,(vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[3]),32);
    bufp->fullIData(oldp+785,(vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[4]),32);
    bufp->fullIData(oldp+786,(vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[5]),32);
    bufp->fullIData(oldp+787,(vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[6]),32);
    bufp->fullIData(oldp+788,(vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[7]),32);
    bufp->fullIData(oldp+789,(vlSelfRef.connect__DOT__quant_cr__DOT__j),32);
    bufp->fullIData(oldp+790,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                              [0U]),32);
    bufp->fullIData(oldp+791,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                              [0U]),32);
    bufp->fullIData(oldp+792,(vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+793,(vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+795,((0xffffU & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                               [0U])),16);
    bufp->fullIData(oldp+796,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                              [1U]),32);
    bufp->fullIData(oldp+797,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                              [1U]),32);
    bufp->fullIData(oldp+798,(vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+799,(vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+801,((0xffffU & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                               [1U])),16);
    bufp->fullIData(oldp+802,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                              [2U]),32);
    bufp->fullIData(oldp+803,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                              [2U]),32);
    bufp->fullIData(oldp+804,(vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+805,(vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+807,((0xffffU & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                               [2U])),16);
    bufp->fullIData(oldp+808,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                              [3U]),32);
    bufp->fullIData(oldp+809,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                              [3U]),32);
    bufp->fullIData(oldp+810,(vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+811,(vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+813,((0xffffU & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                               [3U])),16);
    bufp->fullIData(oldp+814,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                              [4U]),32);
    bufp->fullIData(oldp+815,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                              [4U]),32);
    bufp->fullIData(oldp+816,(vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+817,(vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+819,((0xffffU & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                               [4U])),16);
    bufp->fullIData(oldp+820,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                              [5U]),32);
    bufp->fullIData(oldp+821,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                              [5U]),32);
    bufp->fullIData(oldp+822,(vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+823,(vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+825,((0xffffU & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                               [5U])),16);
    bufp->fullIData(oldp+826,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                              [6U]),32);
    bufp->fullIData(oldp+827,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                              [6U]),32);
    bufp->fullIData(oldp+828,(vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+829,(vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+831,((0xffffU & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                               [6U])),16);
    bufp->fullIData(oldp+832,(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                              [7U]),32);
    bufp->fullIData(oldp+833,(vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                              [7U]),32);
    bufp->fullIData(oldp+834,(vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+835,(vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+837,((0xffffU & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                               [7U])),16);
    bufp->fullCData(oldp+838,(vlSelfRef.connect__DOT__quant_y__DOT__state),2);
    bufp->fullCData(oldp+839,(vlSelfRef.connect__DOT__quant_y__DOT__cycle_cnt),3);
    bufp->fullCData(oldp+840,(vlSelfRef.connect__DOT__quant_y__DOT__addr),6);
    bufp->fullSData(oldp+841,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[0]),16);
    bufp->fullSData(oldp+842,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[1]),16);
    bufp->fullSData(oldp+843,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[2]),16);
    bufp->fullSData(oldp+844,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[3]),16);
    bufp->fullSData(oldp+845,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[4]),16);
    bufp->fullSData(oldp+846,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[5]),16);
    bufp->fullSData(oldp+847,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[6]),16);
    bufp->fullSData(oldp+848,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[7]),16);
    bufp->fullSData(oldp+849,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[8]),16);
    bufp->fullSData(oldp+850,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[9]),16);
    bufp->fullSData(oldp+851,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[10]),16);
    bufp->fullSData(oldp+852,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[11]),16);
    bufp->fullSData(oldp+853,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[12]),16);
    bufp->fullSData(oldp+854,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[13]),16);
    bufp->fullSData(oldp+855,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[14]),16);
    bufp->fullSData(oldp+856,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[15]),16);
    bufp->fullSData(oldp+857,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[16]),16);
    bufp->fullSData(oldp+858,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[17]),16);
    bufp->fullSData(oldp+859,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[18]),16);
    bufp->fullSData(oldp+860,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[19]),16);
    bufp->fullSData(oldp+861,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[20]),16);
    bufp->fullSData(oldp+862,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[21]),16);
    bufp->fullSData(oldp+863,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[22]),16);
    bufp->fullSData(oldp+864,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[23]),16);
    bufp->fullSData(oldp+865,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[24]),16);
    bufp->fullSData(oldp+866,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[25]),16);
    bufp->fullSData(oldp+867,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[26]),16);
    bufp->fullSData(oldp+868,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[27]),16);
    bufp->fullSData(oldp+869,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[28]),16);
    bufp->fullSData(oldp+870,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[29]),16);
    bufp->fullSData(oldp+871,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[30]),16);
    bufp->fullSData(oldp+872,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[31]),16);
    bufp->fullSData(oldp+873,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[32]),16);
    bufp->fullSData(oldp+874,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[33]),16);
    bufp->fullSData(oldp+875,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[34]),16);
    bufp->fullSData(oldp+876,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[35]),16);
    bufp->fullSData(oldp+877,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[36]),16);
    bufp->fullSData(oldp+878,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[37]),16);
    bufp->fullSData(oldp+879,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[38]),16);
    bufp->fullSData(oldp+880,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[39]),16);
    bufp->fullSData(oldp+881,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[40]),16);
    bufp->fullSData(oldp+882,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[41]),16);
    bufp->fullSData(oldp+883,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[42]),16);
    bufp->fullSData(oldp+884,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[43]),16);
    bufp->fullSData(oldp+885,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[44]),16);
    bufp->fullSData(oldp+886,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[45]),16);
    bufp->fullSData(oldp+887,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[46]),16);
    bufp->fullSData(oldp+888,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[47]),16);
    bufp->fullSData(oldp+889,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[48]),16);
    bufp->fullSData(oldp+890,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[49]),16);
    bufp->fullSData(oldp+891,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[50]),16);
    bufp->fullSData(oldp+892,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[51]),16);
    bufp->fullSData(oldp+893,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[52]),16);
    bufp->fullSData(oldp+894,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[53]),16);
    bufp->fullSData(oldp+895,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[54]),16);
    bufp->fullSData(oldp+896,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[55]),16);
    bufp->fullSData(oldp+897,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[56]),16);
    bufp->fullSData(oldp+898,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[57]),16);
    bufp->fullSData(oldp+899,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[58]),16);
    bufp->fullSData(oldp+900,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[59]),16);
    bufp->fullSData(oldp+901,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[60]),16);
    bufp->fullSData(oldp+902,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[61]),16);
    bufp->fullSData(oldp+903,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[62]),16);
    bufp->fullSData(oldp+904,(vlSelfRef.connect__DOT__quant_y__DOT__result_buffer[63]),16);
    bufp->fullIData(oldp+905,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[0]),32);
    bufp->fullIData(oldp+906,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[1]),32);
    bufp->fullIData(oldp+907,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[2]),32);
    bufp->fullIData(oldp+908,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[3]),32);
    bufp->fullIData(oldp+909,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[4]),32);
    bufp->fullIData(oldp+910,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[5]),32);
    bufp->fullIData(oldp+911,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[6]),32);
    bufp->fullIData(oldp+912,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in[7]),32);
    bufp->fullIData(oldp+913,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[0]),32);
    bufp->fullIData(oldp+914,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[1]),32);
    bufp->fullIData(oldp+915,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[2]),32);
    bufp->fullIData(oldp+916,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[3]),32);
    bufp->fullIData(oldp+917,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[4]),32);
    bufp->fullIData(oldp+918,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[5]),32);
    bufp->fullIData(oldp+919,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[6]),32);
    bufp->fullIData(oldp+920,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in[7]),32);
    bufp->fullIData(oldp+921,(vlSelfRef.connect__DOT__quant_y__DOT__mul_out[0]),32);
    bufp->fullIData(oldp+922,(vlSelfRef.connect__DOT__quant_y__DOT__mul_out[1]),32);
    bufp->fullIData(oldp+923,(vlSelfRef.connect__DOT__quant_y__DOT__mul_out[2]),32);
    bufp->fullIData(oldp+924,(vlSelfRef.connect__DOT__quant_y__DOT__mul_out[3]),32);
    bufp->fullIData(oldp+925,(vlSelfRef.connect__DOT__quant_y__DOT__mul_out[4]),32);
    bufp->fullIData(oldp+926,(vlSelfRef.connect__DOT__quant_y__DOT__mul_out[5]),32);
    bufp->fullIData(oldp+927,(vlSelfRef.connect__DOT__quant_y__DOT__mul_out[6]),32);
    bufp->fullIData(oldp+928,(vlSelfRef.connect__DOT__quant_y__DOT__mul_out[7]),32);
    bufp->fullIData(oldp+929,(vlSelfRef.connect__DOT__quant_y__DOT__j),32);
    bufp->fullIData(oldp+930,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                              [0U]),32);
    bufp->fullIData(oldp+931,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                              [0U]),32);
    bufp->fullIData(oldp+932,(vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+933,(vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+935,((0xffffU & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                               [0U])),16);
    bufp->fullIData(oldp+936,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                              [1U]),32);
    bufp->fullIData(oldp+937,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                              [1U]),32);
    bufp->fullIData(oldp+938,(vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+939,(vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+941,((0xffffU & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                               [1U])),16);
    bufp->fullIData(oldp+942,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                              [2U]),32);
    bufp->fullIData(oldp+943,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                              [2U]),32);
    bufp->fullIData(oldp+944,(vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+945,(vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+947,((0xffffU & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                               [2U])),16);
    bufp->fullIData(oldp+948,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                              [3U]),32);
    bufp->fullIData(oldp+949,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                              [3U]),32);
    bufp->fullIData(oldp+950,(vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+951,(vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+953,((0xffffU & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                               [3U])),16);
    bufp->fullIData(oldp+954,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                              [4U]),32);
    bufp->fullIData(oldp+955,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                              [4U]),32);
    bufp->fullIData(oldp+956,(vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+957,(vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+959,((0xffffU & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                               [4U])),16);
    bufp->fullIData(oldp+960,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                              [5U]),32);
    bufp->fullIData(oldp+961,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                              [5U]),32);
    bufp->fullIData(oldp+962,(vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+963,(vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+965,((0xffffU & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                               [5U])),16);
    bufp->fullIData(oldp+966,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                              [6U]),32);
    bufp->fullIData(oldp+967,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                              [6U]),32);
    bufp->fullIData(oldp+968,(vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+969,(vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+971,((0xffffU & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                               [6U])),16);
    bufp->fullIData(oldp+972,(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                              [7U]),32);
    bufp->fullIData(oldp+973,(vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                              [7U]),32);
    bufp->fullIData(oldp+974,(vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+975,(vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+977,((0xffffU & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                               [7U])),16);
    bufp->fullWData(oldp+978,(vlSelfRef.connect__DOT__dct_y_out),2048);
    bufp->fullWData(oldp+1042,(vlSelfRef.connect__DOT__dct_cb_out),2048);
    bufp->fullWData(oldp+1106,(vlSelfRef.connect__DOT__dct_cr_out),2048);
    bufp->fullIData(oldp+1170,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[0]),32);
    bufp->fullIData(oldp+1171,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[1]),32);
    bufp->fullIData(oldp+1172,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[2]),32);
    bufp->fullIData(oldp+1173,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[3]),32);
    bufp->fullIData(oldp+1174,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[4]),32);
    bufp->fullIData(oldp+1175,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[5]),32);
    bufp->fullIData(oldp+1176,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[6]),32);
    bufp->fullIData(oldp+1177,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[7]),32);
    bufp->fullIData(oldp+1178,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[8]),32);
    bufp->fullIData(oldp+1179,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[9]),32);
    bufp->fullIData(oldp+1180,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[10]),32);
    bufp->fullIData(oldp+1181,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[11]),32);
    bufp->fullIData(oldp+1182,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[12]),32);
    bufp->fullIData(oldp+1183,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[13]),32);
    bufp->fullIData(oldp+1184,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[14]),32);
    bufp->fullIData(oldp+1185,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[15]),32);
    bufp->fullIData(oldp+1186,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[16]),32);
    bufp->fullIData(oldp+1187,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[17]),32);
    bufp->fullIData(oldp+1188,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[18]),32);
    bufp->fullIData(oldp+1189,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[19]),32);
    bufp->fullIData(oldp+1190,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[20]),32);
    bufp->fullIData(oldp+1191,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[21]),32);
    bufp->fullIData(oldp+1192,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[22]),32);
    bufp->fullIData(oldp+1193,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[23]),32);
    bufp->fullIData(oldp+1194,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[24]),32);
    bufp->fullIData(oldp+1195,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[25]),32);
    bufp->fullIData(oldp+1196,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[26]),32);
    bufp->fullIData(oldp+1197,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[27]),32);
    bufp->fullIData(oldp+1198,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[28]),32);
    bufp->fullIData(oldp+1199,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[29]),32);
    bufp->fullIData(oldp+1200,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[30]),32);
    bufp->fullIData(oldp+1201,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[31]),32);
    bufp->fullIData(oldp+1202,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[32]),32);
    bufp->fullIData(oldp+1203,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[33]),32);
    bufp->fullIData(oldp+1204,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[34]),32);
    bufp->fullIData(oldp+1205,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[35]),32);
    bufp->fullIData(oldp+1206,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[36]),32);
    bufp->fullIData(oldp+1207,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[37]),32);
    bufp->fullIData(oldp+1208,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[38]),32);
    bufp->fullIData(oldp+1209,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[39]),32);
    bufp->fullIData(oldp+1210,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[40]),32);
    bufp->fullIData(oldp+1211,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[41]),32);
    bufp->fullIData(oldp+1212,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[42]),32);
    bufp->fullIData(oldp+1213,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[43]),32);
    bufp->fullIData(oldp+1214,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[44]),32);
    bufp->fullIData(oldp+1215,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[45]),32);
    bufp->fullIData(oldp+1216,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[46]),32);
    bufp->fullIData(oldp+1217,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[47]),32);
    bufp->fullIData(oldp+1218,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[48]),32);
    bufp->fullIData(oldp+1219,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[49]),32);
    bufp->fullIData(oldp+1220,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[50]),32);
    bufp->fullIData(oldp+1221,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[51]),32);
    bufp->fullIData(oldp+1222,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[52]),32);
    bufp->fullIData(oldp+1223,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[53]),32);
    bufp->fullIData(oldp+1224,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[54]),32);
    bufp->fullIData(oldp+1225,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[55]),32);
    bufp->fullIData(oldp+1226,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[56]),32);
    bufp->fullIData(oldp+1227,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[57]),32);
    bufp->fullIData(oldp+1228,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[58]),32);
    bufp->fullIData(oldp+1229,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[59]),32);
    bufp->fullIData(oldp+1230,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[60]),32);
    bufp->fullIData(oldp+1231,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[61]),32);
    bufp->fullIData(oldp+1232,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[62]),32);
    bufp->fullIData(oldp+1233,(vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer[63]),32);
    bufp->fullIData(oldp+1234,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[0]),32);
    bufp->fullIData(oldp+1235,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[1]),32);
    bufp->fullIData(oldp+1236,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[2]),32);
    bufp->fullIData(oldp+1237,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[3]),32);
    bufp->fullIData(oldp+1238,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[4]),32);
    bufp->fullIData(oldp+1239,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[5]),32);
    bufp->fullIData(oldp+1240,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[6]),32);
    bufp->fullIData(oldp+1241,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[7]),32);
    bufp->fullIData(oldp+1242,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[8]),32);
    bufp->fullIData(oldp+1243,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[9]),32);
    bufp->fullIData(oldp+1244,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[10]),32);
    bufp->fullIData(oldp+1245,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[11]),32);
    bufp->fullIData(oldp+1246,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[12]),32);
    bufp->fullIData(oldp+1247,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[13]),32);
    bufp->fullIData(oldp+1248,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[14]),32);
    bufp->fullIData(oldp+1249,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[15]),32);
    bufp->fullIData(oldp+1250,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[16]),32);
    bufp->fullIData(oldp+1251,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[17]),32);
    bufp->fullIData(oldp+1252,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[18]),32);
    bufp->fullIData(oldp+1253,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[19]),32);
    bufp->fullIData(oldp+1254,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[20]),32);
    bufp->fullIData(oldp+1255,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[21]),32);
    bufp->fullIData(oldp+1256,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[22]),32);
    bufp->fullIData(oldp+1257,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[23]),32);
    bufp->fullIData(oldp+1258,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[24]),32);
    bufp->fullIData(oldp+1259,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[25]),32);
    bufp->fullIData(oldp+1260,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[26]),32);
    bufp->fullIData(oldp+1261,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[27]),32);
    bufp->fullIData(oldp+1262,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[28]),32);
    bufp->fullIData(oldp+1263,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[29]),32);
    bufp->fullIData(oldp+1264,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[30]),32);
    bufp->fullIData(oldp+1265,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[31]),32);
    bufp->fullIData(oldp+1266,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[32]),32);
    bufp->fullIData(oldp+1267,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[33]),32);
    bufp->fullIData(oldp+1268,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[34]),32);
    bufp->fullIData(oldp+1269,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[35]),32);
    bufp->fullIData(oldp+1270,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[36]),32);
    bufp->fullIData(oldp+1271,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[37]),32);
    bufp->fullIData(oldp+1272,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[38]),32);
    bufp->fullIData(oldp+1273,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[39]),32);
    bufp->fullIData(oldp+1274,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[40]),32);
    bufp->fullIData(oldp+1275,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[41]),32);
    bufp->fullIData(oldp+1276,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[42]),32);
    bufp->fullIData(oldp+1277,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[43]),32);
    bufp->fullIData(oldp+1278,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[44]),32);
    bufp->fullIData(oldp+1279,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[45]),32);
    bufp->fullIData(oldp+1280,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[46]),32);
    bufp->fullIData(oldp+1281,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[47]),32);
    bufp->fullIData(oldp+1282,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[48]),32);
    bufp->fullIData(oldp+1283,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[49]),32);
    bufp->fullIData(oldp+1284,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[50]),32);
    bufp->fullIData(oldp+1285,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[51]),32);
    bufp->fullIData(oldp+1286,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[52]),32);
    bufp->fullIData(oldp+1287,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[53]),32);
    bufp->fullIData(oldp+1288,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[54]),32);
    bufp->fullIData(oldp+1289,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[55]),32);
    bufp->fullIData(oldp+1290,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[56]),32);
    bufp->fullIData(oldp+1291,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[57]),32);
    bufp->fullIData(oldp+1292,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[58]),32);
    bufp->fullIData(oldp+1293,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[59]),32);
    bufp->fullIData(oldp+1294,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[60]),32);
    bufp->fullIData(oldp+1295,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[61]),32);
    bufp->fullIData(oldp+1296,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[62]),32);
    bufp->fullIData(oldp+1297,(vlSelfRef.connect__DOT__dct_cb__DOT__output_buffer[63]),32);
    bufp->fullIData(oldp+1298,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[0]),32);
    bufp->fullIData(oldp+1299,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[1]),32);
    bufp->fullIData(oldp+1300,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[2]),32);
    bufp->fullIData(oldp+1301,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[3]),32);
    bufp->fullIData(oldp+1302,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[4]),32);
    bufp->fullIData(oldp+1303,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[5]),32);
    bufp->fullIData(oldp+1304,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[6]),32);
    bufp->fullIData(oldp+1305,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[7]),32);
    bufp->fullIData(oldp+1306,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[8]),32);
    bufp->fullIData(oldp+1307,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[9]),32);
    bufp->fullIData(oldp+1308,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[10]),32);
    bufp->fullIData(oldp+1309,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[11]),32);
    bufp->fullIData(oldp+1310,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[12]),32);
    bufp->fullIData(oldp+1311,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[13]),32);
    bufp->fullIData(oldp+1312,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[14]),32);
    bufp->fullIData(oldp+1313,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[15]),32);
    bufp->fullIData(oldp+1314,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[16]),32);
    bufp->fullIData(oldp+1315,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[17]),32);
    bufp->fullIData(oldp+1316,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[18]),32);
    bufp->fullIData(oldp+1317,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[19]),32);
    bufp->fullIData(oldp+1318,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[20]),32);
    bufp->fullIData(oldp+1319,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[21]),32);
    bufp->fullIData(oldp+1320,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[22]),32);
    bufp->fullIData(oldp+1321,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[23]),32);
    bufp->fullIData(oldp+1322,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[24]),32);
    bufp->fullIData(oldp+1323,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[25]),32);
    bufp->fullIData(oldp+1324,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[26]),32);
    bufp->fullIData(oldp+1325,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[27]),32);
    bufp->fullIData(oldp+1326,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[28]),32);
    bufp->fullIData(oldp+1327,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[29]),32);
    bufp->fullIData(oldp+1328,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[30]),32);
    bufp->fullIData(oldp+1329,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[31]),32);
    bufp->fullIData(oldp+1330,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[32]),32);
    bufp->fullIData(oldp+1331,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[33]),32);
    bufp->fullIData(oldp+1332,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[34]),32);
    bufp->fullIData(oldp+1333,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[35]),32);
    bufp->fullIData(oldp+1334,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[36]),32);
    bufp->fullIData(oldp+1335,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[37]),32);
    bufp->fullIData(oldp+1336,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[38]),32);
    bufp->fullIData(oldp+1337,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[39]),32);
    bufp->fullIData(oldp+1338,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[40]),32);
    bufp->fullIData(oldp+1339,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[41]),32);
    bufp->fullIData(oldp+1340,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[42]),32);
    bufp->fullIData(oldp+1341,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[43]),32);
    bufp->fullIData(oldp+1342,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[44]),32);
    bufp->fullIData(oldp+1343,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[45]),32);
    bufp->fullIData(oldp+1344,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[46]),32);
    bufp->fullIData(oldp+1345,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[47]),32);
    bufp->fullIData(oldp+1346,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[48]),32);
    bufp->fullIData(oldp+1347,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[49]),32);
    bufp->fullIData(oldp+1348,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[50]),32);
    bufp->fullIData(oldp+1349,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[51]),32);
    bufp->fullIData(oldp+1350,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[52]),32);
    bufp->fullIData(oldp+1351,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[53]),32);
    bufp->fullIData(oldp+1352,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[54]),32);
    bufp->fullIData(oldp+1353,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[55]),32);
    bufp->fullIData(oldp+1354,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[56]),32);
    bufp->fullIData(oldp+1355,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[57]),32);
    bufp->fullIData(oldp+1356,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[58]),32);
    bufp->fullIData(oldp+1357,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[59]),32);
    bufp->fullIData(oldp+1358,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[60]),32);
    bufp->fullIData(oldp+1359,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[61]),32);
    bufp->fullIData(oldp+1360,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[62]),32);
    bufp->fullIData(oldp+1361,(vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff[63]),32);
    bufp->fullIData(oldp+1362,(vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[0]),32);
    bufp->fullIData(oldp+1363,(vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[1]),32);
    bufp->fullIData(oldp+1364,(vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[2]),32);
    bufp->fullIData(oldp+1365,(vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[3]),32);
    bufp->fullIData(oldp+1366,(vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[4]),32);
    bufp->fullIData(oldp+1367,(vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[5]),32);
    bufp->fullIData(oldp+1368,(vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[6]),32);
    bufp->fullIData(oldp+1369,(vlSelfRef.connect__DOT__dct_cb__DOT__wdata_trans[7]),32);
    bufp->fullIData(oldp+1370,(vlSelfRef.connect__DOT__dct_cb__DOT__core_out[0]),32);
    bufp->fullIData(oldp+1371,(vlSelfRef.connect__DOT__dct_cb__DOT__core_out[1]),32);
    bufp->fullIData(oldp+1372,(vlSelfRef.connect__DOT__dct_cb__DOT__core_out[2]),32);
    bufp->fullIData(oldp+1373,(vlSelfRef.connect__DOT__dct_cb__DOT__core_out[3]),32);
    bufp->fullIData(oldp+1374,(vlSelfRef.connect__DOT__dct_cb__DOT__core_out[4]),32);
    bufp->fullIData(oldp+1375,(vlSelfRef.connect__DOT__dct_cb__DOT__core_out[5]),32);
    bufp->fullIData(oldp+1376,(vlSelfRef.connect__DOT__dct_cb__DOT__core_out[6]),32);
    bufp->fullIData(oldp+1377,(vlSelfRef.connect__DOT__dct_cb__DOT__core_out[7]),32);
    bufp->fullIData(oldp+1378,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
                               [0U]),32);
    bufp->fullIData(oldp+1379,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
                               [1U]),32);
    bufp->fullIData(oldp+1380,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
                               [2U]),32);
    bufp->fullIData(oldp+1381,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
                               [3U]),32);
    bufp->fullIData(oldp+1382,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
                               [4U]),32);
    bufp->fullIData(oldp+1383,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
                               [5U]),32);
    bufp->fullIData(oldp+1384,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
                               [6U]),32);
    bufp->fullIData(oldp+1385,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y
                               [7U]),32);
    bufp->fullIData(oldp+1386,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__s0),32);
    bufp->fullIData(oldp+1387,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__s1),32);
    bufp->fullIData(oldp+1388,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__s2),32);
    bufp->fullIData(oldp+1389,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__s3),32);
    bufp->fullIData(oldp+1390,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d0),32);
    bufp->fullIData(oldp+1391,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d1),32);
    bufp->fullIData(oldp+1392,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d2),32);
    bufp->fullIData(oldp+1393,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d3),32);
    bufp->fullIData(oldp+1394,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e0),32);
    bufp->fullIData(oldp+1395,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e1),32);
    bufp->fullIData(oldp+1396,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e2),32);
    bufp->fullIData(oldp+1397,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e3),32);
    bufp->fullIData(oldp+1398,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b0),32);
    bufp->fullIData(oldp+1399,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b1),32);
    bufp->fullIData(oldp+1400,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b2),32);
    bufp->fullIData(oldp+1401,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b3),32);
    bufp->fullIData(oldp+1402,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b4),32);
    bufp->fullIData(oldp+1403,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b5),32);
    bufp->fullIData(oldp+1404,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b6),32);
    bufp->fullIData(oldp+1405,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b7),32);
    bufp->fullIData(oldp+1406,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[0]),32);
    bufp->fullIData(oldp+1407,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[1]),32);
    bufp->fullIData(oldp+1408,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[2]),32);
    bufp->fullIData(oldp+1409,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[3]),32);
    bufp->fullIData(oldp+1410,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[4]),32);
    bufp->fullIData(oldp+1411,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[5]),32);
    bufp->fullIData(oldp+1412,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[6]),32);
    bufp->fullIData(oldp+1413,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__y[7]),32);
    bufp->fullIData(oldp+1414,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__t_b1),32);
    bufp->fullIData(oldp+1415,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__t_b5),32);
    bufp->fullIData(oldp+1416,(vlSelfRef.connect__DOT__dct_cb__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+1417,(vlSelfRef.connect__DOT__dct_cb__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1418,(vlSelfRef.connect__DOT__dct_cb__DOT__unnamedblk6__DOT__j),32);
    bufp->fullIData(oldp+1419,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[0]),32);
    bufp->fullIData(oldp+1420,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[1]),32);
    bufp->fullIData(oldp+1421,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[2]),32);
    bufp->fullIData(oldp+1422,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[3]),32);
    bufp->fullIData(oldp+1423,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[4]),32);
    bufp->fullIData(oldp+1424,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[5]),32);
    bufp->fullIData(oldp+1425,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[6]),32);
    bufp->fullIData(oldp+1426,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[7]),32);
    bufp->fullIData(oldp+1427,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[8]),32);
    bufp->fullIData(oldp+1428,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[9]),32);
    bufp->fullIData(oldp+1429,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[10]),32);
    bufp->fullIData(oldp+1430,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[11]),32);
    bufp->fullIData(oldp+1431,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[12]),32);
    bufp->fullIData(oldp+1432,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[13]),32);
    bufp->fullIData(oldp+1433,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[14]),32);
    bufp->fullIData(oldp+1434,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[15]),32);
    bufp->fullIData(oldp+1435,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[16]),32);
    bufp->fullIData(oldp+1436,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[17]),32);
    bufp->fullIData(oldp+1437,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[18]),32);
    bufp->fullIData(oldp+1438,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[19]),32);
    bufp->fullIData(oldp+1439,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[20]),32);
    bufp->fullIData(oldp+1440,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[21]),32);
    bufp->fullIData(oldp+1441,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[22]),32);
    bufp->fullIData(oldp+1442,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[23]),32);
    bufp->fullIData(oldp+1443,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[24]),32);
    bufp->fullIData(oldp+1444,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[25]),32);
    bufp->fullIData(oldp+1445,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[26]),32);
    bufp->fullIData(oldp+1446,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[27]),32);
    bufp->fullIData(oldp+1447,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[28]),32);
    bufp->fullIData(oldp+1448,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[29]),32);
    bufp->fullIData(oldp+1449,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[30]),32);
    bufp->fullIData(oldp+1450,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[31]),32);
    bufp->fullIData(oldp+1451,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[32]),32);
    bufp->fullIData(oldp+1452,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[33]),32);
    bufp->fullIData(oldp+1453,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[34]),32);
    bufp->fullIData(oldp+1454,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[35]),32);
    bufp->fullIData(oldp+1455,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[36]),32);
    bufp->fullIData(oldp+1456,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[37]),32);
    bufp->fullIData(oldp+1457,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[38]),32);
    bufp->fullIData(oldp+1458,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[39]),32);
    bufp->fullIData(oldp+1459,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[40]),32);
    bufp->fullIData(oldp+1460,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[41]),32);
    bufp->fullIData(oldp+1461,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[42]),32);
    bufp->fullIData(oldp+1462,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[43]),32);
    bufp->fullIData(oldp+1463,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[44]),32);
    bufp->fullIData(oldp+1464,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[45]),32);
    bufp->fullIData(oldp+1465,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[46]),32);
    bufp->fullIData(oldp+1466,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[47]),32);
    bufp->fullIData(oldp+1467,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[48]),32);
    bufp->fullIData(oldp+1468,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[49]),32);
    bufp->fullIData(oldp+1469,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[50]),32);
    bufp->fullIData(oldp+1470,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[51]),32);
    bufp->fullIData(oldp+1471,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[52]),32);
    bufp->fullIData(oldp+1472,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[53]),32);
    bufp->fullIData(oldp+1473,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[54]),32);
    bufp->fullIData(oldp+1474,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[55]),32);
    bufp->fullIData(oldp+1475,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[56]),32);
    bufp->fullIData(oldp+1476,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[57]),32);
    bufp->fullIData(oldp+1477,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[58]),32);
    bufp->fullIData(oldp+1478,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[59]),32);
    bufp->fullIData(oldp+1479,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[60]),32);
    bufp->fullIData(oldp+1480,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[61]),32);
    bufp->fullIData(oldp+1481,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[62]),32);
    bufp->fullIData(oldp+1482,(vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer[63]),32);
    bufp->fullIData(oldp+1483,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[0]),32);
    bufp->fullIData(oldp+1484,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[1]),32);
    bufp->fullIData(oldp+1485,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[2]),32);
    bufp->fullIData(oldp+1486,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[3]),32);
    bufp->fullIData(oldp+1487,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[4]),32);
    bufp->fullIData(oldp+1488,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[5]),32);
    bufp->fullIData(oldp+1489,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[6]),32);
    bufp->fullIData(oldp+1490,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[7]),32);
    bufp->fullIData(oldp+1491,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[8]),32);
    bufp->fullIData(oldp+1492,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[9]),32);
    bufp->fullIData(oldp+1493,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[10]),32);
    bufp->fullIData(oldp+1494,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[11]),32);
    bufp->fullIData(oldp+1495,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[12]),32);
    bufp->fullIData(oldp+1496,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[13]),32);
    bufp->fullIData(oldp+1497,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[14]),32);
    bufp->fullIData(oldp+1498,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[15]),32);
    bufp->fullIData(oldp+1499,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[16]),32);
    bufp->fullIData(oldp+1500,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[17]),32);
    bufp->fullIData(oldp+1501,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[18]),32);
    bufp->fullIData(oldp+1502,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[19]),32);
    bufp->fullIData(oldp+1503,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[20]),32);
    bufp->fullIData(oldp+1504,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[21]),32);
    bufp->fullIData(oldp+1505,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[22]),32);
    bufp->fullIData(oldp+1506,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[23]),32);
    bufp->fullIData(oldp+1507,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[24]),32);
    bufp->fullIData(oldp+1508,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[25]),32);
    bufp->fullIData(oldp+1509,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[26]),32);
    bufp->fullIData(oldp+1510,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[27]),32);
    bufp->fullIData(oldp+1511,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[28]),32);
    bufp->fullIData(oldp+1512,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[29]),32);
    bufp->fullIData(oldp+1513,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[30]),32);
    bufp->fullIData(oldp+1514,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[31]),32);
    bufp->fullIData(oldp+1515,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[32]),32);
    bufp->fullIData(oldp+1516,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[33]),32);
    bufp->fullIData(oldp+1517,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[34]),32);
    bufp->fullIData(oldp+1518,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[35]),32);
    bufp->fullIData(oldp+1519,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[36]),32);
    bufp->fullIData(oldp+1520,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[37]),32);
    bufp->fullIData(oldp+1521,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[38]),32);
    bufp->fullIData(oldp+1522,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[39]),32);
    bufp->fullIData(oldp+1523,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[40]),32);
    bufp->fullIData(oldp+1524,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[41]),32);
    bufp->fullIData(oldp+1525,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[42]),32);
    bufp->fullIData(oldp+1526,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[43]),32);
    bufp->fullIData(oldp+1527,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[44]),32);
    bufp->fullIData(oldp+1528,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[45]),32);
    bufp->fullIData(oldp+1529,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[46]),32);
    bufp->fullIData(oldp+1530,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[47]),32);
    bufp->fullIData(oldp+1531,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[48]),32);
    bufp->fullIData(oldp+1532,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[49]),32);
    bufp->fullIData(oldp+1533,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[50]),32);
    bufp->fullIData(oldp+1534,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[51]),32);
    bufp->fullIData(oldp+1535,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[52]),32);
    bufp->fullIData(oldp+1536,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[53]),32);
    bufp->fullIData(oldp+1537,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[54]),32);
    bufp->fullIData(oldp+1538,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[55]),32);
    bufp->fullIData(oldp+1539,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[56]),32);
    bufp->fullIData(oldp+1540,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[57]),32);
    bufp->fullIData(oldp+1541,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[58]),32);
    bufp->fullIData(oldp+1542,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[59]),32);
    bufp->fullIData(oldp+1543,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[60]),32);
    bufp->fullIData(oldp+1544,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[61]),32);
    bufp->fullIData(oldp+1545,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[62]),32);
    bufp->fullIData(oldp+1546,(vlSelfRef.connect__DOT__dct_cr__DOT__output_buffer[63]),32);
    bufp->fullIData(oldp+1547,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[0]),32);
    bufp->fullIData(oldp+1548,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[1]),32);
    bufp->fullIData(oldp+1549,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[2]),32);
    bufp->fullIData(oldp+1550,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[3]),32);
    bufp->fullIData(oldp+1551,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[4]),32);
    bufp->fullIData(oldp+1552,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[5]),32);
    bufp->fullIData(oldp+1553,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[6]),32);
    bufp->fullIData(oldp+1554,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[7]),32);
    bufp->fullIData(oldp+1555,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[8]),32);
    bufp->fullIData(oldp+1556,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[9]),32);
    bufp->fullIData(oldp+1557,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[10]),32);
    bufp->fullIData(oldp+1558,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[11]),32);
    bufp->fullIData(oldp+1559,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[12]),32);
    bufp->fullIData(oldp+1560,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[13]),32);
    bufp->fullIData(oldp+1561,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[14]),32);
    bufp->fullIData(oldp+1562,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[15]),32);
    bufp->fullIData(oldp+1563,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[16]),32);
    bufp->fullIData(oldp+1564,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[17]),32);
    bufp->fullIData(oldp+1565,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[18]),32);
    bufp->fullIData(oldp+1566,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[19]),32);
    bufp->fullIData(oldp+1567,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[20]),32);
    bufp->fullIData(oldp+1568,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[21]),32);
    bufp->fullIData(oldp+1569,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[22]),32);
    bufp->fullIData(oldp+1570,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[23]),32);
    bufp->fullIData(oldp+1571,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[24]),32);
    bufp->fullIData(oldp+1572,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[25]),32);
    bufp->fullIData(oldp+1573,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[26]),32);
    bufp->fullIData(oldp+1574,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[27]),32);
    bufp->fullIData(oldp+1575,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[28]),32);
    bufp->fullIData(oldp+1576,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[29]),32);
    bufp->fullIData(oldp+1577,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[30]),32);
    bufp->fullIData(oldp+1578,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[31]),32);
    bufp->fullIData(oldp+1579,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[32]),32);
    bufp->fullIData(oldp+1580,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[33]),32);
    bufp->fullIData(oldp+1581,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[34]),32);
    bufp->fullIData(oldp+1582,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[35]),32);
    bufp->fullIData(oldp+1583,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[36]),32);
    bufp->fullIData(oldp+1584,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[37]),32);
    bufp->fullIData(oldp+1585,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[38]),32);
    bufp->fullIData(oldp+1586,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[39]),32);
    bufp->fullIData(oldp+1587,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[40]),32);
    bufp->fullIData(oldp+1588,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[41]),32);
    bufp->fullIData(oldp+1589,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[42]),32);
    bufp->fullIData(oldp+1590,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[43]),32);
    bufp->fullIData(oldp+1591,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[44]),32);
    bufp->fullIData(oldp+1592,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[45]),32);
    bufp->fullIData(oldp+1593,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[46]),32);
    bufp->fullIData(oldp+1594,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[47]),32);
    bufp->fullIData(oldp+1595,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[48]),32);
    bufp->fullIData(oldp+1596,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[49]),32);
    bufp->fullIData(oldp+1597,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[50]),32);
    bufp->fullIData(oldp+1598,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[51]),32);
    bufp->fullIData(oldp+1599,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[52]),32);
    bufp->fullIData(oldp+1600,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[53]),32);
    bufp->fullIData(oldp+1601,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[54]),32);
    bufp->fullIData(oldp+1602,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[55]),32);
    bufp->fullIData(oldp+1603,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[56]),32);
    bufp->fullIData(oldp+1604,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[57]),32);
    bufp->fullIData(oldp+1605,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[58]),32);
    bufp->fullIData(oldp+1606,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[59]),32);
    bufp->fullIData(oldp+1607,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[60]),32);
    bufp->fullIData(oldp+1608,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[61]),32);
    bufp->fullIData(oldp+1609,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[62]),32);
    bufp->fullIData(oldp+1610,(vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff[63]),32);
    bufp->fullIData(oldp+1611,(vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[0]),32);
    bufp->fullIData(oldp+1612,(vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[1]),32);
    bufp->fullIData(oldp+1613,(vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[2]),32);
    bufp->fullIData(oldp+1614,(vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[3]),32);
    bufp->fullIData(oldp+1615,(vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[4]),32);
    bufp->fullIData(oldp+1616,(vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[5]),32);
    bufp->fullIData(oldp+1617,(vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[6]),32);
    bufp->fullIData(oldp+1618,(vlSelfRef.connect__DOT__dct_cr__DOT__wdata_trans[7]),32);
    bufp->fullIData(oldp+1619,(vlSelfRef.connect__DOT__dct_cr__DOT__core_out[0]),32);
    bufp->fullIData(oldp+1620,(vlSelfRef.connect__DOT__dct_cr__DOT__core_out[1]),32);
    bufp->fullIData(oldp+1621,(vlSelfRef.connect__DOT__dct_cr__DOT__core_out[2]),32);
    bufp->fullIData(oldp+1622,(vlSelfRef.connect__DOT__dct_cr__DOT__core_out[3]),32);
    bufp->fullIData(oldp+1623,(vlSelfRef.connect__DOT__dct_cr__DOT__core_out[4]),32);
    bufp->fullIData(oldp+1624,(vlSelfRef.connect__DOT__dct_cr__DOT__core_out[5]),32);
    bufp->fullIData(oldp+1625,(vlSelfRef.connect__DOT__dct_cr__DOT__core_out[6]),32);
    bufp->fullIData(oldp+1626,(vlSelfRef.connect__DOT__dct_cr__DOT__core_out[7]),32);
    bufp->fullIData(oldp+1627,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
                               [0U]),32);
    bufp->fullIData(oldp+1628,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
                               [1U]),32);
    bufp->fullIData(oldp+1629,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
                               [2U]),32);
    bufp->fullIData(oldp+1630,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
                               [3U]),32);
    bufp->fullIData(oldp+1631,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
                               [4U]),32);
    bufp->fullIData(oldp+1632,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
                               [5U]),32);
    bufp->fullIData(oldp+1633,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
                               [6U]),32);
    bufp->fullIData(oldp+1634,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y
                               [7U]),32);
    bufp->fullIData(oldp+1635,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__s0),32);
    bufp->fullIData(oldp+1636,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__s1),32);
    bufp->fullIData(oldp+1637,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__s2),32);
    bufp->fullIData(oldp+1638,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__s3),32);
    bufp->fullIData(oldp+1639,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d0),32);
    bufp->fullIData(oldp+1640,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d1),32);
    bufp->fullIData(oldp+1641,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d2),32);
    bufp->fullIData(oldp+1642,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d3),32);
    bufp->fullIData(oldp+1643,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e0),32);
    bufp->fullIData(oldp+1644,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e1),32);
    bufp->fullIData(oldp+1645,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e2),32);
    bufp->fullIData(oldp+1646,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e3),32);
    bufp->fullIData(oldp+1647,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b0),32);
    bufp->fullIData(oldp+1648,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b1),32);
    bufp->fullIData(oldp+1649,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b2),32);
    bufp->fullIData(oldp+1650,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b3),32);
    bufp->fullIData(oldp+1651,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b4),32);
    bufp->fullIData(oldp+1652,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b5),32);
    bufp->fullIData(oldp+1653,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b6),32);
    bufp->fullIData(oldp+1654,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b7),32);
    bufp->fullIData(oldp+1655,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[0]),32);
    bufp->fullIData(oldp+1656,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[1]),32);
    bufp->fullIData(oldp+1657,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[2]),32);
    bufp->fullIData(oldp+1658,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[3]),32);
    bufp->fullIData(oldp+1659,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[4]),32);
    bufp->fullIData(oldp+1660,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[5]),32);
    bufp->fullIData(oldp+1661,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[6]),32);
    bufp->fullIData(oldp+1662,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__y[7]),32);
    bufp->fullIData(oldp+1663,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__t_b1),32);
    bufp->fullIData(oldp+1664,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__t_b5),32);
    bufp->fullIData(oldp+1665,(vlSelfRef.connect__DOT__dct_cr__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+1666,(vlSelfRef.connect__DOT__dct_cr__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1667,(vlSelfRef.connect__DOT__dct_cr__DOT__unnamedblk6__DOT__j),32);
    bufp->fullIData(oldp+1668,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[0]),32);
    bufp->fullIData(oldp+1669,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[1]),32);
    bufp->fullIData(oldp+1670,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[2]),32);
    bufp->fullIData(oldp+1671,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[3]),32);
    bufp->fullIData(oldp+1672,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[4]),32);
    bufp->fullIData(oldp+1673,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[5]),32);
    bufp->fullIData(oldp+1674,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[6]),32);
    bufp->fullIData(oldp+1675,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[7]),32);
    bufp->fullIData(oldp+1676,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[8]),32);
    bufp->fullIData(oldp+1677,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[9]),32);
    bufp->fullIData(oldp+1678,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[10]),32);
    bufp->fullIData(oldp+1679,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[11]),32);
    bufp->fullIData(oldp+1680,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[12]),32);
    bufp->fullIData(oldp+1681,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[13]),32);
    bufp->fullIData(oldp+1682,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[14]),32);
    bufp->fullIData(oldp+1683,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[15]),32);
    bufp->fullIData(oldp+1684,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[16]),32);
    bufp->fullIData(oldp+1685,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[17]),32);
    bufp->fullIData(oldp+1686,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[18]),32);
    bufp->fullIData(oldp+1687,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[19]),32);
    bufp->fullIData(oldp+1688,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[20]),32);
    bufp->fullIData(oldp+1689,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[21]),32);
    bufp->fullIData(oldp+1690,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[22]),32);
    bufp->fullIData(oldp+1691,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[23]),32);
    bufp->fullIData(oldp+1692,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[24]),32);
    bufp->fullIData(oldp+1693,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[25]),32);
    bufp->fullIData(oldp+1694,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[26]),32);
    bufp->fullIData(oldp+1695,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[27]),32);
    bufp->fullIData(oldp+1696,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[28]),32);
    bufp->fullIData(oldp+1697,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[29]),32);
    bufp->fullIData(oldp+1698,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[30]),32);
    bufp->fullIData(oldp+1699,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[31]),32);
    bufp->fullIData(oldp+1700,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[32]),32);
    bufp->fullIData(oldp+1701,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[33]),32);
    bufp->fullIData(oldp+1702,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[34]),32);
    bufp->fullIData(oldp+1703,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[35]),32);
    bufp->fullIData(oldp+1704,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[36]),32);
    bufp->fullIData(oldp+1705,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[37]),32);
    bufp->fullIData(oldp+1706,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[38]),32);
    bufp->fullIData(oldp+1707,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[39]),32);
    bufp->fullIData(oldp+1708,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[40]),32);
    bufp->fullIData(oldp+1709,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[41]),32);
    bufp->fullIData(oldp+1710,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[42]),32);
    bufp->fullIData(oldp+1711,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[43]),32);
    bufp->fullIData(oldp+1712,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[44]),32);
    bufp->fullIData(oldp+1713,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[45]),32);
    bufp->fullIData(oldp+1714,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[46]),32);
    bufp->fullIData(oldp+1715,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[47]),32);
    bufp->fullIData(oldp+1716,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[48]),32);
    bufp->fullIData(oldp+1717,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[49]),32);
    bufp->fullIData(oldp+1718,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[50]),32);
    bufp->fullIData(oldp+1719,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[51]),32);
    bufp->fullIData(oldp+1720,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[52]),32);
    bufp->fullIData(oldp+1721,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[53]),32);
    bufp->fullIData(oldp+1722,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[54]),32);
    bufp->fullIData(oldp+1723,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[55]),32);
    bufp->fullIData(oldp+1724,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[56]),32);
    bufp->fullIData(oldp+1725,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[57]),32);
    bufp->fullIData(oldp+1726,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[58]),32);
    bufp->fullIData(oldp+1727,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[59]),32);
    bufp->fullIData(oldp+1728,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[60]),32);
    bufp->fullIData(oldp+1729,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[61]),32);
    bufp->fullIData(oldp+1730,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[62]),32);
    bufp->fullIData(oldp+1731,(vlSelfRef.connect__DOT__dct_y__DOT__input_buffer[63]),32);
    bufp->fullIData(oldp+1732,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[0]),32);
    bufp->fullIData(oldp+1733,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[1]),32);
    bufp->fullIData(oldp+1734,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[2]),32);
    bufp->fullIData(oldp+1735,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[3]),32);
    bufp->fullIData(oldp+1736,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[4]),32);
    bufp->fullIData(oldp+1737,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[5]),32);
    bufp->fullIData(oldp+1738,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[6]),32);
    bufp->fullIData(oldp+1739,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[7]),32);
    bufp->fullIData(oldp+1740,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[8]),32);
    bufp->fullIData(oldp+1741,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[9]),32);
    bufp->fullIData(oldp+1742,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[10]),32);
    bufp->fullIData(oldp+1743,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[11]),32);
    bufp->fullIData(oldp+1744,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[12]),32);
    bufp->fullIData(oldp+1745,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[13]),32);
    bufp->fullIData(oldp+1746,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[14]),32);
    bufp->fullIData(oldp+1747,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[15]),32);
    bufp->fullIData(oldp+1748,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[16]),32);
    bufp->fullIData(oldp+1749,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[17]),32);
    bufp->fullIData(oldp+1750,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[18]),32);
    bufp->fullIData(oldp+1751,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[19]),32);
    bufp->fullIData(oldp+1752,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[20]),32);
    bufp->fullIData(oldp+1753,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[21]),32);
    bufp->fullIData(oldp+1754,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[22]),32);
    bufp->fullIData(oldp+1755,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[23]),32);
    bufp->fullIData(oldp+1756,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[24]),32);
    bufp->fullIData(oldp+1757,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[25]),32);
    bufp->fullIData(oldp+1758,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[26]),32);
    bufp->fullIData(oldp+1759,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[27]),32);
    bufp->fullIData(oldp+1760,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[28]),32);
    bufp->fullIData(oldp+1761,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[29]),32);
    bufp->fullIData(oldp+1762,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[30]),32);
    bufp->fullIData(oldp+1763,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[31]),32);
    bufp->fullIData(oldp+1764,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[32]),32);
    bufp->fullIData(oldp+1765,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[33]),32);
    bufp->fullIData(oldp+1766,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[34]),32);
    bufp->fullIData(oldp+1767,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[35]),32);
    bufp->fullIData(oldp+1768,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[36]),32);
    bufp->fullIData(oldp+1769,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[37]),32);
    bufp->fullIData(oldp+1770,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[38]),32);
    bufp->fullIData(oldp+1771,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[39]),32);
    bufp->fullIData(oldp+1772,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[40]),32);
    bufp->fullIData(oldp+1773,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[41]),32);
    bufp->fullIData(oldp+1774,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[42]),32);
    bufp->fullIData(oldp+1775,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[43]),32);
    bufp->fullIData(oldp+1776,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[44]),32);
    bufp->fullIData(oldp+1777,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[45]),32);
    bufp->fullIData(oldp+1778,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[46]),32);
    bufp->fullIData(oldp+1779,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[47]),32);
    bufp->fullIData(oldp+1780,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[48]),32);
    bufp->fullIData(oldp+1781,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[49]),32);
    bufp->fullIData(oldp+1782,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[50]),32);
    bufp->fullIData(oldp+1783,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[51]),32);
    bufp->fullIData(oldp+1784,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[52]),32);
    bufp->fullIData(oldp+1785,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[53]),32);
    bufp->fullIData(oldp+1786,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[54]),32);
    bufp->fullIData(oldp+1787,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[55]),32);
    bufp->fullIData(oldp+1788,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[56]),32);
    bufp->fullIData(oldp+1789,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[57]),32);
    bufp->fullIData(oldp+1790,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[58]),32);
    bufp->fullIData(oldp+1791,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[59]),32);
    bufp->fullIData(oldp+1792,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[60]),32);
    bufp->fullIData(oldp+1793,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[61]),32);
    bufp->fullIData(oldp+1794,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[62]),32);
    bufp->fullIData(oldp+1795,(vlSelfRef.connect__DOT__dct_y__DOT__output_buffer[63]),32);
    bufp->fullIData(oldp+1796,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[0]),32);
    bufp->fullIData(oldp+1797,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[1]),32);
    bufp->fullIData(oldp+1798,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[2]),32);
    bufp->fullIData(oldp+1799,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[3]),32);
    bufp->fullIData(oldp+1800,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[4]),32);
    bufp->fullIData(oldp+1801,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[5]),32);
    bufp->fullIData(oldp+1802,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[6]),32);
    bufp->fullIData(oldp+1803,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[7]),32);
    bufp->fullIData(oldp+1804,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[8]),32);
    bufp->fullIData(oldp+1805,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[9]),32);
    bufp->fullIData(oldp+1806,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[10]),32);
    bufp->fullIData(oldp+1807,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[11]),32);
    bufp->fullIData(oldp+1808,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[12]),32);
    bufp->fullIData(oldp+1809,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[13]),32);
    bufp->fullIData(oldp+1810,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[14]),32);
    bufp->fullIData(oldp+1811,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[15]),32);
    bufp->fullIData(oldp+1812,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[16]),32);
    bufp->fullIData(oldp+1813,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[17]),32);
    bufp->fullIData(oldp+1814,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[18]),32);
    bufp->fullIData(oldp+1815,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[19]),32);
    bufp->fullIData(oldp+1816,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[20]),32);
    bufp->fullIData(oldp+1817,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[21]),32);
    bufp->fullIData(oldp+1818,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[22]),32);
    bufp->fullIData(oldp+1819,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[23]),32);
    bufp->fullIData(oldp+1820,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[24]),32);
    bufp->fullIData(oldp+1821,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[25]),32);
    bufp->fullIData(oldp+1822,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[26]),32);
    bufp->fullIData(oldp+1823,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[27]),32);
    bufp->fullIData(oldp+1824,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[28]),32);
    bufp->fullIData(oldp+1825,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[29]),32);
    bufp->fullIData(oldp+1826,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[30]),32);
    bufp->fullIData(oldp+1827,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[31]),32);
    bufp->fullIData(oldp+1828,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[32]),32);
    bufp->fullIData(oldp+1829,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[33]),32);
    bufp->fullIData(oldp+1830,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[34]),32);
    bufp->fullIData(oldp+1831,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[35]),32);
    bufp->fullIData(oldp+1832,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[36]),32);
    bufp->fullIData(oldp+1833,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[37]),32);
    bufp->fullIData(oldp+1834,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[38]),32);
    bufp->fullIData(oldp+1835,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[39]),32);
    bufp->fullIData(oldp+1836,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[40]),32);
    bufp->fullIData(oldp+1837,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[41]),32);
    bufp->fullIData(oldp+1838,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[42]),32);
    bufp->fullIData(oldp+1839,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[43]),32);
    bufp->fullIData(oldp+1840,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[44]),32);
    bufp->fullIData(oldp+1841,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[45]),32);
    bufp->fullIData(oldp+1842,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[46]),32);
    bufp->fullIData(oldp+1843,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[47]),32);
    bufp->fullIData(oldp+1844,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[48]),32);
    bufp->fullIData(oldp+1845,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[49]),32);
    bufp->fullIData(oldp+1846,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[50]),32);
    bufp->fullIData(oldp+1847,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[51]),32);
    bufp->fullIData(oldp+1848,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[52]),32);
    bufp->fullIData(oldp+1849,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[53]),32);
    bufp->fullIData(oldp+1850,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[54]),32);
    bufp->fullIData(oldp+1851,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[55]),32);
    bufp->fullIData(oldp+1852,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[56]),32);
    bufp->fullIData(oldp+1853,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[57]),32);
    bufp->fullIData(oldp+1854,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[58]),32);
    bufp->fullIData(oldp+1855,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[59]),32);
    bufp->fullIData(oldp+1856,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[60]),32);
    bufp->fullIData(oldp+1857,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[61]),32);
    bufp->fullIData(oldp+1858,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[62]),32);
    bufp->fullIData(oldp+1859,(vlSelfRef.connect__DOT__dct_y__DOT__trans_buff[63]),32);
    bufp->fullIData(oldp+1860,(vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[0]),32);
    bufp->fullIData(oldp+1861,(vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[1]),32);
    bufp->fullIData(oldp+1862,(vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[2]),32);
    bufp->fullIData(oldp+1863,(vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[3]),32);
    bufp->fullIData(oldp+1864,(vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[4]),32);
    bufp->fullIData(oldp+1865,(vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[5]),32);
    bufp->fullIData(oldp+1866,(vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[6]),32);
    bufp->fullIData(oldp+1867,(vlSelfRef.connect__DOT__dct_y__DOT__wdata_trans[7]),32);
    bufp->fullIData(oldp+1868,(vlSelfRef.connect__DOT__dct_y__DOT__core_out[0]),32);
    bufp->fullIData(oldp+1869,(vlSelfRef.connect__DOT__dct_y__DOT__core_out[1]),32);
    bufp->fullIData(oldp+1870,(vlSelfRef.connect__DOT__dct_y__DOT__core_out[2]),32);
    bufp->fullIData(oldp+1871,(vlSelfRef.connect__DOT__dct_y__DOT__core_out[3]),32);
    bufp->fullIData(oldp+1872,(vlSelfRef.connect__DOT__dct_y__DOT__core_out[4]),32);
    bufp->fullIData(oldp+1873,(vlSelfRef.connect__DOT__dct_y__DOT__core_out[5]),32);
    bufp->fullIData(oldp+1874,(vlSelfRef.connect__DOT__dct_y__DOT__core_out[6]),32);
    bufp->fullIData(oldp+1875,(vlSelfRef.connect__DOT__dct_y__DOT__core_out[7]),32);
    bufp->fullIData(oldp+1876,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
                               [0U]),32);
    bufp->fullIData(oldp+1877,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
                               [1U]),32);
    bufp->fullIData(oldp+1878,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
                               [2U]),32);
    bufp->fullIData(oldp+1879,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
                               [3U]),32);
    bufp->fullIData(oldp+1880,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
                               [4U]),32);
    bufp->fullIData(oldp+1881,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
                               [5U]),32);
    bufp->fullIData(oldp+1882,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
                               [6U]),32);
    bufp->fullIData(oldp+1883,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y
                               [7U]),32);
    bufp->fullIData(oldp+1884,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__s0),32);
    bufp->fullIData(oldp+1885,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__s1),32);
    bufp->fullIData(oldp+1886,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__s2),32);
    bufp->fullIData(oldp+1887,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__s3),32);
    bufp->fullIData(oldp+1888,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d0),32);
    bufp->fullIData(oldp+1889,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d1),32);
    bufp->fullIData(oldp+1890,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d2),32);
    bufp->fullIData(oldp+1891,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d3),32);
    bufp->fullIData(oldp+1892,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e0),32);
    bufp->fullIData(oldp+1893,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e1),32);
    bufp->fullIData(oldp+1894,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e2),32);
    bufp->fullIData(oldp+1895,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e3),32);
    bufp->fullIData(oldp+1896,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b0),32);
    bufp->fullIData(oldp+1897,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b1),32);
    bufp->fullIData(oldp+1898,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b2),32);
    bufp->fullIData(oldp+1899,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b3),32);
    bufp->fullIData(oldp+1900,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b4),32);
    bufp->fullIData(oldp+1901,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b5),32);
    bufp->fullIData(oldp+1902,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b6),32);
    bufp->fullIData(oldp+1903,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b7),32);
    bufp->fullIData(oldp+1904,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[0]),32);
    bufp->fullIData(oldp+1905,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[1]),32);
    bufp->fullIData(oldp+1906,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[2]),32);
    bufp->fullIData(oldp+1907,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[3]),32);
    bufp->fullIData(oldp+1908,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[4]),32);
    bufp->fullIData(oldp+1909,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[5]),32);
    bufp->fullIData(oldp+1910,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[6]),32);
    bufp->fullIData(oldp+1911,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__y[7]),32);
    bufp->fullIData(oldp+1912,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__t_b1),32);
    bufp->fullIData(oldp+1913,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__t_b5),32);
    bufp->fullIData(oldp+1914,(vlSelfRef.connect__DOT__dct_y__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+1915,(vlSelfRef.connect__DOT__dct_y__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1916,(vlSelfRef.connect__DOT__dct_y__DOT__unnamedblk6__DOT__j),32);
    bufp->fullBit(oldp+1917,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__done_reg));
    bufp->fullWData(oldp+1918,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__y_reg),2048);
    bufp->fullWData(oldp+1982,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cb_reg),2048);
    bufp->fullWData(oldp+2046,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__cr_reg),2048);
    bufp->fullBit(oldp+2110,((5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))));
    bufp->fullBit(oldp+2111,((5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))));
    bufp->fullBit(oldp+2112,((5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))));
    bufp->fullBit(oldp+2113,((0U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))));
    bufp->fullBit(oldp+2114,((0U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))));
    bufp->fullBit(oldp+2115,((0U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))));
    bufp->fullCData(oldp+2116,(vlSelfRef.connect__DOT__dct_cb__DOT__state),3);
    bufp->fullCData(oldp+2117,(vlSelfRef.connect__DOT__dct_cb__DOT__nstate),3);
    bufp->fullCData(oldp+2118,(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt),3);
    bufp->fullCData(oldp+2119,(vlSelfRef.connect__DOT__dct_cb__DOT__col_cnt),3);
    bufp->fullBit(oldp+2120,(vlSelfRef.connect__DOT__dct_cb__DOT__we_trans));
    bufp->fullCData(oldp+2121,(vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[0]),6);
    bufp->fullCData(oldp+2122,(vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[1]),6);
    bufp->fullCData(oldp+2123,(vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[2]),6);
    bufp->fullCData(oldp+2124,(vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[3]),6);
    bufp->fullCData(oldp+2125,(vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[4]),6);
    bufp->fullCData(oldp+2126,(vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[5]),6);
    bufp->fullCData(oldp+2127,(vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[6]),6);
    bufp->fullCData(oldp+2128,(vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans[7]),6);
    bufp->fullIData(oldp+2129,(vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[0]),32);
    bufp->fullIData(oldp+2130,(vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[1]),32);
    bufp->fullIData(oldp+2131,(vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[2]),32);
    bufp->fullIData(oldp+2132,(vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[3]),32);
    bufp->fullIData(oldp+2133,(vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[4]),32);
    bufp->fullIData(oldp+2134,(vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[5]),32);
    bufp->fullIData(oldp+2135,(vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[6]),32);
    bufp->fullIData(oldp+2136,(vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[7]),32);
    bufp->fullBit(oldp+2137,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in_valid));
    bufp->fullBit(oldp+2138,((0U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))));
    bufp->fullBit(oldp+2139,((5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))));
    bufp->fullIData(oldp+2140,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in[0]),32);
    bufp->fullIData(oldp+2141,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in[1]),32);
    bufp->fullIData(oldp+2142,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in[2]),32);
    bufp->fullIData(oldp+2143,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in[3]),32);
    bufp->fullIData(oldp+2144,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in[4]),32);
    bufp->fullIData(oldp+2145,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in[5]),32);
    bufp->fullIData(oldp+2146,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in[6]),32);
    bufp->fullIData(oldp+2147,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in[7]),32);
    bufp->fullIData(oldp+2148,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                               [0U]),32);
    bufp->fullIData(oldp+2149,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                               [1U]),32);
    bufp->fullIData(oldp+2150,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                               [2U]),32);
    bufp->fullIData(oldp+2151,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                               [3U]),32);
    bufp->fullIData(oldp+2152,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                               [4U]),32);
    bufp->fullIData(oldp+2153,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                               [5U]),32);
    bufp->fullIData(oldp+2154,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                               [6U]),32);
    bufp->fullIData(oldp+2155,(vlSelfRef.connect__DOT__dct_cb__DOT__core_in
                               [7U]),32);
    bufp->fullCData(oldp+2156,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state),3);
    bufp->fullCData(oldp+2157,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__nstate),3);
    bufp->fullQData(oldp+2158,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                               [0U]),48);
    bufp->fullQData(oldp+2160,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                               [1U]),48);
    bufp->fullQData(oldp+2162,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                               [2U]),48);
    bufp->fullQData(oldp+2164,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                               [3U]),48);
    bufp->fullQData(oldp+2166,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                               [4U]),48);
    bufp->fullQData(oldp+2168,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                               [5U]),48);
    bufp->fullQData(oldp+2170,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                               [6U]),48);
    bufp->fullQData(oldp+2172,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                               [7U]),48);
    bufp->fullIData(oldp+2174,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[0]),32);
    bufp->fullIData(oldp+2175,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[1]),32);
    bufp->fullIData(oldp+2176,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[2]),32);
    bufp->fullIData(oldp+2177,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[3]),32);
    bufp->fullIData(oldp+2178,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[4]),32);
    bufp->fullIData(oldp+2179,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[5]),32);
    bufp->fullIData(oldp+2180,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[6]),32);
    bufp->fullIData(oldp+2181,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[7]),32);
    bufp->fullIData(oldp+2182,((IData)((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                        [0U] >> 0x10U))),32);
    bufp->fullSData(oldp+2183,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                  [0U]))),16);
    bufp->fullIData(oldp+2184,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2185,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2187,((IData)((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                        [1U] >> 0x10U))),32);
    bufp->fullSData(oldp+2188,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                  [1U]))),16);
    bufp->fullIData(oldp+2189,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2190,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2192,((IData)((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                        [2U] >> 0x10U))),32);
    bufp->fullSData(oldp+2193,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                  [2U]))),16);
    bufp->fullIData(oldp+2194,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2195,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2197,((IData)((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                        [3U] >> 0x10U))),32);
    bufp->fullSData(oldp+2198,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                  [3U]))),16);
    bufp->fullIData(oldp+2199,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2200,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2202,((IData)((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                        [4U] >> 0x10U))),32);
    bufp->fullSData(oldp+2203,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                  [4U]))),16);
    bufp->fullIData(oldp+2204,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2205,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2207,((IData)((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                        [5U] >> 0x10U))),32);
    bufp->fullSData(oldp+2208,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                  [5U]))),16);
    bufp->fullIData(oldp+2209,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2210,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2212,((IData)((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                        [6U] >> 0x10U))),32);
    bufp->fullSData(oldp+2213,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                  [6U]))),16);
    bufp->fullIData(oldp+2214,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2215,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2217,((IData)((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                        [7U] >> 0x10U))),32);
    bufp->fullSData(oldp+2218,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                  [7U]))),16);
    bufp->fullIData(oldp+2219,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2220,(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2222,(vlSelfRef.connect__DOT__dct_cb__DOT__unnamedblk5__DOT__j),32);
    bufp->fullCData(oldp+2223,(vlSelfRef.connect__DOT__dct_cr__DOT__state),3);
    bufp->fullCData(oldp+2224,(vlSelfRef.connect__DOT__dct_cr__DOT__nstate),3);
    bufp->fullCData(oldp+2225,(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt),3);
    bufp->fullCData(oldp+2226,(vlSelfRef.connect__DOT__dct_cr__DOT__col_cnt),3);
    bufp->fullBit(oldp+2227,(vlSelfRef.connect__DOT__dct_cr__DOT__we_trans));
    bufp->fullCData(oldp+2228,(vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[0]),6);
    bufp->fullCData(oldp+2229,(vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[1]),6);
    bufp->fullCData(oldp+2230,(vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[2]),6);
    bufp->fullCData(oldp+2231,(vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[3]),6);
    bufp->fullCData(oldp+2232,(vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[4]),6);
    bufp->fullCData(oldp+2233,(vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[5]),6);
    bufp->fullCData(oldp+2234,(vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[6]),6);
    bufp->fullCData(oldp+2235,(vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans[7]),6);
    bufp->fullIData(oldp+2236,(vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[0]),32);
    bufp->fullIData(oldp+2237,(vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[1]),32);
    bufp->fullIData(oldp+2238,(vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[2]),32);
    bufp->fullIData(oldp+2239,(vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[3]),32);
    bufp->fullIData(oldp+2240,(vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[4]),32);
    bufp->fullIData(oldp+2241,(vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[5]),32);
    bufp->fullIData(oldp+2242,(vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[6]),32);
    bufp->fullIData(oldp+2243,(vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[7]),32);
    bufp->fullBit(oldp+2244,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in_valid));
    bufp->fullBit(oldp+2245,((0U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))));
    bufp->fullBit(oldp+2246,((5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))));
    bufp->fullIData(oldp+2247,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in[0]),32);
    bufp->fullIData(oldp+2248,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in[1]),32);
    bufp->fullIData(oldp+2249,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in[2]),32);
    bufp->fullIData(oldp+2250,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in[3]),32);
    bufp->fullIData(oldp+2251,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in[4]),32);
    bufp->fullIData(oldp+2252,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in[5]),32);
    bufp->fullIData(oldp+2253,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in[6]),32);
    bufp->fullIData(oldp+2254,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in[7]),32);
    bufp->fullIData(oldp+2255,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                               [0U]),32);
    bufp->fullIData(oldp+2256,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                               [1U]),32);
    bufp->fullIData(oldp+2257,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                               [2U]),32);
    bufp->fullIData(oldp+2258,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                               [3U]),32);
    bufp->fullIData(oldp+2259,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                               [4U]),32);
    bufp->fullIData(oldp+2260,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                               [5U]),32);
    bufp->fullIData(oldp+2261,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                               [6U]),32);
    bufp->fullIData(oldp+2262,(vlSelfRef.connect__DOT__dct_cr__DOT__core_in
                               [7U]),32);
    bufp->fullCData(oldp+2263,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state),3);
    bufp->fullCData(oldp+2264,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__nstate),3);
    bufp->fullQData(oldp+2265,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                               [0U]),48);
    bufp->fullQData(oldp+2267,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                               [1U]),48);
    bufp->fullQData(oldp+2269,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                               [2U]),48);
    bufp->fullQData(oldp+2271,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                               [3U]),48);
    bufp->fullQData(oldp+2273,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                               [4U]),48);
    bufp->fullQData(oldp+2275,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                               [5U]),48);
    bufp->fullQData(oldp+2277,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                               [6U]),48);
    bufp->fullQData(oldp+2279,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                               [7U]),48);
    bufp->fullIData(oldp+2281,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[0]),32);
    bufp->fullIData(oldp+2282,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[1]),32);
    bufp->fullIData(oldp+2283,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[2]),32);
    bufp->fullIData(oldp+2284,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[3]),32);
    bufp->fullIData(oldp+2285,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[4]),32);
    bufp->fullIData(oldp+2286,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[5]),32);
    bufp->fullIData(oldp+2287,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[6]),32);
    bufp->fullIData(oldp+2288,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[7]),32);
    bufp->fullIData(oldp+2289,((IData)((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                        [0U] >> 0x10U))),32);
    bufp->fullSData(oldp+2290,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                  [0U]))),16);
    bufp->fullIData(oldp+2291,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2292,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2294,((IData)((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                        [1U] >> 0x10U))),32);
    bufp->fullSData(oldp+2295,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                  [1U]))),16);
    bufp->fullIData(oldp+2296,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2297,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2299,((IData)((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                        [2U] >> 0x10U))),32);
    bufp->fullSData(oldp+2300,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                  [2U]))),16);
    bufp->fullIData(oldp+2301,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2302,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2304,((IData)((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                        [3U] >> 0x10U))),32);
    bufp->fullSData(oldp+2305,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                  [3U]))),16);
    bufp->fullIData(oldp+2306,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2307,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2309,((IData)((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                        [4U] >> 0x10U))),32);
    bufp->fullSData(oldp+2310,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                  [4U]))),16);
    bufp->fullIData(oldp+2311,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2312,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2314,((IData)((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                        [5U] >> 0x10U))),32);
    bufp->fullSData(oldp+2315,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                  [5U]))),16);
    bufp->fullIData(oldp+2316,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2317,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2319,((IData)((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                        [6U] >> 0x10U))),32);
    bufp->fullSData(oldp+2320,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                  [6U]))),16);
    bufp->fullIData(oldp+2321,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2322,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2324,((IData)((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                        [7U] >> 0x10U))),32);
    bufp->fullSData(oldp+2325,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                  [7U]))),16);
    bufp->fullIData(oldp+2326,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2327,(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2329,(vlSelfRef.connect__DOT__dct_cr__DOT__unnamedblk5__DOT__j),32);
    bufp->fullCData(oldp+2330,(vlSelfRef.connect__DOT__dct_y__DOT__state),3);
    bufp->fullCData(oldp+2331,(vlSelfRef.connect__DOT__dct_y__DOT__nstate),3);
    bufp->fullCData(oldp+2332,(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt),3);
    bufp->fullCData(oldp+2333,(vlSelfRef.connect__DOT__dct_y__DOT__col_cnt),3);
    bufp->fullBit(oldp+2334,(vlSelfRef.connect__DOT__dct_y__DOT__we_trans));
    bufp->fullCData(oldp+2335,(vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[0]),6);
    bufp->fullCData(oldp+2336,(vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[1]),6);
    bufp->fullCData(oldp+2337,(vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[2]),6);
    bufp->fullCData(oldp+2338,(vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[3]),6);
    bufp->fullCData(oldp+2339,(vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[4]),6);
    bufp->fullCData(oldp+2340,(vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[5]),6);
    bufp->fullCData(oldp+2341,(vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[6]),6);
    bufp->fullCData(oldp+2342,(vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans[7]),6);
    bufp->fullIData(oldp+2343,(vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[0]),32);
    bufp->fullIData(oldp+2344,(vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[1]),32);
    bufp->fullIData(oldp+2345,(vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[2]),32);
    bufp->fullIData(oldp+2346,(vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[3]),32);
    bufp->fullIData(oldp+2347,(vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[4]),32);
    bufp->fullIData(oldp+2348,(vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[5]),32);
    bufp->fullIData(oldp+2349,(vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[6]),32);
    bufp->fullIData(oldp+2350,(vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[7]),32);
    bufp->fullBit(oldp+2351,(vlSelfRef.connect__DOT__dct_y__DOT__core_in_valid));
    bufp->fullBit(oldp+2352,((0U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))));
    bufp->fullBit(oldp+2353,((5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))));
    bufp->fullIData(oldp+2354,(vlSelfRef.connect__DOT__dct_y__DOT__core_in[0]),32);
    bufp->fullIData(oldp+2355,(vlSelfRef.connect__DOT__dct_y__DOT__core_in[1]),32);
    bufp->fullIData(oldp+2356,(vlSelfRef.connect__DOT__dct_y__DOT__core_in[2]),32);
    bufp->fullIData(oldp+2357,(vlSelfRef.connect__DOT__dct_y__DOT__core_in[3]),32);
    bufp->fullIData(oldp+2358,(vlSelfRef.connect__DOT__dct_y__DOT__core_in[4]),32);
    bufp->fullIData(oldp+2359,(vlSelfRef.connect__DOT__dct_y__DOT__core_in[5]),32);
    bufp->fullIData(oldp+2360,(vlSelfRef.connect__DOT__dct_y__DOT__core_in[6]),32);
    bufp->fullIData(oldp+2361,(vlSelfRef.connect__DOT__dct_y__DOT__core_in[7]),32);
    bufp->fullIData(oldp+2362,(vlSelfRef.connect__DOT__dct_y__DOT__core_in
                               [0U]),32);
    bufp->fullIData(oldp+2363,(vlSelfRef.connect__DOT__dct_y__DOT__core_in
                               [1U]),32);
    bufp->fullIData(oldp+2364,(vlSelfRef.connect__DOT__dct_y__DOT__core_in
                               [2U]),32);
    bufp->fullIData(oldp+2365,(vlSelfRef.connect__DOT__dct_y__DOT__core_in
                               [3U]),32);
    bufp->fullIData(oldp+2366,(vlSelfRef.connect__DOT__dct_y__DOT__core_in
                               [4U]),32);
    bufp->fullIData(oldp+2367,(vlSelfRef.connect__DOT__dct_y__DOT__core_in
                               [5U]),32);
    bufp->fullIData(oldp+2368,(vlSelfRef.connect__DOT__dct_y__DOT__core_in
                               [6U]),32);
    bufp->fullIData(oldp+2369,(vlSelfRef.connect__DOT__dct_y__DOT__core_in
                               [7U]),32);
    bufp->fullCData(oldp+2370,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state),3);
    bufp->fullCData(oldp+2371,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__nstate),3);
    bufp->fullQData(oldp+2372,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                               [0U]),48);
    bufp->fullQData(oldp+2374,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                               [1U]),48);
    bufp->fullQData(oldp+2376,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                               [2U]),48);
    bufp->fullQData(oldp+2378,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                               [3U]),48);
    bufp->fullQData(oldp+2380,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                               [4U]),48);
    bufp->fullQData(oldp+2382,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                               [5U]),48);
    bufp->fullQData(oldp+2384,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                               [6U]),48);
    bufp->fullQData(oldp+2386,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                               [7U]),48);
    bufp->fullIData(oldp+2388,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[0]),32);
    bufp->fullIData(oldp+2389,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[1]),32);
    bufp->fullIData(oldp+2390,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[2]),32);
    bufp->fullIData(oldp+2391,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[3]),32);
    bufp->fullIData(oldp+2392,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[4]),32);
    bufp->fullIData(oldp+2393,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[5]),32);
    bufp->fullIData(oldp+2394,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[6]),32);
    bufp->fullIData(oldp+2395,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[7]),32);
    bufp->fullIData(oldp+2396,((IData)((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                        [0U] >> 0x10U))),32);
    bufp->fullSData(oldp+2397,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                  [0U]))),16);
    bufp->fullIData(oldp+2398,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2399,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2401,((IData)((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                        [1U] >> 0x10U))),32);
    bufp->fullSData(oldp+2402,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                  [1U]))),16);
    bufp->fullIData(oldp+2403,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2404,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2406,((IData)((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                        [2U] >> 0x10U))),32);
    bufp->fullSData(oldp+2407,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                  [2U]))),16);
    bufp->fullIData(oldp+2408,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2409,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2411,((IData)((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                        [3U] >> 0x10U))),32);
    bufp->fullSData(oldp+2412,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                  [3U]))),16);
    bufp->fullIData(oldp+2413,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2414,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2416,((IData)((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                        [4U] >> 0x10U))),32);
    bufp->fullSData(oldp+2417,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                  [4U]))),16);
    bufp->fullIData(oldp+2418,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2419,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2421,((IData)((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                        [5U] >> 0x10U))),32);
    bufp->fullSData(oldp+2422,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                  [5U]))),16);
    bufp->fullIData(oldp+2423,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2424,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2426,((IData)((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                        [6U] >> 0x10U))),32);
    bufp->fullSData(oldp+2427,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                  [6U]))),16);
    bufp->fullIData(oldp+2428,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2429,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2431,((IData)((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                        [7U] >> 0x10U))),32);
    bufp->fullSData(oldp+2432,((0xffffU & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                  [7U]))),16);
    bufp->fullIData(oldp+2433,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+2434,(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+2436,(vlSelfRef.connect__DOT__dct_y__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+2437,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__j),32);
    bufp->fullCData(oldp+2438,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__state),2);
    bufp->fullCData(oldp+2439,(vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__batch_count),3);
    bufp->fullBit(oldp+2440,(vlSelfRef.clk));
    bufp->fullBit(oldp+2441,(vlSelfRef.rst));
    bufp->fullBit(oldp+2442,(vlSelfRef.start));
    bufp->fullWData(oldp+2443,(vlSelfRef.r_all),512);
    bufp->fullWData(oldp+2459,(vlSelfRef.g_all),512);
    bufp->fullWData(oldp+2475,(vlSelfRef.b_all),512);
    bufp->fullWData(oldp+2491,(vlSelfRef.y_quantized),1024);
    bufp->fullWData(oldp+2523,(vlSelfRef.cb_quantized),1024);
    bufp->fullWData(oldp+2555,(vlSelfRef.cr_quantized),1024);
    bufp->fullBit(oldp+2587,(vlSelfRef.done));
    bufp->fullBit(oldp+2588,((1U & (~ (IData)(vlSelfRef.rst)))));
    bufp->fullCData(oldp+2589,(((0U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))
                                 ? ((5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))
                                     ? 1U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__cycle_cnt))
                                                     ? 2U
                                                     : 1U)
                                                    : 0U))),2);
    bufp->fullCData(oldp+2590,(((0U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))
                                 ? ((5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))
                                     ? 1U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__cycle_cnt))
                                                     ? 2U
                                                     : 1U)
                                                    : 0U))),2);
    bufp->fullCData(oldp+2591,(((0U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))
                                 ? ((5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))
                                     ? 1U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__cycle_cnt))
                                                     ? 2U
                                                     : 1U)
                                                    : 0U))),2);
}
