// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024unit.h"

void Vcpu___024unit___ctor_var_reset(Vcpu___024unit* vlSelf);

Vcpu___024unit::Vcpu___024unit(Vcpu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcpu___024unit___ctor_var_reset(this);
}

void Vcpu___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcpu___024unit::~Vcpu___024unit() {
}
