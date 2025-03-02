// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_25020037_MUXKEY__DPI_H_
#define VERILATED_VYSYX_25020037_MUXKEY__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ysyx_25020037_ifu.v:8:36
    extern svBitVecVal pmem_read(const svLogicVecVal* addr, int len);

#ifdef __cplusplus
}
#endif

#endif  // guard
