// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect.h for the primary calling header

#include "Vconnect__pch.h"
#include "Vconnect___024root.h"

VL_ATTR_COLD void Vconnect___024root___eval_static(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_static\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vconnect___024root___eval_initial__TOP(Vconnect___024root* vlSelf);
VL_ATTR_COLD void Vconnect___024root____Vm_traceActivitySetAll(Vconnect___024root* vlSelf);

VL_ATTR_COLD void Vconnect___024root___eval_initial(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_initial\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconnect___024root___eval_initial__TOP(vlSelf);
    Vconnect___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vconnect___024root___eval_initial__TOP(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_initial__TOP\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.connect__DOT__quant_y__DOT__j = 0x40U;
    vlSelfRef.connect__DOT__quant_cb__DOT__j = 0x40U;
    vlSelfRef.connect__DOT__quant_cr__DOT__j = 0x40U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0U] = 0x1000U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[1U] = 0x1746U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[2U] = 0x199aU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[3U] = 0x1000U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[4U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[5U] = 0x666U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[6U] = 0x505U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[7U] = 0x432U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[8U] = 0x1555U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[9U] = 0x1555U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0xaU] = 0x1249U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0xbU] = 0xd79U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0xcU] = 0x9d9U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0xdU] = 0x46aU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0xeU] = 0x444U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0xfU] = 0x4a8U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x10U] = 0x1249U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x11U] = 0x13b1U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x12U] = 0x1000U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x13U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x14U] = 0x666U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x15U] = 0x47eU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x16U] = 0x3b6U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x17U] = 0x492U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x18U] = 0x1249U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x19U] = 0xf0fU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x1aU] = 0xba3U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x1bU] = 0x8d4U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x1cU] = 0x505U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x1dU] = 0x2f1U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x1eU] = 0x333U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x1fU] = 0x421U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x20U] = 0xe39U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x21U] = 0xba3U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x22U] = 0x6ebU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x23U] = 0x492U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x24U] = 0x3c4U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x25U] = 0x259U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x26U] = 0x27cU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x27U] = 0x353U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x28U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x29U] = 0x750U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x2aU] = 0x4a8U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x2bU] = 0x400U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x2cU] = 0x329U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x2dU] = 0x276U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x2eU] = 0x244U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x2fU] = 0x2c8U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x30U] = 0x539U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x31U] = 0x400U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x32U] = 0x348U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x33U] = 0x2f1U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x34U] = 0x27cU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x35U] = 0x21eU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x36U] = 0x222U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x37U] = 0x289U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x38U] = 0x38eU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x39U] = 0x2c8U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x3aU] = 0x2b2U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x3bU] = 0x29dU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x3cU] = 0x249U;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x3dU] = 0x28fU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x3eU] = 0x27cU;
    vlSelfRef.connect__DOT__quant_y__DOT__luma_table_rom[0x3fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0U] = 0xf0fU;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[1U] = 0xe39U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[2U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[3U] = 0x572U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[4U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[5U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[6U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[7U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[8U] = 0xe39U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[9U] = 0xc31U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0xaU] = 0x9d9U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0xbU] = 0x3e1U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0xcU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0xdU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0xeU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0xfU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x10U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x11U] = 0x9d9U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x12U] = 0x492U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x13U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x14U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x15U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x16U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x17U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x18U] = 0x572U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x19U] = 0x3e1U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x1aU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x1bU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x1cU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x1dU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x1eU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x1fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x20U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x21U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x22U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x23U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x24U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x25U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x26U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x27U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x28U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x29U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x2aU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x2bU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x2cU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x2dU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x2eU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x2fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x30U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x31U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x32U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x33U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x34U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x35U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x36U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x37U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x38U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x39U] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x3aU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x3bU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x3cU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x3dU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x3eU] = 0x296U;
    vlSelfRef.connect__DOT__quant_y__DOT__chroma_table_rom[0x3fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0U] = 0x1000U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[1U] = 0x1746U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[2U] = 0x199aU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[3U] = 0x1000U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[4U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[5U] = 0x666U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[6U] = 0x505U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[7U] = 0x432U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[8U] = 0x1555U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[9U] = 0x1555U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0xaU] = 0x1249U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0xbU] = 0xd79U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0xcU] = 0x9d9U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0xdU] = 0x46aU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0xeU] = 0x444U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0xfU] = 0x4a8U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x10U] = 0x1249U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x11U] = 0x13b1U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x12U] = 0x1000U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x13U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x14U] = 0x666U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x15U] = 0x47eU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x16U] = 0x3b6U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x17U] = 0x492U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x18U] = 0x1249U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x19U] = 0xf0fU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x1aU] = 0xba3U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x1bU] = 0x8d4U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x1cU] = 0x505U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x1dU] = 0x2f1U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x1eU] = 0x333U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x1fU] = 0x421U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x20U] = 0xe39U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x21U] = 0xba3U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x22U] = 0x6ebU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x23U] = 0x492U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x24U] = 0x3c4U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x25U] = 0x259U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x26U] = 0x27cU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x27U] = 0x353U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x28U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x29U] = 0x750U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x2aU] = 0x4a8U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x2bU] = 0x400U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x2cU] = 0x329U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x2dU] = 0x276U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x2eU] = 0x244U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x2fU] = 0x2c8U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x30U] = 0x539U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x31U] = 0x400U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x32U] = 0x348U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x33U] = 0x2f1U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x34U] = 0x27cU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x35U] = 0x21eU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x36U] = 0x222U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x37U] = 0x289U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x38U] = 0x38eU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x39U] = 0x2c8U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x3aU] = 0x2b2U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x3bU] = 0x29dU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x3cU] = 0x249U;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x3dU] = 0x28fU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x3eU] = 0x27cU;
    vlSelfRef.connect__DOT__quant_cb__DOT__luma_table_rom[0x3fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0U] = 0xf0fU;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[1U] = 0xe39U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[2U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[3U] = 0x572U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[4U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[5U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[6U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[7U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[8U] = 0xe39U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[9U] = 0xc31U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0xaU] = 0x9d9U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0xbU] = 0x3e1U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0xcU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0xdU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0xeU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0xfU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x10U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x11U] = 0x9d9U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x12U] = 0x492U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x13U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x14U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x15U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x16U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x17U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x18U] = 0x572U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x19U] = 0x3e1U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x1aU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x1bU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x1cU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x1dU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x1eU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x1fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x20U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x21U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x22U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x23U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x24U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x25U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x26U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x27U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x28U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x29U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x2aU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x2bU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x2cU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x2dU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x2eU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x2fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x30U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x31U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x32U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x33U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x34U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x35U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x36U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x37U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x38U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x39U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x3aU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x3bU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x3cU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x3dU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x3eU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cb__DOT__chroma_table_rom[0x3fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0U] = 0x1000U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[1U] = 0x1746U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[2U] = 0x199aU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[3U] = 0x1000U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[4U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[5U] = 0x666U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[6U] = 0x505U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[7U] = 0x432U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[8U] = 0x1555U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[9U] = 0x1555U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0xaU] = 0x1249U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0xbU] = 0xd79U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0xcU] = 0x9d9U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0xdU] = 0x46aU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0xeU] = 0x444U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0xfU] = 0x4a8U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x10U] = 0x1249U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x11U] = 0x13b1U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x12U] = 0x1000U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x13U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x14U] = 0x666U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x15U] = 0x47eU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x16U] = 0x3b6U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x17U] = 0x492U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x18U] = 0x1249U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x19U] = 0xf0fU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x1aU] = 0xba3U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x1bU] = 0x8d4U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x1cU] = 0x505U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x1dU] = 0x2f1U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x1eU] = 0x333U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x1fU] = 0x421U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x20U] = 0xe39U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x21U] = 0xba3U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x22U] = 0x6ebU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x23U] = 0x492U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x24U] = 0x3c4U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x25U] = 0x259U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x26U] = 0x27cU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x27U] = 0x353U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x28U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x29U] = 0x750U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x2aU] = 0x4a8U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x2bU] = 0x400U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x2cU] = 0x329U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x2dU] = 0x276U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x2eU] = 0x244U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x2fU] = 0x2c8U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x30U] = 0x539U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x31U] = 0x400U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x32U] = 0x348U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x33U] = 0x2f1U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x34U] = 0x27cU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x35U] = 0x21eU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x36U] = 0x222U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x37U] = 0x289U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x38U] = 0x38eU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x39U] = 0x2c8U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x3aU] = 0x2b2U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x3bU] = 0x29dU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x3cU] = 0x249U;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x3dU] = 0x28fU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x3eU] = 0x27cU;
    vlSelfRef.connect__DOT__quant_cr__DOT__luma_table_rom[0x3fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0U] = 0xf0fU;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[1U] = 0xe39U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[2U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[3U] = 0x572U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[4U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[5U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[6U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[7U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[8U] = 0xe39U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[9U] = 0xc31U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0xaU] = 0x9d9U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0xbU] = 0x3e1U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0xcU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0xdU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0xeU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0xfU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x10U] = 0xaabU;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x11U] = 0x9d9U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x12U] = 0x492U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x13U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x14U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x15U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x16U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x17U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x18U] = 0x572U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x19U] = 0x3e1U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x1aU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x1bU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x1cU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x1dU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x1eU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x1fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x20U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x21U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x22U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x23U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x24U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x25U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x26U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x27U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x28U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x29U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x2aU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x2bU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x2cU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x2dU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x2eU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x2fU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x30U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x31U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x32U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x33U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x34U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x35U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x36U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x37U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x38U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x39U] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x3aU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x3bU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x3cU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x3dU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x3eU] = 0x296U;
    vlSelfRef.connect__DOT__quant_cr__DOT__chroma_table_rom[0x3fU] = 0x296U;
}

