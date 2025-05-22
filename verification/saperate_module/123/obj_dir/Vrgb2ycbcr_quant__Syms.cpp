// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrgb2ycbcr_quant__pch.h"
#include "Vrgb2ycbcr_quant.h"
#include "Vrgb2ycbcr_quant___024root.h"

// FUNCTIONS
Vrgb2ycbcr_quant__Syms::~Vrgb2ycbcr_quant__Syms()
{
}

Vrgb2ycbcr_quant__Syms::Vrgb2ycbcr_quant__Syms(VerilatedContext* contextp, const char* namep, Vrgb2ycbcr_quant* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1305);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
