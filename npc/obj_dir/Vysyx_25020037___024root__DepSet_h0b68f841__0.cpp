// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25020037.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25020037___024root.h"

void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ trace_on, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__exu_cpu__DOT__hit_TOP(IData/*31:0*/ inst_not_realize);

VL_INLINE_OPT void Vysyx_25020037___024root___ico_sequent__TOP__0(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___ico_sequent__TOP__0\n"); );
    // Body
    Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->ysyx_25020037__DOT__pc, 4U, 0U, vlSelf->__Vfunc_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
    vlSelf->ysyx_25020037__DOT__inst = ((IData)(vlSelf->reset)
                                         ? 0U : vlSelf->__Vfunc_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
        [(0xfU & (vlSelf->ysyx_25020037__DOT__inst 
                  >> 0xfU))];
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add 
        = (IData)((0x33U == (0xfe00707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl 
        = (IData)((0x67U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__rlsu_we = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                                           | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
           | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
              | (IData)(vlSelf->ysyx_25020037__DOT__rlsu_we)));
    if ((1U & ((IData)((0x100073U == vlSelf->ysyx_25020037__DOT__inst)) 
               | (~ ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                     | (((IData)((0x100073U == vlSelf->ysyx_25020037__DOT__inst)) 
                         | (IData)((0U == vlSelf->ysyx_25020037__DOT__inst))) 
                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S) 
                              | (0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)))))))))) {
        Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__exu_cpu__DOT__hit_TOP(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                                                                | (((IData)(
                                                                                (0x100073U 
                                                                                == vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                == vlSelf->ysyx_25020037__DOT__inst))) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))))))))));
    }
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0 
        = ((0U != (0xfU & (vlSelf->ysyx_25020037__DOT__inst 
                           >> 7U))) & ((~ (IData)(vlSelf->reset)) 
                                       & ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                                          | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                             | (0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst))))));
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
        = (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
            | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
               | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                  | ((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                     | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl)))))
            ? (((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I))) 
                & (((- (IData)((vlSelf->ysyx_25020037__DOT__inst 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelf->ysyx_25020037__DOT__inst 
                      >> 0x14U))) | (((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S))) 
                                      & (((- (IData)(
                                                     (vlSelf->ysyx_25020037__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->ysyx_25020037__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25020037__DOT__inst 
                                                  >> 7U))))) 
                                     | (0xfffff000U 
                                        & ((- (IData)(
                                                      (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_25020037__DOT__inst)))) 
                                           & vlSelf->ysyx_25020037__DOT__inst))))
            : vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
           [(0xfU & (vlSelf->ysyx_25020037__DOT__inst 
                     >> 0x14U))]);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1 
        = (((- (IData)(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
                           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
                                 | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                                    | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                       | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw))))))))) 
            & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
               + vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
           | ((- (IData)((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)))) 
              & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result));
    if (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) {
        vlSelf->ysyx_25020037__DOT__dnpc = vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1;
        vlSelf->ysyx_25020037__DOT__rlsu_addr = ((IData)(4U) 
                                                 + vlSelf->ysyx_25020037__DOT__pc);
    } else {
        vlSelf->ysyx_25020037__DOT__dnpc = ((IData)(4U) 
                                            + vlSelf->ysyx_25020037__DOT__pc);
        vlSelf->ysyx_25020037__DOT__rlsu_addr = vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1;
    }
    Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->ysyx_25020037__DOT__rlsu_addr, 
                                                                                ((1U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb))))) 
                                                                                | (4U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw)))))), 
                                                                                (- (IData)((IData)(vlSelf->ysyx_25020037__DOT__rlsu_we))), vlSelf->__Vfunc_ysyx_25020037__DOT__lsu_cpu__DOT__pmem_read__2__Vfuncout);
    vlSelf->ysyx_25020037__DOT__rlsu_data = (((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->ysyx_25020037__DOT__rlsu_we))
                                              ? vlSelf->__Vfunc_ysyx_25020037__DOT__lsu_cpu__DOT__pmem_read__2__Vfuncout
                                              : 0U);
    vlSelf->ysyx_25020037__DOT__final_result = ((IData)(vlSelf->reset)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->ysyx_25020037__DOT__rlsu_we)
                                                  ? vlSelf->ysyx_25020037__DOT__rlsu_data
                                                  : vlSelf->ysyx_25020037__DOT__rlsu_addr));
}

void Vysyx_25020037___024root___eval_ico(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_25020037___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_25020037___024root___eval_act(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_act\n"); );
}

void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__lsu_cpu__DOT__pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data, IData/*31:0*/ trace_on);