VL_ATTR_COLD void Vconnect___024root___eval_final(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_final\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect___024root___dump_triggers__stl(Vconnect___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconnect___024root___eval_phase__stl(Vconnect___024root* vlSelf);

VL_ATTR_COLD void Vconnect___024root___eval_settle(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_settle\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vconnect___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/connect.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconnect___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect___024root___dump_triggers__stl(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___dump_triggers__stl\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vconnect___024root___stl_sequent__TOP__0(Vconnect___024root* vlSelf);

VL_ATTR_COLD void Vconnect___024root___eval_stl(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___eval_stl\n"); );
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vconnect___024root___stl_sequent__TOP__0(vlSelf);
        Vconnect___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 16> Vconnect__ConstPool__TABLE_hd61edfd7_0;

VL_ATTR_COLD void Vconnect___024root___stl_sequent__TOP__0(Vconnect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.y_quantized[0U] = (IData)((((QData)((IData)(
                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                            [2U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [1U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [0U]))));
    vlSelfRef.y_quantized[1U] = ((0xffff0000U & vlSelfRef.y_quantized[1U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [2U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [1U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0U]))) 
                                            >> 0x20U)));
    vlSelfRef.y_quantized[1U] = ((0xffffU & vlSelfRef.y_quantized[1U]) 
                                 | ((IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [5U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [4U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [3U])))) 
                                    << 0x10U));
    vlSelfRef.y_quantized[2U] = (((IData)((((QData)((IData)(
                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [5U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [4U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [3U])))) 
                                  >> 0x10U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                            [5U] 
                                                                            << 0x10U) 
                                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [4U]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [3U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelfRef.y_quantized[3U] = (IData)((((QData)((IData)(
                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                            [8U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [7U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [6U]))));
    vlSelfRef.y_quantized[4U] = ((0xffff0000U & vlSelfRef.y_quantized[4U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [8U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [7U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [6U]))) 
                                            >> 0x20U)));
    vlSelfRef.y_quantized[4U] = ((0xffffU & vlSelfRef.y_quantized[4U]) 
                                 | ((IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0xbU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0xaU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [9U])))) 
                                    << 0x10U));
    vlSelfRef.y_quantized[5U] = (((IData)((((QData)((IData)(
                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0xbU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0xaU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [9U])))) 
                                  >> 0x10U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                            [0xbU] 
                                                                            << 0x10U) 
                                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [0xaU]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [9U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelfRef.y_quantized[6U] = (IData)((((QData)((IData)(
                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                            [0xeU] 
                                                            << 0x10U) 
                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [0xdU]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [0xcU]))));
    vlSelfRef.y_quantized[7U] = ((0xffff0000U & vlSelfRef.y_quantized[7U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0xeU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0xdU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0xcU]))) 
                                            >> 0x20U)));
    vlSelfRef.y_quantized[7U] = ((0xffffU & vlSelfRef.y_quantized[7U]) 
                                 | ((IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x11U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x10U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0xfU])))) 
                                    << 0x10U));
    vlSelfRef.y_quantized[8U] = (((IData)((((QData)((IData)(
                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x11U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0x10U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0xfU])))) 
                                  >> 0x10U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                            [0x11U] 
                                                                            << 0x10U) 
                                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [0x10U]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                           [0xfU]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelfRef.y_quantized[9U] = (IData)((((QData)((IData)(
                                                          ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                            [0x14U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [0x13U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                           [0x12U]))));
    vlSelfRef.y_quantized[0xaU] = ((0xffff0000U & vlSelfRef.y_quantized[0xaU]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x14U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x13U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x12U]))) 
                                              >> 0x20U)));
    vlSelfRef.y_quantized[0xaU] = ((0xffffU & vlSelfRef.y_quantized[0xaU]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x17U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x16U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x15U])))) 
                                      << 0x10U));
    vlSelfRef.y_quantized[0xbU] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x17U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x16U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x15U])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x17U] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                             [0x16U]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                             [0x15U]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.y_quantized[0xcU] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x1aU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0x19U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0x18U]))));
    vlSelfRef.y_quantized[0xdU] = ((0xffff0000U & vlSelfRef.y_quantized[0xdU]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x1aU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x19U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x18U]))) 
                                              >> 0x20U)));
    vlSelfRef.y_quantized[0xdU] = ((0xffffU & vlSelfRef.y_quantized[0xdU]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x1dU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x1cU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x1bU])))) 
                                      << 0x10U));
    vlSelfRef.y_quantized[0xeU] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x1dU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x1cU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x1bU])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x1dU] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                             [0x1cU]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                             [0x1bU]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.y_quantized[0xfU] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x20U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0x1fU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                             [0x1eU]))));
    vlSelfRef.y_quantized[0x10U] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x10U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x20U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x1fU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x1eU]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x10U] = ((0xffffU & vlSelfRef.y_quantized[0x10U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x23U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x22U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x21U])))) 
                                       << 0x10U));
    vlSelfRef.y_quantized[0x11U] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x23U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x22U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x21U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                               [0x23U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x22U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x21U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.y_quantized[0x12U] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x26U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x25U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x24U]))));
    vlSelfRef.y_quantized[0x13U] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x13U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x26U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x25U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x24U]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x13U] = ((0xffffU & vlSelfRef.y_quantized[0x13U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x29U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x28U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x27U])))) 
                                       << 0x10U));
    vlSelfRef.y_quantized[0x14U] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x29U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x28U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x27U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                               [0x29U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x28U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x27U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.y_quantized[0x15U] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x2cU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x2bU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x2aU]))));
    vlSelfRef.y_quantized[0x16U] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x16U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x2cU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x2bU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x2aU]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x16U] = ((0xffffU & vlSelfRef.y_quantized[0x16U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x2fU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x2eU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x2dU])))) 
                                       << 0x10U));
    vlSelfRef.y_quantized[0x17U] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x2fU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x2eU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x2dU])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                               [0x2fU] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x2eU]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x2dU]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.y_quantized[0x18U] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x32U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x31U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x30U]))));
    vlSelfRef.y_quantized[0x19U] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x19U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x32U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x31U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x30U]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x19U] = ((0xffffU & vlSelfRef.y_quantized[0x19U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x35U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x34U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x33U])))) 
                                       << 0x10U));
    vlSelfRef.y_quantized[0x1aU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x35U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x34U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x33U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                               [0x35U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x34U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x33U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.y_quantized[0x1bU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x38U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x37U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x36U]))));
    vlSelfRef.y_quantized[0x1cU] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x1cU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x38U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x37U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x36U]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x1cU] = ((0xffffU & vlSelfRef.y_quantized[0x1cU]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x3bU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x3aU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x39U])))) 
                                       << 0x10U));
    vlSelfRef.y_quantized[0x1dU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                 [0x3bU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x3aU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                [0x39U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                               [0x3bU] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x3aU]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                              [0x39U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.y_quantized[0x1eU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                               [0x3eU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x3dU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                              [0x3cU]))));
    vlSelfRef.y_quantized[0x1fU] = ((0xffff0000U & 
                                     vlSelfRef.y_quantized[0x1fU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                   [0x3eU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x3dU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                                                  [0x3cU]))) 
                                               >> 0x20U)));
    vlSelfRef.y_quantized[0x1fU] = ((0xffffU & vlSelfRef.y_quantized[0x1fU]) 
                                    | (vlSelfRef.connect__DOT__quant_y__DOT__result_buffer
                                       [0x3fU] << 0x10U));
    vlSelfRef.cb_quantized[0U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                             [2U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [1U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [0U]))));
    vlSelfRef.cb_quantized[1U] = ((0xffff0000U & vlSelfRef.cb_quantized[1U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [2U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [1U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0U]))) 
                                             >> 0x20U)));
    vlSelfRef.cb_quantized[1U] = ((0xffffU & vlSelfRef.cb_quantized[1U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [5U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [4U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [3U])))) 
                                     << 0x10U));
    vlSelfRef.cb_quantized[2U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [5U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [4U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [3U])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                             [5U] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [4U]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [3U]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cb_quantized[3U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                             [8U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [7U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [6U]))));
    vlSelfRef.cb_quantized[4U] = ((0xffff0000U & vlSelfRef.cb_quantized[4U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [8U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [7U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [6U]))) 
                                             >> 0x20U)));
    vlSelfRef.cb_quantized[4U] = ((0xffffU & vlSelfRef.cb_quantized[4U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0xbU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0xaU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [9U])))) 
                                     << 0x10U));
    vlSelfRef.cb_quantized[5U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0xbU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0xaU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [9U])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                             [0xbU] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [0xaU]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [9U]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cb_quantized[6U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                             [0xeU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [0xdU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [0xcU]))));
    vlSelfRef.cb_quantized[7U] = ((0xffff0000U & vlSelfRef.cb_quantized[7U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0xeU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0xdU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0xcU]))) 
                                             >> 0x20U)));
    vlSelfRef.cb_quantized[7U] = ((0xffffU & vlSelfRef.cb_quantized[7U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x11U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x10U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0xfU])))) 
                                     << 0x10U));
    vlSelfRef.cb_quantized[8U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x11U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0x10U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0xfU])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                             [0x11U] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [0x10U]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                            [0xfU]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cb_quantized[9U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                             [0x14U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [0x13U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                            [0x12U]))));
    vlSelfRef.cb_quantized[0xaU] = ((0xffff0000U & 
                                     vlSelfRef.cb_quantized[0xaU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x14U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x13U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x12U]))) 
                                               >> 0x20U)));
    vlSelfRef.cb_quantized[0xaU] = ((0xffffU & vlSelfRef.cb_quantized[0xaU]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x17U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x16U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x15U])))) 
                                       << 0x10U));
    vlSelfRef.cb_quantized[0xbU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x17U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x16U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x15U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x17U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                              [0x16U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                              [0x15U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.cb_quantized[0xcU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x1aU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0x19U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0x18U]))));
    vlSelfRef.cb_quantized[0xdU] = ((0xffff0000U & 
                                     vlSelfRef.cb_quantized[0xdU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x1aU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x19U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x18U]))) 
                                               >> 0x20U)));
    vlSelfRef.cb_quantized[0xdU] = ((0xffffU & vlSelfRef.cb_quantized[0xdU]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x1dU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x1cU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x1bU])))) 
                                       << 0x10U));
    vlSelfRef.cb_quantized[0xeU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x1dU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x1cU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x1bU])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x1dU] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                              [0x1cU]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                              [0x1bU]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.cb_quantized[0xfU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x20U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0x1fU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                              [0x1eU]))));
    vlSelfRef.cb_quantized[0x10U] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x10U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x20U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x1fU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x1eU]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x10U] = ((0xffffU & vlSelfRef.cb_quantized[0x10U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x23U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x22U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x21U])))) 
                                        << 0x10U));
    vlSelfRef.cb_quantized[0x11U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x23U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x22U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x21U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                                [0x23U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x22U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x21U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cb_quantized[0x12U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x26U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x25U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x24U]))));
    vlSelfRef.cb_quantized[0x13U] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x13U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x26U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x25U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x24U]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x13U] = ((0xffffU & vlSelfRef.cb_quantized[0x13U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x29U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x28U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x27U])))) 
                                        << 0x10U));
    vlSelfRef.cb_quantized[0x14U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x29U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x28U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x27U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                                [0x29U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x28U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x27U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cb_quantized[0x15U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x2cU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x2bU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x2aU]))));
    vlSelfRef.cb_quantized[0x16U] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x16U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x2cU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x2bU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x2aU]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x16U] = ((0xffffU & vlSelfRef.cb_quantized[0x16U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x2fU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x2eU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x2dU])))) 
                                        << 0x10U));
    vlSelfRef.cb_quantized[0x17U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x2fU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x2eU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x2dU])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                                [0x2fU] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x2eU]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x2dU]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cb_quantized[0x18U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x32U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x31U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x30U]))));
    vlSelfRef.cb_quantized[0x19U] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x19U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x32U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x31U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x30U]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x19U] = ((0xffffU & vlSelfRef.cb_quantized[0x19U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x35U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x34U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x33U])))) 
                                        << 0x10U));
    vlSelfRef.cb_quantized[0x1aU] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x35U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x34U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x33U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                                [0x35U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x34U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x33U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cb_quantized[0x1bU] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x38U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x37U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x36U]))));
    vlSelfRef.cb_quantized[0x1cU] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x1cU]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x38U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x37U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x36U]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x1cU] = ((0xffffU & vlSelfRef.cb_quantized[0x1cU]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x3bU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x3aU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x39U])))) 
                                        << 0x10U));
    vlSelfRef.cb_quantized[0x1dU] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                  [0x3bU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x3aU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                 [0x39U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                                [0x3bU] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x3aU]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                               [0x39U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cb_quantized[0x1eU] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                [0x3eU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x3dU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                               [0x3cU]))));
    vlSelfRef.cb_quantized[0x1fU] = ((0xffff0000U & 
                                      vlSelfRef.cb_quantized[0x1fU]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                    [0x3eU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x3dU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                                                   [0x3cU]))) 
                                                >> 0x20U)));
    vlSelfRef.cb_quantized[0x1fU] = ((0xffffU & vlSelfRef.cb_quantized[0x1fU]) 
                                     | (vlSelfRef.connect__DOT__quant_cb__DOT__result_buffer
                                        [0x3fU] << 0x10U));
    vlSelfRef.cr_quantized[0U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                             [2U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [1U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [0U]))));
    vlSelfRef.cr_quantized[1U] = ((0xffff0000U & vlSelfRef.cr_quantized[1U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [2U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [1U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0U]))) 
                                             >> 0x20U)));
    vlSelfRef.cr_quantized[1U] = ((0xffffU & vlSelfRef.cr_quantized[1U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [5U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [4U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [3U])))) 
                                     << 0x10U));
    vlSelfRef.cr_quantized[2U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [5U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [4U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [3U])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                             [5U] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [4U]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [3U]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cr_quantized[3U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                             [8U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [7U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [6U]))));
    vlSelfRef.cr_quantized[4U] = ((0xffff0000U & vlSelfRef.cr_quantized[4U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [8U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [7U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [6U]))) 
                                             >> 0x20U)));
    vlSelfRef.cr_quantized[4U] = ((0xffffU & vlSelfRef.cr_quantized[4U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0xbU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0xaU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [9U])))) 
                                     << 0x10U));
    vlSelfRef.cr_quantized[5U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0xbU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0xaU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [9U])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                             [0xbU] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [0xaU]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [9U]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cr_quantized[6U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                             [0xeU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [0xdU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [0xcU]))));
    vlSelfRef.cr_quantized[7U] = ((0xffff0000U & vlSelfRef.cr_quantized[7U]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0xeU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0xdU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0xcU]))) 
                                             >> 0x20U)));
    vlSelfRef.cr_quantized[7U] = ((0xffffU & vlSelfRef.cr_quantized[7U]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x11U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x10U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0xfU])))) 
                                     << 0x10U));
    vlSelfRef.cr_quantized[8U] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x11U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0x10U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0xfU])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                             [0x11U] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [0x10U]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                            [0xfU]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.cr_quantized[9U] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                             [0x14U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [0x13U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                            [0x12U]))));
    vlSelfRef.cr_quantized[0xaU] = ((0xffff0000U & 
                                     vlSelfRef.cr_quantized[0xaU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x14U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x13U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x12U]))) 
                                               >> 0x20U)));
    vlSelfRef.cr_quantized[0xaU] = ((0xffffU & vlSelfRef.cr_quantized[0xaU]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x17U] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x16U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x15U])))) 
                                       << 0x10U));
    vlSelfRef.cr_quantized[0xbU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x17U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x16U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x15U])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x17U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                              [0x16U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                              [0x15U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.cr_quantized[0xcU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x1aU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0x19U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0x18U]))));
    vlSelfRef.cr_quantized[0xdU] = ((0xffff0000U & 
                                     vlSelfRef.cr_quantized[0xdU]) 
                                    | (IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x1aU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x19U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x18U]))) 
                                               >> 0x20U)));
    vlSelfRef.cr_quantized[0xdU] = ((0xffffU & vlSelfRef.cr_quantized[0xdU]) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x1dU] 
                                                                   << 0x10U) 
                                                                  | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x1cU]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x1bU])))) 
                                       << 0x10U));
    vlSelfRef.cr_quantized[0xeU] = (((IData)((((QData)((IData)(
                                                               ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x1dU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x1cU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x1bU])))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x1dU] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                              [0x1cU]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                              [0x1bU]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    vlSelfRef.cr_quantized[0xfU] = (IData)((((QData)((IData)(
                                                             ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x20U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0x1fU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                              [0x1eU]))));
    vlSelfRef.cr_quantized[0x10U] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x10U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x20U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x1fU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x1eU]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x10U] = ((0xffffU & vlSelfRef.cr_quantized[0x10U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x23U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x22U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x21U])))) 
                                        << 0x10U));
    vlSelfRef.cr_quantized[0x11U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x23U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x22U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x21U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                                [0x23U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x22U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x21U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cr_quantized[0x12U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x26U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x25U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x24U]))));
    vlSelfRef.cr_quantized[0x13U] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x13U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x26U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x25U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x24U]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x13U] = ((0xffffU & vlSelfRef.cr_quantized[0x13U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x29U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x28U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x27U])))) 
                                        << 0x10U));
    vlSelfRef.cr_quantized[0x14U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x29U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x28U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x27U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                                [0x29U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x28U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x27U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cr_quantized[0x15U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x2cU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x2bU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x2aU]))));
    vlSelfRef.cr_quantized[0x16U] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x16U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x2cU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x2bU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x2aU]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x16U] = ((0xffffU & vlSelfRef.cr_quantized[0x16U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x2fU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x2eU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x2dU])))) 
                                        << 0x10U));
    vlSelfRef.cr_quantized[0x17U] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x2fU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x2eU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x2dU])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                                [0x2fU] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x2eU]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x2dU]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cr_quantized[0x18U] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x32U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x31U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x30U]))));
    vlSelfRef.cr_quantized[0x19U] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x19U]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x32U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x31U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x30U]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x19U] = ((0xffffU & vlSelfRef.cr_quantized[0x19U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x35U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x34U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x33U])))) 
                                        << 0x10U));
    vlSelfRef.cr_quantized[0x1aU] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x35U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x34U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x33U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                                [0x35U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x34U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x33U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cr_quantized[0x1bU] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x38U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x37U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x36U]))));
    vlSelfRef.cr_quantized[0x1cU] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x1cU]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x38U] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x37U]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x36U]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x1cU] = ((0xffffU & vlSelfRef.cr_quantized[0x1cU]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x3bU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x3aU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x39U])))) 
                                        << 0x10U));
    vlSelfRef.cr_quantized[0x1dU] = (((IData)((((QData)((IData)(
                                                                ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                  [0x3bU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x3aU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                 [0x39U])))) 
                                      >> 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                                [0x3bU] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x3aU]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                               [0x39U]))) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelfRef.cr_quantized[0x1eU] = (IData)((((QData)((IData)(
                                                              ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                [0x3eU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x3dU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                               [0x3cU]))));
    vlSelfRef.cr_quantized[0x1fU] = ((0xffff0000U & 
                                      vlSelfRef.cr_quantized[0x1fU]) 
                                     | (IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                    [0x3eU] 
                                                                    << 0x10U) 
                                                                   | vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x3dU]))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                                                   [0x3cU]))) 
                                                >> 0x20U)));
    vlSelfRef.cr_quantized[0x1fU] = ((0xffffU & vlSelfRef.cr_quantized[0x1fU]) 
                                     | (vlSelfRef.connect__DOT__quant_cr__DOT__result_buffer
                                        [0x3fU] << 0x10U));
    vlSelfRef.connect__DOT__rgb2ycbcr_inst__DOT__k = 8U;
    vlSelfRef.connect__DOT__dct_y__DOT__we_trans = 
        ((2U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state)) 
         & (5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state)));
    vlSelfRef.connect__DOT__dct_cb__DOT__we_trans = 
        ((2U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state)) 
         & (5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state)));
    vlSelfRef.connect__DOT__dct_cr__DOT__we_trans = 
        ((2U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state)) 
         & (5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state)));
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
    vlSelfRef.connect__DOT__quant_y__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))
            ? ((5U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__state))
                               ? ((7U == (IData)(vlSelfRef.connect__DOT__quant_y__DOT__cycle_cnt))
                                   ? 2U : 1U) : 0U));
    vlSelfRef.connect__DOT__quant_cb__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))
            ? ((5U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__state))
                               ? ((7U == (IData)(vlSelfRef.connect__DOT__quant_cb__DOT__cycle_cnt))
                                   ? 2U : 1U) : 0U));
    vlSelfRef.connect__DOT__quant_cr__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))
            ? ((5U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__state))
                               ? ((7U == (IData)(vlSelfRef.connect__DOT__quant_cr__DOT__cycle_cnt))
                                   ? 2U : 1U) : 0U));
    vlSelfRef.done = ((IData)(vlSelfRef.connect__DOT__quant_y_done) 
                      & ((IData)(vlSelfRef.connect__DOT__quant_cb_done) 
                         & (IData)(vlSelfRef.connect__DOT__quant_cr_done)));
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
    vlSelfRef.connect__DOT__dct_y__DOT__core_in_valid 
        = ((1U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state)) 
           | (3U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state)));
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
    vlSelfRef.connect__DOT__dct_cb__DOT__core_in_valid 
        = ((1U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state)) 
           | (3U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state)));
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
    vlSelfRef.connect__DOT__dct_cr__DOT__core_in_valid 
        = ((1U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state)) 
           | (3U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state)));
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
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [0U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [0U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [1U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [1U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [2U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [2U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [3U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [3U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [4U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [4U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [5U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [5U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [6U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [6U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_y__DOT__pixel_in
                                                [7U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_y__DOT__qtable_in
                                                   [7U])))));
    vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_y__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [0U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [0U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [1U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [1U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [2U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [2U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [3U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [3U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [4U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [4U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [5U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [5U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [6U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [6U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cb__DOT__pixel_in
                                                [7U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cb__DOT__qtable_in
                                                   [7U])))));
    vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cb__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [0U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [0U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__0__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [1U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [1U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__1__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [2U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [2U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__2__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [3U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [3U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__3__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [4U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [4U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__4__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [5U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [5U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__5__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [6U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [6U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__6__KET____DOT__u_mul__DOT__p, 0x10U)));
    vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.connect__DOT__quant_cr__DOT__pixel_in
                                                [7U])) 
                                * (QData)((IData)((0xffffU 
                                                   & vlSelfRef.connect__DOT__quant_cr__DOT__qtable_in
                                                   [7U])))));
    vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__quant_cr__DOT__GEN_MULTS__BRA__7__KET____DOT__u_mul__DOT__p, 0x10U)));
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
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[0U] = 0ULL;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[1U] = 0ULL;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[2U] = 0ULL;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[3U] = 0ULL;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[4U] = 0ULL;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[5U] = 0ULL;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[6U] = 0ULL;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[7U] = 0ULL;
    if ((4U & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state)))) {
                vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[0U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b3)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[1U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b4)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[2U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b5)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[3U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b6)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[4U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b7)) 
                                    << 0x10U));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[0U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[1U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[2U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[3U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[4U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[5U] 
                = (0x2d41ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[6U] 
                = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[7U] 
                = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__b2)) 
                                << 0x10U));
        } else {
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[0U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[1U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[2U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[3U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[4U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[5U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[6U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[7U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
        }
    } else if ((1U & (IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__state))) {
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[0U] 
            = (0x5a82ULL | ((QData)((IData)((vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e0 
                                             - vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e1))) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[1U] 
            = (0x7642ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e2)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[2U] 
            = (0x30fcULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e3)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[3U] 
            = (0x30fcULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e2)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[4U] 
            = (0x7642ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__e3)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[5U] 
            = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d0)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[6U] 
            = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d1)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job[7U] 
            = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__d2)) 
                            << 0x10U));
    }
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
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[0U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[1U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[2U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[3U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[4U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[5U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[6U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[7U] = 0ULL;
    if ((4U & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state)))) {
                vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[0U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b3)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[1U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b4)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[2U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b5)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[3U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b6)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[4U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b7)) 
                                    << 0x10U));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[0U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[1U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[2U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[3U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[4U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[5U] 
                = (0x2d41ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[6U] 
                = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[7U] 
                = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__b2)) 
                                << 0x10U));
        } else {
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[0U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[1U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[2U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[3U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[4U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[5U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[6U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[7U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
        }
    } else if ((1U & (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__state))) {
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[0U] 
            = (0x5a82ULL | ((QData)((IData)((vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e0 
                                             - vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e1))) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[1U] 
            = (0x7642ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e2)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[2U] 
            = (0x30fcULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e3)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[3U] 
            = (0x30fcULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e2)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[4U] 
            = (0x7642ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__e3)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[5U] 
            = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d0)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[6U] 
            = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d1)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job[7U] 
            = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__d2)) 
                            << 0x10U));
    }
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
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[0U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[1U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[2U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[3U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[4U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[5U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[6U] = 0ULL;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[7U] = 0ULL;
    if ((4U & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state)))) {
                vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[0U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b3)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[1U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b4)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[2U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b5)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[3U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b6)) 
                                    << 0x10U));
                vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[4U] 
                    = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b7)) 
                                    << 0x10U));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[0U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[1U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[2U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[3U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[4U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[5U] 
                = (0x2d41ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[6U] 
                = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[7U] 
                = (0x4000ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__b2)) 
                                << 0x10U));
        } else {
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[0U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[1U] 
                = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[2U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[3U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[4U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d3)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[5U] 
                = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d0)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[6U] 
                = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d1)) 
                                << 0x10U));
            vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[7U] 
                = (0x18f9ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d2)) 
                                << 0x10U));
        }
    } else if ((1U & (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__state))) {
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[0U] 
            = (0x5a82ULL | ((QData)((IData)((vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e0 
                                             - vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e1))) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[1U] 
            = (0x7642ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e2)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[2U] 
            = (0x30fcULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e3)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[3U] 
            = (0x30fcULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e2)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[4U] 
            = (0x7642ULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__e3)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[5U] 
            = (0x7d8aULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d0)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[6U] 
            = (0x6a6eULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d1)) 
                            << 0x10U));
        vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job[7U] 
            = (0x471dULL | ((QData)((IData)(vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__d2)) 
                            << 0x10U));
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
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[0U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[1U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[2U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[3U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[4U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[5U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[6U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_y__DOT__mul_out[7U] 
        = vlSelfRef.connect__DOT__quant_y__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[0U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[1U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[2U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[3U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[4U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[5U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[6U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cb__DOT__mul_out[7U] 
        = vlSelfRef.connect__DOT__quant_cb__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[0U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__0__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[1U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__1__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[2U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__2__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[3U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__3__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[4U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__4__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[5U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__5__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[6U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__6__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__quant_cr__DOT__mul_out[7U] 
        = vlSelfRef.connect__DOT__quant_cr__DOT____Vcellout__GEN_MULTS__BRA__7__KET____DOT__u_mul__result;
    vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[0U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans
        [0U]];
    vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[1U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans
        [1U]];
    vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[2U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans
        [2U]];
    vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[3U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans
        [3U]];
    vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[4U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans
        [4U]];
    vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[5U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans
        [5U]];
    vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[6U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans
        [6U]];
    vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans[7U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_y__DOT__raddr_trans
        [7U]];
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                                [0U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                       [0U]))))));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                                [1U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                       [1U]))))));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                                [2U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                       [2U]))))));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                                [3U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                       [3U]))))));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p, 0xfU)));
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))) {
        vlSelfRef.connect__DOT__dct_y__DOT__unnamedblk5__DOT__j = 8U;
    }
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                                [4U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                       [4U]))))));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                                [5U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                       [5U]))))));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                                [6U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                       [6U]))))));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                                [7U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__job
                                                                       [7U]))))));
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[0U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans
        [0U]];
    vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[1U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans
        [1U]];
    vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[2U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans
        [2U]];
    vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[3U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans
        [3U]];
    vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[4U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans
        [4U]];
    vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[5U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans
        [5U]];
    vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[6U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans
        [6U]];
    vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans[7U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cb__DOT__raddr_trans
        [7U]];
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                                [0U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                       [0U]))))));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                                [1U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                       [1U]))))));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                                [2U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                       [2U]))))));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                                [3U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                       [3U]))))));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                                [4U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                       [4U]))))));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                                [5U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                       [5U]))))));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                                [6U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                       [6U]))))));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                                [7U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__job
                                                                       [7U]))))));
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[0U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans
        [0U]];
    vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[1U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans
        [1U]];
    vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[2U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans
        [2U]];
    vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[3U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans
        [3U]];
    vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[4U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans
        [4U]];
    vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[5U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans
        [5U]];
    vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[6U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans
        [6U]];
    vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans[7U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__trans_buff
        [vlSelfRef.connect__DOT__dct_cr__DOT__raddr_trans
        [7U]];
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                                [0U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                       [0U]))))));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__0__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                                [1U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                       [1U]))))));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__1__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                                [2U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                       [2U]))))));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__2__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                                [3U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                       [3U]))))));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__3__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                                [4U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                       [4U]))))));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__4__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                                [5U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                       [5U]))))));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__5__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                                [6U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                       [6U]))))));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__6__KET____DOT__multiplier__DOT__p, 0xfU)));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p 
        = (0xffffffffffffULL & VL_MULS_QQQ(48, (0xffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, (IData)(
                                                                               (vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                                [7U] 
                                                                                >> 0x10U)))), 
                                           (0xffffffffffffULL 
                                            & VL_EXTENDS_QI(48,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__job
                                                                       [7U]))))));
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result 
        = (IData)((0xffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mult_inst__BRA__7__KET____DOT__multiplier__DOT__p, 0xfU)));
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
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))) {
        vlSelfRef.connect__DOT__dct_cb__DOT__unnamedblk5__DOT__j = 8U;
    }
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
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))) {
        vlSelfRef.connect__DOT__dct_cr__DOT__unnamedblk5__DOT__j = 8U;
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
    vlSelfRef.connect__DOT__dct_y__DOT__core_in[0U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans
        [0U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_in[1U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans
        [1U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_in[2U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans
        [2U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_in[3U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans
        [3U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_in[4U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans
        [4U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_in[5U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans
        [5U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_in[6U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans
        [6U];
    vlSelfRef.connect__DOT__dct_y__DOT__core_in[7U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__rdata_trans
        [7U];
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_y__DOT__state))) {
        vlSelfRef.connect__DOT__dct_y__DOT__core_in[0U] 
            = vlSelfRef.connect__DOT__dct_y__DOT__input_buffer
            [(0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U))];
        vlSelfRef.connect__DOT__dct_y__DOT__core_in[1U] 
            = vlSelfRef.connect__DOT__dct_y__DOT__input_buffer
            [(0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_y__DOT__core_in[2U] 
            = vlSelfRef.connect__DOT__dct_y__DOT__input_buffer
            [(0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_y__DOT__core_in[3U] 
            = vlSelfRef.connect__DOT__dct_y__DOT__input_buffer
            [(0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_y__DOT__core_in[4U] 
            = vlSelfRef.connect__DOT__dct_y__DOT__input_buffer
            [(0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_y__DOT__core_in[5U] 
            = vlSelfRef.connect__DOT__dct_y__DOT__input_buffer
            [(0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_y__DOT__core_in[6U] 
            = vlSelfRef.connect__DOT__dct_y__DOT__input_buffer
            [(0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_y__DOT__core_in[7U] 
            = vlSelfRef.connect__DOT__dct_y__DOT__input_buffer
            [(0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_y__DOT__row_cnt), 3U)))];
    }
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[0U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[1U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[2U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[3U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[4U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[5U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[6U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT__mul_y[7U] 
        = vlSelfRef.connect__DOT__dct_y__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cb__DOT__core_in[0U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans
        [0U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_in[1U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans
        [1U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_in[2U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans
        [2U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_in[3U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans
        [3U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_in[4U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans
        [4U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_in[5U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans
        [5U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_in[6U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans
        [6U];
    vlSelfRef.connect__DOT__dct_cb__DOT__core_in[7U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__rdata_trans
        [7U];
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__state))) {
        vlSelfRef.connect__DOT__dct_cb__DOT__core_in[0U] 
            = vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer
            [(0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U))];
        vlSelfRef.connect__DOT__dct_cb__DOT__core_in[1U] 
            = vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer
            [(0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cb__DOT__core_in[2U] 
            = vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer
            [(0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cb__DOT__core_in[3U] 
            = vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer
            [(0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cb__DOT__core_in[4U] 
            = vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer
            [(0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cb__DOT__core_in[5U] 
            = vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer
            [(0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cb__DOT__core_in[6U] 
            = vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer
            [(0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cb__DOT__core_in[7U] 
            = vlSelfRef.connect__DOT__dct_cb__DOT__input_buffer
            [(0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cb__DOT__row_cnt), 3U)))];
    }
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[0U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[1U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[2U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[3U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[4U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[5U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[6U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT__mul_y[7U] 
        = vlSelfRef.connect__DOT__dct_cb__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cr__DOT__core_in[0U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans
        [0U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_in[1U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans
        [1U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_in[2U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans
        [2U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_in[3U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans
        [3U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_in[4U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans
        [4U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_in[5U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans
        [5U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_in[6U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans
        [6U];
    vlSelfRef.connect__DOT__dct_cr__DOT__core_in[7U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__rdata_trans
        [7U];
    if ((1U == (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__state))) {
        vlSelfRef.connect__DOT__dct_cr__DOT__core_in[0U] 
            = vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer
            [(0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U))];
        vlSelfRef.connect__DOT__dct_cr__DOT__core_in[1U] 
            = vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer
            [(0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cr__DOT__core_in[2U] 
            = vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer
            [(0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cr__DOT__core_in[3U] 
            = vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer
            [(0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cr__DOT__core_in[4U] 
            = vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer
            [(0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cr__DOT__core_in[5U] 
            = vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer
            [(0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cr__DOT__core_in[6U] 
            = vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer
            [(0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)))];
        vlSelfRef.connect__DOT__dct_cr__DOT__core_in[7U] 
            = vlSelfRef.connect__DOT__dct_cr__DOT__input_buffer
            [(0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.connect__DOT__dct_cr__DOT__row_cnt), 3U)))];
    }
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[0U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__0__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[1U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__1__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[2U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__2__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[3U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__3__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[4U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__4__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[5U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__5__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[6U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__6__KET____DOT__multiplier__result;
    vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT__mul_y[7U] 
        = vlSelfRef.connect__DOT__dct_cr__DOT__u_dct__DOT____Vcellout__mult_inst__BRA__7__KET____DOT__multiplier__result;
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
