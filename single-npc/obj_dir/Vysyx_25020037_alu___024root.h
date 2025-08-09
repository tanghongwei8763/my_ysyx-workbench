// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25020037_alu.h for the primary calling header

#ifndef VERILATED_VYSYX_25020037_ALU___024ROOT_H_
#define VERILATED_VYSYX_25020037_ALU___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_25020037_alu__Syms;

class Vysyx_25020037_alu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(decoder_2_4__02Ein,1,0);
        VL_OUT8(decoder_2_4__02Eout,3,0);
        VL_IN8(decoder_4_16__02Ein,3,0);
        VL_IN8(rst,0,0);
        VL_OUT8(encoder_32_5__02Eout,4,0);
        CData/*0:0*/ ysyx_25020037_cpu__DOT__rlsu_we;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__wlsu_we;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__rw_word_1;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__rw_word_2;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__is_pc_jump;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__rst_delay;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_W;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra;
        CData/*0:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin;
        CData/*0:0*/ __VdfgTmp_h39165432__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(decoder_4_16__02Eout,15,0);
        VL_OUT(inst,31,0);
        VL_OUT(pc,31,0);
        VL_IN(encoder_32_5__02Ein,31,0);
        IData/*31:0*/ ysyx_25020037_cpu__DOT__imm;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__rlsu_addr;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__rlsu_data;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__final_result;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__dnpc;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst__dout;
    };
    struct {
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst__dout;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst__dout;
        VlWide<4>/*127:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d;
        VlWide<4>/*127:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a;
        IData/*31:0*/ ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b;
        IData/*31:0*/ __Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_ysyx_25020037_cpu__DOT__lsu_cpu__DOT__pmem_read__2__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d;
        VL_OUT(regs[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25020037_alu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25020037_alu___024root(Vysyx_25020037_alu__Syms* symsp, const char* v__name);
    ~Vysyx_25020037_alu___024root();
    VL_UNCOPYABLE(Vysyx_25020037_alu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
