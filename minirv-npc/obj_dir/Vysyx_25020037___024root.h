// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25020037.h for the primary calling header

#ifndef VERILATED_VYSYX_25020037___024ROOT_H_
#define VERILATED_VYSYX_25020037___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_25020037__Syms;

class Vysyx_25020037___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ ysyx_25020037__DOT__rlsu_we;
    CData/*0:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0;
    CData/*0:0*/ ysyx_25020037__DOT__idu_cpu__DOT__inst_add;
    CData/*0:0*/ ysyx_25020037__DOT__idu_cpu__DOT__inst_addi;
    CData/*0:0*/ ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl;
    CData/*0:0*/ ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu;
    CData/*0:0*/ ysyx_25020037__DOT__idu_cpu__DOT__inst_lw;
    CData/*0:0*/ ysyx_25020037__DOT__idu_cpu__DOT__inst_sb;
    CData/*0:0*/ ysyx_25020037__DOT__idu_cpu__DOT__inst_sw;
    CData/*0:0*/ ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I;
    CData/*0:0*/ ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S;
    CData/*0:0*/ ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bne;
    CData/*0:0*/ ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_beq;
    CData/*0:0*/ ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bge;
    CData/*0:0*/ ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bgeu;
    CData/*0:0*/ ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_blt;
    CData/*0:0*/ ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bltu;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ ysyx_25020037__DOT__pc;
    IData/*31:0*/ ysyx_25020037__DOT__inst;
    IData/*31:0*/ ysyx_25020037__DOT__rlsu_addr;
    IData/*31:0*/ ysyx_25020037__DOT__rlsu_data;
    IData/*31:0*/ ysyx_25020037__DOT__final_result;
    IData/*31:0*/ ysyx_25020037__DOT__dnpc;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout;
    IData/*31:0*/ ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout;
    VlWide<4>/*127:0*/ ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d;
    VlWide<4>/*127:0*/ ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d;
    IData/*31:0*/ ysyx_25020037__DOT__idu_cpu__DOT__rs1_d;
    IData/*31:0*/ ysyx_25020037__DOT__idu_cpu__DOT__rs2_d;
    IData/*31:0*/ ysyx_25020037__DOT__idu_cpu__DOT__rd_d;
    IData/*31:0*/ ysyx_25020037__DOT__exu_cpu__DOT__alu_result1;
    IData/*31:0*/ ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result;
    IData/*31:0*/ ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a;
    IData/*31:0*/ __Vfunc_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_ysyx_25020037__DOT__lsu_cpu__DOT__pmem_read__2__Vfuncout;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_26_d;
    VlUnpacked<IData/*31:0*/, 32> ysyx_25020037__DOT__gpr_cpu__DOT__regs;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25020037__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25020037___024root(Vysyx_25020037__Syms* symsp, const char* v__name);
    ~Vysyx_25020037___024root();
    VL_UNCOPYABLE(Vysyx_25020037___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
