// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_25020037_CPU__DPI_H_
#define VERILATED_VYSYX_25020037_CPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ysyx_25020037_cpu.v:21:34
    extern void call_func(int pc, int dnpc);
    // DPI import at vsrc/ysyx_25020037_exu.v:20:34
    extern void hit(int inst_not_realize);
    // DPI import at vsrc/ysyx_25020037_sram.v:39:33
    extern int pmem_read(int addr, int len, int trace_on);
    // DPI import at vsrc/ysyx_25020037_sram.v:40:34
    extern void pmem_write(int addr, int len, int data, int trace_on);
    // DPI import at vsrc/ysyx_25020037_cpu.v:22:34
    extern void ret_func(int pc);

#ifdef __cplusplus
}
#endif

#endif  // guard
