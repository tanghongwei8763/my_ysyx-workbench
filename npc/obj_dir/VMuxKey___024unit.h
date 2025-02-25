// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMuxKey.h for the primary calling header

#ifndef VERILATED_VMUXKEY___024UNIT_H_
#define VERILATED_VMUXKEY___024UNIT_H_  // guard

#include "verilated.h"

class VMuxKey__Syms;

class VMuxKey___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VMuxKey__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMuxKey___024unit(VMuxKey__Syms* symsp, const char* v__name);
    ~VMuxKey___024unit();
    VL_UNCOPYABLE(VMuxKey___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
