// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vproc_full_axi__pch.h"
#include "Vproc_full_axi.h"
#include "Vproc_full_axi___024root.h"

// FUNCTIONS
Vproc_full_axi__Syms::~Vproc_full_axi__Syms()
{
}

Vproc_full_axi__Syms::Vproc_full_axi__Syms(VerilatedContext* contextp, const char* namep, Vproc_full_axi* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(320);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
