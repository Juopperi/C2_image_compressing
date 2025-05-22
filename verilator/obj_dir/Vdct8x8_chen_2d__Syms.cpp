// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdct8x8_chen_2d__pch.h"
#include "Vdct8x8_chen_2d.h"
#include "Vdct8x8_chen_2d___024root.h"

// FUNCTIONS
Vdct8x8_chen_2d__Syms::~Vdct8x8_chen_2d__Syms()
{
}

Vdct8x8_chen_2d__Syms::Vdct8x8_chen_2d__Syms(VerilatedContext* contextp, const char* namep, Vdct8x8_chen_2d* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(775);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
