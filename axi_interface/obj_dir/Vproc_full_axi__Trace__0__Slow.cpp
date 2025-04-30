// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vproc_full_axi__Syms.h"


VL_ATTR_COLD void Vproc_full_axi___024root__trace_init_sub__TOP__0(Vproc_full_axi___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root__trace_init_sub__TOP__0\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+102,0,"S_AXI_ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"S_AXI_ARESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"S_AXI_AWID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+105,0,"S_AXI_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+106,0,"S_AXI_AWLEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"S_AXI_AWSIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+108,0,"S_AXI_AWBURST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+109,0,"S_AXI_AWLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"S_AXI_AWCACHE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"S_AXI_AWPROT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+112,0,"S_AXI_AWQOS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"S_AXI_AWREGION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"S_AXI_AWUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+115,0,"S_AXI_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"S_AXI_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"S_AXI_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"S_AXI_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"S_AXI_WLAST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"S_AXI_WUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+121,0,"S_AXI_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"S_AXI_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"S_AXI_BID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+124,0,"S_AXI_BRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+125,0,"S_AXI_BUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+126,0,"S_AXI_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"S_AXI_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"S_AXI_ARID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+129,0,"S_AXI_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+130,0,"S_AXI_ARLEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"S_AXI_ARSIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+132,0,"S_AXI_ARBURST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+133,0,"S_AXI_ARLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"S_AXI_ARCACHE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+135,0,"S_AXI_ARPROT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+136,0,"S_AXI_ARQOS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"S_AXI_ARREGION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,0,"S_AXI_ARUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+139,0,"S_AXI_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"S_AXI_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"S_AXI_RID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+142,0,"S_AXI_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"S_AXI_RRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+144,0,"S_AXI_RLAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"S_AXI_RUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+146,0,"S_AXI_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"S_AXI_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("proc_full_axi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+148,0,"C_S_AXI_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+149,0,"C_S_AXI_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+150,0,"C_S_AXI_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+151,0,"C_S_AXI_AWUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+151,0,"C_S_AXI_ARUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+151,0,"C_S_AXI_WUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+151,0,"C_S_AXI_RUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+151,0,"C_S_AXI_BUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+149,0,"BUF_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+102,0,"S_AXI_ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"S_AXI_ARESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"S_AXI_AWID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+105,0,"S_AXI_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+106,0,"S_AXI_AWLEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"S_AXI_AWSIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+108,0,"S_AXI_AWBURST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+109,0,"S_AXI_AWLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"S_AXI_AWCACHE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"S_AXI_AWPROT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+112,0,"S_AXI_AWQOS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"S_AXI_AWREGION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"S_AXI_AWUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+115,0,"S_AXI_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"S_AXI_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"S_AXI_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"S_AXI_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"S_AXI_WLAST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"S_AXI_WUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+121,0,"S_AXI_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"S_AXI_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"S_AXI_BID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+124,0,"S_AXI_BRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+125,0,"S_AXI_BUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+126,0,"S_AXI_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"S_AXI_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"S_AXI_ARID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+129,0,"S_AXI_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+130,0,"S_AXI_ARLEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"S_AXI_ARSIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+132,0,"S_AXI_ARBURST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+133,0,"S_AXI_ARLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"S_AXI_ARCACHE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+135,0,"S_AXI_ARPROT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+136,0,"S_AXI_ARQOS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"S_AXI_ARREGION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,0,"S_AXI_ARUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+139,0,"S_AXI_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"S_AXI_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"S_AXI_RID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+142,0,"S_AXI_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"S_AXI_RRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+144,0,"S_AXI_RLAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"S_AXI_RUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+146,0,"S_AXI_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"S_AXI_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+153,0,"REG_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+154,0,"REG_STAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+155,0,"INPUT_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+156,0,"OUTPUT_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("in_buf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_buf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+65,0,"start_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"done_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"axi_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+68,0,"axi_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"axi_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"axi_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+71,0,"axi_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+72,0,"axi_buser",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+73,0,"axi_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"axi_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+75,0,"axi_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"axi_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+77,0,"axi_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+78,0,"axi_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"axi_ruser",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBit(c+80,0,"axi_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"aw_wrap_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"ar_wrap_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"aw_wrap_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"ar_wrap_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"axi_awlen_cntr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"axi_arlen_cntr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"axi_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+88,0,"axi_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+89,0,"axi_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"axi_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+157,0,"ADDR_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+91,0,"awaddr_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+92,0,"araddr_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+93,0,"axi_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"core_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"core_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"Idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"Raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+160,0,"Rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"Waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+160,0,"Wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"state_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+97,0,"state_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+149,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+161,0,"CORE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+102,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("in_buf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_buf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+158,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"RUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vproc_full_axi___024root__trace_init_top(Vproc_full_axi___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root__trace_init_top\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vproc_full_axi___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vproc_full_axi___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vproc_full_axi___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vproc_full_axi___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vproc_full_axi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vproc_full_axi___024root__trace_register(Vproc_full_axi___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root__trace_register\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vproc_full_axi___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vproc_full_axi___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vproc_full_axi___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vproc_full_axi___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vproc_full_axi___024root__trace_const_0_sub_0(Vproc_full_axi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vproc_full_axi___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root__trace_const_0\n"); );
    // Init
    Vproc_full_axi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproc_full_axi___024root*>(voidSelf);
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vproc_full_axi___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vproc_full_axi___024root__trace_const_0_sub_0(Vproc_full_axi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root__trace_const_0_sub_0\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+148,(1U),32);
    bufp->fullIData(oldp+149,(0x20U),32);
    bufp->fullIData(oldp+150,(7U),32);
    bufp->fullIData(oldp+151,(0U),32);
    bufp->fullIData(oldp+152,(7U),32);
    bufp->fullIData(oldp+153,(0U),32);
    bufp->fullIData(oldp+154,(4U),32);
    bufp->fullBit(oldp+155,(0U));
    bufp->fullBit(oldp+156,(1U));
    bufp->fullIData(oldp+157,(2U),32);
    bufp->fullCData(oldp+158,(0U),2);
    bufp->fullCData(oldp+159,(2U),2);
    bufp->fullCData(oldp+160,(3U),2);
    bufp->fullIData(oldp+161,(8U),32);
    bufp->fullCData(oldp+162,(1U),2);
}

VL_ATTR_COLD void Vproc_full_axi___024root__trace_full_0_sub_0(Vproc_full_axi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vproc_full_axi___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root__trace_full_0\n"); );
    // Init
    Vproc_full_axi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproc_full_axi___024root*>(voidSelf);
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vproc_full_axi___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vproc_full_axi___024root__trace_full_0_sub_0(Vproc_full_axi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root__trace_full_0_sub_0\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.proc_full_axi__DOT__in_buf[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.proc_full_axi__DOT__in_buf[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.proc_full_axi__DOT__in_buf[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.proc_full_axi__DOT__in_buf[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.proc_full_axi__DOT__in_buf[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.proc_full_axi__DOT__in_buf[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.proc_full_axi__DOT__in_buf[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.proc_full_axi__DOT__in_buf[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.proc_full_axi__DOT__in_buf[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.proc_full_axi__DOT__in_buf[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.proc_full_axi__DOT__in_buf[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.proc_full_axi__DOT__in_buf[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.proc_full_axi__DOT__in_buf[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.proc_full_axi__DOT__in_buf[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.proc_full_axi__DOT__in_buf[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.proc_full_axi__DOT__in_buf[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.proc_full_axi__DOT__in_buf[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.proc_full_axi__DOT__in_buf[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.proc_full_axi__DOT__in_buf[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.proc_full_axi__DOT__in_buf[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.proc_full_axi__DOT__in_buf[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.proc_full_axi__DOT__in_buf[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.proc_full_axi__DOT__in_buf[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.proc_full_axi__DOT__in_buf[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.proc_full_axi__DOT__in_buf[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.proc_full_axi__DOT__in_buf[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.proc_full_axi__DOT__in_buf[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.proc_full_axi__DOT__in_buf[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.proc_full_axi__DOT__in_buf[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.proc_full_axi__DOT__in_buf[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.proc_full_axi__DOT__in_buf[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.proc_full_axi__DOT__in_buf[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.proc_full_axi__DOT__out_buf[0]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.proc_full_axi__DOT__out_buf[1]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.proc_full_axi__DOT__out_buf[2]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.proc_full_axi__DOT__out_buf[3]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.proc_full_axi__DOT__out_buf[4]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.proc_full_axi__DOT__out_buf[5]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.proc_full_axi__DOT__out_buf[6]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.proc_full_axi__DOT__out_buf[7]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.proc_full_axi__DOT__out_buf[8]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.proc_full_axi__DOT__out_buf[9]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.proc_full_axi__DOT__out_buf[10]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.proc_full_axi__DOT__out_buf[11]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.proc_full_axi__DOT__out_buf[12]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.proc_full_axi__DOT__out_buf[13]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.proc_full_axi__DOT__out_buf[14]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.proc_full_axi__DOT__out_buf[15]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.proc_full_axi__DOT__out_buf[16]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.proc_full_axi__DOT__out_buf[17]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.proc_full_axi__DOT__out_buf[18]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.proc_full_axi__DOT__out_buf[19]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.proc_full_axi__DOT__out_buf[20]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.proc_full_axi__DOT__out_buf[21]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.proc_full_axi__DOT__out_buf[22]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.proc_full_axi__DOT__out_buf[23]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.proc_full_axi__DOT__out_buf[24]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.proc_full_axi__DOT__out_buf[25]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.proc_full_axi__DOT__out_buf[26]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.proc_full_axi__DOT__out_buf[27]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.proc_full_axi__DOT__out_buf[28]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.proc_full_axi__DOT__out_buf[29]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.proc_full_axi__DOT__out_buf[30]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.proc_full_axi__DOT__out_buf[31]),32);
    bufp->fullBit(oldp+65,(vlSelfRef.proc_full_axi__DOT__start_reg));
    bufp->fullBit(oldp+66,(vlSelfRef.proc_full_axi__DOT__done_reg));
    bufp->fullCData(oldp+67,(vlSelfRef.proc_full_axi__DOT__axi_awaddr),7);
    bufp->fullBit(oldp+68,(vlSelfRef.proc_full_axi__DOT__axi_awready));
    bufp->fullBit(oldp+69,(vlSelfRef.proc_full_axi__DOT__axi_wready));
    bufp->fullBit(oldp+70,(vlSelfRef.proc_full_axi__DOT__axi_bid));
    bufp->fullCData(oldp+71,(vlSelfRef.proc_full_axi__DOT__axi_bresp),2);
    bufp->fullCData(oldp+72,(vlSelfRef.proc_full_axi__DOT__axi_buser),2);
    bufp->fullBit(oldp+73,(vlSelfRef.proc_full_axi__DOT__axi_bvalid));
    bufp->fullCData(oldp+74,(vlSelfRef.proc_full_axi__DOT__axi_araddr),7);
    bufp->fullBit(oldp+75,(vlSelfRef.proc_full_axi__DOT__axi_arready));
    bufp->fullBit(oldp+76,(vlSelfRef.proc_full_axi__DOT__axi_rid));
    bufp->fullCData(oldp+77,(vlSelfRef.proc_full_axi__DOT__axi_rresp),2);
    bufp->fullBit(oldp+78,(vlSelfRef.proc_full_axi__DOT__axi_rlast));
    bufp->fullCData(oldp+79,(vlSelfRef.proc_full_axi__DOT__axi_ruser),2);
    bufp->fullBit(oldp+80,(vlSelfRef.proc_full_axi__DOT__axi_rvalid));
    bufp->fullBit(oldp+81,((((IData)(vlSelfRef.proc_full_axi__DOT__axi_awaddr) 
                             & VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U)) 
                            == VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U))));
    bufp->fullBit(oldp+82,((((IData)(vlSelfRef.proc_full_axi__DOT__axi_araddr) 
                             & VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U)) 
                            == VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U))));
    bufp->fullIData(oldp+83,(VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U)),32);
    bufp->fullIData(oldp+84,(VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U)),32);
    bufp->fullCData(oldp+85,(vlSelfRef.proc_full_axi__DOT__axi_awlen_cntr),8);
    bufp->fullCData(oldp+86,(vlSelfRef.proc_full_axi__DOT__axi_arlen_cntr),8);
    bufp->fullCData(oldp+87,(vlSelfRef.proc_full_axi__DOT__axi_arburst),2);
    bufp->fullCData(oldp+88,(vlSelfRef.proc_full_axi__DOT__axi_awburst),2);
    bufp->fullCData(oldp+89,(vlSelfRef.proc_full_axi__DOT__axi_arlen),8);
    bufp->fullCData(oldp+90,(vlSelfRef.proc_full_axi__DOT__axi_awlen),8);
    bufp->fullCData(oldp+91,(vlSelfRef.proc_full_axi__DOT__awaddr_latched),7);
    bufp->fullCData(oldp+92,(vlSelfRef.proc_full_axi__DOT__araddr_latched),7);
    bufp->fullIData(oldp+93,(((4U == (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                               ? (IData)(vlSelfRef.proc_full_axi__DOT__done_reg)
                               : ((0U == (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                                   ? (IData)(vlSelfRef.proc_full_axi__DOT__start_reg)
                                   : ((0x40U & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                                       ? ((0x20U & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                                           ? vlSelfRef.proc_full_axi__DOT__out_buf
                                          [(0x1fU & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))]
                                           : vlSelfRef.proc_full_axi__DOT__in_buf
                                          [(0x1fU & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))])
                                       : 0xdeadbeefU)))),32);
    bufp->fullBit(oldp+94,(vlSelfRef.proc_full_axi__DOT__core_busy));
    bufp->fullBit(oldp+95,(vlSelfRef.proc_full_axi__DOT__core_done));
    bufp->fullCData(oldp+96,(vlSelfRef.proc_full_axi__DOT__state_read),2);
    bufp->fullCData(oldp+97,(vlSelfRef.proc_full_axi__DOT__state_write),2);
    bufp->fullCData(oldp+98,(vlSelfRef.proc_full_axi__DOT__u_core__DOT__state),2);
    bufp->fullCData(oldp+99,(vlSelfRef.proc_full_axi__DOT__u_core__DOT__cnt),8);
    bufp->fullIData(oldp+100,(vlSelfRef.proc_full_axi__DOT__u_core__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+101,(vlSelfRef.proc_full_axi__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+102,(vlSelfRef.S_AXI_ACLK));
    bufp->fullBit(oldp+103,(vlSelfRef.S_AXI_ARESETN));
    bufp->fullBit(oldp+104,(vlSelfRef.S_AXI_AWID));
    bufp->fullCData(oldp+105,(vlSelfRef.S_AXI_AWADDR),7);
    bufp->fullCData(oldp+106,(vlSelfRef.S_AXI_AWLEN),8);
    bufp->fullCData(oldp+107,(vlSelfRef.S_AXI_AWSIZE),3);
    bufp->fullCData(oldp+108,(vlSelfRef.S_AXI_AWBURST),2);
    bufp->fullBit(oldp+109,(vlSelfRef.S_AXI_AWLOCK));
    bufp->fullCData(oldp+110,(vlSelfRef.S_AXI_AWCACHE),4);
    bufp->fullCData(oldp+111,(vlSelfRef.S_AXI_AWPROT),3);
    bufp->fullCData(oldp+112,(vlSelfRef.S_AXI_AWQOS),4);
    bufp->fullCData(oldp+113,(vlSelfRef.S_AXI_AWREGION),4);
    bufp->fullCData(oldp+114,(vlSelfRef.S_AXI_AWUSER),2);
    bufp->fullBit(oldp+115,(vlSelfRef.S_AXI_AWVALID));
    bufp->fullBit(oldp+116,(vlSelfRef.S_AXI_AWREADY));
    bufp->fullIData(oldp+117,(vlSelfRef.S_AXI_WDATA),32);
    bufp->fullCData(oldp+118,(vlSelfRef.S_AXI_WSTRB),4);
    bufp->fullBit(oldp+119,(vlSelfRef.S_AXI_WLAST));
    bufp->fullCData(oldp+120,(vlSelfRef.S_AXI_WUSER),2);
    bufp->fullBit(oldp+121,(vlSelfRef.S_AXI_WVALID));
    bufp->fullBit(oldp+122,(vlSelfRef.S_AXI_WREADY));
    bufp->fullBit(oldp+123,(vlSelfRef.S_AXI_BID));
    bufp->fullCData(oldp+124,(vlSelfRef.S_AXI_BRESP),2);
    bufp->fullCData(oldp+125,(vlSelfRef.S_AXI_BUSER),2);
    bufp->fullBit(oldp+126,(vlSelfRef.S_AXI_BVALID));
    bufp->fullBit(oldp+127,(vlSelfRef.S_AXI_BREADY));
    bufp->fullBit(oldp+128,(vlSelfRef.S_AXI_ARID));
    bufp->fullCData(oldp+129,(vlSelfRef.S_AXI_ARADDR),7);
    bufp->fullCData(oldp+130,(vlSelfRef.S_AXI_ARLEN),8);
    bufp->fullCData(oldp+131,(vlSelfRef.S_AXI_ARSIZE),3);
    bufp->fullCData(oldp+132,(vlSelfRef.S_AXI_ARBURST),2);
    bufp->fullBit(oldp+133,(vlSelfRef.S_AXI_ARLOCK));
    bufp->fullCData(oldp+134,(vlSelfRef.S_AXI_ARCACHE),4);
    bufp->fullCData(oldp+135,(vlSelfRef.S_AXI_ARPROT),3);
    bufp->fullCData(oldp+136,(vlSelfRef.S_AXI_ARQOS),4);
    bufp->fullCData(oldp+137,(vlSelfRef.S_AXI_ARREGION),4);
    bufp->fullCData(oldp+138,(vlSelfRef.S_AXI_ARUSER),2);
    bufp->fullBit(oldp+139,(vlSelfRef.S_AXI_ARVALID));
    bufp->fullBit(oldp+140,(vlSelfRef.S_AXI_ARREADY));
    bufp->fullBit(oldp+141,(vlSelfRef.S_AXI_RID));
    bufp->fullIData(oldp+142,(vlSelfRef.S_AXI_RDATA),32);
    bufp->fullCData(oldp+143,(vlSelfRef.S_AXI_RRESP),2);
    bufp->fullBit(oldp+144,(vlSelfRef.S_AXI_RLAST));
    bufp->fullCData(oldp+145,(vlSelfRef.S_AXI_RUSER),2);
    bufp->fullBit(oldp+146,(vlSelfRef.S_AXI_RVALID));
    bufp->fullBit(oldp+147,(vlSelfRef.S_AXI_RREADY));
}
