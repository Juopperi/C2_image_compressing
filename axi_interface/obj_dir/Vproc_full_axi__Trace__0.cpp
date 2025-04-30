// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vproc_full_axi__Syms.h"


void Vproc_full_axi___024root__trace_chg_0_sub_0(Vproc_full_axi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vproc_full_axi___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root__trace_chg_0\n"); );
    // Init
    Vproc_full_axi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproc_full_axi___024root*>(voidSelf);
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vproc_full_axi___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vproc_full_axi___024root__trace_chg_0_sub_0(Vproc_full_axi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root__trace_chg_0_sub_0\n"); );
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.proc_full_axi__DOT__in_buf[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.proc_full_axi__DOT__in_buf[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.proc_full_axi__DOT__in_buf[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.proc_full_axi__DOT__in_buf[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.proc_full_axi__DOT__in_buf[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.proc_full_axi__DOT__in_buf[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.proc_full_axi__DOT__in_buf[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.proc_full_axi__DOT__in_buf[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.proc_full_axi__DOT__in_buf[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.proc_full_axi__DOT__in_buf[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.proc_full_axi__DOT__in_buf[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.proc_full_axi__DOT__in_buf[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.proc_full_axi__DOT__in_buf[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.proc_full_axi__DOT__in_buf[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.proc_full_axi__DOT__in_buf[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.proc_full_axi__DOT__in_buf[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.proc_full_axi__DOT__in_buf[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.proc_full_axi__DOT__in_buf[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.proc_full_axi__DOT__in_buf[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.proc_full_axi__DOT__in_buf[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.proc_full_axi__DOT__in_buf[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.proc_full_axi__DOT__in_buf[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.proc_full_axi__DOT__in_buf[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.proc_full_axi__DOT__in_buf[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.proc_full_axi__DOT__in_buf[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.proc_full_axi__DOT__in_buf[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.proc_full_axi__DOT__in_buf[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.proc_full_axi__DOT__in_buf[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.proc_full_axi__DOT__in_buf[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.proc_full_axi__DOT__in_buf[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.proc_full_axi__DOT__in_buf[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.proc_full_axi__DOT__in_buf[31]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.proc_full_axi__DOT__out_buf[0]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.proc_full_axi__DOT__out_buf[1]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.proc_full_axi__DOT__out_buf[2]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.proc_full_axi__DOT__out_buf[3]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.proc_full_axi__DOT__out_buf[4]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.proc_full_axi__DOT__out_buf[5]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.proc_full_axi__DOT__out_buf[6]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.proc_full_axi__DOT__out_buf[7]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.proc_full_axi__DOT__out_buf[8]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.proc_full_axi__DOT__out_buf[9]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.proc_full_axi__DOT__out_buf[10]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.proc_full_axi__DOT__out_buf[11]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.proc_full_axi__DOT__out_buf[12]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.proc_full_axi__DOT__out_buf[13]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.proc_full_axi__DOT__out_buf[14]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.proc_full_axi__DOT__out_buf[15]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.proc_full_axi__DOT__out_buf[16]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.proc_full_axi__DOT__out_buf[17]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.proc_full_axi__DOT__out_buf[18]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.proc_full_axi__DOT__out_buf[19]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.proc_full_axi__DOT__out_buf[20]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.proc_full_axi__DOT__out_buf[21]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.proc_full_axi__DOT__out_buf[22]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.proc_full_axi__DOT__out_buf[23]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.proc_full_axi__DOT__out_buf[24]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.proc_full_axi__DOT__out_buf[25]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.proc_full_axi__DOT__out_buf[26]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.proc_full_axi__DOT__out_buf[27]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.proc_full_axi__DOT__out_buf[28]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.proc_full_axi__DOT__out_buf[29]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.proc_full_axi__DOT__out_buf[30]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.proc_full_axi__DOT__out_buf[31]),32);
        bufp->chgBit(oldp+64,(vlSelfRef.proc_full_axi__DOT__start_reg));
        bufp->chgBit(oldp+65,(vlSelfRef.proc_full_axi__DOT__done_reg));
        bufp->chgCData(oldp+66,(vlSelfRef.proc_full_axi__DOT__axi_awaddr),7);
        bufp->chgBit(oldp+67,(vlSelfRef.proc_full_axi__DOT__axi_awready));
        bufp->chgBit(oldp+68,(vlSelfRef.proc_full_axi__DOT__axi_wready));
        bufp->chgBit(oldp+69,(vlSelfRef.proc_full_axi__DOT__axi_bid));
        bufp->chgCData(oldp+70,(vlSelfRef.proc_full_axi__DOT__axi_bresp),2);
        bufp->chgCData(oldp+71,(vlSelfRef.proc_full_axi__DOT__axi_buser),2);
        bufp->chgBit(oldp+72,(vlSelfRef.proc_full_axi__DOT__axi_bvalid));
        bufp->chgCData(oldp+73,(vlSelfRef.proc_full_axi__DOT__axi_araddr),7);
        bufp->chgBit(oldp+74,(vlSelfRef.proc_full_axi__DOT__axi_arready));
        bufp->chgBit(oldp+75,(vlSelfRef.proc_full_axi__DOT__axi_rid));
        bufp->chgCData(oldp+76,(vlSelfRef.proc_full_axi__DOT__axi_rresp),2);
        bufp->chgBit(oldp+77,(vlSelfRef.proc_full_axi__DOT__axi_rlast));
        bufp->chgCData(oldp+78,(vlSelfRef.proc_full_axi__DOT__axi_ruser),2);
        bufp->chgBit(oldp+79,(vlSelfRef.proc_full_axi__DOT__axi_rvalid));
        bufp->chgBit(oldp+80,((((IData)(vlSelfRef.proc_full_axi__DOT__axi_awaddr) 
                                & VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U)) 
                               == VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U))));
        bufp->chgBit(oldp+81,((((IData)(vlSelfRef.proc_full_axi__DOT__axi_araddr) 
                                & VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U)) 
                               == VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U))));
        bufp->chgIData(oldp+82,(VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_awlen), 2U)),32);
        bufp->chgIData(oldp+83,(VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.proc_full_axi__DOT__axi_arlen), 2U)),32);
        bufp->chgCData(oldp+84,(vlSelfRef.proc_full_axi__DOT__axi_awlen_cntr),8);
        bufp->chgCData(oldp+85,(vlSelfRef.proc_full_axi__DOT__axi_arlen_cntr),8);
        bufp->chgCData(oldp+86,(vlSelfRef.proc_full_axi__DOT__axi_arburst),2);
        bufp->chgCData(oldp+87,(vlSelfRef.proc_full_axi__DOT__axi_awburst),2);
        bufp->chgCData(oldp+88,(vlSelfRef.proc_full_axi__DOT__axi_arlen),8);
        bufp->chgCData(oldp+89,(vlSelfRef.proc_full_axi__DOT__axi_awlen),8);
        bufp->chgCData(oldp+90,(vlSelfRef.proc_full_axi__DOT__awaddr_latched),7);
        bufp->chgCData(oldp+91,(vlSelfRef.proc_full_axi__DOT__araddr_latched),7);
        bufp->chgIData(oldp+92,(((4U == (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                                  ? (IData)(vlSelfRef.proc_full_axi__DOT__done_reg)
                                  : ((0U == (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                                      ? (IData)(vlSelfRef.proc_full_axi__DOT__start_reg)
                                      : ((0x40U & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                                          ? ((0x20U 
                                              & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))
                                              ? vlSelfRef.proc_full_axi__DOT__out_buf
                                             [(0x1fU 
                                               & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))]
                                              : vlSelfRef.proc_full_axi__DOT__in_buf
                                             [(0x1fU 
                                               & (IData)(vlSelfRef.proc_full_axi__DOT__araddr_latched))])
                                          : 0xdeadbeefU)))),32);
        bufp->chgBit(oldp+93,(vlSelfRef.proc_full_axi__DOT__core_busy));
        bufp->chgBit(oldp+94,(vlSelfRef.proc_full_axi__DOT__core_done));
        bufp->chgCData(oldp+95,(vlSelfRef.proc_full_axi__DOT__state_read),2);
        bufp->chgCData(oldp+96,(vlSelfRef.proc_full_axi__DOT__state_write),2);
        bufp->chgCData(oldp+97,(vlSelfRef.proc_full_axi__DOT__u_core__DOT__state),2);
        bufp->chgCData(oldp+98,(vlSelfRef.proc_full_axi__DOT__u_core__DOT__cnt),8);
        bufp->chgIData(oldp+99,(vlSelfRef.proc_full_axi__DOT__u_core__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+100,(vlSelfRef.proc_full_axi__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+101,(vlSelfRef.S_AXI_ACLK));
    bufp->chgBit(oldp+102,(vlSelfRef.S_AXI_ARESETN));
    bufp->chgBit(oldp+103,(vlSelfRef.S_AXI_AWID));
    bufp->chgCData(oldp+104,(vlSelfRef.S_AXI_AWADDR),7);
    bufp->chgCData(oldp+105,(vlSelfRef.S_AXI_AWLEN),8);
    bufp->chgCData(oldp+106,(vlSelfRef.S_AXI_AWSIZE),3);
    bufp->chgCData(oldp+107,(vlSelfRef.S_AXI_AWBURST),2);
    bufp->chgBit(oldp+108,(vlSelfRef.S_AXI_AWLOCK));
    bufp->chgCData(oldp+109,(vlSelfRef.S_AXI_AWCACHE),4);
    bufp->chgCData(oldp+110,(vlSelfRef.S_AXI_AWPROT),3);
    bufp->chgCData(oldp+111,(vlSelfRef.S_AXI_AWQOS),4);
    bufp->chgCData(oldp+112,(vlSelfRef.S_AXI_AWREGION),4);
    bufp->chgCData(oldp+113,(vlSelfRef.S_AXI_AWUSER),2);
    bufp->chgBit(oldp+114,(vlSelfRef.S_AXI_AWVALID));
    bufp->chgBit(oldp+115,(vlSelfRef.S_AXI_AWREADY));
    bufp->chgIData(oldp+116,(vlSelfRef.S_AXI_WDATA),32);
    bufp->chgCData(oldp+117,(vlSelfRef.S_AXI_WSTRB),4);
    bufp->chgBit(oldp+118,(vlSelfRef.S_AXI_WLAST));
    bufp->chgCData(oldp+119,(vlSelfRef.S_AXI_WUSER),2);
    bufp->chgBit(oldp+120,(vlSelfRef.S_AXI_WVALID));
    bufp->chgBit(oldp+121,(vlSelfRef.S_AXI_WREADY));
    bufp->chgBit(oldp+122,(vlSelfRef.S_AXI_BID));
    bufp->chgCData(oldp+123,(vlSelfRef.S_AXI_BRESP),2);
    bufp->chgCData(oldp+124,(vlSelfRef.S_AXI_BUSER),2);
    bufp->chgBit(oldp+125,(vlSelfRef.S_AXI_BVALID));
    bufp->chgBit(oldp+126,(vlSelfRef.S_AXI_BREADY));
    bufp->chgBit(oldp+127,(vlSelfRef.S_AXI_ARID));
    bufp->chgCData(oldp+128,(vlSelfRef.S_AXI_ARADDR),7);
    bufp->chgCData(oldp+129,(vlSelfRef.S_AXI_ARLEN),8);
    bufp->chgCData(oldp+130,(vlSelfRef.S_AXI_ARSIZE),3);
    bufp->chgCData(oldp+131,(vlSelfRef.S_AXI_ARBURST),2);
    bufp->chgBit(oldp+132,(vlSelfRef.S_AXI_ARLOCK));
    bufp->chgCData(oldp+133,(vlSelfRef.S_AXI_ARCACHE),4);
    bufp->chgCData(oldp+134,(vlSelfRef.S_AXI_ARPROT),3);
    bufp->chgCData(oldp+135,(vlSelfRef.S_AXI_ARQOS),4);
    bufp->chgCData(oldp+136,(vlSelfRef.S_AXI_ARREGION),4);
    bufp->chgCData(oldp+137,(vlSelfRef.S_AXI_ARUSER),2);
    bufp->chgBit(oldp+138,(vlSelfRef.S_AXI_ARVALID));
    bufp->chgBit(oldp+139,(vlSelfRef.S_AXI_ARREADY));
    bufp->chgBit(oldp+140,(vlSelfRef.S_AXI_RID));
    bufp->chgIData(oldp+141,(vlSelfRef.S_AXI_RDATA),32);
    bufp->chgCData(oldp+142,(vlSelfRef.S_AXI_RRESP),2);
    bufp->chgBit(oldp+143,(vlSelfRef.S_AXI_RLAST));
    bufp->chgCData(oldp+144,(vlSelfRef.S_AXI_RUSER),2);
    bufp->chgBit(oldp+145,(vlSelfRef.S_AXI_RVALID));
    bufp->chgBit(oldp+146,(vlSelfRef.S_AXI_RREADY));
}

void Vproc_full_axi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproc_full_axi___024root__trace_cleanup\n"); );
    // Init
    Vproc_full_axi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproc_full_axi___024root*>(voidSelf);
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
