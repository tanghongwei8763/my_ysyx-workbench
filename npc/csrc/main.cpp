#include "Vexample.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "stdio.h"
#include "stdlib.h"
#include "assert.h"
#include <time.h>

int main (int argc, char** argv)
{
    srand(time(NULL));
    
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vexample* top = new Vexample{contextp};
    
    // 添加波形跟踪,不添加会导致无法生成.cvd波形文件
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // 波形跟踪深度
    tfp->open("example.vcd");
    
    int step = 0;
    while (!contextp->gotFinish())
    {
        //top->eval();
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == (a ^ b));
        
        // 写入波形数据
        tfp->dump(step);
        step++;
    }
    
    // 关闭波形文件
    tfp->close();
    
    delete top;
    delete contextp;
    return 0;
}
