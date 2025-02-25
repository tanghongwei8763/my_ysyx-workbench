/*
#include <stdio.h>

int main() {
  printf("Hello, ysyx!\n");
  return 0;
}
*/

#include "Vysyx_25020037_cpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint32_t paddr_t;
typedef uint32_t word_t;
static Vysyx_25020027_cpu dut;
uint32_t* init(size_t size);
uint32_t* guest_to_host(uint32_t addr);
static word_t pmem_read(paddr_t addr, int len);


// 设置时钟，复位信号
void single_cycle() {
    dut.clk=0;dut.eval();
    dut.clk=1;dut.eval();
}

static void reset(int n) {
    dut.rst = 1;
    while (n -- > 0) single_cycle();
    dut.rst = 0;
}

int main (int argc, char** argv)
{
    uint32_t* memory;
    memory = init(5);

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vcpu* cpu = new Vcpu{contextp};

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    cpu->trace(tfp, 99);
    tfp->open("cpu.vcd");

    reset(10);
    for(int i=0; i < 6; i++){
        dut.inst = pmem_read(memory, dut.pc);
        single_cycle();
        tfp.dump(concept->time());
        concept->timeInc(1);
    }

    /*
    int step = 0;
    int time = 0;

    // 初始化复位信号
    cpu->rst = 1;

    // 模拟一段时间的复位
    for (int i = 0; i < 10; i++) {
        // 时钟信号翻转
        cpu->clk = (time % CLOCK_PERIOD) < (CLOCK_PERIOD / 2);

        // 评估模块
        cpu->eval();

        // 写入波形数据
        tfp->dump(time);

        time++;
    }

    // 释放复位信号
    cpu->rst = 0;
    while (!contextp->gotFinish())
    {
        cpu->clk = (time % CLOCK_PERIOD) < (CLOCK_PERIOD / 2);
        cpu->eval();
        tfp->dump(time);

        time++;
        step++;

        // 可以添加结束条件，例如达到一定步数后结束仿真
        if (step > 1000) {
            contextp->gotFinish(true);
        }
    }
    */
    // 关闭波形文件
    tfp->close();

    delete cpu;
    delete contextp;
    return 0;
}