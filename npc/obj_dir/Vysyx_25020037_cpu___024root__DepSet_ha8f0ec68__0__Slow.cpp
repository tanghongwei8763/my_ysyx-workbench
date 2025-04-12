// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25020037_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25020037_cpu___024root.h"

VL_ATTR_COLD void Vysyx_25020037_cpu___024root___eval_static(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_25020037_cpu___024root___eval_initial(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_25020037_cpu___024root___eval_final(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_25020037_cpu___024root___eval_triggers__stl(Vysyx_25020037_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037_cpu___024root___dump_triggers__stl(Vysyx_25020037_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037_cpu___024root___eval_stl(Vysyx_25020037_cpu___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25020037_cpu___024root___eval_settle(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_25020037_cpu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25020037_cpu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25020037_cpu.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_25020037_cpu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037_cpu___024root___dump_triggers__stl(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__exu_cpu__DOT__hit_TOP();

VL_ATTR_COLD void Vysyx_25020037_cpu___024root___stl_sequent__TOP__0(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->inst = 0U;
    } else {
        Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->pc, 4U, vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
        vlSelf->inst = vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout;
    }
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xaU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xbU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xcU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xdU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xeU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xfU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x10U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x11U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x12U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x13U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x14U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x15U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x16U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x17U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x18U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x19U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1aU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1bU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1cU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1dU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1eU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1fU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT__is_jalr = 0U;
    if ((0x13U != (0x707fU & vlSelf->inst))) {
        if ((0x67U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_25020037_cpu__DOT__is_jalr = 1U;
        }
    }
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__immI 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    if ((0x13U == (0x707fU & vlSelf->inst))) {
        vlSelf->ysyx_25020037_cpu__DOT__TYPE_type = 1U;
        vlSelf->ysyx_25020037_cpu__DOT__imm = vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__immI;
    } else if ((0x67U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_25020037_cpu__DOT__TYPE_type = 1U;
        vlSelf->ysyx_25020037_cpu__DOT__imm = vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__immI;
    } else if ((0x17U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_25020037_cpu__DOT__TYPE_type = 4U;
        vlSelf->ysyx_25020037_cpu__DOT__imm = (0xfffff000U 
                                               & vlSelf->inst);
    } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_25020037_cpu__DOT__TYPE_type = 5U;
        vlSelf->ysyx_25020037_cpu__DOT__imm = (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | ((0xff000U 
                                                   & vlSelf->inst) 
                                                  | ((0x800U 
                                                      & (vlSelf->inst 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->inst 
                                                           >> 0x14U)))));
    } else if ((0x2023U == (0x707fU & vlSelf->inst))) {
        vlSelf->ysyx_25020037_cpu__DOT__TYPE_type = 2U;
        vlSelf->ysyx_25020037_cpu__DOT__imm = (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 7U))));
    } else if ((0x100073U == vlSelf->inst)) {
        vlSelf->ysyx_25020037_cpu__DOT__TYPE_type = 6U;
        vlSelf->ysyx_25020037_cpu__DOT__imm = 0U;
    } else if ((0U == vlSelf->inst)) {
        vlSelf->ysyx_25020037_cpu__DOT__TYPE_type = 7U;
        vlSelf->ysyx_25020037_cpu__DOT__imm = 0U;
    } else {
        vlSelf->ysyx_25020037_cpu__DOT__TYPE_type = 6U;
        vlSelf->ysyx_25020037_cpu__DOT__imm = 1U;
    }
    vlSelf->ysyx_25020037_cpu__DOT__src2 = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->ysyx_25020037_cpu__DOT__src1 = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->regs[0x1fU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1fU];
    vlSelf->regs[0x1eU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1eU];
    vlSelf->regs[0x1dU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1dU];
    vlSelf->regs[0x1cU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1cU];
    vlSelf->regs[0x1bU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1bU];
    vlSelf->regs[0x1aU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x1aU];
    vlSelf->regs[0x19U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x19U];
    vlSelf->regs[0x18U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x18U];
    vlSelf->regs[0x17U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x17U];
    vlSelf->regs[0x16U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x16U];
    vlSelf->regs[0x15U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x15U];
    vlSelf->regs[0x14U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x14U];
    vlSelf->regs[0x13U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x13U];
    vlSelf->regs[0x12U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x12U];
    vlSelf->regs[0x11U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x11U];
    vlSelf->regs[0x10U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0x10U];
    vlSelf->regs[0xfU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xfU];
    vlSelf->regs[0xeU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xeU];
    vlSelf->regs[0xdU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xdU];
    vlSelf->regs[0xcU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xcU];
    vlSelf->regs[0xbU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xbU];
    vlSelf->regs[0xaU] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0xaU];
    vlSelf->regs[9U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [9U];
    vlSelf->regs[8U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [8U];
    vlSelf->regs[7U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [7U];
    vlSelf->regs[6U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [6U];
    vlSelf->regs[5U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [5U];
    vlSelf->regs[4U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [4U];
    vlSelf->regs[3U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [3U];
    vlSelf->regs[2U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [2U];
    vlSelf->regs[1U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [1U];
    vlSelf->regs[0U] = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [0U];
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0 
        = ((0U != (0x1fU & (vlSelf->inst >> 7U))) & 
           ((~ (IData)(vlSelf->rst)) & ((1U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)) 
                                        | ((4U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)) 
                                           | ((0U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)) 
                                              | (5U 
                                                 == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)))))));
    vlSelf->ysyx_25020037_cpu__DOT__dnpc = ((5U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                                             ? (vlSelf->pc 
                                                + vlSelf->ysyx_25020037_cpu__DOT__imm)
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_jalr)
                                                  ? 
                                                 (vlSelf->ysyx_25020037_cpu__DOT__src1 
                                                  + vlSelf->ysyx_25020037_cpu__DOT__imm)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->pc))
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->pc)));
    if (vlSelf->rst) {
        vlSelf->ysyx_25020037_cpu__DOT__result = 0U;
    } else if ((4U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))) {
        if ((2U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))) {
            if ((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))) {
                vlSelf->ysyx_25020037_cpu__DOT__result = 0U;
            } else {
                Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__exu_cpu__DOT__hit_TOP();
                vlSelf->ysyx_25020037_cpu__DOT__result = 0U;
            }
        } else {
            vlSelf->ysyx_25020037_cpu__DOT__result 
                = ((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                    ? ((IData)(4U) + vlSelf->pc) : 
                   (vlSelf->pc + vlSelf->ysyx_25020037_cpu__DOT__imm));
        }
    } else {
        vlSelf->ysyx_25020037_cpu__DOT__result = ((2U 
                                                   & (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                                                    ? 0U
                                                    : vlSelf->ysyx_25020037_cpu__DOT__src2)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_jalr)
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->pc)
                                                     : 
                                                    (vlSelf->ysyx_25020037_cpu__DOT__src1 
                                                     + vlSelf->ysyx_25020037_cpu__DOT__imm))
                                                    : 
                                                   (vlSelf->ysyx_25020037_cpu__DOT__src1 
                                                    + vlSelf->ysyx_25020037_cpu__DOT__src2)));
    }
    vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr = ((2U 
                                                  == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type))
                                                  ? 0U
                                                  : vlSelf->ysyx_25020037_cpu__DOT__result);
}

VL_ATTR_COLD void Vysyx_25020037_cpu___024root___eval_stl(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25020037_cpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037_cpu___024root___dump_triggers__ico(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037_cpu___024root___dump_triggers__act(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vysyx_25020037_cpu___024root___dump_triggers__nba(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25020037_cpu___024root___ctor_var_reset(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25020037_cpu__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__TYPE_type = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25020037_cpu__DOT__dnpc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__rst_delay = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25020037_cpu__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
