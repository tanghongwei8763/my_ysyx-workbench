#ifndef COMMEN_H
#define COMMEN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cassert>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include "Vysyx_25020037_cpu.h"

enum {
    NPC_END, NPC_RUNING, 
    NPC_STOP, NPC_ABORT,NPC_QUIT
};

typedef uint32_t paddr_t;
typedef uint32_t word_t;
typedef uint32_t vaddr_t;

extern Vysyx_25020037_cpu dut;

extern int NPC_STATE;
extern const char *tempregs[];

#ifdef __cplusplus
extern "C" {
#endif

void single_cycle();
void sdb_mainloop();
void cpu_exec(int n);
void hit(int inst_not_realize);
void finish();

#ifdef __cplusplus
}
#endif

#endif