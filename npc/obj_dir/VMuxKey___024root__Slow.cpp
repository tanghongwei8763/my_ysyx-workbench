// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMuxKey.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMuxKey__Syms.h"
#include "VMuxKey___024root.h"

void VMuxKey___024root___ctor_var_reset(VMuxKey___024root* vlSelf);

VMuxKey___024root::VMuxKey___024root(VMuxKey__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMuxKey___024root___ctor_var_reset(this);
}

void VMuxKey___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMuxKey___024root::~VMuxKey___024root() {
}
