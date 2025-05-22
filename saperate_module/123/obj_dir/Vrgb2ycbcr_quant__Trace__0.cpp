// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrgb2ycbcr_quant__Syms.h"


void Vrgb2ycbcr_quant___024root__trace_chg_0_sub_0(Vrgb2ycbcr_quant___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrgb2ycbcr_quant___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root__trace_chg_0\n"); );
    // Init
    Vrgb2ycbcr_quant___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrgb2ycbcr_quant___024root*>(voidSelf);
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrgb2ycbcr_quant___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vrgb2ycbcr_quant___024root__trace_chg_0_sub_0(Vrgb2ycbcr_quant___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root__trace_chg_0_sub_0\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[31]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[32]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[33]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[34]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[35]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[36]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[37]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[38]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[39]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[40]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[41]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[42]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[43]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[44]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[45]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[46]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[47]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[48]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[49]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[50]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[51]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[52]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[53]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[54]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[55]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[56]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[57]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[58]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[59]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[60]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[61]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[62]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[63]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[1]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[2]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[3]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[4]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[5]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[6]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[7]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[8]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[9]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[10]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[11]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[12]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[13]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[14]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[15]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[16]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[17]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[18]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[19]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[20]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[21]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[22]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[23]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[24]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[25]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[26]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[27]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[28]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[29]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[30]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[31]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[32]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[33]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[34]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[35]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[36]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[37]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[38]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[39]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[40]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[41]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[42]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[43]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[44]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[45]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[46]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[47]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[48]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[49]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[50]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[51]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[52]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[53]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[54]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[55]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[56]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[57]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[58]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[59]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[60]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[61]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[62]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[63]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[1]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[2]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[3]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[4]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[5]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[6]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[7]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[8]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[9]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[10]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[11]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[12]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[13]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[14]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[15]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[16]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[17]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[18]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[19]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[20]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[21]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[22]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[23]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[24]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[25]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[26]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[27]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[28]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[29]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[30]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[31]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[32]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[33]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[34]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[35]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[36]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[37]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[38]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[39]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[40]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[41]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[42]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[43]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[44]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[45]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[46]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[47]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[48]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[49]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[50]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[51]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[52]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[53]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[54]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[55]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[56]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[57]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[58]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[59]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[60]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[61]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[62]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[63]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[1]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[2]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[3]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[4]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[5]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[6]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[7]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[8]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[9]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[10]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[11]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[12]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[13]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[14]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[15]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[16]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[17]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[18]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[19]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[20]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[21]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[22]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[23]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[24]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[25]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[26]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[27]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[28]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[29]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[30]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[31]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[32]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[33]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[34]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[35]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[36]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[37]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[38]),32);
        bufp->chgIData(oldp+231,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[39]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[40]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[41]),32);
        bufp->chgIData(oldp+234,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[42]),32);
        bufp->chgIData(oldp+235,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[43]),32);
        bufp->chgIData(oldp+236,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[44]),32);
        bufp->chgIData(oldp+237,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[45]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[46]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[47]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[48]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[49]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[50]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[51]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[52]),32);
        bufp->chgIData(oldp+245,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[53]),32);
        bufp->chgIData(oldp+246,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[54]),32);
        bufp->chgIData(oldp+247,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[55]),32);
        bufp->chgIData(oldp+248,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[56]),32);
        bufp->chgIData(oldp+249,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[57]),32);
        bufp->chgIData(oldp+250,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[58]),32);
        bufp->chgIData(oldp+251,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[59]),32);
        bufp->chgIData(oldp+252,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[60]),32);
        bufp->chgIData(oldp+253,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[61]),32);
        bufp->chgIData(oldp+254,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[62]),32);
        bufp->chgIData(oldp+255,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[63]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+256,(vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion));
        bufp->chgBit(oldp+257,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_done));
        bufp->chgIData(oldp+258,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__k),32);
        bufp->chgCData(oldp+259,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state),2);
        bufp->chgCData(oldp+260,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[0]),8);
        bufp->chgCData(oldp+261,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[1]),8);
        bufp->chgCData(oldp+262,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[2]),8);
        bufp->chgCData(oldp+263,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[3]),8);
        bufp->chgCData(oldp+264,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[4]),8);
        bufp->chgCData(oldp+265,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[5]),8);
        bufp->chgCData(oldp+266,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[6]),8);
        bufp->chgCData(oldp+267,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[7]),8);
        bufp->chgCData(oldp+268,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[0]),8);
        bufp->chgCData(oldp+269,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[1]),8);
        bufp->chgCData(oldp+270,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[2]),8);
        bufp->chgCData(oldp+271,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[3]),8);
        bufp->chgCData(oldp+272,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[4]),8);
        bufp->chgCData(oldp+273,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[5]),8);
        bufp->chgCData(oldp+274,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[6]),8);
        bufp->chgCData(oldp+275,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[7]),8);
        bufp->chgCData(oldp+276,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[0]),8);
        bufp->chgCData(oldp+277,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[1]),8);
        bufp->chgCData(oldp+278,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[2]),8);
        bufp->chgCData(oldp+279,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[3]),8);
        bufp->chgCData(oldp+280,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[4]),8);
        bufp->chgCData(oldp+281,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[5]),8);
        bufp->chgCData(oldp+282,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[6]),8);
        bufp->chgCData(oldp+283,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[7]),8);
        bufp->chgIData(oldp+284,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[0]),32);
        bufp->chgIData(oldp+285,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[1]),32);
        bufp->chgIData(oldp+286,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[2]),32);
        bufp->chgIData(oldp+287,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[3]),32);
        bufp->chgIData(oldp+288,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[4]),32);
        bufp->chgIData(oldp+289,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[5]),32);
        bufp->chgIData(oldp+290,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[6]),32);
        bufp->chgIData(oldp+291,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[7]),32);
        bufp->chgIData(oldp+292,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[0]),32);
        bufp->chgIData(oldp+293,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[1]),32);
        bufp->chgIData(oldp+294,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[2]),32);
        bufp->chgIData(oldp+295,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[3]),32);
        bufp->chgIData(oldp+296,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[4]),32);
        bufp->chgIData(oldp+297,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[5]),32);
        bufp->chgIData(oldp+298,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[6]),32);
        bufp->chgIData(oldp+299,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[7]),32);
        bufp->chgIData(oldp+300,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[0]),32);
        bufp->chgIData(oldp+301,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[1]),32);
        bufp->chgIData(oldp+302,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[2]),32);
        bufp->chgIData(oldp+303,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[3]),32);
        bufp->chgIData(oldp+304,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[4]),32);
        bufp->chgIData(oldp+305,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[5]),32);
        bufp->chgIData(oldp+306,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[6]),32);
        bufp->chgIData(oldp+307,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[7]),32);
        bufp->chgCData(oldp+308,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                                 [0U]),8);
        bufp->chgCData(oldp+309,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                                 [0U]),8);
        bufp->chgCData(oldp+310,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                                 [0U]),8);
        bufp->chgIData(oldp+311,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                    + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                   + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                                  - (IData)(0x800000U))),32);
        bufp->chgIData(oldp+312,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                                  + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+313,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                                  - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+314,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
        bufp->chgIData(oldp+315,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
        bufp->chgIData(oldp+316,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
        bufp->chgIData(oldp+317,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
        bufp->chgIData(oldp+318,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
        bufp->chgIData(oldp+319,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
        bufp->chgIData(oldp+320,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
        bufp->chgIData(oldp+321,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
        bufp->chgIData(oldp+322,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
        bufp->chgCData(oldp+323,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                                 [1U]),8);
        bufp->chgCData(oldp+324,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                                 [1U]),8);
        bufp->chgCData(oldp+325,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                                 [1U]),8);
        bufp->chgIData(oldp+326,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                    + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                   + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                                  - (IData)(0x800000U))),32);
        bufp->chgIData(oldp+327,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                                  + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+328,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                                  - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+329,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
        bufp->chgIData(oldp+330,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
        bufp->chgIData(oldp+331,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
        bufp->chgIData(oldp+332,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
        bufp->chgIData(oldp+333,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
        bufp->chgIData(oldp+334,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
        bufp->chgIData(oldp+335,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
        bufp->chgIData(oldp+336,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
        bufp->chgIData(oldp+337,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
        bufp->chgCData(oldp+338,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                                 [2U]),8);
        bufp->chgCData(oldp+339,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                                 [2U]),8);
        bufp->chgCData(oldp+340,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                                 [2U]),8);
        bufp->chgIData(oldp+341,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                    + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                   + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                                  - (IData)(0x800000U))),32);
        bufp->chgIData(oldp+342,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                                  + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+343,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                                  - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+344,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
        bufp->chgIData(oldp+345,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
        bufp->chgIData(oldp+346,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
        bufp->chgIData(oldp+347,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
        bufp->chgIData(oldp+348,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
        bufp->chgIData(oldp+349,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
        bufp->chgIData(oldp+350,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
        bufp->chgIData(oldp+351,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
        bufp->chgIData(oldp+352,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
        bufp->chgCData(oldp+353,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                                 [3U]),8);
        bufp->chgCData(oldp+354,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                                 [3U]),8);
        bufp->chgCData(oldp+355,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                                 [3U]),8);
        bufp->chgIData(oldp+356,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                    + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                   + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                                  - (IData)(0x800000U))),32);
        bufp->chgIData(oldp+357,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                                  + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+358,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                                  - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+359,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
        bufp->chgIData(oldp+360,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
        bufp->chgIData(oldp+361,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
        bufp->chgIData(oldp+362,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
        bufp->chgIData(oldp+363,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
        bufp->chgIData(oldp+364,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
        bufp->chgIData(oldp+365,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
        bufp->chgIData(oldp+366,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
        bufp->chgIData(oldp+367,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
        bufp->chgCData(oldp+368,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                                 [4U]),8);
        bufp->chgCData(oldp+369,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                                 [4U]),8);
        bufp->chgCData(oldp+370,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                                 [4U]),8);
        bufp->chgIData(oldp+371,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                    + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                   + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                                  - (IData)(0x800000U))),32);
        bufp->chgIData(oldp+372,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                                  + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+373,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                                  - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+374,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
        bufp->chgIData(oldp+375,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
        bufp->chgIData(oldp+376,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
        bufp->chgIData(oldp+377,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
        bufp->chgIData(oldp+378,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
        bufp->chgIData(oldp+379,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
        bufp->chgIData(oldp+380,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
        bufp->chgIData(oldp+381,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
        bufp->chgIData(oldp+382,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
        bufp->chgCData(oldp+383,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                                 [5U]),8);
        bufp->chgCData(oldp+384,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                                 [5U]),8);
        bufp->chgCData(oldp+385,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                                 [5U]),8);
        bufp->chgIData(oldp+386,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                    + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                   + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                                  - (IData)(0x800000U))),32);
        bufp->chgIData(oldp+387,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                                  + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+388,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                                  - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+389,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
        bufp->chgIData(oldp+390,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
        bufp->chgIData(oldp+391,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
        bufp->chgIData(oldp+392,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
        bufp->chgIData(oldp+393,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
        bufp->chgIData(oldp+394,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
        bufp->chgIData(oldp+395,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
        bufp->chgIData(oldp+396,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
        bufp->chgIData(oldp+397,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
        bufp->chgCData(oldp+398,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                                 [6U]),8);
        bufp->chgCData(oldp+399,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                                 [6U]),8);
        bufp->chgCData(oldp+400,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                                 [6U]),8);
        bufp->chgIData(oldp+401,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                    + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                   + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                                  - (IData)(0x800000U))),32);
        bufp->chgIData(oldp+402,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                                  + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+403,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                                  - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+404,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
        bufp->chgIData(oldp+405,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
        bufp->chgIData(oldp+406,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
        bufp->chgIData(oldp+407,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
        bufp->chgIData(oldp+408,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
        bufp->chgIData(oldp+409,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
        bufp->chgIData(oldp+410,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
        bufp->chgIData(oldp+411,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
        bufp->chgIData(oldp+412,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
        bufp->chgCData(oldp+413,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
                                 [7U]),8);
        bufp->chgCData(oldp+414,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
                                 [7U]),8);
        bufp->chgCData(oldp+415,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
                                 [7U]),8);
        bufp->chgIData(oldp+416,((((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
                                    + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
                                   + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
                                  - (IData)(0x800000U))),32);
        bufp->chgIData(oldp+417,((((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
                                  + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+418,(((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
                                   - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
                                  - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result)),32);
        bufp->chgIData(oldp+419,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result),24);
        bufp->chgIData(oldp+420,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result),24);
        bufp->chgIData(oldp+421,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result),24);
        bufp->chgIData(oldp+422,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result),24);
        bufp->chgIData(oldp+423,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result),24);
        bufp->chgIData(oldp+424,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result),24);
        bufp->chgIData(oldp+425,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result),24);
        bufp->chgIData(oldp+426,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result),24);
        bufp->chgIData(oldp+427,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result),24);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgWData(oldp+428,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data),2048);
        bufp->chgCData(oldp+492,(vlSelfRef.rgb2ycbcr_quant__DOT__next_state),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+493,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg),2048);
        bufp->chgWData(oldp+557,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg),2048);
        bufp->chgWData(oldp+621,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg),2048);
        bufp->chgBit(oldp+685,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__done_reg));
        bufp->chgBit(oldp+686,((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state))));
        bufp->chgBit(oldp+687,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_luma));
        bufp->chgBit(oldp+688,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_chroma));
        bufp->chgWData(oldp+689,(vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma),512);
        bufp->chgWData(oldp+705,(vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma),512);
        bufp->chgCData(oldp+721,(vlSelfRef.rgb2ycbcr_quant__DOT__current_state),3);
        bufp->chgCData(oldp+722,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state),2);
        bufp->chgCData(oldp+723,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt),3);
        bufp->chgCData(oldp+724,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr),6);
        bufp->chgCData(oldp+725,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[0]),8);
        bufp->chgCData(oldp+726,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[1]),8);
        bufp->chgCData(oldp+727,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[2]),8);
        bufp->chgCData(oldp+728,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[3]),8);
        bufp->chgCData(oldp+729,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[4]),8);
        bufp->chgCData(oldp+730,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[5]),8);
        bufp->chgCData(oldp+731,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[6]),8);
        bufp->chgCData(oldp+732,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[7]),8);
        bufp->chgCData(oldp+733,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[8]),8);
        bufp->chgCData(oldp+734,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[9]),8);
        bufp->chgCData(oldp+735,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[10]),8);
        bufp->chgCData(oldp+736,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[11]),8);
        bufp->chgCData(oldp+737,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[12]),8);
        bufp->chgCData(oldp+738,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[13]),8);
        bufp->chgCData(oldp+739,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[14]),8);
        bufp->chgCData(oldp+740,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[15]),8);
        bufp->chgCData(oldp+741,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[16]),8);
        bufp->chgCData(oldp+742,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[17]),8);
        bufp->chgCData(oldp+743,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[18]),8);
        bufp->chgCData(oldp+744,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[19]),8);
        bufp->chgCData(oldp+745,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[20]),8);
        bufp->chgCData(oldp+746,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[21]),8);
        bufp->chgCData(oldp+747,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[22]),8);
        bufp->chgCData(oldp+748,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[23]),8);
        bufp->chgCData(oldp+749,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[24]),8);
        bufp->chgCData(oldp+750,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[25]),8);
        bufp->chgCData(oldp+751,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[26]),8);
        bufp->chgCData(oldp+752,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[27]),8);
        bufp->chgCData(oldp+753,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[28]),8);
        bufp->chgCData(oldp+754,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[29]),8);
        bufp->chgCData(oldp+755,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[30]),8);
        bufp->chgCData(oldp+756,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[31]),8);
        bufp->chgCData(oldp+757,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[32]),8);
        bufp->chgCData(oldp+758,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[33]),8);
        bufp->chgCData(oldp+759,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[34]),8);
        bufp->chgCData(oldp+760,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[35]),8);
        bufp->chgCData(oldp+761,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[36]),8);
        bufp->chgCData(oldp+762,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[37]),8);
        bufp->chgCData(oldp+763,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[38]),8);
        bufp->chgCData(oldp+764,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[39]),8);
        bufp->chgCData(oldp+765,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[40]),8);
        bufp->chgCData(oldp+766,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[41]),8);
        bufp->chgCData(oldp+767,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[42]),8);
        bufp->chgCData(oldp+768,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[43]),8);
        bufp->chgCData(oldp+769,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[44]),8);
        bufp->chgCData(oldp+770,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[45]),8);
        bufp->chgCData(oldp+771,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[46]),8);
        bufp->chgCData(oldp+772,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[47]),8);
        bufp->chgCData(oldp+773,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[48]),8);
        bufp->chgCData(oldp+774,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[49]),8);
        bufp->chgCData(oldp+775,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[50]),8);
        bufp->chgCData(oldp+776,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[51]),8);
        bufp->chgCData(oldp+777,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[52]),8);
        bufp->chgCData(oldp+778,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[53]),8);
        bufp->chgCData(oldp+779,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[54]),8);
        bufp->chgCData(oldp+780,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[55]),8);
        bufp->chgCData(oldp+781,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[56]),8);
        bufp->chgCData(oldp+782,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[57]),8);
        bufp->chgCData(oldp+783,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[58]),8);
        bufp->chgCData(oldp+784,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[59]),8);
        bufp->chgCData(oldp+785,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[60]),8);
        bufp->chgCData(oldp+786,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[61]),8);
        bufp->chgCData(oldp+787,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[62]),8);
        bufp->chgCData(oldp+788,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[63]),8);
        bufp->chgIData(oldp+789,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[0]),32);
        bufp->chgIData(oldp+790,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[1]),32);
        bufp->chgIData(oldp+791,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[2]),32);
        bufp->chgIData(oldp+792,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[3]),32);
        bufp->chgIData(oldp+793,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[4]),32);
        bufp->chgIData(oldp+794,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[5]),32);
        bufp->chgIData(oldp+795,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[6]),32);
        bufp->chgIData(oldp+796,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[7]),32);
        bufp->chgIData(oldp+797,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[0]),32);
        bufp->chgIData(oldp+798,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[1]),32);
        bufp->chgIData(oldp+799,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[2]),32);
        bufp->chgIData(oldp+800,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[3]),32);
        bufp->chgIData(oldp+801,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[4]),32);
        bufp->chgIData(oldp+802,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[5]),32);
        bufp->chgIData(oldp+803,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[6]),32);
        bufp->chgIData(oldp+804,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[7]),32);
        bufp->chgIData(oldp+805,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[0]),32);
        bufp->chgIData(oldp+806,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[1]),32);
        bufp->chgIData(oldp+807,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[2]),32);
        bufp->chgIData(oldp+808,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[3]),32);
        bufp->chgIData(oldp+809,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[4]),32);
        bufp->chgIData(oldp+810,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[5]),32);
        bufp->chgIData(oldp+811,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[6]),32);
        bufp->chgIData(oldp+812,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[7]),32);
        bufp->chgIData(oldp+813,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__j),32);
        bufp->chgIData(oldp+814,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                 [0U]),32);
        bufp->chgIData(oldp+815,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                 [0U]),32);
        bufp->chgIData(oldp+816,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+817,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+819,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                  [0U])),16);
        bufp->chgIData(oldp+820,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                 [1U]),32);
        bufp->chgIData(oldp+821,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                 [1U]),32);
        bufp->chgIData(oldp+822,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+823,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+825,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                  [1U])),16);
        bufp->chgIData(oldp+826,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                 [2U]),32);
        bufp->chgIData(oldp+827,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                 [2U]),32);
        bufp->chgIData(oldp+828,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+829,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+831,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                  [2U])),16);
        bufp->chgIData(oldp+832,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                 [3U]),32);
        bufp->chgIData(oldp+833,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                 [3U]),32);
        bufp->chgIData(oldp+834,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+835,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+837,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                  [3U])),16);
        bufp->chgIData(oldp+838,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                 [4U]),32);
        bufp->chgIData(oldp+839,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                 [4U]),32);
        bufp->chgIData(oldp+840,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+841,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+843,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                  [4U])),16);
        bufp->chgIData(oldp+844,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                 [5U]),32);
        bufp->chgIData(oldp+845,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                 [5U]),32);
        bufp->chgIData(oldp+846,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+847,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+849,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                  [5U])),16);
        bufp->chgIData(oldp+850,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                 [6U]),32);
        bufp->chgIData(oldp+851,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                 [6U]),32);
        bufp->chgIData(oldp+852,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+853,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+855,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                  [6U])),16);
        bufp->chgIData(oldp+856,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                 [7U]),32);
        bufp->chgIData(oldp+857,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                 [7U]),32);
        bufp->chgIData(oldp+858,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+859,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+861,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                  [7U])),16);
        bufp->chgCData(oldp+862,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state),2);
        bufp->chgCData(oldp+863,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt),3);
        bufp->chgCData(oldp+864,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr),6);
        bufp->chgCData(oldp+865,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[0]),8);
        bufp->chgCData(oldp+866,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[1]),8);
        bufp->chgCData(oldp+867,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[2]),8);
        bufp->chgCData(oldp+868,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[3]),8);
        bufp->chgCData(oldp+869,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[4]),8);
        bufp->chgCData(oldp+870,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[5]),8);
        bufp->chgCData(oldp+871,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[6]),8);
        bufp->chgCData(oldp+872,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[7]),8);
        bufp->chgCData(oldp+873,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[8]),8);
        bufp->chgCData(oldp+874,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[9]),8);
        bufp->chgCData(oldp+875,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[10]),8);
        bufp->chgCData(oldp+876,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[11]),8);
        bufp->chgCData(oldp+877,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[12]),8);
        bufp->chgCData(oldp+878,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[13]),8);
        bufp->chgCData(oldp+879,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[14]),8);
        bufp->chgCData(oldp+880,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[15]),8);
        bufp->chgCData(oldp+881,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[16]),8);
        bufp->chgCData(oldp+882,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[17]),8);
        bufp->chgCData(oldp+883,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[18]),8);
        bufp->chgCData(oldp+884,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[19]),8);
        bufp->chgCData(oldp+885,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[20]),8);
        bufp->chgCData(oldp+886,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[21]),8);
        bufp->chgCData(oldp+887,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[22]),8);
        bufp->chgCData(oldp+888,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[23]),8);
        bufp->chgCData(oldp+889,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[24]),8);
        bufp->chgCData(oldp+890,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[25]),8);
        bufp->chgCData(oldp+891,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[26]),8);
        bufp->chgCData(oldp+892,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[27]),8);
        bufp->chgCData(oldp+893,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[28]),8);
        bufp->chgCData(oldp+894,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[29]),8);
        bufp->chgCData(oldp+895,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[30]),8);
        bufp->chgCData(oldp+896,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[31]),8);
        bufp->chgCData(oldp+897,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[32]),8);
        bufp->chgCData(oldp+898,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[33]),8);
        bufp->chgCData(oldp+899,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[34]),8);
        bufp->chgCData(oldp+900,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[35]),8);
        bufp->chgCData(oldp+901,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[36]),8);
        bufp->chgCData(oldp+902,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[37]),8);
        bufp->chgCData(oldp+903,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[38]),8);
        bufp->chgCData(oldp+904,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[39]),8);
        bufp->chgCData(oldp+905,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[40]),8);
        bufp->chgCData(oldp+906,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[41]),8);
        bufp->chgCData(oldp+907,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[42]),8);
        bufp->chgCData(oldp+908,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[43]),8);
        bufp->chgCData(oldp+909,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[44]),8);
        bufp->chgCData(oldp+910,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[45]),8);
        bufp->chgCData(oldp+911,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[46]),8);
        bufp->chgCData(oldp+912,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[47]),8);
        bufp->chgCData(oldp+913,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[48]),8);
        bufp->chgCData(oldp+914,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[49]),8);
        bufp->chgCData(oldp+915,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[50]),8);
        bufp->chgCData(oldp+916,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[51]),8);
        bufp->chgCData(oldp+917,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[52]),8);
        bufp->chgCData(oldp+918,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[53]),8);
        bufp->chgCData(oldp+919,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[54]),8);
        bufp->chgCData(oldp+920,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[55]),8);
        bufp->chgCData(oldp+921,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[56]),8);
        bufp->chgCData(oldp+922,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[57]),8);
        bufp->chgCData(oldp+923,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[58]),8);
        bufp->chgCData(oldp+924,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[59]),8);
        bufp->chgCData(oldp+925,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[60]),8);
        bufp->chgCData(oldp+926,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[61]),8);
        bufp->chgCData(oldp+927,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[62]),8);
        bufp->chgCData(oldp+928,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[63]),8);
        bufp->chgIData(oldp+929,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[0]),32);
        bufp->chgIData(oldp+930,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[1]),32);
        bufp->chgIData(oldp+931,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[2]),32);
        bufp->chgIData(oldp+932,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[3]),32);
        bufp->chgIData(oldp+933,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[4]),32);
        bufp->chgIData(oldp+934,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[5]),32);
        bufp->chgIData(oldp+935,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[6]),32);
        bufp->chgIData(oldp+936,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[7]),32);
        bufp->chgIData(oldp+937,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[0]),32);
        bufp->chgIData(oldp+938,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[1]),32);
        bufp->chgIData(oldp+939,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[2]),32);
        bufp->chgIData(oldp+940,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[3]),32);
        bufp->chgIData(oldp+941,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[4]),32);
        bufp->chgIData(oldp+942,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[5]),32);
        bufp->chgIData(oldp+943,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[6]),32);
        bufp->chgIData(oldp+944,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[7]),32);
        bufp->chgIData(oldp+945,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[0]),32);
        bufp->chgIData(oldp+946,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[1]),32);
        bufp->chgIData(oldp+947,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[2]),32);
        bufp->chgIData(oldp+948,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[3]),32);
        bufp->chgIData(oldp+949,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[4]),32);
        bufp->chgIData(oldp+950,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[5]),32);
        bufp->chgIData(oldp+951,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[6]),32);
        bufp->chgIData(oldp+952,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[7]),32);
        bufp->chgIData(oldp+953,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__j),32);
        bufp->chgIData(oldp+954,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                 [0U]),32);
        bufp->chgIData(oldp+955,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                 [0U]),32);
        bufp->chgIData(oldp+956,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+957,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+959,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                  [0U])),16);
        bufp->chgIData(oldp+960,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                 [1U]),32);
        bufp->chgIData(oldp+961,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                 [1U]),32);
        bufp->chgIData(oldp+962,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+963,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+965,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                  [1U])),16);
        bufp->chgIData(oldp+966,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                 [2U]),32);
        bufp->chgIData(oldp+967,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                 [2U]),32);
        bufp->chgIData(oldp+968,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+969,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+971,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                  [2U])),16);
        bufp->chgIData(oldp+972,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                 [3U]),32);
        bufp->chgIData(oldp+973,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                 [3U]),32);
        bufp->chgIData(oldp+974,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+975,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+977,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                  [3U])),16);
        bufp->chgIData(oldp+978,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                 [4U]),32);
        bufp->chgIData(oldp+979,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                 [4U]),32);
        bufp->chgIData(oldp+980,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+981,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+983,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                  [4U])),16);
        bufp->chgIData(oldp+984,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                 [5U]),32);
        bufp->chgIData(oldp+985,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                 [5U]),32);
        bufp->chgIData(oldp+986,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+987,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+989,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                  [5U])),16);
        bufp->chgIData(oldp+990,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                 [6U]),32);
        bufp->chgIData(oldp+991,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                 [6U]),32);
        bufp->chgIData(oldp+992,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+993,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+995,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                  [6U])),16);
        bufp->chgIData(oldp+996,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                 [7U]),32);
        bufp->chgIData(oldp+997,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                 [7U]),32);
        bufp->chgIData(oldp+998,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result),32);
        bufp->chgQData(oldp+999,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p),48);
        bufp->chgSData(oldp+1001,((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                   [7U])),16);
        bufp->chgIData(oldp+1002,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__j),32);
        bufp->chgCData(oldp+1003,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state),2);
        bufp->chgCData(oldp+1004,(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+1005,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_out_data),2048);
        bufp->chgIData(oldp+1069,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[0]),32);
        bufp->chgIData(oldp+1070,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[1]),32);
        bufp->chgIData(oldp+1071,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[2]),32);
        bufp->chgIData(oldp+1072,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[3]),32);
        bufp->chgIData(oldp+1073,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[4]),32);
        bufp->chgIData(oldp+1074,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[5]),32);
        bufp->chgIData(oldp+1075,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[6]),32);
        bufp->chgIData(oldp+1076,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[7]),32);
        bufp->chgIData(oldp+1077,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[8]),32);
        bufp->chgIData(oldp+1078,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[9]),32);
        bufp->chgIData(oldp+1079,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[10]),32);
        bufp->chgIData(oldp+1080,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[11]),32);
        bufp->chgIData(oldp+1081,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[12]),32);
        bufp->chgIData(oldp+1082,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[13]),32);
        bufp->chgIData(oldp+1083,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[14]),32);
        bufp->chgIData(oldp+1084,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[15]),32);
        bufp->chgIData(oldp+1085,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[16]),32);
        bufp->chgIData(oldp+1086,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[17]),32);
        bufp->chgIData(oldp+1087,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[18]),32);
        bufp->chgIData(oldp+1088,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[19]),32);
        bufp->chgIData(oldp+1089,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[20]),32);
        bufp->chgIData(oldp+1090,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[21]),32);
        bufp->chgIData(oldp+1091,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[22]),32);
        bufp->chgIData(oldp+1092,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[23]),32);
        bufp->chgIData(oldp+1093,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[24]),32);
        bufp->chgIData(oldp+1094,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[25]),32);
        bufp->chgIData(oldp+1095,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[26]),32);
        bufp->chgIData(oldp+1096,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[27]),32);
        bufp->chgIData(oldp+1097,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[28]),32);
        bufp->chgIData(oldp+1098,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[29]),32);
        bufp->chgIData(oldp+1099,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[30]),32);
        bufp->chgIData(oldp+1100,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[31]),32);
        bufp->chgIData(oldp+1101,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[32]),32);
        bufp->chgIData(oldp+1102,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[33]),32);
        bufp->chgIData(oldp+1103,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[34]),32);
        bufp->chgIData(oldp+1104,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[35]),32);
        bufp->chgIData(oldp+1105,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[36]),32);
        bufp->chgIData(oldp+1106,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[37]),32);
        bufp->chgIData(oldp+1107,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[38]),32);
        bufp->chgIData(oldp+1108,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[39]),32);
        bufp->chgIData(oldp+1109,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[40]),32);
        bufp->chgIData(oldp+1110,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[41]),32);
        bufp->chgIData(oldp+1111,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[42]),32);
        bufp->chgIData(oldp+1112,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[43]),32);
        bufp->chgIData(oldp+1113,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[44]),32);
        bufp->chgIData(oldp+1114,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[45]),32);
        bufp->chgIData(oldp+1115,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[46]),32);
        bufp->chgIData(oldp+1116,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[47]),32);
        bufp->chgIData(oldp+1117,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[48]),32);
        bufp->chgIData(oldp+1118,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[49]),32);
        bufp->chgIData(oldp+1119,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[50]),32);
        bufp->chgIData(oldp+1120,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[51]),32);
        bufp->chgIData(oldp+1121,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[52]),32);
        bufp->chgIData(oldp+1122,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[53]),32);
        bufp->chgIData(oldp+1123,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[54]),32);
        bufp->chgIData(oldp+1124,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[55]),32);
        bufp->chgIData(oldp+1125,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[56]),32);
        bufp->chgIData(oldp+1126,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[57]),32);
        bufp->chgIData(oldp+1127,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[58]),32);
        bufp->chgIData(oldp+1128,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[59]),32);
        bufp->chgIData(oldp+1129,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[60]),32);
        bufp->chgIData(oldp+1130,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[61]),32);
        bufp->chgIData(oldp+1131,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[62]),32);
        bufp->chgIData(oldp+1132,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[63]),32);
        bufp->chgIData(oldp+1133,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[0]),32);
        bufp->chgIData(oldp+1134,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[1]),32);
        bufp->chgIData(oldp+1135,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[2]),32);
        bufp->chgIData(oldp+1136,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[3]),32);
        bufp->chgIData(oldp+1137,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[4]),32);
        bufp->chgIData(oldp+1138,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[5]),32);
        bufp->chgIData(oldp+1139,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[6]),32);
        bufp->chgIData(oldp+1140,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[7]),32);
        bufp->chgIData(oldp+1141,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[8]),32);
        bufp->chgIData(oldp+1142,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[9]),32);
        bufp->chgIData(oldp+1143,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[10]),32);
        bufp->chgIData(oldp+1144,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[11]),32);
        bufp->chgIData(oldp+1145,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[12]),32);
        bufp->chgIData(oldp+1146,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[13]),32);
        bufp->chgIData(oldp+1147,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[14]),32);
        bufp->chgIData(oldp+1148,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[15]),32);
        bufp->chgIData(oldp+1149,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[16]),32);
        bufp->chgIData(oldp+1150,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[17]),32);
        bufp->chgIData(oldp+1151,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[18]),32);
        bufp->chgIData(oldp+1152,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[19]),32);
        bufp->chgIData(oldp+1153,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[20]),32);
        bufp->chgIData(oldp+1154,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[21]),32);
        bufp->chgIData(oldp+1155,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[22]),32);
        bufp->chgIData(oldp+1156,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[23]),32);
        bufp->chgIData(oldp+1157,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[24]),32);
        bufp->chgIData(oldp+1158,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[25]),32);
        bufp->chgIData(oldp+1159,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[26]),32);
        bufp->chgIData(oldp+1160,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[27]),32);
        bufp->chgIData(oldp+1161,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[28]),32);
        bufp->chgIData(oldp+1162,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[29]),32);
        bufp->chgIData(oldp+1163,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[30]),32);
        bufp->chgIData(oldp+1164,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[31]),32);
        bufp->chgIData(oldp+1165,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[32]),32);
        bufp->chgIData(oldp+1166,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[33]),32);
        bufp->chgIData(oldp+1167,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[34]),32);
        bufp->chgIData(oldp+1168,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[35]),32);
        bufp->chgIData(oldp+1169,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[36]),32);
        bufp->chgIData(oldp+1170,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[37]),32);
        bufp->chgIData(oldp+1171,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[38]),32);
        bufp->chgIData(oldp+1172,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[39]),32);
        bufp->chgIData(oldp+1173,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[40]),32);
        bufp->chgIData(oldp+1174,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[41]),32);
        bufp->chgIData(oldp+1175,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[42]),32);
        bufp->chgIData(oldp+1176,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[43]),32);
        bufp->chgIData(oldp+1177,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[44]),32);
        bufp->chgIData(oldp+1178,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[45]),32);
        bufp->chgIData(oldp+1179,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[46]),32);
        bufp->chgIData(oldp+1180,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[47]),32);
        bufp->chgIData(oldp+1181,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[48]),32);
        bufp->chgIData(oldp+1182,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[49]),32);
        bufp->chgIData(oldp+1183,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[50]),32);
        bufp->chgIData(oldp+1184,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[51]),32);
        bufp->chgIData(oldp+1185,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[52]),32);
        bufp->chgIData(oldp+1186,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[53]),32);
        bufp->chgIData(oldp+1187,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[54]),32);
        bufp->chgIData(oldp+1188,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[55]),32);
        bufp->chgIData(oldp+1189,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[56]),32);
        bufp->chgIData(oldp+1190,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[57]),32);
        bufp->chgIData(oldp+1191,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[58]),32);
        bufp->chgIData(oldp+1192,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[59]),32);
        bufp->chgIData(oldp+1193,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[60]),32);
        bufp->chgIData(oldp+1194,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[61]),32);
        bufp->chgIData(oldp+1195,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[62]),32);
        bufp->chgIData(oldp+1196,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[63]),32);
        bufp->chgIData(oldp+1197,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[0]),32);
        bufp->chgIData(oldp+1198,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[1]),32);
        bufp->chgIData(oldp+1199,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[2]),32);
        bufp->chgIData(oldp+1200,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[3]),32);
        bufp->chgIData(oldp+1201,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[4]),32);
        bufp->chgIData(oldp+1202,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[5]),32);
        bufp->chgIData(oldp+1203,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[6]),32);
        bufp->chgIData(oldp+1204,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[7]),32);
        bufp->chgIData(oldp+1205,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[8]),32);
        bufp->chgIData(oldp+1206,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[9]),32);
        bufp->chgIData(oldp+1207,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[10]),32);
        bufp->chgIData(oldp+1208,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[11]),32);
        bufp->chgIData(oldp+1209,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[12]),32);
        bufp->chgIData(oldp+1210,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[13]),32);
        bufp->chgIData(oldp+1211,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[14]),32);
        bufp->chgIData(oldp+1212,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[15]),32);
        bufp->chgIData(oldp+1213,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[16]),32);
        bufp->chgIData(oldp+1214,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[17]),32);
        bufp->chgIData(oldp+1215,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[18]),32);
        bufp->chgIData(oldp+1216,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[19]),32);
        bufp->chgIData(oldp+1217,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[20]),32);
        bufp->chgIData(oldp+1218,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[21]),32);
        bufp->chgIData(oldp+1219,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[22]),32);
        bufp->chgIData(oldp+1220,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[23]),32);
        bufp->chgIData(oldp+1221,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[24]),32);
        bufp->chgIData(oldp+1222,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[25]),32);
        bufp->chgIData(oldp+1223,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[26]),32);
        bufp->chgIData(oldp+1224,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[27]),32);
        bufp->chgIData(oldp+1225,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[28]),32);
        bufp->chgIData(oldp+1226,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[29]),32);
        bufp->chgIData(oldp+1227,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[30]),32);
        bufp->chgIData(oldp+1228,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[31]),32);
        bufp->chgIData(oldp+1229,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[32]),32);
        bufp->chgIData(oldp+1230,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[33]),32);
        bufp->chgIData(oldp+1231,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[34]),32);
        bufp->chgIData(oldp+1232,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[35]),32);
        bufp->chgIData(oldp+1233,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[36]),32);
        bufp->chgIData(oldp+1234,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[37]),32);
        bufp->chgIData(oldp+1235,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[38]),32);
        bufp->chgIData(oldp+1236,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[39]),32);
        bufp->chgIData(oldp+1237,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[40]),32);
        bufp->chgIData(oldp+1238,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[41]),32);
        bufp->chgIData(oldp+1239,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[42]),32);
        bufp->chgIData(oldp+1240,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[43]),32);
        bufp->chgIData(oldp+1241,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[44]),32);
        bufp->chgIData(oldp+1242,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[45]),32);
        bufp->chgIData(oldp+1243,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[46]),32);
        bufp->chgIData(oldp+1244,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[47]),32);
        bufp->chgIData(oldp+1245,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[48]),32);
        bufp->chgIData(oldp+1246,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[49]),32);
        bufp->chgIData(oldp+1247,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[50]),32);
        bufp->chgIData(oldp+1248,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[51]),32);
        bufp->chgIData(oldp+1249,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[52]),32);
        bufp->chgIData(oldp+1250,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[53]),32);
        bufp->chgIData(oldp+1251,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[54]),32);
        bufp->chgIData(oldp+1252,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[55]),32);
        bufp->chgIData(oldp+1253,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[56]),32);
        bufp->chgIData(oldp+1254,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[57]),32);
        bufp->chgIData(oldp+1255,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[58]),32);
        bufp->chgIData(oldp+1256,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[59]),32);
        bufp->chgIData(oldp+1257,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[60]),32);
        bufp->chgIData(oldp+1258,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[61]),32);
        bufp->chgIData(oldp+1259,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[62]),32);
        bufp->chgIData(oldp+1260,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[63]),32);
        bufp->chgIData(oldp+1261,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[0]),32);
        bufp->chgIData(oldp+1262,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[1]),32);
        bufp->chgIData(oldp+1263,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[2]),32);
        bufp->chgIData(oldp+1264,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[3]),32);
        bufp->chgIData(oldp+1265,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[4]),32);
        bufp->chgIData(oldp+1266,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[5]),32);
        bufp->chgIData(oldp+1267,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[6]),32);
        bufp->chgIData(oldp+1268,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[7]),32);
        bufp->chgIData(oldp+1269,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[0]),32);
        bufp->chgIData(oldp+1270,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[1]),32);
        bufp->chgIData(oldp+1271,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[2]),32);
        bufp->chgIData(oldp+1272,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[3]),32);
        bufp->chgIData(oldp+1273,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[4]),32);
        bufp->chgIData(oldp+1274,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[5]),32);
        bufp->chgIData(oldp+1275,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[6]),32);
        bufp->chgIData(oldp+1276,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[7]),32);
        bufp->chgIData(oldp+1277,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                                  [0U]),32);
        bufp->chgIData(oldp+1278,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                                  [1U]),32);
        bufp->chgIData(oldp+1279,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                                  [2U]),32);
        bufp->chgIData(oldp+1280,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                                  [3U]),32);
        bufp->chgIData(oldp+1281,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                                  [4U]),32);
        bufp->chgIData(oldp+1282,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                                  [5U]),32);
        bufp->chgIData(oldp+1283,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                                  [6U]),32);
        bufp->chgIData(oldp+1284,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y
                                  [7U]),32);
        bufp->chgIData(oldp+1285,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s0),32);
        bufp->chgIData(oldp+1286,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s1),32);
        bufp->chgIData(oldp+1287,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s2),32);
        bufp->chgIData(oldp+1288,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s3),32);
        bufp->chgIData(oldp+1289,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d0),32);
        bufp->chgIData(oldp+1290,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d1),32);
        bufp->chgIData(oldp+1291,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d2),32);
        bufp->chgIData(oldp+1292,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d3),32);
        bufp->chgIData(oldp+1293,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e0),32);
        bufp->chgIData(oldp+1294,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e1),32);
        bufp->chgIData(oldp+1295,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e2),32);
        bufp->chgIData(oldp+1296,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e3),32);
        bufp->chgIData(oldp+1297,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b0),32);
        bufp->chgIData(oldp+1298,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b1),32);
        bufp->chgIData(oldp+1299,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b2),32);
        bufp->chgIData(oldp+1300,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b3),32);
        bufp->chgIData(oldp+1301,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b4),32);
        bufp->chgIData(oldp+1302,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b5),32);
        bufp->chgIData(oldp+1303,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b6),32);
        bufp->chgIData(oldp+1304,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b7),32);
        bufp->chgIData(oldp+1305,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[0]),32);
        bufp->chgIData(oldp+1306,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[1]),32);
        bufp->chgIData(oldp+1307,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[2]),32);
        bufp->chgIData(oldp+1308,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[3]),32);
        bufp->chgIData(oldp+1309,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[4]),32);
        bufp->chgIData(oldp+1310,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[5]),32);
        bufp->chgIData(oldp+1311,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[6]),32);
        bufp->chgIData(oldp+1312,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[7]),32);
        bufp->chgIData(oldp+1313,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b1),32);
        bufp->chgIData(oldp+1314,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b5),32);
        bufp->chgIData(oldp+1315,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+1316,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+1317,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk6__DOT__j),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+1318,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_valid));
        bufp->chgBit(oldp+1319,((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))));
        bufp->chgBit(oldp+1320,((5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state))));
        bufp->chgBit(oldp+1321,(vlSelfRef.rgb2ycbcr_quant__DOT__quant_start));
        bufp->chgCData(oldp+1322,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state),3);
        bufp->chgCData(oldp+1323,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate),3);
        bufp->chgCData(oldp+1324,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt),3);
        bufp->chgCData(oldp+1325,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt),3);
        bufp->chgBit(oldp+1326,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__we_trans));
        bufp->chgCData(oldp+1327,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[0]),6);
        bufp->chgCData(oldp+1328,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[1]),6);
        bufp->chgCData(oldp+1329,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[2]),6);
        bufp->chgCData(oldp+1330,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[3]),6);
        bufp->chgCData(oldp+1331,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[4]),6);
        bufp->chgCData(oldp+1332,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[5]),6);
        bufp->chgCData(oldp+1333,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[6]),6);
        bufp->chgCData(oldp+1334,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[7]),6);
        bufp->chgIData(oldp+1335,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[0]),32);
        bufp->chgIData(oldp+1336,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[1]),32);
        bufp->chgIData(oldp+1337,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[2]),32);
        bufp->chgIData(oldp+1338,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[3]),32);
        bufp->chgIData(oldp+1339,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[4]),32);
        bufp->chgIData(oldp+1340,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[5]),32);
        bufp->chgIData(oldp+1341,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[6]),32);
        bufp->chgIData(oldp+1342,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[7]),32);
        bufp->chgBit(oldp+1343,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in_valid));
        bufp->chgBit(oldp+1344,((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))));
        bufp->chgBit(oldp+1345,((5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state))));
        bufp->chgIData(oldp+1346,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[0]),32);
        bufp->chgIData(oldp+1347,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[1]),32);
        bufp->chgIData(oldp+1348,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[2]),32);
        bufp->chgIData(oldp+1349,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[3]),32);
        bufp->chgIData(oldp+1350,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[4]),32);
        bufp->chgIData(oldp+1351,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[5]),32);
        bufp->chgIData(oldp+1352,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[6]),32);
        bufp->chgIData(oldp+1353,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[7]),32);
        bufp->chgIData(oldp+1354,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                  [0U]),32);
        bufp->chgIData(oldp+1355,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                  [1U]),32);
        bufp->chgIData(oldp+1356,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                  [2U]),32);
        bufp->chgIData(oldp+1357,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                  [3U]),32);
        bufp->chgIData(oldp+1358,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                  [4U]),32);
        bufp->chgIData(oldp+1359,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                  [5U]),32);
        bufp->chgIData(oldp+1360,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                  [6U]),32);
        bufp->chgIData(oldp+1361,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in
                                  [7U]),32);
        bufp->chgCData(oldp+1362,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state),3);
        bufp->chgCData(oldp+1363,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__nstate),3);
        bufp->chgQData(oldp+1364,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                  [0U]),48);
        bufp->chgQData(oldp+1366,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                  [1U]),48);
        bufp->chgQData(oldp+1368,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                  [2U]),48);
        bufp->chgQData(oldp+1370,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                  [3U]),48);
        bufp->chgQData(oldp+1372,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                  [4U]),48);
        bufp->chgQData(oldp+1374,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                  [5U]),48);
        bufp->chgQData(oldp+1376,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                  [6U]),48);
        bufp->chgQData(oldp+1378,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                  [7U]),48);
        bufp->chgIData(oldp+1380,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[0]),32);
        bufp->chgIData(oldp+1381,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[1]),32);
        bufp->chgIData(oldp+1382,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[2]),32);
        bufp->chgIData(oldp+1383,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[3]),32);
        bufp->chgIData(oldp+1384,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[4]),32);
        bufp->chgIData(oldp+1385,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[5]),32);
        bufp->chgIData(oldp+1386,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[6]),32);
        bufp->chgIData(oldp+1387,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[7]),32);
        bufp->chgIData(oldp+1388,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                           [0U] >> 0x10U))),32);
        bufp->chgSData(oldp+1389,((0xffffU & (IData)(
                                                     vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                     [0U]))),16);
        bufp->chgIData(oldp+1390,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+1391,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+1393,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                           [1U] >> 0x10U))),32);
        bufp->chgSData(oldp+1394,((0xffffU & (IData)(
                                                     vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                     [1U]))),16);
        bufp->chgIData(oldp+1395,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+1396,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+1398,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                           [2U] >> 0x10U))),32);
        bufp->chgSData(oldp+1399,((0xffffU & (IData)(
                                                     vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                     [2U]))),16);
        bufp->chgIData(oldp+1400,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+1401,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+1403,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                           [3U] >> 0x10U))),32);
        bufp->chgSData(oldp+1404,((0xffffU & (IData)(
                                                     vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                     [3U]))),16);
        bufp->chgIData(oldp+1405,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+1406,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+1408,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                           [4U] >> 0x10U))),32);
        bufp->chgSData(oldp+1409,((0xffffU & (IData)(
                                                     vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                     [4U]))),16);
        bufp->chgIData(oldp+1410,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+1411,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+1413,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                           [5U] >> 0x10U))),32);
        bufp->chgSData(oldp+1414,((0xffffU & (IData)(
                                                     vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                     [5U]))),16);
        bufp->chgIData(oldp+1415,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+1416,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+1418,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                           [6U] >> 0x10U))),32);
        bufp->chgSData(oldp+1419,((0xffffU & (IData)(
                                                     vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                     [6U]))),16);
        bufp->chgIData(oldp+1420,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+1421,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+1423,((IData)((vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                           [7U] >> 0x10U))),32);
        bufp->chgSData(oldp+1424,((0xffffU & (IData)(
                                                     vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job
                                                     [7U]))),16);
        bufp->chgIData(oldp+1425,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+1426,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+1428,(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk5__DOT__j),32);
    }
    bufp->chgBit(oldp+1429,(vlSelfRef.clk));
    bufp->chgBit(oldp+1430,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+1431,(vlSelfRef.in_valid));
    bufp->chgBit(oldp+1432,(vlSelfRef.in_ready));
    bufp->chgWData(oldp+1433,(vlSelfRef.r_all),512);
    bufp->chgWData(oldp+1449,(vlSelfRef.g_all),512);
    bufp->chgWData(oldp+1465,(vlSelfRef.b_all),512);
    bufp->chgCData(oldp+1481,(vlSelfRef.component_sel),2);
    bufp->chgBit(oldp+1482,(vlSelfRef.out_valid));
    bufp->chgBit(oldp+1483,(vlSelfRef.out_ready));
    bufp->chgWData(oldp+1484,(vlSelfRef.out_data),512);
    bufp->chgCData(oldp+1500,(((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))
                                ? ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_start)
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state))
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt))
                                                    ? 2U
                                                    : 1U)
                                                   : 0U))),2);
    bufp->chgCData(oldp+1501,(((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))
                                ? ((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_start)
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state))
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt))
                                                    ? 2U
                                                    : 1U)
                                                   : 0U))),2);
    bufp->chgBit(oldp+1502,((1U & (~ (IData)(vlSelfRef.rst_n)))));
}

void Vrgb2ycbcr_quant___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root__trace_cleanup\n"); );
    // Init
    Vrgb2ycbcr_quant___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrgb2ycbcr_quant___024root*>(voidSelf);
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
