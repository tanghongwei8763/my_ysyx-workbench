// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VReg.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VReg__Syms.h"
#include "VReg___024root.h"

void VReg___024root___ctor_var_reset(VReg___024root* vlSelf);

VReg___024root::VReg___024root(VReg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VReg___024root___ctor_var_reset(this);
}

void VReg___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VReg___024root::~VReg___024root() {
}
