// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrgb2ycbcr_quant.h for the primary calling header

#include "Vrgb2ycbcr_quant__pch.h"
#include "Vrgb2ycbcr_quant___024root.h"

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___eval_static(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_static\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___eval_initial__TOP(Vrgb2ycbcr_quant___024root* vlSelf);
VL_ATTR_COLD void Vrgb2ycbcr_quant___024root____Vm_traceActivitySetAll(Vrgb2ycbcr_quant___024root* vlSelf);

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___eval_initial(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_initial\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrgb2ycbcr_quant___024root___eval_initial__TOP(vlSelf);
    Vrgb2ycbcr_quant___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___eval_initial__TOP(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_initial__TOP\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__j = 0x40U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__j = 0x40U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0U] = 0x1000U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[1U] = 0x1746U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[2U] = 0x199aU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[3U] = 0x1000U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[4U] = 0xaabU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[5U] = 0x666U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[6U] = 0x505U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[7U] = 0x432U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[8U] = 0x1555U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[9U] = 0x1555U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0xaU] = 0x1249U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0xbU] = 0xd79U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0xcU] = 0x9d9U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0xdU] = 0x46aU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0xeU] = 0x444U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0xfU] = 0x4a8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x10U] = 0x1249U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x11U] = 0x13b1U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x12U] = 0x1000U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x13U] = 0xaabU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x14U] = 0x666U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x15U] = 0x47eU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x16U] = 0x3b6U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x17U] = 0x492U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x18U] = 0x1249U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x19U] = 0xf0fU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x1aU] = 0xba3U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x1bU] = 0x8d4U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x1cU] = 0x505U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x1dU] = 0x2f1U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x1eU] = 0x333U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x1fU] = 0x421U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x20U] = 0xe39U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x21U] = 0xba3U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x22U] = 0x6ebU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x23U] = 0x492U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x24U] = 0x3c4U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x25U] = 0x259U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x26U] = 0x27cU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x27U] = 0x353U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x28U] = 0xaabU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x29U] = 0x750U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x2aU] = 0x4a8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x2bU] = 0x400U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x2cU] = 0x329U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x2dU] = 0x276U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x2eU] = 0x244U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x2fU] = 0x2c8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x30U] = 0x539U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x31U] = 0x400U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x32U] = 0x348U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x33U] = 0x2f1U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x34U] = 0x27cU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x35U] = 0x21eU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x36U] = 0x222U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x37U] = 0x289U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x38U] = 0x38eU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x39U] = 0x2c8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x3aU] = 0x2b2U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x3bU] = 0x29dU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x3cU] = 0x249U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x3dU] = 0x28fU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x3eU] = 0x27cU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[0x3fU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0U] = 0xf0fU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[1U] = 0xe39U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[2U] = 0xaabU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[3U] = 0x572U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[4U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[5U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[6U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[7U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[8U] = 0xe39U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[9U] = 0xc31U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0xaU] = 0x9d9U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0xbU] = 0x3e1U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0xcU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0xdU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0xeU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0xfU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x10U] = 0xaabU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x11U] = 0x9d9U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x12U] = 0x492U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x13U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x14U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x15U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x16U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x17U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x18U] = 0x572U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x19U] = 0x3e1U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x1aU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x1bU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x1cU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x1dU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x1eU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x1fU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x20U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x21U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x22U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x23U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x24U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x25U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x26U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x27U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x28U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x29U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x2aU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x2bU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x2cU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x2dU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x2eU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x2fU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x30U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x31U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x32U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x33U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x34U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x35U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x36U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x37U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x38U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x39U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x3aU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x3bU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x3cU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x3dU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x3eU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[0x3fU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0U] = 0x1000U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[1U] = 0x1746U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[2U] = 0x199aU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[3U] = 0x1000U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[4U] = 0xaabU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[5U] = 0x666U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[6U] = 0x505U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[7U] = 0x432U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[8U] = 0x1555U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[9U] = 0x1555U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0xaU] = 0x1249U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0xbU] = 0xd79U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0xcU] = 0x9d9U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0xdU] = 0x46aU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0xeU] = 0x444U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0xfU] = 0x4a8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x10U] = 0x1249U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x11U] = 0x13b1U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x12U] = 0x1000U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x13U] = 0xaabU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x14U] = 0x666U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x15U] = 0x47eU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x16U] = 0x3b6U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x17U] = 0x492U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x18U] = 0x1249U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x19U] = 0xf0fU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x1aU] = 0xba3U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x1bU] = 0x8d4U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x1cU] = 0x505U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x1dU] = 0x2f1U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x1eU] = 0x333U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x1fU] = 0x421U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x20U] = 0xe39U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x21U] = 0xba3U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x22U] = 0x6ebU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x23U] = 0x492U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x24U] = 0x3c4U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x25U] = 0x259U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x26U] = 0x27cU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x27U] = 0x353U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x28U] = 0xaabU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x29U] = 0x750U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x2aU] = 0x4a8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x2bU] = 0x400U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x2cU] = 0x329U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x2dU] = 0x276U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x2eU] = 0x244U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x2fU] = 0x2c8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x30U] = 0x539U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x31U] = 0x400U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x32U] = 0x348U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x33U] = 0x2f1U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x34U] = 0x27cU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x35U] = 0x21eU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x36U] = 0x222U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x37U] = 0x289U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x38U] = 0x38eU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x39U] = 0x2c8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x3aU] = 0x2b2U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x3bU] = 0x29dU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x3cU] = 0x249U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x3dU] = 0x28fU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x3eU] = 0x27cU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[0x3fU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0U] = 0xf0fU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[1U] = 0xe39U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[2U] = 0xaabU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[3U] = 0x572U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[4U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[5U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[6U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[7U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[8U] = 0xe39U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[9U] = 0xc31U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0xaU] = 0x9d9U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0xbU] = 0x3e1U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0xcU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0xdU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0xeU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0xfU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x10U] = 0xaabU;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x11U] = 0x9d9U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x12U] = 0x492U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x13U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x14U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x15U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x16U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x17U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x18U] = 0x572U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x19U] = 0x3e1U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x1aU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x1bU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x1cU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x1dU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x1eU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x1fU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x20U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x21U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x22U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x23U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x24U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x25U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x26U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x27U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x28U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x29U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x2aU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x2bU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x2cU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x2dU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x2eU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x2fU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x30U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x31U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x32U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x33U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x34U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x35U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x36U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x37U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x38U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x39U] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x3aU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x3bU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x3cU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x3dU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x3eU] = 0x296U;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[0x3fU] = 0x296U;
}

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___eval_final(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_final\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___dump_triggers__stl(Vrgb2ycbcr_quant___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrgb2ycbcr_quant___024root___eval_phase__stl(Vrgb2ycbcr_quant___024root* vlSelf);

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___eval_settle(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_settle\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vrgb2ycbcr_quant___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/rgb2ycbcr_quant.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vrgb2ycbcr_quant___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___dump_triggers__stl(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___dump_triggers__stl\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___stl_sequent__TOP__0(Vrgb2ycbcr_quant___024root* vlSelf);

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___eval_stl(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_stl\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vrgb2ycbcr_quant___024root___stl_sequent__TOP__0(vlSelf);
        Vrgb2ycbcr_quant___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 16> Vrgb2ycbcr_quant__ConstPool__TABLE_hd61edfd7_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vrgb2ycbcr_quant__ConstPool__TABLE_hf28795f5_0;

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___stl_sequent__TOP__0(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___stl_sequent__TOP__0\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
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
    vlSelfRef.out_valid = (4U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__we_trans 
        = ((2U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)) 
           & (5U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state)));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [2U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                  [1U] << 8U) | vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                 [0U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [3U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [5U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                               [4U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                        [3U] >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [7U] << 0x18U) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                [6U] 
                                                << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                          [8U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                               [7U] 
                                               >> 8U)) 
                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                      [6U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0xbU] << 0x18U) | ((
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                   [0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                     [9U] 
                                                     << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [0xeU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                    [0xdU] << 8U) | 
                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                   [0xcU])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [0xfU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x11U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                               [0x10U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                           [0xfU] >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x13U] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                   [0x12U] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                          [0x14U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                  [0x13U] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x12U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x17U] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                    [0x16U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                      [0x15U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [0x1aU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                     [0x19U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                    [0x18U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [0x1bU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x1dU] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                               [0x1cU]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                           [0x1bU] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x1fU] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                   [0x1eU] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                          [0x20U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                  [0x1fU] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x1eU] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x23U] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                    [0x22U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                      [0x21U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [0x26U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                     [0x25U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                    [0x24U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [0x27U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x29U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                               [0x28U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                           [0x27U] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x2bU] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                   [0x2aU] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                          [0x2cU]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                  [0x2bU] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x2aU] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x2fU] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                    [0x2eU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                      [0x2dU] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [0x32U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                     [0x31U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                    [0x30U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [0x33U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x35U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                               [0x34U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                           [0x33U] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x37U] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                   [0x36U] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                          [0x38U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                  [0x37U] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                         [0x36U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                              [0x3bU] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                    [0x3aU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                                      [0x39U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
               [0x3eU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                     [0x3dU] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
                                    [0x3cU])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer
              [0x3fU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [2U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                  [1U] << 8U) | vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                 [0U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [3U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [5U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                               [4U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                        [3U] >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [7U] << 0x18U) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                [6U] 
                                                << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                          [8U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                               [7U] 
                                               >> 8U)) 
                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                      [6U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0xbU] << 0x18U) | ((
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                   [0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                     [9U] 
                                                     << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [0xeU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                    [0xdU] << 8U) | 
                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                   [0xcU])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [0xfU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x11U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                               [0x10U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                           [0xfU] >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x13U] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                   [0x12U] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                          [0x14U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                  [0x13U] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x12U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x17U] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                    [0x16U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                      [0x15U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [0x1aU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                     [0x19U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                    [0x18U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [0x1bU] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x1dU] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                               [0x1cU]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                           [0x1bU] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x1fU] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                   [0x1eU] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                          [0x20U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                  [0x1fU] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x1eU] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x23U] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                    [0x22U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                      [0x21U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [0x26U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                     [0x25U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                    [0x24U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [0x27U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x29U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                               [0x28U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                           [0x27U] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x2bU] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                   [0x2aU] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                          [0x2cU]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                  [0x2bU] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x2aU] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x2fU] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                    [0x2eU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                      [0x2dU] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [0x32U] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                     [0x31U] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                    [0x30U])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [0x33U] << 0x18U));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU] 
        = ((0xffff0000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU]) 
           | (0xffffffU & ((0xffff00U & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x35U] << 8U)) 
                           | ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                               [0x34U]) | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                           [0x33U] 
                                           >> 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU] 
        = ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU]) 
           | (0xffff0000U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x37U] << 0x18U) | (
                                                   vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                   [0x36U] 
                                                   << 0x10U))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU] 
        = ((0xffffff00U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU]) 
           | (0xffffU & ((0xffffU & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                          [0x38U]) | ((0xffffU & (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                  [0x37U] 
                                                  >> 8U)) 
                                      | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                         [0x36U] >> 0x10U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU] 
        = ((0xffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU]) 
           | (0xffffff00U & ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                              [0x3bU] << 0x18U) | (
                                                   (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                    [0x3aU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                                      [0x39U] 
                                                      << 8U)))));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU] 
        = ((0xff000000U & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU]) 
           | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
               [0x3eU] << 0x10U) | ((vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                     [0x3dU] << 8U) 
                                    | vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
                                    [0x3cU])));
    vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU] 
        = ((0xffffffU & vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU]) 
           | (vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer
              [0x3fU] << 0x18U));
    if ((0U == (IData)(vlSelfRef.component_sel))) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_data[__Vilp1] 
                = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_done 
            = vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_luma;
        vlSelfRef.out_data[0U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0U];
        vlSelfRef.out_data[1U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[1U];
        vlSelfRef.out_data[2U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[2U];
        vlSelfRef.out_data[3U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[3U];
        vlSelfRef.out_data[4U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[4U];
        vlSelfRef.out_data[5U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[5U];
        vlSelfRef.out_data[6U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[6U];
        vlSelfRef.out_data[7U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[7U];
        vlSelfRef.out_data[8U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[8U];
        vlSelfRef.out_data[9U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[9U];
        vlSelfRef.out_data[0xaU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xaU];
        vlSelfRef.out_data[0xbU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xbU];
        vlSelfRef.out_data[0xcU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xcU];
        vlSelfRef.out_data[0xdU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xdU];
        vlSelfRef.out_data[0xeU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xeU];
        vlSelfRef.out_data[0xfU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_luma[0xfU];
    } else {
        if ((1U == (IData)(vlSelfRef.component_sel))) {
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
        vlSelfRef.rgb2ycbcr_quant__DOT__quant_done 
            = vlSelfRef.rgb2ycbcr_quant__DOT__quant_done_chroma;
        vlSelfRef.out_data[0U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0U];
        vlSelfRef.out_data[1U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[1U];
        vlSelfRef.out_data[2U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[2U];
        vlSelfRef.out_data[3U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[3U];
        vlSelfRef.out_data[4U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[4U];
        vlSelfRef.out_data[5U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[5U];
        vlSelfRef.out_data[6U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[6U];
        vlSelfRef.out_data[7U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[7U];
        vlSelfRef.out_data[8U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[8U];
        vlSelfRef.out_data[9U] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[9U];
        vlSelfRef.out_data[0xaU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xaU];
        vlSelfRef.out_data[0xbU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xbU];
        vlSelfRef.out_data[0xcU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xcU];
        vlSelfRef.out_data[0xdU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xdU];
        vlSelfRef.out_data[0xeU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xeU];
        vlSelfRef.out_data[0xfU] = vlSelfRef.rgb2ycbcr_quant__DOT__q_result_chroma[0xfU];
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in_valid 
        = ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)) 
           | (3U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)));
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
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_in_valid = 
        ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state)) 
         & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__done_reg));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_start = (
                                                   (2U 
                                                    == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state)) 
                                                   & (5U 
                                                      == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__state)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [0U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [0U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [1U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [1U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [2U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [2U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [3U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [3U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [4U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [4U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [5U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [5U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [6U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [6U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in
                                                [7U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in
                                                   [7U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [0U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [0U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [1U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [1U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [2U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [2U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [3U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [3U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [4U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [4U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [5U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [5U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [6U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [6U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in
                                                [7U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in
                                                   [7U])))));
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p, 0x10U)));
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
    vlSelfRef.in_ready = (0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__current_state));
    __Vtableidx2 = (((IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in_valid) 
                     << 3U) | (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state));
    vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__nstate 
        = Vrgb2ycbcr_quant__ConstPool__TABLE_hd61edfd7_0
        [__Vtableidx2];
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
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[0U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[1U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[2U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[3U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[4U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[5U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[6U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[7U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[0U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[1U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[2U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[3U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[4U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[5U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[6U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
    vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[7U] 
        = vlSelfRef.rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
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
    vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion 
        = ((IData)(vlSelfRef.in_ready) & (IData)(vlSelfRef.in_valid));
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
        vlSelfRef.rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk5__DOT__j = 8U;
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
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__k = 8U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state 
        = vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state;
    if ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))) {
        if (vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion) {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))) {
        if ((7U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count))) {
            vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state = 0U;
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[0U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[1U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[2U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[3U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[4U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[5U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[6U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[7U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[0U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[1U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[2U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[3U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[4U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[5U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[6U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[7U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[0U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[1U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[2U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[3U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[4U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[5U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[6U] = 0U;
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[7U] = 0U;
    if (((1U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state)) 
         | ((0U == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state)) 
            & (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__start_conversion)))) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__k = 8U;
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.r_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.r_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.g_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.g_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[0U] 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                         ? 0U
                                                         : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((0U 
                                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                       ? 0U
                                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                               ((0U 
                                                                 == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                 ? 0U
                                                                 : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (VL_SHIFTL_III(9,32,32, 
                                                           ((0U 
                                                             == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[1U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(8U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(8U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[2U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x10U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x10U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[3U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x18U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x18U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[4U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x20U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x20U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[5U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x28U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x28U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x28U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x28U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[6U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x30U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x30U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x30U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x30U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[7U] 
            = (0xffU & (((0U == (0x1fU & ((IData)(0x38U) 
                                          + VL_SHIFTL_III(9,32,32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                            ? 0U
                                                            : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))
                          ? 0U : (vlSelfRef.b_all[(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        + 
                                                        VL_SHIFTL_III(9,32,32, 
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                        ? 0U
                                                                        : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))) 
                                                   >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x38U) 
                                                  + 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                ((0U 
                                                                  == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)))))) 
                        | (vlSelfRef.b_all[(0xfU & 
                                            (((IData)(0x38U) 
                                              + VL_SHIFTL_III(9,32,32, 
                                                              ((0U 
                                                                == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(9,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count)), 6U))))));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8bU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9916U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322cU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x26458U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4c8b0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x99160U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b32U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5664U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc8U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15990U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2b320U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x56640U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1322c0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0xacc80U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x264580U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x159900U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x9645U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x25914U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b228U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x96450U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x12c8a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cdU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99aU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x15334U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a668U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x54cd0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa99a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x259140U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x153340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x35978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x6b2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0xd65e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1acbc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x4b2280U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x2a6680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result 
            = (0xffffffU & ((IData)(0x359780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [0U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [1U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [2U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [3U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [4U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [5U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [6U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2fU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5eU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bcU) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe978U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x1d2f0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x3a5e0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x8000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x10000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x20000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x40000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x80000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x100000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x74bc0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x200000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result = 0U;
    if ((1U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((2U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a0U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((4U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x5340U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((8U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa680U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x10U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x14d00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x20U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x29a00U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x40U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x53400U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    if ((0x80U & vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core
         [7U])) {
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xe9780U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0x400000U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result));
        vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result 
            = (0xffffffU & ((IData)(0xa6800U) + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result));
    }
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[0U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[0U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[0U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[1U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[1U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[1U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[2U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[2U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[2U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[3U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[3U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[3U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[4U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[4U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[4U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[5U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[5U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[5U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[6U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[6U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[6U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[7U] 
        = (((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result 
             + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result) 
            + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result) 
           - (IData)(0x800000U));
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[7U] 
        = (((- vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result) 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result) 
           + vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result);
    vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[7U] 
        = ((vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result 
            - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result) 
           - vlSelfRef.rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result);
}

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___eval_triggers__stl(Vrgb2ycbcr_quant___024root* vlSelf);

VL_ATTR_COLD bool Vrgb2ycbcr_quant___024root___eval_phase__stl(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___eval_phase__stl\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrgb2ycbcr_quant___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vrgb2ycbcr_quant___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___dump_triggers__ico(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___dump_triggers__ico\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___dump_triggers__act(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___dump_triggers__act\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___dump_triggers__nba(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___dump_triggers__nba\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root____Vm_traceActivitySetAll(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root____Vm_traceActivitySetAll\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root___ctor_var_reset(Vrgb2ycbcr_quant___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb2ycbcr_quant___024root___ctor_var_reset\n"); );
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->in_valid = VL_RAND_RESET_I(1);
    vlSelf->in_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->r_all);
    VL_RAND_RESET_W(512, vlSelf->g_all);
    VL_RAND_RESET_W(512, vlSelf->b_all);
    vlSelf->component_sel = VL_RAND_RESET_I(2);
    vlSelf->out_valid = VL_RAND_RESET_I(1);
    vlSelf->out_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->out_data);
    vlSelf->rgb2ycbcr_quant__DOT__start_conversion = VL_RAND_RESET_I(1);
    vlSelf->rgb2ycbcr_quant__DOT__dct_in_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->rgb2ycbcr_quant__DOT__dct_in_data);
    VL_RAND_RESET_W(2048, vlSelf->rgb2ycbcr_quant__DOT__dct_out_data);
    vlSelf->rgb2ycbcr_quant__DOT__quant_start = VL_RAND_RESET_I(1);
    vlSelf->rgb2ycbcr_quant__DOT__quant_done_luma = VL_RAND_RESET_I(1);
    vlSelf->rgb2ycbcr_quant__DOT__quant_done_chroma = VL_RAND_RESET_I(1);
    vlSelf->rgb2ycbcr_quant__DOT__quant_done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->rgb2ycbcr_quant__DOT__q_result_luma);
    VL_RAND_RESET_W(512, vlSelf->rgb2ycbcr_quant__DOT__q_result_chroma);
    vlSelf->rgb2ycbcr_quant__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->rgb2ycbcr_quant__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__batch_count = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(2048, vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_reg);
    VL_RAND_RESET_W(2048, vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_reg);
    VL_RAND_RESET_W(2048, vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_reg);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__done_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__r_core[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__g_core[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__b_core[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__y_core[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cb_core[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__cr_core[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__0__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__1__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__2__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__3__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__4__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__5__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__6__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__y_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cb_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_r_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_g_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__rgb2ycbcr_inst__DOT__converter_cores__BRA__7__KET____DOT__converter__DOT__cr_b_mul__DOT__result = VL_RAND_RESET_I(24);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt = VL_RAND_RESET_I(3);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__input_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__output_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__trans_buff[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__we_trans = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__wdata_trans[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__raddr_trans[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__rdata_trans[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__core_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__core_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s0 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s1 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s2 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__s3 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d0 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d1 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d2 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__d3 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e0 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e1 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e2 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__e3 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b0 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b2 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b3 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b4 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b5 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b6 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__b7 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__y[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b1 = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__t_b5 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__job[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mul_y[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__dct_inst__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__cycle_cnt = VL_RAND_RESET_I(3);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__addr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__luma_table_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__chroma_table_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__result_buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__pixel_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__qtable_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__mul_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_luma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__cycle_cnt = VL_RAND_RESET_I(3);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__addr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__luma_table_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__chroma_table_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__result_buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__pixel_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__qtable_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__mul_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result = VL_RAND_RESET_I(32);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->rgb2ycbcr_quant__DOT__quant_chroma_inst__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p = VL_RAND_RESET_Q(48);
    vlSelf->__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__row_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__rgb2ycbcr_quant__DOT__dct_inst__DOT__col_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
