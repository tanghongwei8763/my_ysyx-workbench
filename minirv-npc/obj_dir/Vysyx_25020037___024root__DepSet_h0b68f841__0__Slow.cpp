// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25020037.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25020037___024root.h"

VL_ATTR_COLD void Vysyx_25020037___024root___eval_static(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_25020037___024root___eval_initial(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vysyx_25020037___024root___eval_final(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_25020037___024root___eval_triggers__stl(Vysyx_25020037___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__stl(Vysyx_25020037___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___eval_stl(Vysyx_25020037___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25020037___024root___eval_settle(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_25020037___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25020037___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25020037.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_25020037___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__stl(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ trace_on, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__exu_cpu__DOT__hit_TOP(IData/*31:0*/ inst_not_realize);

VL_ATTR_COLD void Vysyx_25020037___024root___stl_sequent__TOP__0(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h348cbac5__0;
    VlWide<3>/*95:0*/ __Vtemp_h504ba91e__0;
    VlWide<3>/*95:0*/ __Vtemp_hccfececd__0;
    VlWide<3>/*95:0*/ __Vtemp_ha81983c0__0;
    VlWide<4>/*127:0*/ __Vtemp_hb67a0c08__0;
    VlWide<4>/*127:0*/ __Vtemp_h06849649__0;
    VlWide<4>/*127:0*/ __Vtemp_h22555935__0;
    VlWide<3>/*95:0*/ __Vtemp_hb0924156__0;
    VlWide<3>/*95:0*/ __Vtemp_h669df4e8__0;
    VlWide<3>/*95:0*/ __Vtemp_haae00233__0;
    VlWide<3>/*95:0*/ __Vtemp_hd25c662e__0;
    VlWide<4>/*127:0*/ __Vtemp_h03d775af__0;
    VlWide<4>/*127:0*/ __Vtemp_h0a1a9cc7__0;
    VlWide<4>/*127:0*/ __Vtemp_hbbc213c2__0;
    // Body
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[1U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[2U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[3U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[4U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[5U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[6U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[7U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[8U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[9U] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xaU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xbU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xcU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xdU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xeU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[0xfU] 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout;
    Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read_TOP(vlSelf->ysyx_25020037__DOT__pc, 4U, 0U, vlSelf->__Vfunc_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
    vlSelf->ysyx_25020037__DOT__inst = ((IData)(vlSelf->reset)
                                         ? 0U : vlSelf->__Vfunc_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout);
    __Vtemp_h348cbac5__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_25020037__DOT__inst)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0x3eU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_25020037__DOT__inst)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x3dU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_25020037__DOT__inst)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x3cU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3aU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x39U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x38U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h348cbac5__0[1U] = (IData)(((((QData)((IData)(
                                                          (0x3fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_25020037__DOT__inst)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0x3eU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_25020037__DOT__inst)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x3dU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3cU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3bU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3aU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x39U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x38U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037__DOT__inst))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h504ba91e__0[2U] = (((0x48U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                                 << 8U) | (((0x47U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                            << 7U) 
                                           | (((0x46U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                               << 6U) 
                                              | (((0x45U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__inst)) 
                                                  << 5U) 
                                                 | (((0x44U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__inst)) 
                                                     << 4U) 
                                                    | (((0x43U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__inst)) 
                                                        << 3U) 
                                                       | (((0x42U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__inst)) 
                                                           << 2U) 
                                                          | (((0x41U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                              << 1U) 
                                                             | (0x40U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_25020037__DOT__inst))))))))));
    __Vtemp_hccfececd__0[2U] = (((0x50U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                                 << 0x10U) | (((0x4fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                               << 0xfU) 
                                              | (((0x4eU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__inst)) 
                                                  << 0xeU) 
                                                 | (((0x4dU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__inst)) 
                                                     << 0xdU) 
                                                    | (((0x4cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__inst)) 
                                                        << 0xcU) 
                                                       | (((0x4bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__inst)) 
                                                           << 0xbU) 
                                                          | (((0x4aU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                              << 0xaU) 
                                                             | (((0x49U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                 << 9U) 
                                                                | __Vtemp_h504ba91e__0[2U]))))))));
    __Vtemp_ha81983c0__0[2U] = (((0x58U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                                 << 0x18U) | (((0x57U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                               << 0x17U) 
                                              | (((0x56U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__inst)) 
                                                  << 0x16U) 
                                                 | (((0x55U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__inst)) 
                                                     << 0x15U) 
                                                    | (((0x54U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__inst)) 
                                                        << 0x14U) 
                                                       | (((0x53U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__inst)) 
                                                           << 0x13U) 
                                                          | (((0x52U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                              << 0x12U) 
                                                             | (((0x51U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_hccfececd__0[2U]))))))));
    __Vtemp_hb67a0c08__0[3U] = (((0x68U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                                 << 8U) | (((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                            << 7U) 
                                           | (((0x66U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                               << 6U) 
                                              | (((0x65U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__inst)) 
                                                  << 5U) 
                                                 | (((0x64U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__inst)) 
                                                     << 4U) 
                                                    | (((0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__inst)) 
                                                        << 3U) 
                                                       | (((0x62U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__inst)) 
                                                           << 2U) 
                                                          | (((0x61U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                              << 1U) 
                                                             | (0x60U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_25020037__DOT__inst))))))))));
    __Vtemp_h06849649__0[3U] = (((0x70U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                                 << 0x10U) | (((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                               << 0xfU) 
                                              | (((0x6eU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__inst)) 
                                                  << 0xeU) 
                                                 | (((0x6dU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__inst)) 
                                                     << 0xdU) 
                                                    | (((0x6cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__inst)) 
                                                        << 0xcU) 
                                                       | (((0x6bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__inst)) 
                                                           << 0xbU) 
                                                          | (((0x6aU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                              << 0xaU) 
                                                             | (((0x69U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                 << 9U) 
                                                                | __Vtemp_hb67a0c08__0[3U]))))))));
    __Vtemp_h22555935__0[3U] = (((0x78U == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                                 << 0x18U) | (((0x77U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                               << 0x17U) 
                                              | (((0x76U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__inst)) 
                                                  << 0x16U) 
                                                 | (((0x75U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037__DOT__inst)) 
                                                     << 0x15U) 
                                                    | (((0x74U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037__DOT__inst)) 
                                                        << 0x14U) 
                                                       | (((0x73U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037__DOT__inst)) 
                                                           << 0x13U) 
                                                          | (((0x72U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037__DOT__inst)) 
                                                              << 0x12U) 
                                                             | (((0x71U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037__DOT__inst)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h06849649__0[3U]))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d[0U] 
        = __Vtemp_h348cbac5__0[0U];
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d[1U] 
        = __Vtemp_h348cbac5__0[1U];
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d[2U] 
        = (((0x5fU == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
            << 0x1fU) | (((0x5eU == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                          << 0x1eU) | (((0x5dU == (0x7fU 
                                                   & vlSelf->ysyx_25020037__DOT__inst)) 
                                        << 0x1dU) | 
                                       (((0x5cU == 
                                          (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                                         << 0x1cU) 
                                        | (((0x5bU 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                            << 0x1bU) 
                                           | (((0x5aU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                               << 0x1aU) 
                                              | (((0x59U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__inst)) 
                                                  << 0x19U) 
                                                 | __Vtemp_ha81983c0__0[2U])))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d[3U] 
        = (((0x7fU == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
            << 0x1fU) | (((0x7eU == (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                          << 0x1eU) | (((0x7dU == (0x7fU 
                                                   & vlSelf->ysyx_25020037__DOT__inst)) 
                                        << 0x1dU) | 
                                       (((0x7cU == 
                                          (0x7fU & vlSelf->ysyx_25020037__DOT__inst)) 
                                         << 0x1cU) 
                                        | (((0x7bU 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                            << 0x1bU) 
                                           | (((0x7aU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037__DOT__inst)) 
                                               << 0x1aU) 
                                              | (((0x79U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037__DOT__inst)) 
                                                  << 0x19U) 
                                                 | __Vtemp_h22555935__0[3U])))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs2_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                >> 0x14U))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                   >> 0x14U))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                      >> 0x14U))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                         >> 0x14U))) 
                     << 0x1cU) | (((0x1bU == (0x1fU 
                                              & (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x14U))) 
                                   << 0x1bU) | (((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_25020037__DOT__inst 
                                                      >> 0x14U))) 
                                                 << 0x1aU) 
                                                | (((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_25020037__DOT__inst 
                                                         >> 0x14U))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_25020037__DOT__inst 
                                                            >> 0x14U))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_25020037__DOT__inst 
                                                               >> 0x14U))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_25020037__DOT__inst 
                                                                  >> 0x14U))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_25020037__DOT__inst 
                                                                     >> 0x14U))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_25020037__DOT__inst 
                                                                        >> 0x14U))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_25020037__DOT__inst 
                                                                           >> 0x14U))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyx_25020037__DOT__inst 
                                                                              >> 0x14U))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x14U))))))))))))))))))))))))))))))))));
    __Vtemp_hb0924156__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          == 
                                                          (vlSelf->ysyx_25020037__DOT__inst 
                                                           >> 0x19U)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0x3eU 
                                                             == 
                                                             (vlSelf->ysyx_25020037__DOT__inst 
                                                              >> 0x19U)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x3dU 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                 >> 0x19U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x3cU 
                                                                   == 
                                                                   (vlSelf->ysyx_25020037__DOT__inst 
                                                                    >> 0x19U)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (vlSelf->ysyx_25020037__DOT__inst 
                                                                       >> 0x19U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3aU 
                                                                         == 
                                                                         (vlSelf->ysyx_25020037__DOT__inst 
                                                                          >> 0x19U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x39U 
                                                                            == 
                                                                            (vlSelf->ysyx_25020037__DOT__inst 
                                                                             >> 0x19U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x38U 
                                                                               == 
                                                                               (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_hb0924156__0[1U] = (IData)(((((QData)((IData)(
                                                          (0x3fU 
                                                           == 
                                                           (vlSelf->ysyx_25020037__DOT__inst 
                                                            >> 0x19U)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0x3eU 
                                                              == 
                                                              (vlSelf->ysyx_25020037__DOT__inst 
                                                               >> 0x19U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x3dU 
                                                                 == 
                                                                 (vlSelf->ysyx_25020037__DOT__inst 
                                                                  >> 0x19U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3cU 
                                                                    == 
                                                                    (vlSelf->ysyx_25020037__DOT__inst 
                                                                     >> 0x19U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3bU 
                                                                       == 
                                                                       (vlSelf->ysyx_25020037__DOT__inst 
                                                                        >> 0x19U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3aU 
                                                                          == 
                                                                          (vlSelf->ysyx_25020037__DOT__inst 
                                                                           >> 0x19U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x39U 
                                                                             == 
                                                                             (vlSelf->ysyx_25020037__DOT__inst 
                                                                              >> 0x19U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x38U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h669df4e8__0[2U] = (((0x48U == (vlSelf->ysyx_25020037__DOT__inst 
                                            >> 0x19U)) 
                                 << 8U) | (((0x47U 
                                             == (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x19U)) 
                                            << 7U) 
                                           | (((0x46U 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x19U)) 
                                               << 6U) 
                                              | (((0x45U 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__inst 
                                                    >> 0x19U)) 
                                                  << 5U) 
                                                 | (((0x44U 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__inst 
                                                       >> 0x19U)) 
                                                     << 4U) 
                                                    | (((0x43U 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__inst 
                                                          >> 0x19U)) 
                                                        << 3U) 
                                                       | (((0x42U 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__inst 
                                                             >> 0x19U)) 
                                                           << 2U) 
                                                          | (((0x41U 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__inst 
                                                                >> 0x19U)) 
                                                              << 1U) 
                                                             | (0x40U 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                 >> 0x19U))))))))));
    __Vtemp_haae00233__0[2U] = (((0x50U == (vlSelf->ysyx_25020037__DOT__inst 
                                            >> 0x19U)) 
                                 << 0x10U) | (((0x4fU 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x19U)) 
                                               << 0xfU) 
                                              | (((0x4eU 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__inst 
                                                    >> 0x19U)) 
                                                  << 0xeU) 
                                                 | (((0x4dU 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__inst 
                                                       >> 0x19U)) 
                                                     << 0xdU) 
                                                    | (((0x4cU 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__inst 
                                                          >> 0x19U)) 
                                                        << 0xcU) 
                                                       | (((0x4bU 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__inst 
                                                             >> 0x19U)) 
                                                           << 0xbU) 
                                                          | (((0x4aU 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__inst 
                                                                >> 0x19U)) 
                                                              << 0xaU) 
                                                             | (((0x49U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037__DOT__inst 
                                                                   >> 0x19U)) 
                                                                 << 9U) 
                                                                | __Vtemp_h669df4e8__0[2U]))))))));
    __Vtemp_hd25c662e__0[2U] = (((0x58U == (vlSelf->ysyx_25020037__DOT__inst 
                                            >> 0x19U)) 
                                 << 0x18U) | (((0x57U 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x19U)) 
                                               << 0x17U) 
                                              | (((0x56U 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__inst 
                                                    >> 0x19U)) 
                                                  << 0x16U) 
                                                 | (((0x55U 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__inst 
                                                       >> 0x19U)) 
                                                     << 0x15U) 
                                                    | (((0x54U 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__inst 
                                                          >> 0x19U)) 
                                                        << 0x14U) 
                                                       | (((0x53U 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__inst 
                                                             >> 0x19U)) 
                                                           << 0x13U) 
                                                          | (((0x52U 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__inst 
                                                                >> 0x19U)) 
                                                              << 0x12U) 
                                                             | (((0x51U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037__DOT__inst 
                                                                   >> 0x19U)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_haae00233__0[2U]))))))));
    __Vtemp_h03d775af__0[3U] = (((0x68U == (vlSelf->ysyx_25020037__DOT__inst 
                                            >> 0x19U)) 
                                 << 8U) | (((0x67U 
                                             == (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x19U)) 
                                            << 7U) 
                                           | (((0x66U 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x19U)) 
                                               << 6U) 
                                              | (((0x65U 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__inst 
                                                    >> 0x19U)) 
                                                  << 5U) 
                                                 | (((0x64U 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__inst 
                                                       >> 0x19U)) 
                                                     << 4U) 
                                                    | (((0x63U 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__inst 
                                                          >> 0x19U)) 
                                                        << 3U) 
                                                       | (((0x62U 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__inst 
                                                             >> 0x19U)) 
                                                           << 2U) 
                                                          | (((0x61U 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__inst 
                                                                >> 0x19U)) 
                                                              << 1U) 
                                                             | (0x60U 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                 >> 0x19U))))))))));
    __Vtemp_h0a1a9cc7__0[3U] = (((0x70U == (vlSelf->ysyx_25020037__DOT__inst 
                                            >> 0x19U)) 
                                 << 0x10U) | (((0x6fU 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x19U)) 
                                               << 0xfU) 
                                              | (((0x6eU 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__inst 
                                                    >> 0x19U)) 
                                                  << 0xeU) 
                                                 | (((0x6dU 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__inst 
                                                       >> 0x19U)) 
                                                     << 0xdU) 
                                                    | (((0x6cU 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__inst 
                                                          >> 0x19U)) 
                                                        << 0xcU) 
                                                       | (((0x6bU 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__inst 
                                                             >> 0x19U)) 
                                                           << 0xbU) 
                                                          | (((0x6aU 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__inst 
                                                                >> 0x19U)) 
                                                              << 0xaU) 
                                                             | (((0x69U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037__DOT__inst 
                                                                   >> 0x19U)) 
                                                                 << 9U) 
                                                                | __Vtemp_h03d775af__0[3U]))))))));
    __Vtemp_hbbc213c2__0[3U] = (((0x78U == (vlSelf->ysyx_25020037__DOT__inst 
                                            >> 0x19U)) 
                                 << 0x18U) | (((0x77U 
                                                == 
                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0x19U)) 
                                               << 0x17U) 
                                              | (((0x76U 
                                                   == 
                                                   (vlSelf->ysyx_25020037__DOT__inst 
                                                    >> 0x19U)) 
                                                  << 0x16U) 
                                                 | (((0x75U 
                                                      == 
                                                      (vlSelf->ysyx_25020037__DOT__inst 
                                                       >> 0x19U)) 
                                                     << 0x15U) 
                                                    | (((0x74U 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__inst 
                                                          >> 0x19U)) 
                                                        << 0x14U) 
                                                       | (((0x73U 
                                                            == 
                                                            (vlSelf->ysyx_25020037__DOT__inst 
                                                             >> 0x19U)) 
                                                           << 0x13U) 
                                                          | (((0x72U 
                                                               == 
                                                               (vlSelf->ysyx_25020037__DOT__inst 
                                                                >> 0x19U)) 
                                                              << 0x12U) 
                                                             | (((0x71U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037__DOT__inst 
                                                                   >> 0x19U)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h0a1a9cc7__0[3U]))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d[0U] 
        = __Vtemp_hb0924156__0[0U];
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d[1U] 
        = __Vtemp_hb0924156__0[1U];
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d[2U] 
        = (((0x5fU == (vlSelf->ysyx_25020037__DOT__inst 
                       >> 0x19U)) << 0x1fU) | (((0x5eU 
                                                 == 
                                                 (vlSelf->ysyx_25020037__DOT__inst 
                                                  >> 0x19U)) 
                                                << 0x1eU) 
                                               | (((0x5dU 
                                                    == 
                                                    (vlSelf->ysyx_25020037__DOT__inst 
                                                     >> 0x19U)) 
                                                   << 0x1dU) 
                                                  | (((0x5cU 
                                                       == 
                                                       (vlSelf->ysyx_25020037__DOT__inst 
                                                        >> 0x19U)) 
                                                      << 0x1cU) 
                                                     | (((0x5bU 
                                                          == 
                                                          (vlSelf->ysyx_25020037__DOT__inst 
                                                           >> 0x19U)) 
                                                         << 0x1bU) 
                                                        | (((0x5aU 
                                                             == 
                                                             (vlSelf->ysyx_25020037__DOT__inst 
                                                              >> 0x19U)) 
                                                            << 0x1aU) 
                                                           | (((0x59U 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                 >> 0x19U)) 
                                                               << 0x19U) 
                                                              | __Vtemp_hd25c662e__0[2U])))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d[3U] 
        = (((0x7fU == (vlSelf->ysyx_25020037__DOT__inst 
                       >> 0x19U)) << 0x1fU) | (((0x7eU 
                                                 == 
                                                 (vlSelf->ysyx_25020037__DOT__inst 
                                                  >> 0x19U)) 
                                                << 0x1eU) 
                                               | (((0x7dU 
                                                    == 
                                                    (vlSelf->ysyx_25020037__DOT__inst 
                                                     >> 0x19U)) 
                                                   << 0x1dU) 
                                                  | (((0x7cU 
                                                       == 
                                                       (vlSelf->ysyx_25020037__DOT__inst 
                                                        >> 0x19U)) 
                                                      << 0x1cU) 
                                                     | (((0x7bU 
                                                          == 
                                                          (vlSelf->ysyx_25020037__DOT__inst 
                                                           >> 0x19U)) 
                                                         << 0x1bU) 
                                                        | (((0x7aU 
                                                             == 
                                                             (vlSelf->ysyx_25020037__DOT__inst 
                                                              >> 0x19U)) 
                                                            << 0x1aU) 
                                                           | (((0x79U 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                 >> 0x19U)) 
                                                               << 0x19U) 
                                                              | __Vtemp_hbbc213c2__0[3U])))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rd_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                >> 7U))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                   >> 7U))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                      >> 7U))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                         >> 7U))) << 0x1cU) 
                    | (((0x1bU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                            >> 7U))) 
                        << 0x1bU) | (((0x1aU == (0x1fU 
                                                 & (vlSelf->ysyx_25020037__DOT__inst 
                                                    >> 7U))) 
                                      << 0x1aU) | (
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_25020037__DOT__inst 
                                                         >> 7U))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_25020037__DOT__inst 
                                                            >> 7U))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_25020037__DOT__inst 
                                                               >> 7U))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_25020037__DOT__inst 
                                                                  >> 7U))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_25020037__DOT__inst 
                                                                     >> 7U))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_25020037__DOT__inst 
                                                                        >> 7U))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_25020037__DOT__inst 
                                                                           >> 7U))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyx_25020037__DOT__inst 
                                                                              >> 7U))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 7U))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs1_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                >> 0xfU))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                   >> 0xfU))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                      >> 0xfU))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
                                         >> 0xfU))) 
                     << 0x1cU) | (((0x1bU == (0x1fU 
                                              & (vlSelf->ysyx_25020037__DOT__inst 
                                                 >> 0xfU))) 
                                   << 0x1bU) | (((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_25020037__DOT__inst 
                                                      >> 0xfU))) 
                                                 << 0x1aU) 
                                                | (((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_25020037__DOT__inst 
                                                         >> 0xfU))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_25020037__DOT__inst 
                                                            >> 0xfU))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_25020037__DOT__inst 
                                                               >> 0xfU))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_25020037__DOT__inst 
                                                                  >> 0xfU))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_25020037__DOT__inst 
                                                                     >> 0xfU))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_25020037__DOT__inst 
                                                                        >> 0xfU))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_25020037__DOT__inst 
                                                                           >> 0xfU))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyx_25020037__DOT__inst 
                                                                              >> 0xfU))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_26_d 
        = (((QData)((IData)((0x3fU == (vlSelf->ysyx_25020037__DOT__inst 
                                       >> 0x1aU)))) 
            << 0x3fU) | (((QData)((IData)((0x3eU == 
                                           (vlSelf->ysyx_25020037__DOT__inst 
                                            >> 0x1aU)))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (0x3dU 
                                                         == 
                                                         (vlSelf->ysyx_25020037__DOT__inst 
                                                          >> 0x1aU)))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (0x3cU 
                                                          == 
                                                          (vlSelf->ysyx_25020037__DOT__inst 
                                                           >> 0x1aU)))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (0x3bU 
                                                             == 
                                                             (vlSelf->ysyx_25020037__DOT__inst 
                                                              >> 0x1aU)))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0x3aU 
                                                                == 
                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                 >> 0x1aU)))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0x39U 
                                                                   == 
                                                                   (vlSelf->ysyx_25020037__DOT__inst 
                                                                    >> 0x1aU)))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (0x38U 
                                                                      == 
                                                                      (vlSelf->ysyx_25020037__DOT__inst 
                                                                       >> 0x1aU)))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (0x37U 
                                                                         == 
                                                                         (vlSelf->ysyx_25020037__DOT__inst 
                                                                          >> 0x1aU)))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (0x36U 
                                                                            == 
                                                                            (vlSelf->ysyx_25020037__DOT__inst 
                                                                             >> 0x1aU)))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (0x35U 
                                                                               == 
                                                                               (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037__DOT__inst 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
        = vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs
        [(0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
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
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0 
        = ((0U != (0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
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
           [(0x1fU & (vlSelf->ysyx_25020037__DOT__inst 
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

VL_ATTR_COLD void Vysyx_25020037___024root___eval_stl(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25020037___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__ico(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__act(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__nba(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25020037___024root___ctor_var_reset(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__rlsu_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__rlsu_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__rlsu_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__final_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__dnpc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__gpr_cpu__DOT____VdfgTmp_hc1d278a0__0 = 0;
    VL_RAND_RESET_W(128, vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_25_d);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_31_26_d = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__opcode_06_00_d);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs1_d = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rs2_d = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__rd_d = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_jarl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_I = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__idu_cpu__DOT__TYPE_S = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_result1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bne = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_beq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bgeu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_blt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__op_bltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_25020037__DOT__lsu_cpu__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
