// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdct8x8_chen_2d__Syms.h"


VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_init_sub__TOP__0(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root__trace_init_sub__TOP__0\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+356,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+360,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+424,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+426,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->pushPrefix("dct8x8_chen_2d", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+356,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+360,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+424,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+426,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBus(c+250,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+490,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+251,0,"row_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+252,0,"col_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("input_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("output_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("trans_buff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+129+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+253,0,"we_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wdata_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+193+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("raddr_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+254+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rdata_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+262+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+270,0,"core_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"core_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"core_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+273+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("core_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+201+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+493,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("u_dct", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+494,0,"NUM_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+356,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"in4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"in5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"in6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"in7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+272,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"out0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"out1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"out2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"out3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"out4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"out5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"out6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"out7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+497,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+498,0,"C2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+499,0,"C3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+500,0,"C4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+501,0,"C6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+502,0,"SIN1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+503,0,"SIN3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+504,0,"K0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+505,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+289,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+290,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+217,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"b4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"b6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"b7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+237+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+245,0,"t_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"t_b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("job", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+291,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+293,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+295,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+297,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+299,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+301,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+303,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+305,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+307+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+493,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("mult_inst[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+315,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+317,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+318,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+320,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+322,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+323,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+325,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+327,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+328,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+330,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+332,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+333,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+335,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+337,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+338,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+340,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+342,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+343,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+345,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+346,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+347,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+348,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+350,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+351,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+352,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+353,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+506,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+248,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+493,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+355,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_init_top(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root__trace_init_top\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdct8x8_chen_2d___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdct8x8_chen_2d___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdct8x8_chen_2d___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_register(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root__trace_register\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdct8x8_chen_2d___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdct8x8_chen_2d___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdct8x8_chen_2d___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdct8x8_chen_2d___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_const_0_sub_0(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root__trace_const_0\n"); );
    // Init
    Vdct8x8_chen_2d___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdct8x8_chen_2d___024root*>(voidSelf);
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdct8x8_chen_2d___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_const_0_sub_0(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root__trace_const_0_sub_0\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+491,(0x20U),32);
    bufp->fullIData(oldp+492,(0x10U),32);
    bufp->fullIData(oldp+493,(8U),32);
    bufp->fullIData(oldp+494,(8U),32);
    bufp->fullBit(oldp+495,(1U));
    bufp->fullIData(oldp+496,(0xfU),32);
    bufp->fullSData(oldp+497,(0x7d8aU),16);
    bufp->fullSData(oldp+498,(0x7642U),16);
    bufp->fullSData(oldp+499,(0x6a6eU),16);
    bufp->fullSData(oldp+500,(0x5a82U),16);
    bufp->fullSData(oldp+501,(0x30fcU),16);
    bufp->fullSData(oldp+502,(0x18f9U),16);
    bufp->fullSData(oldp+503,(0x471dU),16);
    bufp->fullSData(oldp+504,(0x2d41U),16);
    bufp->fullSData(oldp+505,(0x4000U),16);
    bufp->fullIData(oldp+506,(0x40U),32);
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_full_0_sub_0(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root__trace_full_0\n"); );
    // Init
    Vdct8x8_chen_2d___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdct8x8_chen_2d___024root*>(voidSelf);
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdct8x8_chen_2d___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_full_0_sub_0(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root__trace_full_0_sub_0\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[32]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[33]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[34]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[35]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[36]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[37]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[38]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[39]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[40]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[41]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[42]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[43]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[44]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[45]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[46]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[47]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[48]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[49]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[50]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[51]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[52]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[53]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[54]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[55]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[56]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[57]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[58]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[59]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[60]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[61]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[62]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[63]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[0]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[1]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[2]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[3]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[4]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[5]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[6]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[7]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[8]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[9]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[10]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[11]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[12]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[13]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[14]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[15]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[16]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[17]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[18]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[19]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[20]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[21]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[22]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[23]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[24]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[25]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[26]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[27]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[28]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[29]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[30]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[31]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[32]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[33]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[34]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[35]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[36]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[37]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[38]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[39]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[40]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[41]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[42]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[43]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[44]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[45]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[46]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[47]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[48]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[49]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[50]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[51]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[52]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[53]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[54]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[55]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[56]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[57]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[58]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[59]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[60]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[61]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[62]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[63]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[0]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[1]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[2]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[3]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[4]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[5]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[6]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[7]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[8]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[9]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[10]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[11]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[12]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[13]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[14]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[15]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[16]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[17]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[18]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[19]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[20]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[21]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[22]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[23]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[24]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[25]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[26]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[27]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[28]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[29]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[30]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[31]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[32]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[33]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[34]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[35]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[36]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[37]),32);
    bufp->fullIData(oldp+167,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[38]),32);
    bufp->fullIData(oldp+168,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[39]),32);
    bufp->fullIData(oldp+169,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[40]),32);
    bufp->fullIData(oldp+170,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[41]),32);
    bufp->fullIData(oldp+171,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[42]),32);
    bufp->fullIData(oldp+172,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[43]),32);
    bufp->fullIData(oldp+173,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[44]),32);
    bufp->fullIData(oldp+174,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[45]),32);
    bufp->fullIData(oldp+175,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[46]),32);
    bufp->fullIData(oldp+176,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[47]),32);
    bufp->fullIData(oldp+177,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[48]),32);
    bufp->fullIData(oldp+178,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[49]),32);
    bufp->fullIData(oldp+179,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[50]),32);
    bufp->fullIData(oldp+180,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[51]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[52]),32);
    bufp->fullIData(oldp+182,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[53]),32);
    bufp->fullIData(oldp+183,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[54]),32);
    bufp->fullIData(oldp+184,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[55]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[56]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[57]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[58]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[59]),32);
    bufp->fullIData(oldp+189,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[60]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[61]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[62]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[63]),32);
    bufp->fullIData(oldp+193,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[0]),32);
    bufp->fullIData(oldp+194,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[1]),32);
    bufp->fullIData(oldp+195,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[2]),32);
    bufp->fullIData(oldp+196,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[3]),32);
    bufp->fullIData(oldp+197,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[4]),32);
    bufp->fullIData(oldp+198,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[5]),32);
    bufp->fullIData(oldp+199,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[6]),32);
    bufp->fullIData(oldp+200,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[7]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[0]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[1]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[2]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[3]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[4]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[5]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[6]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[7]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                              [0U]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                              [1U]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                              [2U]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                              [3U]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                              [4U]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                              [5U]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                              [6U]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                              [7U]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__s0),32);
    bufp->fullIData(oldp+218,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__s1),32);
    bufp->fullIData(oldp+219,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__s2),32);
    bufp->fullIData(oldp+220,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__s3),32);
    bufp->fullIData(oldp+221,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d0),32);
    bufp->fullIData(oldp+222,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d1),32);
    bufp->fullIData(oldp+223,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d2),32);
    bufp->fullIData(oldp+224,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d3),32);
    bufp->fullIData(oldp+225,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e0),32);
    bufp->fullIData(oldp+226,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e1),32);
    bufp->fullIData(oldp+227,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e2),32);
    bufp->fullIData(oldp+228,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e3),32);
    bufp->fullIData(oldp+229,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b0),32);
    bufp->fullIData(oldp+230,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b1),32);
    bufp->fullIData(oldp+231,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b2),32);
    bufp->fullIData(oldp+232,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b3),32);
    bufp->fullIData(oldp+233,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b4),32);
    bufp->fullIData(oldp+234,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b5),32);
    bufp->fullIData(oldp+235,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b6),32);
    bufp->fullIData(oldp+236,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b7),32);
    bufp->fullIData(oldp+237,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[0]),32);
    bufp->fullIData(oldp+238,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[1]),32);
    bufp->fullIData(oldp+239,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[2]),32);
    bufp->fullIData(oldp+240,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[3]),32);
    bufp->fullIData(oldp+241,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[4]),32);
    bufp->fullIData(oldp+242,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[5]),32);
    bufp->fullIData(oldp+243,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[6]),32);
    bufp->fullIData(oldp+244,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[7]),32);
    bufp->fullIData(oldp+245,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__t_b1),32);
    bufp->fullIData(oldp+246,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__t_b5),32);
    bufp->fullIData(oldp+247,(vlSelfRef.dct8x8_chen_2d__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+248,(vlSelfRef.dct8x8_chen_2d__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+249,(vlSelfRef.dct8x8_chen_2d__DOT__unnamedblk6__DOT__j),32);
    bufp->fullCData(oldp+250,(vlSelfRef.dct8x8_chen_2d__DOT__state),3);
    bufp->fullCData(oldp+251,(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt),3);
    bufp->fullCData(oldp+252,(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt),3);
    bufp->fullBit(oldp+253,(vlSelfRef.dct8x8_chen_2d__DOT__we_trans));
    bufp->fullCData(oldp+254,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[0]),6);
    bufp->fullCData(oldp+255,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[1]),6);
    bufp->fullCData(oldp+256,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[2]),6);
    bufp->fullCData(oldp+257,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[3]),6);
    bufp->fullCData(oldp+258,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[4]),6);
    bufp->fullCData(oldp+259,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[5]),6);
    bufp->fullCData(oldp+260,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[6]),6);
    bufp->fullCData(oldp+261,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[7]),6);
    bufp->fullIData(oldp+262,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[0]),32);
    bufp->fullIData(oldp+263,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[1]),32);
    bufp->fullIData(oldp+264,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[2]),32);
    bufp->fullIData(oldp+265,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[3]),32);
    bufp->fullIData(oldp+266,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[4]),32);
    bufp->fullIData(oldp+267,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[5]),32);
    bufp->fullIData(oldp+268,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[6]),32);
    bufp->fullIData(oldp+269,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[7]),32);
    bufp->fullBit(oldp+270,(vlSelfRef.dct8x8_chen_2d__DOT__core_in_valid));
    bufp->fullBit(oldp+271,((0U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))));
    bufp->fullBit(oldp+272,((5U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))));
    bufp->fullIData(oldp+273,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[0]),32);
    bufp->fullIData(oldp+274,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[1]),32);
    bufp->fullIData(oldp+275,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[2]),32);
    bufp->fullIData(oldp+276,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[3]),32);
    bufp->fullIData(oldp+277,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[4]),32);
    bufp->fullIData(oldp+278,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[5]),32);
    bufp->fullIData(oldp+279,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[6]),32);
    bufp->fullIData(oldp+280,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[7]),32);
    bufp->fullIData(oldp+281,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                              [0U]),32);
    bufp->fullIData(oldp+282,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                              [1U]),32);
    bufp->fullIData(oldp+283,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                              [2U]),32);
    bufp->fullIData(oldp+284,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                              [3U]),32);
    bufp->fullIData(oldp+285,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                              [4U]),32);
    bufp->fullIData(oldp+286,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                              [5U]),32);
    bufp->fullIData(oldp+287,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                              [6U]),32);
    bufp->fullIData(oldp+288,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                              [7U]),32);
    bufp->fullCData(oldp+289,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state),3);
    bufp->fullCData(oldp+290,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__nstate),3);
    bufp->fullQData(oldp+291,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                              [0U]),48);
    bufp->fullQData(oldp+293,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                              [1U]),48);
    bufp->fullQData(oldp+295,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                              [2U]),48);
    bufp->fullQData(oldp+297,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                              [3U]),48);
    bufp->fullQData(oldp+299,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                              [4U]),48);
    bufp->fullQData(oldp+301,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                              [5U]),48);
    bufp->fullQData(oldp+303,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                              [6U]),48);
    bufp->fullQData(oldp+305,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                              [7U]),48);
    bufp->fullIData(oldp+307,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[0]),32);
    bufp->fullIData(oldp+308,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[1]),32);
    bufp->fullIData(oldp+309,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[2]),32);
    bufp->fullIData(oldp+310,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[3]),32);
    bufp->fullIData(oldp+311,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[4]),32);
    bufp->fullIData(oldp+312,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[5]),32);
    bufp->fullIData(oldp+313,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[6]),32);
    bufp->fullIData(oldp+314,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[7]),32);
    bufp->fullIData(oldp+315,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                       [0U] >> 0x10U))),32);
    bufp->fullSData(oldp+316,((0xffffU & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                 [0U]))),16);
    bufp->fullIData(oldp+317,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+318,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+320,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                       [1U] >> 0x10U))),32);
    bufp->fullSData(oldp+321,((0xffffU & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                 [1U]))),16);
    bufp->fullIData(oldp+322,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+323,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+325,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                       [2U] >> 0x10U))),32);
    bufp->fullSData(oldp+326,((0xffffU & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                 [2U]))),16);
    bufp->fullIData(oldp+327,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+328,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+330,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                       [3U] >> 0x10U))),32);
    bufp->fullSData(oldp+331,((0xffffU & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                 [3U]))),16);
    bufp->fullIData(oldp+332,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+333,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+335,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                       [4U] >> 0x10U))),32);
    bufp->fullSData(oldp+336,((0xffffU & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                 [4U]))),16);
    bufp->fullIData(oldp+337,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+338,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+340,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                       [5U] >> 0x10U))),32);
    bufp->fullSData(oldp+341,((0xffffU & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                 [5U]))),16);
    bufp->fullIData(oldp+342,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+343,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+345,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                       [6U] >> 0x10U))),32);
    bufp->fullSData(oldp+346,((0xffffU & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                 [6U]))),16);
    bufp->fullIData(oldp+347,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+348,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+350,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                       [7U] >> 0x10U))),32);
    bufp->fullSData(oldp+351,((0xffffU & (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                 [7U]))),16);
    bufp->fullIData(oldp+352,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+353,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+355,(vlSelfRef.dct8x8_chen_2d__DOT__unnamedblk5__DOT__j),32);
    bufp->fullBit(oldp+356,(vlSelfRef.clk));
    bufp->fullBit(oldp+357,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+358,(vlSelfRef.in_valid));
    bufp->fullBit(oldp+359,(vlSelfRef.in_ready));
    bufp->fullWData(oldp+360,(vlSelfRef.in_data),2048);
    bufp->fullBit(oldp+424,(vlSelfRef.out_valid));
    bufp->fullBit(oldp+425,(vlSelfRef.out_ready));
    bufp->fullWData(oldp+426,(vlSelfRef.out_data),2048);
    bufp->fullCData(oldp+490,(vlSelfRef.dct8x8_chen_2d__DOT__nstate),3);
}
