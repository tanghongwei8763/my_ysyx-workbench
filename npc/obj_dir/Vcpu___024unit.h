// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024UNIT_H_
#define VERILATED_VCPU___024UNIT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024unit(Vcpu__Syms* symsp, const char* v__name);
    ~Vcpu___024unit();
    VL_UNCOPYABLE(Vcpu___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
