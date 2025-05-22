// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdct8x8_chen_2d__Syms.h"


void Vdct8x8_chen_2d___024root__trace_chg_0_sub_0(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdct8x8_chen_2d___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root__trace_chg_0\n"); );
    // Init
    Vdct8x8_chen_2d___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdct8x8_chen_2d___024root*>(voidSelf);
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdct8x8_chen_2d___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdct8x8_chen_2d___024root__trace_chg_0_sub_0(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root__trace_chg_0_sub_0\n"); );
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[31]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[32]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[33]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[34]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[35]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[36]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[37]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[38]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[39]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[40]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[41]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[42]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[43]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[44]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[45]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[46]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[47]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[48]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[49]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[50]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[51]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[52]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[53]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[54]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[55]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[56]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[57]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[58]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[59]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[60]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[61]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[62]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.dct8x8_chen_2d__DOT__input_buffer[63]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[0]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[1]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[2]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[3]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[4]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[5]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[6]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[7]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[8]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[9]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[10]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[11]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[12]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[13]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[14]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[15]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[16]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[17]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[18]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[19]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[20]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[21]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[22]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[23]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[24]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[25]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[26]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[27]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[28]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[29]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[30]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[31]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[32]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[33]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[34]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[35]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[36]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[37]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[38]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[39]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[40]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[41]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[42]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[43]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[44]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[45]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[46]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[47]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[48]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[49]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[50]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[51]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[52]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[53]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[54]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[55]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[56]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[57]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[58]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[59]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[60]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[61]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[62]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.dct8x8_chen_2d__DOT__output_buffer[63]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[0]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[1]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[2]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[3]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[4]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[5]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[6]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[7]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[8]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[9]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[10]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[11]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[12]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[13]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[14]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[15]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[16]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[17]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[18]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[19]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[20]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[21]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[22]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[23]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[24]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[25]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[26]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[27]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[28]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[29]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[30]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[31]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[32]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[33]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[34]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[35]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[36]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[37]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[38]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[39]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[40]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[41]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[42]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[43]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[44]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[45]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[46]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[47]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[48]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[49]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[50]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[51]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[52]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[53]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[54]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[55]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[56]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[57]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[58]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[59]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[60]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[61]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[62]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.dct8x8_chen_2d__DOT__trans_buff[63]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[0]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[1]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[2]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[3]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[4]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[5]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[6]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.dct8x8_chen_2d__DOT__wdata_trans[7]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[0]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[1]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[2]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[3]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[4]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[5]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[6]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.dct8x8_chen_2d__DOT__core_out[7]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                                 [0U]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                                 [1U]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                                 [2U]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                                 [3U]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                                 [4U]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                                 [5U]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                                 [6U]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y
                                 [7U]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__s0),32);
        bufp->chgIData(oldp+217,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__s1),32);
        bufp->chgIData(oldp+218,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__s2),32);
        bufp->chgIData(oldp+219,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__s3),32);
        bufp->chgIData(oldp+220,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d0),32);
        bufp->chgIData(oldp+221,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d1),32);
        bufp->chgIData(oldp+222,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d2),32);
        bufp->chgIData(oldp+223,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__d3),32);
        bufp->chgIData(oldp+224,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e0),32);
        bufp->chgIData(oldp+225,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e1),32);
        bufp->chgIData(oldp+226,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e2),32);
        bufp->chgIData(oldp+227,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__e3),32);
        bufp->chgIData(oldp+228,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b0),32);
        bufp->chgIData(oldp+229,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b1),32);
        bufp->chgIData(oldp+230,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b2),32);
        bufp->chgIData(oldp+231,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b3),32);
        bufp->chgIData(oldp+232,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b4),32);
        bufp->chgIData(oldp+233,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b5),32);
        bufp->chgIData(oldp+234,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b6),32);
        bufp->chgIData(oldp+235,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__b7),32);
        bufp->chgIData(oldp+236,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[0]),32);
        bufp->chgIData(oldp+237,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[1]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[2]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[3]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[4]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[5]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[6]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__y[7]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__t_b1),32);
        bufp->chgIData(oldp+245,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__t_b5),32);
        bufp->chgIData(oldp+246,(vlSelfRef.dct8x8_chen_2d__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+247,(vlSelfRef.dct8x8_chen_2d__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+248,(vlSelfRef.dct8x8_chen_2d__DOT__unnamedblk6__DOT__j),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+249,(vlSelfRef.dct8x8_chen_2d__DOT__state),3);
        bufp->chgCData(oldp+250,(vlSelfRef.dct8x8_chen_2d__DOT__row_cnt),3);
        bufp->chgCData(oldp+251,(vlSelfRef.dct8x8_chen_2d__DOT__col_cnt),3);
        bufp->chgBit(oldp+252,(vlSelfRef.dct8x8_chen_2d__DOT__we_trans));
        bufp->chgCData(oldp+253,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[0]),6);
        bufp->chgCData(oldp+254,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[1]),6);
        bufp->chgCData(oldp+255,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[2]),6);
        bufp->chgCData(oldp+256,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[3]),6);
        bufp->chgCData(oldp+257,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[4]),6);
        bufp->chgCData(oldp+258,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[5]),6);
        bufp->chgCData(oldp+259,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[6]),6);
        bufp->chgCData(oldp+260,(vlSelfRef.dct8x8_chen_2d__DOT__raddr_trans[7]),6);
        bufp->chgIData(oldp+261,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[0]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[1]),32);
        bufp->chgIData(oldp+263,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[2]),32);
        bufp->chgIData(oldp+264,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[3]),32);
        bufp->chgIData(oldp+265,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[4]),32);
        bufp->chgIData(oldp+266,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[5]),32);
        bufp->chgIData(oldp+267,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[6]),32);
        bufp->chgIData(oldp+268,(vlSelfRef.dct8x8_chen_2d__DOT__rdata_trans[7]),32);
        bufp->chgBit(oldp+269,(vlSelfRef.dct8x8_chen_2d__DOT__core_in_valid));
        bufp->chgBit(oldp+270,((0U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))));
        bufp->chgBit(oldp+271,((5U == (IData)(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state))));
        bufp->chgIData(oldp+272,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[0]),32);
        bufp->chgIData(oldp+273,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[1]),32);
        bufp->chgIData(oldp+274,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[2]),32);
        bufp->chgIData(oldp+275,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[3]),32);
        bufp->chgIData(oldp+276,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[4]),32);
        bufp->chgIData(oldp+277,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[5]),32);
        bufp->chgIData(oldp+278,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[6]),32);
        bufp->chgIData(oldp+279,(vlSelfRef.dct8x8_chen_2d__DOT__core_in[7]),32);
        bufp->chgIData(oldp+280,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                                 [0U]),32);
        bufp->chgIData(oldp+281,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                                 [1U]),32);
        bufp->chgIData(oldp+282,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                                 [2U]),32);
        bufp->chgIData(oldp+283,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                                 [3U]),32);
        bufp->chgIData(oldp+284,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                                 [4U]),32);
        bufp->chgIData(oldp+285,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                                 [5U]),32);
        bufp->chgIData(oldp+286,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                                 [6U]),32);
        bufp->chgIData(oldp+287,(vlSelfRef.dct8x8_chen_2d__DOT__core_in
                                 [7U]),32);
        bufp->chgCData(oldp+288,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__state),3);
        bufp->chgCData(oldp+289,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__nstate),3);
        bufp->chgQData(oldp+290,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                 [0U]),48);
        bufp->chgQData(oldp+292,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                 [1U]),48);
        bufp->chgQData(oldp+294,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                 [2U]),48);
        bufp->chgQData(oldp+296,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                 [3U]),48);
        bufp->chgQData(oldp+298,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                 [4U]),48);
        bufp->chgQData(oldp+300,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                 [5U]),48);
        bufp->chgQData(oldp+302,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                 [6U]),48);
        bufp->chgQData(oldp+304,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                 [7U]),48);
        bufp->chgIData(oldp+306,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[0]),32);
        bufp->chgIData(oldp+307,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[1]),32);
        bufp->chgIData(oldp+308,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[2]),32);
        bufp->chgIData(oldp+309,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[3]),32);
        bufp->chgIData(oldp+310,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[4]),32);
        bufp->chgIData(oldp+311,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[5]),32);
        bufp->chgIData(oldp+312,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[6]),32);
        bufp->chgIData(oldp+313,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mul_y[7]),32);
        bufp->chgIData(oldp+314,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                          [0U] >> 0x10U))),32);
        bufp->chgSData(oldp+315,((0xffffU & (IData)(
                                                    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                    [0U]))),16);
        bufp->chgIData(oldp+316,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+317,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+319,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                          [1U] >> 0x10U))),32);
        bufp->chgSData(oldp+320,((0xffffU & (IData)(
                                                    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                    [1U]))),16);
        bufp->chgIData(oldp+321,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+322,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+324,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                          [2U] >> 0x10U))),32);
        bufp->chgSData(oldp+325,((0xffffU & (IData)(
                                                    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                    [2U]))),16);
        bufp->chgIData(oldp+326,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+327,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+329,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                          [3U] >> 0x10U))),32);
        bufp->chgSData(oldp+330,((0xffffU & (IData)(
                                                    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                    [3U]))),16);
        bufp->chgIData(oldp+331,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+332,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+334,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                          [4U] >> 0x10U))),32);
        bufp->chgSData(oldp+335,((0xffffU & (IData)(
                                                    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                    [4U]))),16);
        bufp->chgIData(oldp+336,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+337,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+339,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                          [5U] >> 0x10U))),32);
        bufp->chgSData(oldp+340,((0xffffU & (IData)(
                                                    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                    [5U]))),16);
        bufp->chgIData(oldp+341,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+342,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+344,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                          [6U] >> 0x10U))),32);
        bufp->chgSData(oldp+345,((0xffffU & (IData)(
                                                    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                    [6U]))),16);
        bufp->chgIData(oldp+346,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+347,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+349,((IData)((vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                          [7U] >> 0x10U))),32);
        bufp->chgSData(oldp+350,((0xffffU & (IData)(
                                                    vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__job
                                                    [7U]))),16);
        bufp->chgIData(oldp+351,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result),32);
        bufp->chgQData(oldp+352,(vlSelfRef.dct8x8_chen_2d__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p),48);
        bufp->chgIData(oldp+354,(vlSelfRef.dct8x8_chen_2d__DOT__unnamedblk5__DOT__j),32);
    }
    bufp->chgBit(oldp+355,(vlSelfRef.clk));
    bufp->chgBit(oldp+356,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+357,(vlSelfRef.in_valid));
    bufp->chgBit(oldp+358,(vlSelfRef.in_ready));
    bufp->chgWData(oldp+359,(vlSelfRef.in_data),2048);
    bufp->chgBit(oldp+423,(vlSelfRef.out_valid));
    bufp->chgBit(oldp+424,(vlSelfRef.out_ready));
    bufp->chgWData(oldp+425,(vlSelfRef.out_data),2048);
    bufp->chgCData(oldp+489,(vlSelfRef.dct8x8_chen_2d__DOT__nstate),3);
}

void Vdct8x8_chen_2d___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdct8x8_chen_2d___024root__trace_cleanup\n"); );
    // Init
    Vdct8x8_chen_2d___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdct8x8_chen_2d___024root*>(voidSelf);
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
