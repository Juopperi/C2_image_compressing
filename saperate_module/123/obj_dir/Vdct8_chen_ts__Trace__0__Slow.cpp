// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdct8_chen_ts__Syms.h"


VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_init_sub__TOP__0(Vdct8_chen_ts___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8_chen_ts___024root__trace_init_sub__TOP__0\n"); );
    Vdct8_chen_ts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1494,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1495,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1496,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1497,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1498,0,"r_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1514,0,"g_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1530,0,"b_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1546,0,"component_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1547,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1548,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1549,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->pushPrefix("rgb2ycbcr_quant", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1584,0,"INPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1585,0,"FIXED_POINT_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1587,0,"PIXEL_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1584,0,"CORE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1494,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1495,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1496,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1497,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1498,0,"r_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1514,0,"g_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1530,0,"b_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1546,0,"component_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1547,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1548,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1549,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+494,0,"y_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+558,0,"cb_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+622,0,"cr_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+686,0,"ycbcr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"start_conversion",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1383,0,"dct_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1384,0,"dct_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+429,0,"dct_in_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+1385,0,"dct_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"dct_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1070,0,"dct_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+1386,0,"quant_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"quant_done_luma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,0,"quant_done_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"quant_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+690,0,"q_result_luma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+722,0,"q_result_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+754,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+493,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("dct_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1494,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1495,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1383,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1384,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+429,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+1385,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1070,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBus(c+1387,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1388,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1389,0,"row_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1390,0,"col_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("input_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1134+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("output_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1198+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("trans_buff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1262+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1391,0,"we_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wdata_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1326+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("raddr_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1392+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rdata_trans", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1400+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1408,0,"core_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1409,0,"core_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1410,0,"core_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1411+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("core_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1334+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1588,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("u_dct", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1584,0,"NUM_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1494,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1495,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1408,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1409,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1419,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1420,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1421,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1422,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1423,0,"in4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1424,0,"in5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1425,0,"in6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1426,0,"in7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1410,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1589,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1342,0,"out0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1343,0,"out1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1344,0,"out2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1345,0,"out3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1346,0,"out4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1347,0,"out5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1348,0,"out6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1349,0,"out7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1591,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1592,0,"C2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1593,0,"C3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1594,0,"C4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1595,0,"C6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1596,0,"SIN1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1597,0,"SIN3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1598,0,"K0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1599,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1427,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1428,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1350,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1351,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1357,0,"d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1361,0,"e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"b4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"b6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1369,0,"b7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1370+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1378,0,"t_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1379,0,"t_b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("job", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1429,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1431,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1433,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1435,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1437,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1439,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1441,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1443,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1445+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1588,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("mult_inst[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1453,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1454,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1455,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1456,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1458,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1459,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1460,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1461,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1463,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1464,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1465,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1466,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1468,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1469,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1470,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1471,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1473,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1474,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1475,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1476,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1478,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1479,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1480,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1481,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1483,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1484,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1485,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1486,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mult_inst[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1488,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1489,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1490,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1491,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1380,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1600,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1381,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1588,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1493,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1382,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("quant_chroma_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1601,0,"USE_LUMA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1494,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1495,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1386,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1070,0,"pixels",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+755,0,"q_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+689,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1602,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1603,0,"PROCESSING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1604,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+771,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1581,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+772,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+773,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
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
        tracep->declBus(c+774+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pixel_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+838+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("qtable_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+846+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+854+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+862,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("GEN_MULTS[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+863,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+866,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+868,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+869,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+872,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+874,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+875,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+876,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+878,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+880,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+881,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+882,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+883,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+884,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+886,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+887,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+888,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+889,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+890,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+892,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+893,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+894,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+895,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+896,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+898,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+899,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+900,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+901,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+902,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+904,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+905,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+906,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+907,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+908,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+910,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("quant_luma_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1605,0,"USE_LUMA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1494,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1495,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1386,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1070,0,"pixels",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+911,0,"q_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+688,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1602,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1603,0,"PROCESSING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1604,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+927,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1582,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+928,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+929,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
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
        tracep->declBus(c+930+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pixel_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+994+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("qtable_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1002+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1010+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1018,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("GEN_MULTS[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1019,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1020,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1021,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1022,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1024,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1025,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1026,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1027,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1028,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1030,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1031,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1032,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1033,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1034,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1036,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1037,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1038,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1039,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1040,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1042,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1043,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1044,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1045,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1046,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1048,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1049,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1050,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1051,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1052,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1054,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1055,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1056,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1057,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1058,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1060,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_MULTS[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"IN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1061,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1062,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"CONST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1064,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1066,0,"b_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rgb2ycbcr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1606,0,"fixed_point_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1607,0,"input_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1608,0,"PIXEL_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1607,0,"CORE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1494,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1583,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1498,0,"r_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1514,0,"g_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1530,0,"b_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+494,0,"y_all",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+558,0,"cb_all",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+622,0,"cr_all",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+686,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1067,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1602,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1603,0,"PROCESSING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1604,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1068,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+260,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1069,0,"batch_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+494,0,"y_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+558,0,"cb_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+622,0,"cr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBit(c+686,0,"done_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+261+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+269+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+277+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("y_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+285+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cb_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+293+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cr_core", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+301+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+309,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+311,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+312,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+316,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+317,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+318,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+319,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+320,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+321,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+322,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+323,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+311,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+320,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+320,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+310,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1611,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+319,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+319,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+309,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1612,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+318,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+318,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+311,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1613,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+323,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+323,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+310,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1614,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+322,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+322,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+309,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+321,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+321,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+311,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1615,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+317,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+317,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+310,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1616,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+316,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+316,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+309,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+315,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+315,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+324,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+331,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+332,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+333,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+334,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+335,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+336,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+337,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+338,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+326,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+335,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+335,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+325,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1611,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+334,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+334,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+324,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1612,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+333,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+333,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+326,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1613,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+338,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+338,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+325,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1614,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+337,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+337,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+324,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+336,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+336,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+326,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1615,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+332,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+332,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+325,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1616,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+331,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+331,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+324,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+330,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+330,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+339,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+340,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+341,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+342,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+346,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+347,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+348,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+349,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+350,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+351,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+352,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+353,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+341,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+350,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+350,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+340,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1611,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+349,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+349,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+339,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1612,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+348,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+348,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+341,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1613,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+353,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+353,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+340,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1614,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+352,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+352,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+339,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+351,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+351,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+341,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1615,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+347,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+347,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+340,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1616,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+346,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+346,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+339,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+345,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+345,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+354,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+355,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+356,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+357,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+358,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+357,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+358,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+361,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+362,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+363,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+364,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+365,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+366,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+367,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+368,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+356,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+365,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+365,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+355,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1611,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+364,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+354,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1612,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+363,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+363,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+356,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1613,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+368,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+368,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+355,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1614,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+367,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+367,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+354,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+366,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+366,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+356,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1615,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+362,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+362,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+355,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1616,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+361,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+361,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+354,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+360,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+360,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+369,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+370,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+371,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+376,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+377,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+378,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+379,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+380,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+381,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+382,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+383,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+371,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+380,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+380,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+370,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1611,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+379,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+379,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+369,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1612,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+378,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+378,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+371,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1613,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+383,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+383,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+370,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1614,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+382,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+382,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+369,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+381,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+381,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+371,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1615,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+377,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+377,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+370,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1616,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+376,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+376,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+369,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+375,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+375,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+385,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+386,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+387,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+389,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+389,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+390,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+391,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+392,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+393,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+394,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+395,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+396,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+397,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+398,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+395,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+395,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1611,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+394,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+394,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1612,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+393,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+393,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1613,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+398,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+398,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1614,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+397,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+397,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+396,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+396,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1615,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+392,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+392,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1616,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+391,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+391,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+390,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+390,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+399,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+400,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+401,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+402,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+402,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+405,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+406,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+407,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+408,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+409,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+410,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+411,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+412,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+413,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+401,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+410,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+410,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+400,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1611,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+409,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+409,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+399,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1612,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+408,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+408,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+401,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1613,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+413,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+413,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+400,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1614,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+412,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+412,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+399,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+411,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+411,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+401,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1615,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+407,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+407,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+400,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1616,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+406,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+406,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+399,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+405,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+405,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("converter_cores[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("converter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+414,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+415,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+417,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+418,0,"cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"cr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+418,0,"temp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"temp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+421,0,"y_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+422,0,"y_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+423,0,"cb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+424,0,"cb_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+425,0,"cb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+426,0,"cr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+427,0,"cr_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+428,0,"cr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("cb_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+416,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+425,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+425,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+415,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1611,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+424,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+424,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cb_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+414,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1612,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+423,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+423,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+416,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1613,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+428,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+428,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+415,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1614,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+427,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+427,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cr_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+414,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1609,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+426,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+426,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_b_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+416,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1615,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+422,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+422,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_g_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+415,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1616,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+421,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+421,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("y_r_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+414,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1617,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+420,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+420,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1610,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_init_top(Vdct8_chen_ts___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8_chen_ts___024root__trace_init_top\n"); );
    Vdct8_chen_ts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdct8_chen_ts___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdct8_chen_ts___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdct8_chen_ts___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_register(Vdct8_chen_ts___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8_chen_ts___024root__trace_register\n"); );
    Vdct8_chen_ts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdct8_chen_ts___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdct8_chen_ts___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdct8_chen_ts___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdct8_chen_ts___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_const_0_sub_0(Vdct8_chen_ts___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8_chen_ts___024root__trace_const_0\n"); );
    // Init
    Vdct8_chen_ts___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdct8_chen_ts___024root*>(voidSelf);
    Vdct8_chen_ts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdct8_chen_ts___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_const_0_sub_0(Vdct8_chen_ts___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8_chen_ts___024root__trace_const_0_sub_0\n"); );
    Vdct8_chen_ts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1584,(8U),32);
    bufp->fullIData(oldp+1585,(0x20U),32);
    bufp->fullIData(oldp+1586,(0x10U),32);
    bufp->fullIData(oldp+1587,(0x40U),32);
    bufp->fullIData(oldp+1588,(8U),32);
    bufp->fullBit(oldp+1589,(1U));
    bufp->fullIData(oldp+1590,(0xfU),32);
    bufp->fullSData(oldp+1591,(0x7d8aU),16);
    bufp->fullSData(oldp+1592,(0x7642U),16);
    bufp->fullSData(oldp+1593,(0x6a6eU),16);
    bufp->fullSData(oldp+1594,(0x5a82U),16);
    bufp->fullSData(oldp+1595,(0x30fcU),16);
    bufp->fullSData(oldp+1596,(0x18f9U),16);
    bufp->fullSData(oldp+1597,(0x471dU),16);
    bufp->fullSData(oldp+1598,(0x2d41U),16);
    bufp->fullSData(oldp+1599,(0x4000U),16);
    bufp->fullIData(oldp+1600,(0x40U),32);
    bufp->fullIData(oldp+1601,(0U),32);
    bufp->fullCData(oldp+1602,(0U),2);
    bufp->fullCData(oldp+1603,(1U),2);
    bufp->fullCData(oldp+1604,(2U),2);
    bufp->fullIData(oldp+1605,(1U),32);
    bufp->fullIData(oldp+1606,(0x20U),32);
    bufp->fullIData(oldp+1607,(8U),32);
    bufp->fullIData(oldp+1608,(0x40U),32);
    bufp->fullSData(oldp+1609,(0x8000U),16);
    bufp->fullIData(oldp+1610,(8U),32);
    bufp->fullSData(oldp+1611,(0x54cdU),16);
    bufp->fullSData(oldp+1612,(0x2b32U),16);
    bufp->fullSData(oldp+1613,(0x14d0U),16);
    bufp->fullSData(oldp+1614,(0x6b2fU),16);
    bufp->fullSData(oldp+1615,(0x1d2fU),16);
    bufp->fullSData(oldp+1616,(0x9645U),16);
    bufp->fullSData(oldp+1617,(0x4c8bU),16);
}

VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_full_0_sub_0(Vdct8_chen_ts___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8_chen_ts___024root__trace_full_0\n"); );
    // Init
    Vdct8_chen_ts___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdct8_chen_ts___024root*>(voidSelf);
    Vdct8_chen_ts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdct8_chen_ts___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdct8_chen_ts___024root__trace_full_0_sub_0(Vdct8_chen_ts___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8_chen_ts___024root__trace_full_0_sub_0\n"); );
    Vdct8_chen_ts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[32]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[33]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[34]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[35]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[36]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[37]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[38]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[39]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[40]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[41]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[42]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[43]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[44]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[45]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[46]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[47]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[48]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[49]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[50]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[51]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[52]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[53]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[54]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[55]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[56]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[57]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[58]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[59]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[60]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[61]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[62]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[63]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[1]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[2]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[3]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[4]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[5]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[6]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[7]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[8]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[9]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[10]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[11]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[12]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[13]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[14]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[15]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[16]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[17]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[18]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[19]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[20]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[21]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[22]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[23]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[24]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[25]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[26]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[27]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[28]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[29]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[30]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[31]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[32]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[33]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[34]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[35]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[36]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[37]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[38]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[39]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[40]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[41]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[42]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[43]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[44]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[45]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[46]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[47]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[48]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[49]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[50]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[51]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[52]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[53]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[54]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[55]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[56]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[57]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[58]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[59]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[60]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[61]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[62]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[63]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[1]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[2]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[3]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[4]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[5]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[6]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[7]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[8]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[9]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[10]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[11]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[12]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[13]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[14]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[15]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[16]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[17]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[18]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[19]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[20]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[21]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[22]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[23]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[24]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[25]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[26]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[27]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[28]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[29]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[30]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[31]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[32]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[33]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[34]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[35]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[36]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[37]),32);
    bufp->fullIData(oldp+167,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[38]),32);
    bufp->fullIData(oldp+168,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[39]),32);
    bufp->fullIData(oldp+169,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[40]),32);
    bufp->fullIData(oldp+170,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[41]),32);
    bufp->fullIData(oldp+171,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[42]),32);
    bufp->fullIData(oldp+172,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[43]),32);
    bufp->fullIData(oldp+173,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[44]),32);
    bufp->fullIData(oldp+174,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[45]),32);
    bufp->fullIData(oldp+175,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[46]),32);
    bufp->fullIData(oldp+176,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[47]),32);
    bufp->fullIData(oldp+177,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[48]),32);
    bufp->fullIData(oldp+178,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[49]),32);
    bufp->fullIData(oldp+179,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[50]),32);
    bufp->fullIData(oldp+180,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[51]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[52]),32);
    bufp->fullIData(oldp+182,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[53]),32);
    bufp->fullIData(oldp+183,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[54]),32);
    bufp->fullIData(oldp+184,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[55]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[56]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[57]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[58]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[59]),32);
    bufp->fullIData(oldp+189,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[60]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[61]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[62]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[63]),32);
    bufp->fullIData(oldp+193,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0]),32);
    bufp->fullIData(oldp+194,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[1]),32);
    bufp->fullIData(oldp+195,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[2]),32);
    bufp->fullIData(oldp+196,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[3]),32);
    bufp->fullIData(oldp+197,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[4]),32);
    bufp->fullIData(oldp+198,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[5]),32);
    bufp->fullIData(oldp+199,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[6]),32);
    bufp->fullIData(oldp+200,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[7]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[8]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[9]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[10]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[11]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[12]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[13]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[14]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[15]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[16]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[17]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[18]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[19]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[20]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[21]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[22]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[23]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[24]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[25]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[26]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[27]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[28]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[29]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[30]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[31]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[32]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[33]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[34]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[35]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[36]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[37]),32);
    bufp->fullIData(oldp+231,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[38]),32);
    bufp->fullIData(oldp+232,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[39]),32);
    bufp->fullIData(oldp+233,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[40]),32);
    bufp->fullIData(oldp+234,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[41]),32);
    bufp->fullIData(oldp+235,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[42]),32);
    bufp->fullIData(oldp+236,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[43]),32);
    bufp->fullIData(oldp+237,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[44]),32);
    bufp->fullIData(oldp+238,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[45]),32);
    bufp->fullIData(oldp+239,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[46]),32);
    bufp->fullIData(oldp+240,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[47]),32);
    bufp->fullIData(oldp+241,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[48]),32);
    bufp->fullIData(oldp+242,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[49]),32);
    bufp->fullIData(oldp+243,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[50]),32);
    bufp->fullIData(oldp+244,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[51]),32);
    bufp->fullIData(oldp+245,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[52]),32);
    bufp->fullIData(oldp+246,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[53]),32);
    bufp->fullIData(oldp+247,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[54]),32);
    bufp->fullIData(oldp+248,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[55]),32);
    bufp->fullIData(oldp+249,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[56]),32);
    bufp->fullIData(oldp+250,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[57]),32);
    bufp->fullIData(oldp+251,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[58]),32);
    bufp->fullIData(oldp+252,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[59]),32);
    bufp->fullIData(oldp+253,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[60]),32);
    bufp->fullIData(oldp+254,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[61]),32);
    bufp->fullIData(oldp+255,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[62]),32);
    bufp->fullIData(oldp+256,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[63]),32);
    bufp->fullBit(oldp+257,(vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion));
    bufp->fullBit(oldp+258,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_done));
    bufp->fullIData(oldp+259,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__k),32);
    bufp->fullCData(oldp+260,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state),2);
    bufp->fullCData(oldp+261,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[0]),8);
    bufp->fullCData(oldp+262,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[1]),8);
    bufp->fullCData(oldp+263,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[2]),8);
    bufp->fullCData(oldp+264,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[3]),8);
    bufp->fullCData(oldp+265,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[4]),8);
    bufp->fullCData(oldp+266,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[5]),8);
    bufp->fullCData(oldp+267,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[6]),8);
    bufp->fullCData(oldp+268,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[7]),8);
    bufp->fullCData(oldp+269,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[0]),8);
    bufp->fullCData(oldp+270,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[1]),8);
    bufp->fullCData(oldp+271,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[2]),8);
    bufp->fullCData(oldp+272,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[3]),8);
    bufp->fullCData(oldp+273,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[4]),8);
    bufp->fullCData(oldp+274,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[5]),8);
    bufp->fullCData(oldp+275,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[6]),8);
    bufp->fullCData(oldp+276,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[7]),8);
    bufp->fullCData(oldp+277,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[0]),8);
    bufp->fullCData(oldp+278,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[1]),8);
    bufp->fullCData(oldp+279,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[2]),8);
    bufp->fullCData(oldp+280,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[3]),8);
    bufp->fullCData(oldp+281,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[4]),8);
    bufp->fullCData(oldp+282,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[5]),8);
    bufp->fullCData(oldp+283,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[6]),8);
    bufp->fullCData(oldp+284,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[7]),8);
    bufp->fullIData(oldp+285,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[0]),32);
    bufp->fullIData(oldp+286,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[1]),32);
    bufp->fullIData(oldp+287,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[2]),32);
    bufp->fullIData(oldp+288,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[3]),32);
    bufp->fullIData(oldp+289,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[4]),32);
    bufp->fullIData(oldp+290,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[5]),32);
    bufp->fullIData(oldp+291,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[6]),32);
    bufp->fullIData(oldp+292,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[7]),32);
    bufp->fullIData(oldp+293,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[0]),32);
    bufp->fullIData(oldp+294,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[1]),32);
    bufp->fullIData(oldp+295,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[2]),32);
    bufp->fullIData(oldp+296,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[3]),32);
    bufp->fullIData(oldp+297,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[4]),32);
    bufp->fullIData(oldp+298,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[5]),32);
    bufp->fullIData(oldp+299,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[6]),32);
    bufp->fullIData(oldp+300,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[7]),32);
    bufp->fullIData(oldp+301,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[0]),32);
    bufp->fullIData(oldp+302,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[1]),32);
    bufp->fullIData(oldp+303,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[2]),32);
    bufp->fullIData(oldp+304,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[3]),32);
    bufp->fullIData(oldp+305,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[4]),32);
    bufp->fullIData(oldp+306,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[5]),32);
    bufp->fullIData(oldp+307,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[6]),32);
    bufp->fullIData(oldp+308,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[7]),32);
    bufp->fullCData(oldp+309,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                              [0U]),8);
    bufp->fullCData(oldp+310,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                              [0U]),8);
    bufp->fullCData(oldp+311,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                              [0U]),8);
    bufp->fullIData(oldp+312,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+313,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+314,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+315,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+316,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+317,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+318,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+319,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+320,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+321,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+322,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+323,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+324,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                              [1U]),8);
    bufp->fullCData(oldp+325,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                              [1U]),8);
    bufp->fullCData(oldp+326,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                              [1U]),8);
    bufp->fullIData(oldp+327,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+328,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+329,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+330,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+331,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+332,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+333,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+334,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+335,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+336,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+337,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+338,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+339,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                              [2U]),8);
    bufp->fullCData(oldp+340,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                              [2U]),8);
    bufp->fullCData(oldp+341,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                              [2U]),8);
    bufp->fullIData(oldp+342,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+343,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+344,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+345,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+346,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+347,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+348,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+349,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+350,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+351,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+352,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+353,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+354,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                              [3U]),8);
    bufp->fullCData(oldp+355,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                              [3U]),8);
    bufp->fullCData(oldp+356,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                              [3U]),8);
    bufp->fullIData(oldp+357,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+358,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+359,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+360,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+361,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+362,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+363,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+364,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+365,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+366,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+367,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+368,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+369,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                              [4U]),8);
    bufp->fullCData(oldp+370,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                              [4U]),8);
    bufp->fullCData(oldp+371,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                              [4U]),8);
    bufp->fullIData(oldp+372,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+373,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+374,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+375,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+376,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+377,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+378,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+379,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+380,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+381,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+382,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+383,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+384,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                              [5U]),8);
    bufp->fullCData(oldp+385,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                              [5U]),8);
    bufp->fullCData(oldp+386,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                              [5U]),8);
    bufp->fullIData(oldp+387,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+388,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+389,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+390,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+391,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+392,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+393,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+394,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+395,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+396,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+397,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+398,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+399,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                              [6U]),8);
    bufp->fullCData(oldp+400,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                              [6U]),8);
    bufp->fullCData(oldp+401,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                              [6U]),8);
    bufp->fullIData(oldp+402,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+403,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+404,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+405,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+406,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+407,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+408,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+409,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+410,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+411,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+412,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+413,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullCData(oldp+414,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                              [7U]),8);
    bufp->fullCData(oldp+415,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                              [7U]),8);
    bufp->fullCData(oldp+416,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                              [7U]),8);
    bufp->fullIData(oldp+417,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                 + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                               - (IData)(0x800000U))),32);
    bufp->fullIData(oldp+418,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                               + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+419,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                               - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
    bufp->fullIData(oldp+420,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
    bufp->fullIData(oldp+421,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
    bufp->fullIData(oldp+422,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
    bufp->fullIData(oldp+423,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
    bufp->fullIData(oldp+424,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
    bufp->fullIData(oldp+425,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
    bufp->fullIData(oldp+426,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
    bufp->fullIData(oldp+427,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
    bufp->fullIData(oldp+428,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    bufp->fullWData(oldp+429,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data),2048);
    bufp->fullCData(oldp+493,(vlSelfRef.rgb2ycbcr_quant__DOT__next_state),3);
    bufp->fullWData(oldp+494,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg),2048);
    bufp->fullWData(oldp+558,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg),2048);
    bufp->fullWData(oldp+622,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg),2048);
    bufp->fullBit(oldp+686,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__done_reg));
    bufp->fullBit(oldp+687,((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state))));
    bufp->fullBit(oldp+688,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_luma));
    bufp->fullBit(oldp+689,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_chroma));
    __Vtemp_1[0U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[0U];
    __Vtemp_1[1U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[1U];
    __Vtemp_1[2U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[2U];
    __Vtemp_1[3U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[3U];
    __Vtemp_1[4U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[4U];
    __Vtemp_1[5U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[5U];
    __Vtemp_1[6U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[6U];
    __Vtemp_1[7U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[7U];
    __Vtemp_1[8U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[8U];
    __Vtemp_1[9U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[9U];
    __Vtemp_1[0xaU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[0xaU];
    __Vtemp_1[0xbU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[0xbU];
    __Vtemp_1[0xcU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[0xcU];
    __Vtemp_1[0xdU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[0xdU];
    __Vtemp_1[0xeU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[0xeU];
    __Vtemp_1[0xfU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result[0xfU];
    __Vtemp_1[0x10U] = 0U;
    __Vtemp_1[0x11U] = 0U;
    __Vtemp_1[0x12U] = 0U;
    __Vtemp_1[0x13U] = 0U;
    __Vtemp_1[0x14U] = 0U;
    __Vtemp_1[0x15U] = 0U;
    __Vtemp_1[0x16U] = 0U;
    __Vtemp_1[0x17U] = 0U;
    __Vtemp_1[0x18U] = 0U;
    __Vtemp_1[0x19U] = 0U;
    __Vtemp_1[0x1aU] = 0U;
    __Vtemp_1[0x1bU] = 0U;
    __Vtemp_1[0x1cU] = 0U;
    __Vtemp_1[0x1dU] = 0U;
    __Vtemp_1[0x1eU] = 0U;
    __Vtemp_1[0x1fU] = 0U;
    bufp->fullWData(oldp+690,(__Vtemp_1),1024);
    __Vtemp_2[0U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[0U];
    __Vtemp_2[1U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[1U];
    __Vtemp_2[2U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[2U];
    __Vtemp_2[3U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[3U];
    __Vtemp_2[4U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[4U];
    __Vtemp_2[5U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[5U];
    __Vtemp_2[6U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[6U];
    __Vtemp_2[7U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[7U];
    __Vtemp_2[8U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[8U];
    __Vtemp_2[9U] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[9U];
    __Vtemp_2[0xaU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[0xaU];
    __Vtemp_2[0xbU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[0xbU];
    __Vtemp_2[0xcU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[0xcU];
    __Vtemp_2[0xdU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[0xdU];
    __Vtemp_2[0xeU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[0xeU];
    __Vtemp_2[0xfU] = vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result[0xfU];
    __Vtemp_2[0x10U] = 0U;
    __Vtemp_2[0x11U] = 0U;
    __Vtemp_2[0x12U] = 0U;
    __Vtemp_2[0x13U] = 0U;
    __Vtemp_2[0x14U] = 0U;
    __Vtemp_2[0x15U] = 0U;
    __Vtemp_2[0x16U] = 0U;
    __Vtemp_2[0x17U] = 0U;
    __Vtemp_2[0x18U] = 0U;
    __Vtemp_2[0x19U] = 0U;
    __Vtemp_2[0x1aU] = 0U;
    __Vtemp_2[0x1bU] = 0U;
    __Vtemp_2[0x1cU] = 0U;
    __Vtemp_2[0x1dU] = 0U;
    __Vtemp_2[0x1eU] = 0U;
    __Vtemp_2[0x1fU] = 0U;
    bufp->fullWData(oldp+722,(__Vtemp_2),1024);
    bufp->fullCData(oldp+754,(vlSelfRef.rgb2ycbcr_quant__DOT__current_state),3);
    bufp->fullWData(oldp+755,(vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_chroma_inst__q_result),512);
    bufp->fullCData(oldp+771,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state),2);
    bufp->fullCData(oldp+772,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt),3);
    bufp->fullCData(oldp+773,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr),6);
    bufp->fullCData(oldp+774,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[0]),8);
    bufp->fullCData(oldp+775,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[1]),8);
    bufp->fullCData(oldp+776,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[2]),8);
    bufp->fullCData(oldp+777,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[3]),8);
    bufp->fullCData(oldp+778,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[4]),8);
    bufp->fullCData(oldp+779,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[5]),8);
    bufp->fullCData(oldp+780,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[6]),8);
    bufp->fullCData(oldp+781,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[7]),8);
    bufp->fullCData(oldp+782,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[8]),8);
    bufp->fullCData(oldp+783,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[9]),8);
    bufp->fullCData(oldp+784,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[10]),8);
    bufp->fullCData(oldp+785,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[11]),8);
    bufp->fullCData(oldp+786,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[12]),8);
    bufp->fullCData(oldp+787,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[13]),8);
    bufp->fullCData(oldp+788,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[14]),8);
    bufp->fullCData(oldp+789,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[15]),8);
    bufp->fullCData(oldp+790,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[16]),8);
    bufp->fullCData(oldp+791,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[17]),8);
    bufp->fullCData(oldp+792,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[18]),8);
    bufp->fullCData(oldp+793,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[19]),8);
    bufp->fullCData(oldp+794,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[20]),8);
    bufp->fullCData(oldp+795,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[21]),8);
    bufp->fullCData(oldp+796,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[22]),8);
    bufp->fullCData(oldp+797,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[23]),8);
    bufp->fullCData(oldp+798,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[24]),8);
    bufp->fullCData(oldp+799,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[25]),8);
    bufp->fullCData(oldp+800,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[26]),8);
    bufp->fullCData(oldp+801,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[27]),8);
    bufp->fullCData(oldp+802,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[28]),8);
    bufp->fullCData(oldp+803,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[29]),8);
    bufp->fullCData(oldp+804,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[30]),8);
    bufp->fullCData(oldp+805,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[31]),8);
    bufp->fullCData(oldp+806,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[32]),8);
    bufp->fullCData(oldp+807,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[33]),8);
    bufp->fullCData(oldp+808,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[34]),8);
    bufp->fullCData(oldp+809,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[35]),8);
    bufp->fullCData(oldp+810,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[36]),8);
    bufp->fullCData(oldp+811,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[37]),8);
    bufp->fullCData(oldp+812,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[38]),8);
    bufp->fullCData(oldp+813,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[39]),8);
    bufp->fullCData(oldp+814,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[40]),8);
    bufp->fullCData(oldp+815,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[41]),8);
    bufp->fullCData(oldp+816,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[42]),8);
    bufp->fullCData(oldp+817,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[43]),8);
    bufp->fullCData(oldp+818,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[44]),8);
    bufp->fullCData(oldp+819,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[45]),8);
    bufp->fullCData(oldp+820,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[46]),8);
    bufp->fullCData(oldp+821,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[47]),8);
    bufp->fullCData(oldp+822,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[48]),8);
    bufp->fullCData(oldp+823,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[49]),8);
    bufp->fullCData(oldp+824,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[50]),8);
    bufp->fullCData(oldp+825,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[51]),8);
    bufp->fullCData(oldp+826,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[52]),8);
    bufp->fullCData(oldp+827,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[53]),8);
    bufp->fullCData(oldp+828,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[54]),8);
    bufp->fullCData(oldp+829,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[55]),8);
    bufp->fullCData(oldp+830,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[56]),8);
    bufp->fullCData(oldp+831,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[57]),8);
    bufp->fullCData(oldp+832,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[58]),8);
    bufp->fullCData(oldp+833,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[59]),8);
    bufp->fullCData(oldp+834,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[60]),8);
    bufp->fullCData(oldp+835,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[61]),8);
    bufp->fullCData(oldp+836,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[62]),8);
    bufp->fullCData(oldp+837,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[63]),8);
    bufp->fullIData(oldp+838,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[0]),32);
    bufp->fullIData(oldp+839,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[1]),32);
    bufp->fullIData(oldp+840,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[2]),32);
    bufp->fullIData(oldp+841,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[3]),32);
    bufp->fullIData(oldp+842,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[4]),32);
    bufp->fullIData(oldp+843,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[5]),32);
    bufp->fullIData(oldp+844,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[6]),32);
    bufp->fullIData(oldp+845,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[7]),32);
    bufp->fullIData(oldp+846,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[0]),32);
    bufp->fullIData(oldp+847,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[1]),32);
    bufp->fullIData(oldp+848,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[2]),32);
    bufp->fullIData(oldp+849,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[3]),32);
    bufp->fullIData(oldp+850,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[4]),32);
    bufp->fullIData(oldp+851,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[5]),32);
    bufp->fullIData(oldp+852,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[6]),32);
    bufp->fullIData(oldp+853,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[7]),32);
    bufp->fullIData(oldp+854,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[0]),32);
    bufp->fullIData(oldp+855,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[1]),32);
    bufp->fullIData(oldp+856,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[2]),32);
    bufp->fullIData(oldp+857,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[3]),32);
    bufp->fullIData(oldp+858,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[4]),32);
    bufp->fullIData(oldp+859,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[5]),32);
    bufp->fullIData(oldp+860,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[6]),32);
    bufp->fullIData(oldp+861,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[7]),32);
    bufp->fullIData(oldp+862,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__j),32);
    bufp->fullIData(oldp+863,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                              [0U]),32);
    bufp->fullIData(oldp+864,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                              [0U]),32);
    bufp->fullIData(oldp+865,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+866,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+868,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                               [0U])),16);
    bufp->fullIData(oldp+869,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                              [1U]),32);
    bufp->fullIData(oldp+870,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                              [1U]),32);
    bufp->fullIData(oldp+871,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+872,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+874,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                               [1U])),16);
    bufp->fullIData(oldp+875,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                              [2U]),32);
    bufp->fullIData(oldp+876,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                              [2U]),32);
    bufp->fullIData(oldp+877,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+878,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+880,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                               [2U])),16);
    bufp->fullIData(oldp+881,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                              [3U]),32);
    bufp->fullIData(oldp+882,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                              [3U]),32);
    bufp->fullIData(oldp+883,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+884,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+886,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                               [3U])),16);
    bufp->fullIData(oldp+887,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                              [4U]),32);
    bufp->fullIData(oldp+888,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                              [4U]),32);
    bufp->fullIData(oldp+889,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+890,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+892,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                               [4U])),16);
    bufp->fullIData(oldp+893,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                              [5U]),32);
    bufp->fullIData(oldp+894,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                              [5U]),32);
    bufp->fullIData(oldp+895,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+896,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+898,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                               [5U])),16);
    bufp->fullIData(oldp+899,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                              [6U]),32);
    bufp->fullIData(oldp+900,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                              [6U]),32);
    bufp->fullIData(oldp+901,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+902,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+904,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                               [6U])),16);
    bufp->fullIData(oldp+905,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                              [7U]),32);
    bufp->fullIData(oldp+906,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                              [7U]),32);
    bufp->fullIData(oldp+907,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+908,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+910,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                               [7U])),16);
    bufp->fullWData(oldp+911,(vlSelfRef.rgb2ycbcr_quant__DOT____Vcellout__quant_luma_inst__q_result),512);
    bufp->fullCData(oldp+927,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state),2);
    bufp->fullCData(oldp+928,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt),3);
    bufp->fullCData(oldp+929,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr),6);
    bufp->fullCData(oldp+930,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[0]),8);
    bufp->fullCData(oldp+931,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[1]),8);
    bufp->fullCData(oldp+932,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[2]),8);
    bufp->fullCData(oldp+933,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[3]),8);
    bufp->fullCData(oldp+934,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[4]),8);
    bufp->fullCData(oldp+935,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[5]),8);
    bufp->fullCData(oldp+936,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[6]),8);
    bufp->fullCData(oldp+937,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[7]),8);
    bufp->fullCData(oldp+938,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[8]),8);
    bufp->fullCData(oldp+939,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[9]),8);
    bufp->fullCData(oldp+940,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[10]),8);
    bufp->fullCData(oldp+941,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[11]),8);
    bufp->fullCData(oldp+942,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[12]),8);
    bufp->fullCData(oldp+943,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[13]),8);
    bufp->fullCData(oldp+944,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[14]),8);
    bufp->fullCData(oldp+945,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[15]),8);
    bufp->fullCData(oldp+946,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[16]),8);
    bufp->fullCData(oldp+947,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[17]),8);
    bufp->fullCData(oldp+948,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[18]),8);
    bufp->fullCData(oldp+949,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[19]),8);
    bufp->fullCData(oldp+950,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[20]),8);
    bufp->fullCData(oldp+951,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[21]),8);
    bufp->fullCData(oldp+952,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[22]),8);
    bufp->fullCData(oldp+953,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[23]),8);
    bufp->fullCData(oldp+954,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[24]),8);
    bufp->fullCData(oldp+955,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[25]),8);
    bufp->fullCData(oldp+956,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[26]),8);
    bufp->fullCData(oldp+957,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[27]),8);
    bufp->fullCData(oldp+958,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[28]),8);
    bufp->fullCData(oldp+959,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[29]),8);
    bufp->fullCData(oldp+960,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[30]),8);
    bufp->fullCData(oldp+961,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[31]),8);
    bufp->fullCData(oldp+962,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[32]),8);
    bufp->fullCData(oldp+963,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[33]),8);
    bufp->fullCData(oldp+964,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[34]),8);
    bufp->fullCData(oldp+965,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[35]),8);
    bufp->fullCData(oldp+966,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[36]),8);
    bufp->fullCData(oldp+967,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[37]),8);
    bufp->fullCData(oldp+968,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[38]),8);
    bufp->fullCData(oldp+969,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[39]),8);
    bufp->fullCData(oldp+970,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[40]),8);
    bufp->fullCData(oldp+971,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[41]),8);
    bufp->fullCData(oldp+972,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[42]),8);
    bufp->fullCData(oldp+973,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[43]),8);
    bufp->fullCData(oldp+974,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[44]),8);
    bufp->fullCData(oldp+975,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[45]),8);
    bufp->fullCData(oldp+976,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[46]),8);
    bufp->fullCData(oldp+977,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[47]),8);
    bufp->fullCData(oldp+978,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[48]),8);
    bufp->fullCData(oldp+979,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[49]),8);
    bufp->fullCData(oldp+980,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[50]),8);
    bufp->fullCData(oldp+981,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[51]),8);
    bufp->fullCData(oldp+982,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[52]),8);
    bufp->fullCData(oldp+983,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[53]),8);
    bufp->fullCData(oldp+984,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[54]),8);
    bufp->fullCData(oldp+985,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[55]),8);
    bufp->fullCData(oldp+986,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[56]),8);
    bufp->fullCData(oldp+987,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[57]),8);
    bufp->fullCData(oldp+988,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[58]),8);
    bufp->fullCData(oldp+989,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[59]),8);
    bufp->fullCData(oldp+990,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[60]),8);
    bufp->fullCData(oldp+991,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[61]),8);
    bufp->fullCData(oldp+992,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[62]),8);
    bufp->fullCData(oldp+993,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[63]),8);
    bufp->fullIData(oldp+994,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[0]),32);
    bufp->fullIData(oldp+995,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[1]),32);
    bufp->fullIData(oldp+996,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[2]),32);
    bufp->fullIData(oldp+997,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[3]),32);
    bufp->fullIData(oldp+998,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[4]),32);
    bufp->fullIData(oldp+999,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[5]),32);
    bufp->fullIData(oldp+1000,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[6]),32);
    bufp->fullIData(oldp+1001,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[7]),32);
    bufp->fullIData(oldp+1002,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[0]),32);
    bufp->fullIData(oldp+1003,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[1]),32);
    bufp->fullIData(oldp+1004,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[2]),32);
    bufp->fullIData(oldp+1005,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[3]),32);
    bufp->fullIData(oldp+1006,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[4]),32);
    bufp->fullIData(oldp+1007,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[5]),32);
    bufp->fullIData(oldp+1008,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[6]),32);
    bufp->fullIData(oldp+1009,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[7]),32);
    bufp->fullIData(oldp+1010,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[0]),32);
    bufp->fullIData(oldp+1011,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[1]),32);
    bufp->fullIData(oldp+1012,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[2]),32);
    bufp->fullIData(oldp+1013,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[3]),32);
    bufp->fullIData(oldp+1014,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[4]),32);
    bufp->fullIData(oldp+1015,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[5]),32);
    bufp->fullIData(oldp+1016,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[6]),32);
    bufp->fullIData(oldp+1017,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[7]),32);
    bufp->fullIData(oldp+1018,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__j),32);
    bufp->fullIData(oldp+1019,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                               [0U]),32);
    bufp->fullIData(oldp+1020,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                               [0U]),32);
    bufp->fullIData(oldp+1021,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+1022,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+1024,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                [0U])),16);
    bufp->fullIData(oldp+1025,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                               [1U]),32);
    bufp->fullIData(oldp+1026,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                               [1U]),32);
    bufp->fullIData(oldp+1027,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+1028,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+1030,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                [1U])),16);
    bufp->fullIData(oldp+1031,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                               [2U]),32);
    bufp->fullIData(oldp+1032,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                               [2U]),32);
    bufp->fullIData(oldp+1033,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+1034,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+1036,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                [2U])),16);
    bufp->fullIData(oldp+1037,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                               [3U]),32);
    bufp->fullIData(oldp+1038,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                               [3U]),32);
    bufp->fullIData(oldp+1039,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+1040,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+1042,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                [3U])),16);
    bufp->fullIData(oldp+1043,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                               [4U]),32);
    bufp->fullIData(oldp+1044,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                               [4U]),32);
    bufp->fullIData(oldp+1045,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+1046,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+1048,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                [4U])),16);
    bufp->fullIData(oldp+1049,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                               [5U]),32);
    bufp->fullIData(oldp+1050,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                               [5U]),32);
    bufp->fullIData(oldp+1051,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+1052,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+1054,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                [5U])),16);
    bufp->fullIData(oldp+1055,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                               [6U]),32);
    bufp->fullIData(oldp+1056,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                               [6U]),32);
    bufp->fullIData(oldp+1057,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+1058,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+1060,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                [6U])),16);
    bufp->fullIData(oldp+1061,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                               [7U]),32);
    bufp->fullIData(oldp+1062,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                               [7U]),32);
    bufp->fullIData(oldp+1063,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result),32);
    bufp->fullQData(oldp+1064,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p),48);
    bufp->fullSData(oldp+1066,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                [7U])),16);
    bufp->fullIData(oldp+1067,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__j),32);
    bufp->fullCData(oldp+1068,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state),2);
    bufp->fullCData(oldp+1069,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count),3);
    bufp->fullWData(oldp+1070,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data),2048);
    bufp->fullIData(oldp+1134,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0]),32);
    bufp->fullIData(oldp+1135,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[1]),32);
    bufp->fullIData(oldp+1136,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[2]),32);
    bufp->fullIData(oldp+1137,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[3]),32);
    bufp->fullIData(oldp+1138,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[4]),32);
    bufp->fullIData(oldp+1139,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[5]),32);
    bufp->fullIData(oldp+1140,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[6]),32);
    bufp->fullIData(oldp+1141,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[7]),32);
    bufp->fullIData(oldp+1142,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[8]),32);
    bufp->fullIData(oldp+1143,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[9]),32);
    bufp->fullIData(oldp+1144,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[10]),32);
    bufp->fullIData(oldp+1145,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[11]),32);
    bufp->fullIData(oldp+1146,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[12]),32);
    bufp->fullIData(oldp+1147,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[13]),32);
    bufp->fullIData(oldp+1148,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[14]),32);
    bufp->fullIData(oldp+1149,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[15]),32);
    bufp->fullIData(oldp+1150,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[16]),32);
    bufp->fullIData(oldp+1151,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[17]),32);
    bufp->fullIData(oldp+1152,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[18]),32);
    bufp->fullIData(oldp+1153,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[19]),32);
    bufp->fullIData(oldp+1154,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[20]),32);
    bufp->fullIData(oldp+1155,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[21]),32);
    bufp->fullIData(oldp+1156,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[22]),32);
    bufp->fullIData(oldp+1157,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[23]),32);
    bufp->fullIData(oldp+1158,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[24]),32);
    bufp->fullIData(oldp+1159,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[25]),32);
    bufp->fullIData(oldp+1160,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[26]),32);
    bufp->fullIData(oldp+1161,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[27]),32);
    bufp->fullIData(oldp+1162,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[28]),32);
    bufp->fullIData(oldp+1163,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[29]),32);
    bufp->fullIData(oldp+1164,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[30]),32);
    bufp->fullIData(oldp+1165,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[31]),32);
    bufp->fullIData(oldp+1166,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[32]),32);
    bufp->fullIData(oldp+1167,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[33]),32);
    bufp->fullIData(oldp+1168,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[34]),32);
    bufp->fullIData(oldp+1169,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[35]),32);
    bufp->fullIData(oldp+1170,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[36]),32);
    bufp->fullIData(oldp+1171,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[37]),32);
    bufp->fullIData(oldp+1172,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[38]),32);
    bufp->fullIData(oldp+1173,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[39]),32);
    bufp->fullIData(oldp+1174,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[40]),32);
    bufp->fullIData(oldp+1175,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[41]),32);
    bufp->fullIData(oldp+1176,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[42]),32);
    bufp->fullIData(oldp+1177,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[43]),32);
    bufp->fullIData(oldp+1178,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[44]),32);
    bufp->fullIData(oldp+1179,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[45]),32);
    bufp->fullIData(oldp+1180,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[46]),32);
    bufp->fullIData(oldp+1181,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[47]),32);
    bufp->fullIData(oldp+1182,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[48]),32);
    bufp->fullIData(oldp+1183,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[49]),32);
    bufp->fullIData(oldp+1184,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[50]),32);
    bufp->fullIData(oldp+1185,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[51]),32);
    bufp->fullIData(oldp+1186,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[52]),32);
    bufp->fullIData(oldp+1187,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[53]),32);
    bufp->fullIData(oldp+1188,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[54]),32);
    bufp->fullIData(oldp+1189,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[55]),32);
    bufp->fullIData(oldp+1190,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[56]),32);
    bufp->fullIData(oldp+1191,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[57]),32);
    bufp->fullIData(oldp+1192,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[58]),32);
    bufp->fullIData(oldp+1193,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[59]),32);
    bufp->fullIData(oldp+1194,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[60]),32);
    bufp->fullIData(oldp+1195,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[61]),32);
    bufp->fullIData(oldp+1196,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[62]),32);
    bufp->fullIData(oldp+1197,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[63]),32);
    bufp->fullIData(oldp+1198,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[0]),32);
    bufp->fullIData(oldp+1199,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[1]),32);
    bufp->fullIData(oldp+1200,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[2]),32);
    bufp->fullIData(oldp+1201,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[3]),32);
    bufp->fullIData(oldp+1202,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[4]),32);
    bufp->fullIData(oldp+1203,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[5]),32);
    bufp->fullIData(oldp+1204,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[6]),32);
    bufp->fullIData(oldp+1205,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[7]),32);
    bufp->fullIData(oldp+1206,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[8]),32);
    bufp->fullIData(oldp+1207,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[9]),32);
    bufp->fullIData(oldp+1208,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[10]),32);
    bufp->fullIData(oldp+1209,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[11]),32);
    bufp->fullIData(oldp+1210,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[12]),32);
    bufp->fullIData(oldp+1211,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[13]),32);
    bufp->fullIData(oldp+1212,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[14]),32);
    bufp->fullIData(oldp+1213,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[15]),32);
    bufp->fullIData(oldp+1214,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[16]),32);
    bufp->fullIData(oldp+1215,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[17]),32);
    bufp->fullIData(oldp+1216,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[18]),32);
    bufp->fullIData(oldp+1217,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[19]),32);
    bufp->fullIData(oldp+1218,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[20]),32);
    bufp->fullIData(oldp+1219,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[21]),32);
    bufp->fullIData(oldp+1220,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[22]),32);
    bufp->fullIData(oldp+1221,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[23]),32);
    bufp->fullIData(oldp+1222,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[24]),32);
    bufp->fullIData(oldp+1223,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[25]),32);
    bufp->fullIData(oldp+1224,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[26]),32);
    bufp->fullIData(oldp+1225,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[27]),32);
    bufp->fullIData(oldp+1226,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[28]),32);
    bufp->fullIData(oldp+1227,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[29]),32);
    bufp->fullIData(oldp+1228,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[30]),32);
    bufp->fullIData(oldp+1229,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[31]),32);
    bufp->fullIData(oldp+1230,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[32]),32);
    bufp->fullIData(oldp+1231,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[33]),32);
    bufp->fullIData(oldp+1232,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[34]),32);
    bufp->fullIData(oldp+1233,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[35]),32);
    bufp->fullIData(oldp+1234,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[36]),32);
    bufp->fullIData(oldp+1235,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[37]),32);
    bufp->fullIData(oldp+1236,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[38]),32);
    bufp->fullIData(oldp+1237,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[39]),32);
    bufp->fullIData(oldp+1238,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[40]),32);
    bufp->fullIData(oldp+1239,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[41]),32);
    bufp->fullIData(oldp+1240,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[42]),32);
    bufp->fullIData(oldp+1241,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[43]),32);
    bufp->fullIData(oldp+1242,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[44]),32);
    bufp->fullIData(oldp+1243,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[45]),32);
    bufp->fullIData(oldp+1244,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[46]),32);
    bufp->fullIData(oldp+1245,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[47]),32);
    bufp->fullIData(oldp+1246,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[48]),32);
    bufp->fullIData(oldp+1247,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[49]),32);
    bufp->fullIData(oldp+1248,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[50]),32);
    bufp->fullIData(oldp+1249,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[51]),32);
    bufp->fullIData(oldp+1250,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[52]),32);
    bufp->fullIData(oldp+1251,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[53]),32);
    bufp->fullIData(oldp+1252,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[54]),32);
    bufp->fullIData(oldp+1253,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[55]),32);
    bufp->fullIData(oldp+1254,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[56]),32);
    bufp->fullIData(oldp+1255,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[57]),32);
    bufp->fullIData(oldp+1256,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[58]),32);
    bufp->fullIData(oldp+1257,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[59]),32);
    bufp->fullIData(oldp+1258,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[60]),32);
    bufp->fullIData(oldp+1259,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[61]),32);
    bufp->fullIData(oldp+1260,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[62]),32);
    bufp->fullIData(oldp+1261,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[63]),32);
    bufp->fullIData(oldp+1262,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[0]),32);
    bufp->fullIData(oldp+1263,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[1]),32);
    bufp->fullIData(oldp+1264,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[2]),32);
    bufp->fullIData(oldp+1265,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[3]),32);
    bufp->fullIData(oldp+1266,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[4]),32);
    bufp->fullIData(oldp+1267,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[5]),32);
    bufp->fullIData(oldp+1268,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[6]),32);
    bufp->fullIData(oldp+1269,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[7]),32);
    bufp->fullIData(oldp+1270,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[8]),32);
    bufp->fullIData(oldp+1271,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[9]),32);
    bufp->fullIData(oldp+1272,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[10]),32);
    bufp->fullIData(oldp+1273,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[11]),32);
    bufp->fullIData(oldp+1274,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[12]),32);
    bufp->fullIData(oldp+1275,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[13]),32);
    bufp->fullIData(oldp+1276,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[14]),32);
    bufp->fullIData(oldp+1277,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[15]),32);
    bufp->fullIData(oldp+1278,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[16]),32);
    bufp->fullIData(oldp+1279,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[17]),32);
    bufp->fullIData(oldp+1280,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[18]),32);
    bufp->fullIData(oldp+1281,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[19]),32);
    bufp->fullIData(oldp+1282,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[20]),32);
    bufp->fullIData(oldp+1283,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[21]),32);
    bufp->fullIData(oldp+1284,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[22]),32);
    bufp->fullIData(oldp+1285,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[23]),32);
    bufp->fullIData(oldp+1286,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[24]),32);
    bufp->fullIData(oldp+1287,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[25]),32);
    bufp->fullIData(oldp+1288,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[26]),32);
    bufp->fullIData(oldp+1289,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[27]),32);
    bufp->fullIData(oldp+1290,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[28]),32);
    bufp->fullIData(oldp+1291,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[29]),32);
    bufp->fullIData(oldp+1292,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[30]),32);
    bufp->fullIData(oldp+1293,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[31]),32);
    bufp->fullIData(oldp+1294,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[32]),32);
    bufp->fullIData(oldp+1295,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[33]),32);
    bufp->fullIData(oldp+1296,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[34]),32);
    bufp->fullIData(oldp+1297,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[35]),32);
    bufp->fullIData(oldp+1298,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[36]),32);
    bufp->fullIData(oldp+1299,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[37]),32);
    bufp->fullIData(oldp+1300,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[38]),32);
    bufp->fullIData(oldp+1301,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[39]),32);
    bufp->fullIData(oldp+1302,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[40]),32);
    bufp->fullIData(oldp+1303,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[41]),32);
    bufp->fullIData(oldp+1304,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[42]),32);
    bufp->fullIData(oldp+1305,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[43]),32);
    bufp->fullIData(oldp+1306,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[44]),32);
    bufp->fullIData(oldp+1307,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[45]),32);
    bufp->fullIData(oldp+1308,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[46]),32);
    bufp->fullIData(oldp+1309,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[47]),32);
    bufp->fullIData(oldp+1310,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[48]),32);
    bufp->fullIData(oldp+1311,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[49]),32);
    bufp->fullIData(oldp+1312,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[50]),32);
    bufp->fullIData(oldp+1313,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[51]),32);
    bufp->fullIData(oldp+1314,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[52]),32);
    bufp->fullIData(oldp+1315,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[53]),32);
    bufp->fullIData(oldp+1316,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[54]),32);
    bufp->fullIData(oldp+1317,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[55]),32);
    bufp->fullIData(oldp+1318,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[56]),32);
    bufp->fullIData(oldp+1319,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[57]),32);
    bufp->fullIData(oldp+1320,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[58]),32);
    bufp->fullIData(oldp+1321,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[59]),32);
    bufp->fullIData(oldp+1322,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[60]),32);
    bufp->fullIData(oldp+1323,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[61]),32);
    bufp->fullIData(oldp+1324,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[62]),32);
    bufp->fullIData(oldp+1325,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[63]),32);
    bufp->fullIData(oldp+1326,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[0]),32);
    bufp->fullIData(oldp+1327,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[1]),32);
    bufp->fullIData(oldp+1328,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[2]),32);
    bufp->fullIData(oldp+1329,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[3]),32);
    bufp->fullIData(oldp+1330,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[4]),32);
    bufp->fullIData(oldp+1331,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[5]),32);
    bufp->fullIData(oldp+1332,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[6]),32);
    bufp->fullIData(oldp+1333,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[7]),32);
    bufp->fullIData(oldp+1334,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[0]),32);
    bufp->fullIData(oldp+1335,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[1]),32);
    bufp->fullIData(oldp+1336,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[2]),32);
    bufp->fullIData(oldp+1337,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[3]),32);
    bufp->fullIData(oldp+1338,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[4]),32);
    bufp->fullIData(oldp+1339,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[5]),32);
    bufp->fullIData(oldp+1340,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[6]),32);
    bufp->fullIData(oldp+1341,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[7]),32);
    bufp->fullIData(oldp+1342,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                               [0U]),32);
    bufp->fullIData(oldp+1343,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                               [1U]),32);
    bufp->fullIData(oldp+1344,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                               [2U]),32);
    bufp->fullIData(oldp+1345,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                               [3U]),32);
    bufp->fullIData(oldp+1346,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                               [4U]),32);
    bufp->fullIData(oldp+1347,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                               [5U]),32);
    bufp->fullIData(oldp+1348,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                               [6U]),32);
    bufp->fullIData(oldp+1349,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                               [7U]),32);
    bufp->fullIData(oldp+1350,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s0),32);
    bufp->fullIData(oldp+1351,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s1),32);
    bufp->fullIData(oldp+1352,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s2),32);
    bufp->fullIData(oldp+1353,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s3),32);
    bufp->fullIData(oldp+1354,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d0),32);
    bufp->fullIData(oldp+1355,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d1),32);
    bufp->fullIData(oldp+1356,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d2),32);
    bufp->fullIData(oldp+1357,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d3),32);
    bufp->fullIData(oldp+1358,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e0),32);
    bufp->fullIData(oldp+1359,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e1),32);
    bufp->fullIData(oldp+1360,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e2),32);
    bufp->fullIData(oldp+1361,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e3),32);
    bufp->fullIData(oldp+1362,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b0),32);
    bufp->fullIData(oldp+1363,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b1),32);
    bufp->fullIData(oldp+1364,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b2),32);
    bufp->fullIData(oldp+1365,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b3),32);
    bufp->fullIData(oldp+1366,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b4),32);
    bufp->fullIData(oldp+1367,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b5),32);
    bufp->fullIData(oldp+1368,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b6),32);
    bufp->fullIData(oldp+1369,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b7),32);
    bufp->fullIData(oldp+1370,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[0]),32);
    bufp->fullIData(oldp+1371,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[1]),32);
    bufp->fullIData(oldp+1372,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[2]),32);
    bufp->fullIData(oldp+1373,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[3]),32);
    bufp->fullIData(oldp+1374,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[4]),32);
    bufp->fullIData(oldp+1375,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[5]),32);
    bufp->fullIData(oldp+1376,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[6]),32);
    bufp->fullIData(oldp+1377,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[7]),32);
    bufp->fullIData(oldp+1378,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b1),32);
    bufp->fullIData(oldp+1379,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b5),32);
    bufp->fullIData(oldp+1380,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+1381,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1382,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk6__DOT__j),32);
    bufp->fullBit(oldp+1383,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_valid));
    bufp->fullBit(oldp+1384,((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))));
    bufp->fullBit(oldp+1385,((5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))));
    bufp->fullBit(oldp+1386,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_start));
    bufp->fullCData(oldp+1387,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state),3);
    bufp->fullCData(oldp+1388,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate),3);
    bufp->fullCData(oldp+1389,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt),3);
    bufp->fullCData(oldp+1390,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt),3);
    bufp->fullBit(oldp+1391,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__we_trans));
    bufp->fullCData(oldp+1392,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[0]),6);
    bufp->fullCData(oldp+1393,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[1]),6);
    bufp->fullCData(oldp+1394,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[2]),6);
    bufp->fullCData(oldp+1395,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[3]),6);
    bufp->fullCData(oldp+1396,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[4]),6);
    bufp->fullCData(oldp+1397,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[5]),6);
    bufp->fullCData(oldp+1398,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[6]),6);
    bufp->fullCData(oldp+1399,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[7]),6);
    bufp->fullIData(oldp+1400,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[0]),32);
    bufp->fullIData(oldp+1401,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[1]),32);
    bufp->fullIData(oldp+1402,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[2]),32);
    bufp->fullIData(oldp+1403,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[3]),32);
    bufp->fullIData(oldp+1404,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[4]),32);
    bufp->fullIData(oldp+1405,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[5]),32);
    bufp->fullIData(oldp+1406,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[6]),32);
    bufp->fullIData(oldp+1407,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[7]),32);
    bufp->fullBit(oldp+1408,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in_valid));
    bufp->fullBit(oldp+1409,((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))));
    bufp->fullBit(oldp+1410,((5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))));
    bufp->fullIData(oldp+1411,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[0]),32);
    bufp->fullIData(oldp+1412,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[1]),32);
    bufp->fullIData(oldp+1413,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[2]),32);
    bufp->fullIData(oldp+1414,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[3]),32);
    bufp->fullIData(oldp+1415,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[4]),32);
    bufp->fullIData(oldp+1416,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[5]),32);
    bufp->fullIData(oldp+1417,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[6]),32);
    bufp->fullIData(oldp+1418,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[7]),32);
    bufp->fullIData(oldp+1419,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                               [0U]),32);
    bufp->fullIData(oldp+1420,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                               [1U]),32);
    bufp->fullIData(oldp+1421,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                               [2U]),32);
    bufp->fullIData(oldp+1422,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                               [3U]),32);
    bufp->fullIData(oldp+1423,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                               [4U]),32);
    bufp->fullIData(oldp+1424,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                               [5U]),32);
    bufp->fullIData(oldp+1425,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                               [6U]),32);
    bufp->fullIData(oldp+1426,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                               [7U]),32);
    bufp->fullCData(oldp+1427,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state),3);
    bufp->fullCData(oldp+1428,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__nstate),3);
    bufp->fullQData(oldp+1429,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                               [0U]),48);
    bufp->fullQData(oldp+1431,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                               [1U]),48);
    bufp->fullQData(oldp+1433,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                               [2U]),48);
    bufp->fullQData(oldp+1435,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                               [3U]),48);
    bufp->fullQData(oldp+1437,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                               [4U]),48);
    bufp->fullQData(oldp+1439,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                               [5U]),48);
    bufp->fullQData(oldp+1441,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                               [6U]),48);
    bufp->fullQData(oldp+1443,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                               [7U]),48);
    bufp->fullIData(oldp+1445,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[0]),32);
    bufp->fullIData(oldp+1446,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[1]),32);
    bufp->fullIData(oldp+1447,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[2]),32);
    bufp->fullIData(oldp+1448,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[3]),32);
    bufp->fullIData(oldp+1449,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[4]),32);
    bufp->fullIData(oldp+1450,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[5]),32);
    bufp->fullIData(oldp+1451,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[6]),32);
    bufp->fullIData(oldp+1452,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[7]),32);
    bufp->fullIData(oldp+1453,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                        [0U] >> 0x10U))),32);
    bufp->fullSData(oldp+1454,((0xffffU & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                  [0U]))),16);
    bufp->fullIData(oldp+1455,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+1456,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+1458,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                        [1U] >> 0x10U))),32);
    bufp->fullSData(oldp+1459,((0xffffU & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                  [1U]))),16);
    bufp->fullIData(oldp+1460,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+1461,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+1463,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                        [2U] >> 0x10U))),32);
    bufp->fullSData(oldp+1464,((0xffffU & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                  [2U]))),16);
    bufp->fullIData(oldp+1465,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+1466,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+1468,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                        [3U] >> 0x10U))),32);
    bufp->fullSData(oldp+1469,((0xffffU & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                  [3U]))),16);
    bufp->fullIData(oldp+1470,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+1471,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+1473,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                        [4U] >> 0x10U))),32);
    bufp->fullSData(oldp+1474,((0xffffU & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                  [4U]))),16);
    bufp->fullIData(oldp+1475,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+1476,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+1478,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                        [5U] >> 0x10U))),32);
    bufp->fullSData(oldp+1479,((0xffffU & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                  [5U]))),16);
    bufp->fullIData(oldp+1480,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+1481,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+1483,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                        [6U] >> 0x10U))),32);
    bufp->fullSData(oldp+1484,((0xffffU & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                  [6U]))),16);
    bufp->fullIData(oldp+1485,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+1486,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+1488,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                        [7U] >> 0x10U))),32);
    bufp->fullSData(oldp+1489,((0xffffU & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                  [7U]))),16);
    bufp->fullIData(oldp+1490,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result),32);
    bufp->fullQData(oldp+1491,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p),48);
    bufp->fullIData(oldp+1493,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk5__DOT__j),32);
    bufp->fullBit(oldp+1494,(vlSelfRef.clk));
    bufp->fullBit(oldp+1495,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+1496,(vlSelfRef.in_valid));
    bufp->fullBit(oldp+1497,(vlSelfRef.in_ready));
    bufp->fullWData(oldp+1498,(vlSelfRef.r_all),512);
    bufp->fullWData(oldp+1514,(vlSelfRef.g_all),512);
    bufp->fullWData(oldp+1530,(vlSelfRef.b_all),512);
    bufp->fullCData(oldp+1546,(vlSelfRef.component_sel),2);
    bufp->fullBit(oldp+1547,(vlSelfRef.out_valid));
    bufp->fullBit(oldp+1548,(vlSelfRef.out_ready));
    bufp->fullWData(oldp+1549,(vlSelfRef.out_data),1024);
    bufp->fullCData(oldp+1581,(((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))
                                 ? ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_start)
                                     ? 1U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt))
                                                     ? 2U
                                                     : 1U)
                                                    : 0U))),2);
    bufp->fullCData(oldp+1582,(((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))
                                 ? ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_start)
                                     ? 1U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt))
                                                     ? 2U
                                                     : 1U)
                                                    : 0U))),2);
    bufp->fullBit(oldp+1583,((1U & (~ (IData)(vlSelfRef.rst_n)))));
}
