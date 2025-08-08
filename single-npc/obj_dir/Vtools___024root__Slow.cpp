// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtools.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtools__Syms.h"
#include "Vtools___024root.h"

void Vtools___024root___ctor_var_reset(Vtools___024root* vlSelf);

Vtools___024root::Vtools___024root(Vtools__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtools___024root___ctor_var_reset(this);
}

void Vtools___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtools___024root::~Vtools___024root() {
}
