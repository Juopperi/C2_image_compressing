// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect.h for the primary calling header

#include "Vconnect__pch.h"
#include "Vconnect__Syms.h"
#include "Vconnect___024root.h"

void Vconnect___024root___ctor_var_reset(Vconnect___024root* vlSelf);

Vconnect___024root::Vconnect___024root(Vconnect__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vconnect___024root___ctor_var_reset(this);
}

void Vconnect___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vconnect___024root::~Vconnect___024root() {
}
