// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMuxKey.h for the primary calling header

#ifndef VERILATED_VMUXKEY___024ROOT_H_
#define VERILATED_VMUXKEY___024ROOT_H_  // guard

#include "verilated.h"

class VMuxKey__Syms;

class VMuxKey___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(MuxKey__02Eout,0,0);
    VL_IN8(MuxKey__02Ekey,0,0);
    VL_IN8(MuxKey__02Elut,3,0);
    VL_OUT8(MuxKeyWithDefault__02Eout,0,0);
    VL_IN8(MuxKeyWithDefault__02Ekey,0,0);
    VL_IN8(default_out,0,0);
    VL_IN8(MuxKeyWithDefault__02Elut,3,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ MuxKey__DOT__i0__DOT__lut_out;
    CData/*0:0*/ MuxKey__DOT__i0__DOT__hit;
    CData/*0:0*/ MuxKeyWithDefault__DOT__i0__DOT__lut_out;
    CData/*0:0*/ MuxKeyWithDefault__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(dnpc,31,0);
    IData/*31:0*/ cpu__DOT__pc;
    IData/*31:0*/ cpu__DOT__s;
    IData/*31:0*/ cpu__DOT__result;
    IData/*31:0*/ cpu__DOT____Vcellinp__PC__din;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4;
    IData/*31:0*/ __Vfunc_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 2> MuxKey__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> MuxKey__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> MuxKey__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*1:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMuxKey__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMuxKey___024root(VMuxKey__Syms* symsp, const char* v__name);
    ~VMuxKey___024root();
    VL_UNCOPYABLE(VMuxKey___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
