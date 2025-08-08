// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_clint.v:28:34
    extern void difftest_skip_ref();
    // DPI import at /home/tanghongwei/ysyx-workbench/npc/../ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_exu.v:20:34
    extern void hit(int inst_not_realize);
    // DPI import at /home/tanghongwei/ysyx-workbench/npc/../ysyxSoC/build/ysyxSoCFull.v:5402:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/tanghongwei/ysyx-workbench/npc/../ysyxSoC/perip/psram/psram.v:7:30
    extern void psram_read(int addr, int* data);
    // DPI import at /home/tanghongwei/ysyx-workbench/npc/../ysyxSoC/perip/psram/psram.v:8:30
    extern void psram_write(int addr, int data, int mask);

#ifdef __cplusplus
}
#endif

#endif  // guard
