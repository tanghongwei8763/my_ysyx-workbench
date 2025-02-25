// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VReg.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VReg__Syms.h"
#include "VReg___024unit.h"

void VReg___024unit___ctor_var_reset(VReg___024unit* vlSelf);

VReg___024unit::VReg___024unit(VReg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VReg___024unit___ctor_var_reset(this);
}

void VReg___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VReg___024unit::~VReg___024unit() {
}