VL_INLINE_OPT void Vysyx_25020037___024root___nba_sequent__TOP__0(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S))) {
        Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__lsu_cpu__DOT__pmem_write_TOP(vlSelf->ysyx_25020037__DOT__rlsu_addr, 
                                                                                ((1U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb))))) 
                                                                                | (4U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw)))))), 
                                                                                vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))], 
                                                                                (- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S))));
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xfU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xeU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xdU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xcU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xbU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xaU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[9U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[8U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[7U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[6U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[5U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[4U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[3U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[2U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[1U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout = 0U;
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout;
        vlSelf->ysyx_25020037__DOT__pc = 0x80000000U;
    } else {
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x780U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xfU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x700U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xeU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x680U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xdU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x600U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xcU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x580U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xbU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x500U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xaU] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x480U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[9U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x400U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[8U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x380U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[7U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x300U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[6U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x280U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[5U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x200U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[4U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x180U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[3U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x100U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[2U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0x80U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[1U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout;
        if (((IData)(vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0) 
             & (0U == (0x780U & vlSelf->ysyx_25020037__DOT__inst)))) {
            vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout 
                = vlSelf->ysyx_25020037__DOT__final_result;
        }
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0U] 
            = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout;
        if ((1U & (~ (IData)(vlSelf->reset)))) {
            vlSelf->ysyx_25020037__DOT__pc = vlSelf->ysyx_25020037__DOT__dnpc;
        }
    }
    Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->ysyx_25020037__DOT__pc, 4U, 0U, vlSelf->__Vfunc_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
    vlSelf->ysyx_25020037__DOT__inst = ((IData)(vlSelf->reset)
                                         ? 0U : vlSelf->__Vfunc_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
        [(0xfU & (vlSelf->ysyx_25020037__DOT__inst 
                  >> 0xfU))];
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add 
        = (IData)((0x33U == (0xfe00707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl 
        = (IData)((0x67U == (0x707fU & vlSelf->ysyx_25020037__DOT__inst)));
    vlSelf->ysyx_25020037__DOT__rlsu_we = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                                           | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
           | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I 
        = ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
              | (IData)(vlSelf->ysyx_25020037__DOT__rlsu_we)));
    if ((1U & ((IData)((0x100073U == vlSelf->ysyx_25020037__DOT__inst)) 
               | (~ ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                     | (((IData)((0x100073U == vlSelf->ysyx_25020037__DOT__inst)) 
                         | (IData)((0U == vlSelf->ysyx_25020037__DOT__inst))) 
                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S) 
                              | (0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)))))))))) {
        Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__exu_cpu__DOT__hit_TOP(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                                                                | (((IData)(
                                                                                (0x100073U 
                                                                                == vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                == vlSelf->ysyx_25020037__DOT__inst))) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                                                                                | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))))))))));
    }
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_h3c6e89fd__0 
        = ((0U != (0xfU & (vlSelf->ysyx_25020037__DOT__inst 
                           >> 7U))) & ((~ (IData)(vlSelf->reset)) 
                                       & ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                                          | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
                                             | (0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst))))));
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
        = (((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I) 
            | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
               | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                  | ((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                     | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl)))))
            ? (((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I))) 
                & (((- (IData)((vlSelf->ysyx_25020037__DOT__inst 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelf->ysyx_25020037__DOT__inst 
                      >> 0x14U))) | (((- (IData)((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S))) 
                                      & (((- (IData)(
                                                     (vlSelf->ysyx_25020037__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->ysyx_25020037__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25020037__DOT__inst 
                                                  >> 7U))))) 
                                     | (0xfffff000U 
                                        & ((- (IData)(
                                                      (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_25020037__DOT__inst)))) 
                                           & vlSelf->ysyx_25020037__DOT__inst))))
            : vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
           [(0xfU & (vlSelf->ysyx_25020037__DOT__inst 
                     >> 0x14U))]);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1 
        = (((- (IData)(((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add) 
                        | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi) 
                           | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb) 
                              | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) 
                                 | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw) 
                                    | ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                       | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw))))))))) 
            & (vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
               + vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
           | ((- (IData)((0x37U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)))) 
              & vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result));
    if (vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl) {
        vlSelf->ysyx_25020037__DOT__dnpc = vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1;
        vlSelf->ysyx_25020037__DOT__rlsu_addr = ((IData)(4U) 
                                                 + vlSelf->ysyx_25020037__DOT__pc);
    } else {
        vlSelf->ysyx_25020037__DOT__dnpc = ((IData)(4U) 
                                            + vlSelf->ysyx_25020037__DOT__pc);
        vlSelf->ysyx_25020037__DOT__rlsu_addr = vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1;
    }
    Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->ysyx_25020037__DOT__rlsu_addr, 
                                                                                ((1U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu) 
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb))))) 
                                                                                | (4U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw) 
                                                                                | (IData)(vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw)))))), 
                                                                                (- (IData)((IData)(vlSelf->ysyx_25020037__DOT__rlsu_we))), vlSelf->__Vfunc_ysyx_25020037__DOT__lsu_cpu__DOT__pmem_read__2__Vfuncout);
    vlSelf->ysyx_25020037__DOT__rlsu_data = (((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->ysyx_25020037__DOT__rlsu_we))
                                              ? vlSelf->__Vfunc_ysyx_25020037__DOT__lsu_cpu__DOT__pmem_read__2__Vfuncout
                                              : 0U);
    vlSelf->ysyx_25020037__DOT__final_result = ((IData)(vlSelf->reset)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->ysyx_25020037__DOT__rlsu_we)
                                                  ? vlSelf->ysyx_25020037__DOT__rlsu_data
                                                  : vlSelf->ysyx_25020037__DOT__rlsu_addr));
}

void Vysyx_25020037___024root___eval_nba(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25020037___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vysyx_25020037___024root___eval_triggers__ico(Vysyx_25020037___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__ico(Vysyx_25020037___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25020037___024root___eval_triggers__act(Vysyx_25020037___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__act(Vysyx_25020037___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__nba(Vysyx_25020037___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25020037___024root___eval(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval\n"); );
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
        Vysyx_25020037___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25020037___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25020037.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_25020037___024root___eval_ico(vlSelf);
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
            Vysyx_25020037___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_25020037___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_25020037.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_25020037___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25020037___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25020037.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_25020037___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25020037___024root___eval_debug_assertions(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
