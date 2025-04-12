// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25020037_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25020037_cpu___024root.h"

void Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__exu_cpu__DOT__hit_TOP();

VL_INLINE_OPT void Vysyx_25020037_cpu___024root___ico_sequent__TOP__0(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->inst = 0U;
    } else {
        Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->pc, 4U, vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
        vlSelf->inst = vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout;
    }
    vlSelf->ysyx_25020037_cpu__DOT__src2 = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->ysyx_25020037_cpu__DOT__is_jalr = 0U;
    if ((0x13U != (0x707fU & vlSelf->inst))) {
        if ((0x67U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_25020037_cpu__DOT__is_jalr = 1U;
        }
    }
    vlSelf->ysyx_25020037_cpu__DOT__src1 = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [(0x1fU & (vlSelf->inst >> 0xfU))];
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

void Vysyx_25020037_cpu___024root___eval_ico(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_25020037_cpu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_25020037_cpu___024root___eval_act(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval_act\n"); );
}

void Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__lsu_cpu__DOT__pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);

VL_INLINE_OPT void Vysyx_25020037_cpu___024root___nba_sequent__TOP__0(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (((~ (IData)(vlSelf->rst)) & (2U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__TYPE_type)))) {
        Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__lsu_cpu__DOT__pmem_write_TOP(
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__imm 
                                                                                + vlSelf->ysyx_25020037_cpu__DOT__src1), 4U, vlSelf->ysyx_25020037_cpu__DOT__src2);
    }
    if (vlSelf->rst) {
        vlSelf->pc = 0x80000000U;
    } else if (vlSelf->ysyx_25020037_cpu__DOT__rst_delay) {
        vlSelf->pc = vlSelf->ysyx_25020037_cpu__DOT__dnpc;
    }
    vlSelf->ysyx_25020037_cpu__DOT__rst_delay = (1U 
                                                 & (~ (IData)(vlSelf->rst)));
    if (vlSelf->rst) {
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4 = 0U;
    } else {
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xf80U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xf00U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xe80U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xe00U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xd80U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xd00U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xc80U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xc00U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xb80U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xb00U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xa80U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0xa00U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x980U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x900U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x880U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x800U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x780U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x700U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x680U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x600U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x580U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x500U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x480U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x400U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x380U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x300U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x280U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x200U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x180U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x100U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0x80U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
        if (((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h526b06a4__0) 
             & (0U == (0xf80U & vlSelf->inst)))) {
            vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->ysyx_25020037_cpu__DOT__wdata_gpr;
        }
    }
    if (vlSelf->rst) {
        vlSelf->inst = 0U;
    } else {
        Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->pc, 4U, vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
        vlSelf->inst = vlSelf->__Vfunc_ysyx_25020037_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout;
    }
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1fU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1eU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1dU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1cU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1bU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x1aU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x19U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x18U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x17U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x16U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x15U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x14U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x13U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x12U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x11U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0x10U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xfU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xeU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xdU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xcU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xbU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xaU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4;
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

void Vysyx_25020037_cpu___024root___eval_nba(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25020037_cpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vysyx_25020037_cpu___024root___eval_triggers__ico(Vysyx_25020037_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037_cpu___024root___dump_triggers__ico(Vysyx_25020037_cpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25020037_cpu___024root___eval_triggers__act(Vysyx_25020037_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037_cpu___024root___dump_triggers__act(Vysyx_25020037_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037_cpu___024root___dump_triggers__nba(Vysyx_25020037_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25020037_cpu___024root___eval(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_25020037_cpu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25020037_cpu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25020037_cpu.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_25020037_cpu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_25020037_cpu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_25020037_cpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_25020037_cpu.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_25020037_cpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25020037_cpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25020037_cpu.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_25020037_cpu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25020037_cpu___024root___eval_debug_assertions(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
