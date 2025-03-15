#include <common.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include "ftrace.h"


bool inst_match(uint32_t inst, const char *goal) {
    for (int i = 31; i >= 0; i--) {
        char bit = (inst >> i) & 1 ? '1' : '0';
        if (goal[31 - i] != '?' && goal[31 - i] != bit) {
            return 0;
        }
    }
    return 1;
}
/*
void ftrace(uint32_t thispc) {
    uint32_t pc = thispc;
    uint32_t inst = inst_fetch(&pc, 4);

    char *goal1 = "??????? ????? ????? 000 00001 11001 11";     //一般将rd设置为ra（x1）寄存器就是函数
    char *goal2 = "??????? ????? ????? ??? 00001 11011 11";

    bool ismatch;
    if(inst_match(inst, goal1) || inst_match(inst, goal2)) {ismatch = true;};
}
*/
