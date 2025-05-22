// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdct8_chen_ts__pch.h"
#include "Vdct8_chen_ts.h"
#include "Vdct8_chen_ts___024root.h"

// FUNCTIONS
Vdct8_chen_ts__Syms::~Vdct8_chen_ts__Syms()
{
}

Vdct8_chen_ts__Syms::Vdct8_chen_ts__Syms(VerilatedContext* contextp, const char* namep, Vdct8_chen_ts* modelp)
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
