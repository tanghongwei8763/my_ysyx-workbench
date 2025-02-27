// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25020037_cpu.h for the primary calling header

#ifndef VERILATED_VYSYX_25020037_CPU___024UNIT_H_
#define VERILATED_VYSYX_25020037_CPU___024UNIT_H_  // guard

#include "verilated.h"

class Vysyx_25020037_cpu__Syms;

class Vysyx_25020037_cpu___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vysyx_25020037_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25020037_cpu___024unit(Vysyx_25020037_cpu__Syms* symsp, const char* v__name);
    ~Vysyx_25020037_cpu___024unit();
    VL_UNCOPYABLE(Vysyx_25020037_cpu___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
