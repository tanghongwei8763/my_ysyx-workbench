// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu___024root.h"

void Vcpu___024root___eval_act(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_act\n"); );
}

void Vcpu___024root____Vdpiimwrap_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->cpu__DOT__pc = 0x80000000U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4 = 0U;
        vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4 = 0U;
    } else {
        vlSelf->cpu__DOT__pc = vlSelf->cpu__DOT____Vcellinp__PC__din;
        if ((1U == (0x1fU & (vlSelf->cpu__DOT__s >> 7U)))) {
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
            vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4 
                = vlSelf->cpu__DOT__result;
        }
    }
    vlSelf->cpu__DOT____Vcellinp__PC__din = ((IData)(4U) 
                                             + vlSelf->cpu__DOT__pc);
    Vcpu___024root____Vdpiimwrap_cpu__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->cpu__DOT__pc, 4U, vlSelf->__Vfunc_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
    vlSelf->cpu__DOT__s = vlSelf->__Vfunc_cpu__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1fU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1eU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1dU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1cU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1bU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x1aU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x19U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x18U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x17U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x16U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x15U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x14U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x13U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x12U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x11U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0x10U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xfU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xeU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xdU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xcU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xbU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0xaU] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[9U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[8U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[7U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[6U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[5U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[4U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[3U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[2U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[1U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs[0U] 
        = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst____pinNumber4;
    vlSelf->cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__lut_out 
        = ((vlSelf->cpu__DOT__s == vlSelf->cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__key_list
            [0U]) & vlSelf->cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__TYPE_type = vlSelf->cpu__DOT__idu_cpu__DOT__INSTPAT_code__DOT__i0__DOT__lut_out;
    vlSelf->cpu__DOT__src2 = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs
        [(0x1fU & (vlSelf->cpu__DOT__s >> 0x14U))];
    vlSelf->cpu__DOT__src1 = vlSelf->cpu__DOT__lsu_cpu__DOT__lsu_gpr__DOT__regs
        [(0x1fU & (vlSelf->cpu__DOT__s >> 0xfU))];
    vlSelf->cpu__DOT__imm = ((IData)(vlSelf->cpu__DOT__TYPE_type)
                              ? 0U : (((- (IData)((vlSelf->cpu__DOT__s 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->cpu__DOT__s 
                                                   >> 0x14U)));
    vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->cpu__DOT__src1 
                                             + vlSelf->cpu__DOT__src2))));
    vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->cpu__DOT__src1 + vlSelf->cpu__DOT__src2);
    vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)((vlSelf->cpu__DOT__imm + vlSelf->cpu__DOT__src1)));
    vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->cpu__DOT__imm + vlSelf->cpu__DOT__src1);
    vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->cpu__DOT__TYPE_type) 
                       == vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__TYPE_type) == 
           vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->cpu__DOT__TYPE_type) 
                          == vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->cpu__DOT__TYPE_type) 
              == vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__result = ((IData)(vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__hit)
                                 ? vlSelf->cpu__DOT__exu_cpu__DOT__mux_inst__DOT__i0__DOT__lut_out
                                 : 0U);
}

void Vcpu___024root___eval_nba(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vcpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vcpu___024root___eval_triggers__act(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcpu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/cpu.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/cpu.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcpu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
