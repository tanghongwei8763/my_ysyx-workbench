// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMuxKey.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMuxKey__Syms.h"
#include "VMuxKey___024unit.h"

void VMuxKey___024unit___ctor_var_reset(VMuxKey___024unit* vlSelf);

VMuxKey___024unit::VMuxKey___024unit(VMuxKey__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMuxKey___024unit___ctor_var_reset(this);
}

void VMuxKey___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMuxKey___024unit::~VMuxKey___024unit() {
}
