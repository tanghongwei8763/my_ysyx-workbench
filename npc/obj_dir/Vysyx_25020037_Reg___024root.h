// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25020037_Reg.h for the primary calling header

#ifndef VERILATED_VYSYX_25020037_REG___024ROOT_H_
#define VERILATED_VYSYX_25020037_REG___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_25020037_Reg__Syms;

class Vysyx_25020037_Reg___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*2:0*/ ysyx_25020037_cpu__DOT__TYPE_type;
    CData/*0:0*/ ysyx_25020037_cpu__DOT__wen;
    CData/*0:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellinp__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber5;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst,31,0);
    IData/*31:0*/ ysyx_25020037_cpu__DOT__imm;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__src1;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__result;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ ysyx_25020037_cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT(regs[32],31,0);
    VlUnpacked<IData/*31:0*/, 32> ysyx_25020037_cpu__DOT____Vcellout__lsu_cpu__regs;
    VlUnpacked<IData/*31:0*/, 32> ysyx_25020037_cpu__DOT__lsu_cpu__DOT____Vcellout__lsu_gpr__regs;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25020037_Reg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25020037_Reg___024root(Vysyx_25020037_Reg__Syms* symsp, const char* v__name);
    ~Vysyx_25020037_Reg___024root();
    VL_UNCOPYABLE(Vysyx_25020037_Reg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
