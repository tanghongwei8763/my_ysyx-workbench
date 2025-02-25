// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VReg.h for the primary calling header

#ifndef VERILATED_VREG___024UNIT_H_
#define VERILATED_VREG___024UNIT_H_  // guard

#include "verilated.h"

class VReg__Syms;

class VReg___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VReg__Syms* const vlSymsp;

    // CONSTRUCTORS
    VReg___024unit(VReg__Syms* symsp, const char* v__name);
    ~VReg___024unit();
    VL_UNCOPYABLE(VReg___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
