// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VReg.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VReg___024root.h"

VL_ATTR_COLD void VReg___024root___eval_static(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___eval_static\n"); );
}

VL_ATTR_COLD void VReg___024root___eval_initial(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VReg___024root___eval_final(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___eval_final\n"); );
}

VL_ATTR_COLD void VReg___024root___eval_triggers__stl(VReg___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VReg___024root___dump_triggers__stl(VReg___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VReg___024root___eval_stl(VReg___024root* vlSelf);

VL_ATTR_COLD void VReg___024root___eval_settle(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VReg___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VReg___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/cpu.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VReg___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VReg___024root___dump_triggers__stl(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VReg___024root____Vdpiimwrap_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void VReg___024root___stl_sequent__TOP__0(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT____Vcellinp__PC__din = ((IData)(4U) 
                                             + vlSelf->cpu__DOT__pc);
    VReg___024root____Vdpiimwrap_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->cpu__DOT__pc, 4U, vlSelf->__Vfunc_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
    vlSelf->cpu__DOT__s = vlSelf->__Vfunc_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[1U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[2U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[3U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[4U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[5U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[6U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[7U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[8U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[9U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xaU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xbU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xcU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xdU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xeU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xfU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x10U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x11U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x12U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x13U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x14U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x15U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x16U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x17U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x18U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x19U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1aU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1bU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1cU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1dU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1eU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1fU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__src1 = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs
        [(0x1fU & (vlSelf->cpu__DOT__s >> 0xfU))];
    vlSelf->cpu__DOT__result = ((((- (IData)((vlSelf->cpu__DOT__s 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->cpu__DOT__s 
                                              >> 0x14U)) 
                                + vlSelf->cpu__DOT__src1);
}

VL_ATTR_COLD void VReg___024root___eval_stl(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VReg___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VReg___024root___dump_triggers__act(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VReg___024root___dump_triggers__nba(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VReg___024root___ctor_var_reset(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__s = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT____Vcellinp__PC__din = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
