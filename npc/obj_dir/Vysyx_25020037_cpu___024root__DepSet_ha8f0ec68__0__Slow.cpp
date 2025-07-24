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
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
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
                VL_FATAL_MT("vsrc/ysyx_25020037_cpu.v", 3, "", "Settle region did not converge.");
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

void Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__exu_cpu__DOT__hit_TOP(IData/*31:0*/ inst_not_realize);
extern const VlUnpacked<CData/*1:0*/, 512> Vysyx_25020037_cpu__ConstPool__TABLE_h9cf5be28_0;

VL_ATTR_COLD void Vysyx_25020037_cpu___024root___stl_sequent__TOP__0(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h8fb38b02__0;
    VlWide<3>/*95:0*/ __Vtemp_hea0d71ff__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f1536fe__0;
    VlWide<3>/*95:0*/ __Vtemp_h51d0bcca__0;
    VlWide<4>/*127:0*/ __Vtemp_hc2716c51__0;
    VlWide<4>/*127:0*/ __Vtemp_h1cf300ea__0;
    VlWide<4>/*127:0*/ __Vtemp_h3280094f__0;
    VlWide<3>/*95:0*/ __Vtemp_hbfa86269__0;
    VlWide<3>/*95:0*/ __Vtemp_h10170542__0;
    VlWide<3>/*95:0*/ __Vtemp_he6abf226__0;
    VlWide<3>/*95:0*/ __Vtemp_h22f1d73f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc6260859__0;
    VlWide<4>/*127:0*/ __Vtemp_hc2e5afb2__0;
    VlWide<4>/*127:0*/ __Vtemp_h38a4a9c6__0;
    // Body
    if ((IData)((0ULL != (0x30ULL & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r)))) {
        Vysyx_25020037_cpu___024root____Vdpiimwrap_ysyx_25020037_cpu__DOT__exu_cpu__DOT__hit_TOP(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 4U))))));
    }
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__src2 
        = vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U];
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd 
        = (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                    >> 7U));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1 
        = (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                    >> 0xfU));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2 
        = (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                    >> 0x14U));
    __Vtemp_h8fb38b02__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0x3eU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x3dU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x3cU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3aU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x39U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x38U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h8fb38b02__0[1U] = (IData)(((((QData)((IData)(
                                                          (0x3fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0x3eU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x3dU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3cU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3bU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3aU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x39U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x38U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hea0d71ff__0[2U] = (((0x48U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 8U) | (((0x47U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            << 7U) 
                                           | (((0x46U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 6U) 
                                              | (((0x45U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 5U) 
                                                 | (((0x44U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 4U) 
                                                    | (((0x43U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 3U) 
                                                       | (((0x42U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 2U) 
                                                          | (((0x41U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 1U) 
                                                             | (0x40U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))))))))));
    __Vtemp_h0f1536fe__0[2U] = (((0x50U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x10U) | (((0x4fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0xfU) 
                                              | (((0x4eU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0xeU) 
                                                 | (((0x4dU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0xdU) 
                                                    | (((0x4cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0xcU) 
                                                       | (((0x4bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0xbU) 
                                                          | (((0x4aU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0xaU) 
                                                             | (((0x49U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 9U) 
                                                                | __Vtemp_hea0d71ff__0[2U]))))))));
    __Vtemp_h51d0bcca__0[2U] = (((0x58U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x18U) | (((0x57U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x17U) 
                                              | (((0x56U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x16U) 
                                                 | (((0x55U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0x15U) 
                                                    | (((0x54U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0x14U) 
                                                       | (((0x53U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0x13U) 
                                                          | (((0x52U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0x12U) 
                                                             | (((0x51U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h0f1536fe__0[2U]))))))));
    __Vtemp_hc2716c51__0[3U] = (((0x68U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 8U) | (((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            << 7U) 
                                           | (((0x66U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 6U) 
                                              | (((0x65U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 5U) 
                                                 | (((0x64U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 4U) 
                                                    | (((0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 3U) 
                                                       | (((0x62U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 2U) 
                                                          | (((0x61U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 1U) 
                                                             | (0x60U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))))))))));
    __Vtemp_h1cf300ea__0[3U] = (((0x70U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x10U) | (((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0xfU) 
                                              | (((0x6eU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0xeU) 
                                                 | (((0x6dU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0xdU) 
                                                    | (((0x6cU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0xcU) 
                                                       | (((0x6bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0xbU) 
                                                          | (((0x6aU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0xaU) 
                                                             | (((0x69U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 9U) 
                                                                | __Vtemp_hc2716c51__0[3U]))))))));
    __Vtemp_h3280094f__0[3U] = (((0x78U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                 << 0x18U) | (((0x77U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x17U) 
                                              | (((0x76U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x16U) 
                                                 | (((0x75U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     << 0x15U) 
                                                    | (((0x74U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                        << 0x14U) 
                                                       | (((0x73U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                           << 0x13U) 
                                                          | (((0x72U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                              << 0x12U) 
                                                             | (((0x71U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_h1cf300ea__0[3U]))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d[0U] 
        = __Vtemp_h8fb38b02__0[0U];
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d[1U] 
        = __Vtemp_h8fb38b02__0[1U];
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d[2U] 
        = (((0x5fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
            << 0x1fU) | (((0x5eU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                          << 0x1eU) | (((0x5dU == (0x7fU 
                                                   & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                        << 0x1dU) | 
                                       (((0x5cU == 
                                          (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                         << 0x1cU) 
                                        | (((0x5bU 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            << 0x1bU) 
                                           | (((0x5aU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x1aU) 
                                              | (((0x59U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x19U) 
                                                 | __Vtemp_h51d0bcca__0[2U])))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d[3U] 
        = (((0x7fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
            << 0x1fU) | (((0x7eU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                          << 0x1eU) | (((0x7dU == (0x7fU 
                                                   & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                        << 0x1dU) | 
                                       (((0x7cU == 
                                          (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                         << 0x1cU) 
                                        | (((0x7bU 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                            << 0x1bU) 
                                           | (((0x7aU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               << 0x1aU) 
                                              | (((0x79U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  << 0x19U) 
                                                 | __Vtemp_h3280094f__0[3U])))))));
    __Vtemp_hbfa86269__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          == 
                                                          (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x19U)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0x3eU 
                                                             == 
                                                             (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x19U)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x3dU 
                                                                == 
                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x3cU 
                                                                   == 
                                                                   (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                    >> 0x19U)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                       >> 0x19U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3aU 
                                                                         == 
                                                                         (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                          >> 0x19U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x39U 
                                                                            == 
                                                                            (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                             >> 0x19U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x38U 
                                                                               == 
                                                                               (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_hbfa86269__0[1U] = (IData)(((((QData)((IData)(
                                                          (0x3fU 
                                                           == 
                                                           (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                            >> 0x19U)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0x3eU 
                                                              == 
                                                              (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                               >> 0x19U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x3dU 
                                                                 == 
                                                                 (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 0x19U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3cU 
                                                                    == 
                                                                    (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 0x19U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3bU 
                                                                       == 
                                                                       (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 0x19U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3aU 
                                                                          == 
                                                                          (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 0x19U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x39U 
                                                                             == 
                                                                             (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 0x19U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x38U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x36U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x35U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h10170542__0[2U] = (((0x48U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 8U) | (((0x47U 
                                             == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                            << 7U) 
                                           | (((0x46U 
                                                == 
                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 6U) 
                                              | (((0x45U 
                                                   == 
                                                   (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 5U) 
                                                 | (((0x44U 
                                                      == 
                                                      (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 4U) 
                                                    | (((0x43U 
                                                         == 
                                                         (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 3U) 
                                                       | (((0x42U 
                                                            == 
                                                            (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 2U) 
                                                          | (((0x41U 
                                                               == 
                                                               (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 1U) 
                                                             | (0x40U 
                                                                == 
                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U))))))))));
    __Vtemp_he6abf226__0[2U] = (((0x50U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x10U) | (((0x4fU 
                                                == 
                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0xfU) 
                                              | (((0x4eU 
                                                   == 
                                                   (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0xeU) 
                                                 | (((0x4dU 
                                                      == 
                                                      (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0xdU) 
                                                    | (((0x4cU 
                                                         == 
                                                         (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0xcU) 
                                                       | (((0x4bU 
                                                            == 
                                                            (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0xbU) 
                                                          | (((0x4aU 
                                                               == 
                                                               (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0xaU) 
                                                             | (((0x49U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 9U) 
                                                                | __Vtemp_h10170542__0[2U]))))))));
    __Vtemp_h22f1d73f__0[2U] = (((0x58U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x18U) | (((0x57U 
                                                == 
                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0x17U) 
                                              | (((0x56U 
                                                   == 
                                                   (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0x16U) 
                                                 | (((0x55U 
                                                      == 
                                                      (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0x15U) 
                                                    | (((0x54U 
                                                         == 
                                                         (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0x14U) 
                                                       | (((0x53U 
                                                            == 
                                                            (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0x13U) 
                                                          | (((0x52U 
                                                               == 
                                                               (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0x12U) 
                                                             | (((0x51U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_he6abf226__0[2U]))))))));
    __Vtemp_hc6260859__0[3U] = (((0x68U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 8U) | (((0x67U 
                                             == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                            << 7U) 
                                           | (((0x66U 
                                                == 
                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 6U) 
                                              | (((0x65U 
                                                   == 
                                                   (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 5U) 
                                                 | (((0x64U 
                                                      == 
                                                      (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 4U) 
                                                    | (((0x63U 
                                                         == 
                                                         (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 3U) 
                                                       | (((0x62U 
                                                            == 
                                                            (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 2U) 
                                                          | (((0x61U 
                                                               == 
                                                               (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 1U) 
                                                             | (0x60U 
                                                                == 
                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U))))))))));
    __Vtemp_hc2e5afb2__0[3U] = (((0x70U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x10U) | (((0x6fU 
                                                == 
                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0xfU) 
                                              | (((0x6eU 
                                                   == 
                                                   (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0xeU) 
                                                 | (((0x6dU 
                                                      == 
                                                      (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0xdU) 
                                                    | (((0x6cU 
                                                         == 
                                                         (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0xcU) 
                                                       | (((0x6bU 
                                                            == 
                                                            (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0xbU) 
                                                          | (((0x6aU 
                                                               == 
                                                               (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0xaU) 
                                                             | (((0x69U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 9U) 
                                                                | __Vtemp_hc6260859__0[3U]))))))));
    __Vtemp_h38a4a9c6__0[3U] = (((0x78U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x19U)) 
                                 << 0x18U) | (((0x77U 
                                                == 
                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x19U)) 
                                               << 0x17U) 
                                              | (((0x76U 
                                                   == 
                                                   (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x19U)) 
                                                  << 0x16U) 
                                                 | (((0x75U 
                                                      == 
                                                      (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x19U)) 
                                                     << 0x15U) 
                                                    | (((0x74U 
                                                         == 
                                                         (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x19U)) 
                                                        << 0x14U) 
                                                       | (((0x73U 
                                                            == 
                                                            (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                             >> 0x19U)) 
                                                           << 0x13U) 
                                                          | (((0x72U 
                                                               == 
                                                               (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                >> 0x19U)) 
                                                              << 0x12U) 
                                                             | (((0x71U 
                                                                  == 
                                                                  (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                   >> 0x19U)) 
                                                                 << 0x11U) 
                                                                | __Vtemp_hc2e5afb2__0[3U]))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d[0U] 
        = __Vtemp_hbfa86269__0[0U];
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d[1U] 
        = __Vtemp_hbfa86269__0[1U];
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d[2U] 
        = (((0x5fU == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                       >> 0x19U)) << 0x1fU) | (((0x5eU 
                                                 == 
                                                 (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                  >> 0x19U)) 
                                                << 0x1eU) 
                                               | (((0x5dU 
                                                    == 
                                                    (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                     >> 0x19U)) 
                                                   << 0x1dU) 
                                                  | (((0x5cU 
                                                       == 
                                                       (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                        >> 0x19U)) 
                                                      << 0x1cU) 
                                                     | (((0x5bU 
                                                          == 
                                                          (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x19U)) 
                                                         << 0x1bU) 
                                                        | (((0x5aU 
                                                             == 
                                                             (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x19U)) 
                                                            << 0x1aU) 
                                                           | (((0x59U 
                                                                == 
                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U)) 
                                                               << 0x19U) 
                                                              | __Vtemp_h22f1d73f__0[2U])))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d[3U] 
        = (((0x7fU == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                       >> 0x19U)) << 0x1fU) | (((0x7eU 
                                                 == 
                                                 (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                  >> 0x19U)) 
                                                << 0x1eU) 
                                               | (((0x7dU 
                                                    == 
                                                    (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                     >> 0x19U)) 
                                                   << 0x1dU) 
                                                  | (((0x7cU 
                                                       == 
                                                       (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                        >> 0x19U)) 
                                                      << 0x1cU) 
                                                     | (((0x7bU 
                                                          == 
                                                          (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x19U)) 
                                                         << 0x1bU) 
                                                        | (((0x7aU 
                                                             == 
                                                             (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x19U)) 
                                                            << 0x1aU) 
                                                           | (((0x79U 
                                                                == 
                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x19U)) 
                                                               << 0x19U) 
                                                              | __Vtemp_h38a4a9c6__0[3U])))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                >> 0x14U))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                   >> 0x14U))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                      >> 0x14U))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                         >> 0x14U))) 
                     << 0x1cU) | (((0x1bU == (0x1fU 
                                              & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0x14U))) 
                                   << 0x1bU) | (((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                      >> 0x14U))) 
                                                 << 0x1aU) 
                                                | (((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                         >> 0x14U))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                            >> 0x14U))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                               >> 0x14U))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 0x14U))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 0x14U))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 0x14U))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 0x14U))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 0x14U))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x14U))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d 
        = (((QData)((IData)((0x3fU == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                       >> 0x1aU)))) 
            << 0x3fU) | (((QData)((IData)((0x3eU == 
                                           (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 0x1aU)))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (0x3dU 
                                                         == 
                                                         (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x1aU)))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (0x3cU 
                                                          == 
                                                          (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                           >> 0x1aU)))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (0x3bU 
                                                             == 
                                                             (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                              >> 0x1aU)))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0x3aU 
                                                                == 
                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                 >> 0x1aU)))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0x39U 
                                                                   == 
                                                                   (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                    >> 0x1aU)))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (0x38U 
                                                                      == 
                                                                      (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                       >> 0x1aU)))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (0x37U 
                                                                         == 
                                                                         (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                          >> 0x1aU)))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (0x36U 
                                                                            == 
                                                                            (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                             >> 0x1aU)))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (0x35U 
                                                                               == 
                                                                               (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                >> 7U))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                   >> 7U))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                      >> 7U))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                         >> 7U))) << 0x1cU) 
                    | (((0x1bU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                            >> 7U))) 
                        << 0x1bU) | (((0x1aU == (0x1fU 
                                                 & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 7U))) 
                                      << 0x1aU) | (
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                         >> 7U))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                            >> 7U))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                               >> 7U))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 7U))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 7U))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 7U))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 7U))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 7U))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 7U))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d 
        = (((0x1fU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                >> 0xfU))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                   >> 0xfU))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                      >> 0xfU))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                         >> 0xfU))) 
                     << 0x1cU) | (((0x1bU == (0x1fU 
                                              & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                 >> 0xfU))) 
                                   << 0x1bU) | (((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                      >> 0xfU))) 
                                                 << 0x1aU) 
                                                | (((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                         >> 0xfU))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                            >> 0xfU))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                               >> 0xfU))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                  >> 0xfU))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                     >> 0xfU))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                        >> 0xfU))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                           >> 0xfU))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                              >> 0xfU))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__lfsr_tap 
        = (1U & VL_REDXOR_8((0xb8U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__lfsr))));
    vlSelf->ysyx_25020037_cpu__DOT__ifu_arready = (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master)) 
                                                   & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_arready));
    vlSelf->ysyx_25020037_cpu__DOT__lsu_arready = (
                                                   (1U 
                                                    != (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master)) 
                                                   & ((2U 
                                                       == (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master)) 
                                                      & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_arready)));
    vlSelf->ysyx_25020037_cpu__DOT__lsu_awready = (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master)) 
                                                   & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_awready));
    vlSelf->ysyx_25020037_cpu__DOT__sram_wvalid = (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master)) 
                                                   & (IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_wvalid));
    vlSelf->ysyx_25020037_cpu__DOT__lsu_wready = ((2U 
                                                   == (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master)) 
                                                  & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_wready));
    vlSelf->ysyx_25020037_cpu__DOT__ifu_rdata = 0U;
    vlSelf->ysyx_25020037_cpu__DOT__ifu_rresp = 0U;
    vlSelf->ysyx_25020037_cpu__DOT__lsu_rdata = 0U;
    vlSelf->ysyx_25020037_cpu__DOT__lsu_rvalid = 0U;
    vlSelf->ysyx_25020037_cpu__DOT__lsu_rresp = 0U;
    if ((1U != (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master))) {
        if ((2U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master))) {
            vlSelf->ysyx_25020037_cpu__DOT__lsu_rdata 
                = vlSelf->ysyx_25020037_cpu__DOT__sram_rdata;
            vlSelf->ysyx_25020037_cpu__DOT__lsu_rvalid 
                = vlSelf->ysyx_25020037_cpu__DOT__sram_rvalid;
            vlSelf->ysyx_25020037_cpu__DOT__lsu_rresp 
                = vlSelf->ysyx_25020037_cpu__DOT__sram_rresp;
        }
    }
    vlSelf->ysyx_25020037_cpu__DOT__lsu_bresp = 0U;
    vlSelf->ysyx_25020037_cpu__DOT__lsu_bvalid = 0U;
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0 
        = ((~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_ready)) 
           & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_valid));
    vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__final_gpr_we 
        = ((~ (IData)(vlSelf->rst)) & (0U != (6U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))));
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0 
        = ((0U != (0x1fU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                                    >> 0x10U)))) & 
           ((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_we) 
            & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_valid)));
    vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_valid) 
                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_ready))))
            : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_ready) 
               & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_valid)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_valid) 
                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_ready))))
            : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_valid) 
               & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_ready)));
    vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_valid) 
                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_ready))))
            : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_valid) 
               & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_ready)));
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_valid) 
                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_ready))))
            : (((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_valid) 
                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_valid)) 
               & (IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_ready)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0 
        = (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
           == vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    vlSelf->ysyx_25020037_cpu__DOT__sram_awvalid = 
        ((2U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master)) 
         & (IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_awvalid));
    vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid = 0U;
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U 
        = ((0x17U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
           | (0x37U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__csr_wgpr_data = 
        (((- (IData)((0x305U == (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_eu_bus 
                                         >> 0x1bU))))) 
          & vlSelf->mtvec) | (((- (IData)((0x341U == (IData)(
                                                             (vlSelf->ysyx_25020037_cpu__DOT__du_to_eu_bus 
                                                              >> 0x1bU))))) 
                               & vlSelf->mepc) | ((
                                                   (- (IData)(
                                                              (0x300U 
                                                               == (IData)(
                                                                          (vlSelf->ysyx_25020037_cpu__DOT__du_to_eu_bus 
                                                                           >> 0x1bU))))) 
                                                   & vlSelf->mstatus) 
                                                  | ((- (IData)(
                                                                (0x342U 
                                                                 == (IData)(
                                                                            (vlSelf->ysyx_25020037_cpu__DOT__du_to_eu_bus 
                                                                             >> 0x1bU))))) 
                                                     & vlSelf->mcause))));
    vlSelf->ysyx_25020037_cpu__DOT__sram_bready = 0U;
    if ((2U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master))) {
        vlSelf->ysyx_25020037_cpu__DOT__sram_awaddr 
            = vlSelf->ysyx_25020037_cpu__DOT__lsu_awaddr;
        vlSelf->ysyx_25020037_cpu__DOT__sram_wdata 
            = vlSelf->ysyx_25020037_cpu__DOT__lsu_wdata;
        vlSelf->ysyx_25020037_cpu__DOT__sram_wstrb 
            = vlSelf->ysyx_25020037_cpu__DOT__lsu_wstrb;
        vlSelf->ysyx_25020037_cpu__DOT__lsu_bresp = vlSelf->ysyx_25020037_cpu__DOT__sram_bresp;
        vlSelf->ysyx_25020037_cpu__DOT__lsu_bvalid 
            = vlSelf->ysyx_25020037_cpu__DOT__sram_bvalid;
        vlSelf->ysyx_25020037_cpu__DOT__sram_bready 
            = vlSelf->ysyx_25020037_cpu__DOT__lsu_bready;
    } else {
        vlSelf->ysyx_25020037_cpu__DOT__sram_awaddr = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__sram_wdata = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__sram_wstrb = 0U;
    }
    vlSelf->ysyx_25020037_cpu__DOT__sram_rready = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master))) {
        vlSelf->ysyx_25020037_cpu__DOT__ifu_rdata = vlSelf->ysyx_25020037_cpu__DOT__sram_rdata;
        vlSelf->ysyx_25020037_cpu__DOT__ifu_rresp = vlSelf->ysyx_25020037_cpu__DOT__sram_rresp;
        vlSelf->ysyx_25020037_cpu__DOT__sram_araddr 
            = vlSelf->ysyx_25020037_cpu__DOT__ifu_araddr;
        vlSelf->ysyx_25020037_cpu__DOT__sram_arvalid 
            = vlSelf->ysyx_25020037_cpu__DOT__ifu_arvalid;
        vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid 
            = vlSelf->ysyx_25020037_cpu__DOT__sram_rvalid;
        vlSelf->ysyx_25020037_cpu__DOT__sram_rready 
            = vlSelf->ysyx_25020037_cpu__DOT__ifu_rready;
    } else if ((2U == (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master))) {
        vlSelf->ysyx_25020037_cpu__DOT__sram_araddr 
            = vlSelf->ysyx_25020037_cpu__DOT__lsu_araddr;
        vlSelf->ysyx_25020037_cpu__DOT__sram_rready 
            = vlSelf->ysyx_25020037_cpu__DOT__lsu_rready;
        vlSelf->ysyx_25020037_cpu__DOT__sram_arvalid 
            = vlSelf->ysyx_25020037_cpu__DOT__lsu_arvalid;
    } else {
        vlSelf->ysyx_25020037_cpu__DOT__sram_araddr = 0U;
        vlSelf->ysyx_25020037_cpu__DOT__sram_arvalid = 0U;
    }
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0 
        = (IData)((0U == (0xfff00000U & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
        = ((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 9U))) ? vlSelf->pc : vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U]);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1 
        = (IData)((0ULL != (0x7800000ULL & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrs_op 
        = (IData)((0x2073U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrw_op 
        = (IData)((0x1073U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
        = ((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 8U))) ? (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                              >> 0x1bU))
            : vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll 
        = (IData)((0x1033U == (0xfe00707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slt 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0 
        = (IData)((0x73U == (0xfffffU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh 
        = (IData)((0x1023U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_beq 
        = (IData)((0x63U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bge 
        = (IData)((0x5063U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi 
        = (IData)((0x7013U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli 
        = (IData)((0x1013U == (0xfc00707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori 
        = (IData)((0x6013U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori 
        = (IData)((0x4013U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin 
        = (IData)((0ULL != (0x3800ULL & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r)));
    vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr = (IData)(
                                                          (0x67U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext 
        = (IData)((0x1003U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext 
        = (IData)((3U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0 
        = (IData)((0x33U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)));
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9U] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xaU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xbU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xcU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xdU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xeU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0xfU] 
        = vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout;
    vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid) 
                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_rready))))
            : (vlSelf->pc != vlSelf->ysyx_25020037_cpu__DOT__ifu_araddr));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__state) 
               & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_valid) 
                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_ready))))
            : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid) 
               & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_ready)));
    vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__final_result 
        = ((IData)(vlSelf->rst) ? 0U : ((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                         ? vlSelf->ysyx_25020037_cpu__DOT__csr_wgpr_data
                                         : ((1U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                 >> 5U)))
                                             ? ((0x10U 
                                                 & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                                 : 
                                                (0xffU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                             : ((2U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r) 
                                                     >> 5U)))
                                                 ? 
                                                ((8U 
                                                  & (IData)(vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))
                                                 : vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r))));
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__next_state 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__state)
            ? ((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__state) 
               & (~ ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_read_req) 
                       & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_rready)) 
                      & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_rvalid)) 
                     | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_write_req) 
                         & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_bready)) 
                        & (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_bvalid)))))
            : ((IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_arvalid) 
               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_awvalid)));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_bready) 
                             << 8U) | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_bvalid) 
                                        << 7U) | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_rready) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__sram_rvalid) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__ifu_arvalid) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_awvalid) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__lsu_arvalid) 
                                                               << 2U) 
                                                              | (IData)(vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master))))))));
    vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__next_master 
        = Vysyx_25020037_cpu__ConstPool__TABLE_h9cf5be28_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)
            ? (~ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U])
            : vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csr_w_gpr_we 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrw_op) 
           | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrs_op));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ebreak 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
           & (IData)((0x100000U == (0xfff00000U & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ecall_en 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
           & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__mret_en 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0) 
           & (IData)((0x30200000U == (0xfff00000U & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__wlsu_we 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
              | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bne) 
           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_beq) 
              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bge) 
                 | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bgeu) 
                    | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_blt) 
                       | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bltu))))));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)
            ? (~ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)
            : vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rstrb 
        = (0xfU & ((1U & (- (IData)(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                        | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext)))))) 
                   | ((2U & (- (IData)(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext) 
                                           | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu)))))) 
                      | (- (IData)(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                    | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw)))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rlsu_we 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw) 
           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext) 
                 | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu) 
                    | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext)))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0) 
           & (0U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                     >> 0x19U)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sub 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0) 
           & (0x20U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                        >> 0x19U)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0) 
           & (0x10U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                        >> 0x1aU)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0) 
           & (0U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                     >> 0x1aU)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0) 
           & (0x10U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                        >> 0x1aU)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0) 
           & (0U == (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                     >> 0x1aU)));
    vlSelf->ysyx_25020037_cpu__DOT____VdfgTmp_h53724e58__0 
        = vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
        [(0x1fU & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                           >> 0xbU)))];
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
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U])) 
                                  + ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d)) 
                                     + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1)))) 
                                 >> 0x20U))));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0 
        = (1U & (((~ (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U] 
                      >> 0x1fU)) & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                    >> 0x1fU)) | ((~ 
                                                   ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                                     ^ 
                                                     vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[2U]) 
                                                    >> 0x1fU)) 
                                                  & ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[3U] 
                                                      + 
                                                      (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d 
                                                       + (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1))) 
                                                     >> 0x1fU))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ecall_en) 
           | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__mret_en));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__src1_is_pc 
        = ((0x6fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
           | ((0x17U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
              | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal)));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
        = (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
           + (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b 
              + (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_R 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and) 
              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sub) 
                 | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or) 
                    | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor) 
                       | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra) 
                          | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slt) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                   | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__alu_op 
        = (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bltu) 
            << 0x10U) | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_blt) 
                          << 0xfU) | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bgeu) 
                                       << 0xeU) | (
                                                   ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bge) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_beq) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bne) 
                                                          << 0xbU) 
                                                         | (((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                             << 0xaU) 
                                                            | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai) 
                                                                 | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra)) 
                                                                << 9U) 
                                                               | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli) 
                                                                    | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl)) 
                                                                   << 8U) 
                                                                  | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli) 
                                                                       | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll)) 
                                                                      << 7U) 
                                                                     | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor) 
                                                                          | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori)) 
                                                                         << 6U) 
                                                                        | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or) 
                                                                             | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori)) 
                                                                            << 5U) 
                                                                           | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi)) 
                                                                               << 4U) 
                                                                              | ((((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu)) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slt) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sub) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                | ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext)))))))))))))))))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr) 
              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw) 
                 | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu) 
                    | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai) 
                       | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu) 
                          | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli) 
                                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext) 
                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori) 
                                                  | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csr_w_gpr_we)))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data = 
        (((- (IData)((1U & (IData)(vlSelf->ysyx_25020037_cpu__DOT__du_to_eu_bus)))) 
          & vlSelf->ysyx_25020037_cpu__DOT____VdfgTmp_h53724e58__0) 
         | ((- (IData)((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_eu_bus 
                                      >> 1U))))) & 
            (vlSelf->ysyx_25020037_cpu__DOT____VdfgTmp_h53724e58__0 
             | vlSelf->ysyx_25020037_cpu__DOT__csr_wgpr_data)));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csr_w_gpr_we) 
           | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_pc_jump 
        = ((0x6fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr) 
              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal) 
                 | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0))));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1 
        = (((- (IData)((IData)((0ULL != (0xc40ULL & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r))))) 
            & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result) 
           | ((1U & ((- (IData)((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                               >> 0xcU))))) 
                     & (((~ (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                             >> 0x1fU)) & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                           >> 0x1fU)) 
                        | ((~ ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                               >> 0x1fU)) & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                             >> 0x1fU))))) 
              | ((1U & ((- (IData)((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                  >> 0xdU))))) 
                        & (~ (IData)((1ULL & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                               + ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                  + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                              >> 0x20U)))))) 
                 | (((- (IData)((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                               >> 0xeU))))) 
                     & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                        & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
                    | (((- (IData)((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                  >> 0xfU))))) 
                        & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                           | vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                     >> 0x10U))))) 
                           & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                              ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                        >> 0x14U))))) 
                              & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                           >> 0x11U))))) 
                                 & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                    << (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))) 
                                | ((- (IData)((IData)(
                                                      (0ULL 
                                                       != 
                                                       (0xc0000ULL 
                                                        & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r))))) 
                                   & (IData)(((((QData)((IData)(
                                                                (- (IData)((IData)(
                                                                                ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x13U) 
                                                                                & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                              >> (0x1fU 
                                                  & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__gpr_we_r 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_R) 
           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr) 
                 | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu) 
                    | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai) 
                       | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi) 
                          | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrw_op) 
                                         | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrs_op) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                                     | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rlsu_we))))))))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm 
        = (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I))) 
            & (((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                            >> 0x1fU))) << 0xcU) | 
               (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                >> 0x14U))) | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__wlsu_we))) 
                                & (((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                      >> 7U))))) 
                               | (((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal))) 
                                   & (((- (IData)((vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0x800U 
                                                    & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                            >> 7U)))))) 
                                  | ((0xfffff000U & 
                                      ((- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U))) 
                                       & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                     | ((- (IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)))) 
                                        & (((- (IData)(
                                                       (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                        >> 0x1fU))) 
                                            << 0x14U) 
                                           | ((0xff000U 
                                               & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r 
                                                       >> 0x14U))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__src2_is_imm 
        = ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw) 
              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh) 
                 | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb) 
                    | ((0x37U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                       | ((0x17U == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                          | ((0x6fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal) 
                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr)))))))));
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_not_realize 
        = (1U & (~ ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal) 
                    | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I) 
                       | ((0x6fU == (0x7fU & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                          | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ebreak) 
                              | (IData)(((0U == (0xfffffU 
                                                 & vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r)) 
                                         & (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0)))) 
                             | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_R) 
                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__wlsu_we) 
                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U) 
                                      | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_W) 
                                         | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0)))))))))));
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__mstatus_data 
        = ((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus 
                          >> 1U))) ? 0x1800U : ((1U 
                                                 & (IData)(vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus))
                                                 ? 
                                                (0xffffe7ffU 
                                                 & (0x80U 
                                                    | ((0xfffffff7U 
                                                        & vlSelf->mstatus) 
                                                       | (8U 
                                                          & (vlSelf->mstatus 
                                                             >> 4U)))))
                                                 : vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data));
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__result 
        = ((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 7U))) ? ((IData)(4U) + vlSelf->pc)
            : vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__dnpc_r 
        = ((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                          >> 3U))) ? vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[1U]
            : ((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                              >> 2U))) ? vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r[0U]
                : ((1U & (IData)((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                  >> 7U))) ? ((1U == 
                                               ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                            >> 6U)))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                         >> 0x16U))))) 
                                                  & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)) 
                                                 | (((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                            >> 0x19U))))) 
                                                     & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)) 
                                                    | ((1U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x1aU))))) 
                                                           & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)))) 
                                                       | ((1U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x17U))))) 
                                                              & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0)))) 
                                                          | (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x18U))))) 
                                                              & (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1)) 
                                                             | (1U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r 
                                                                                >> 0x15U))))) 
                                                                   & (~ (IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0)))))))))
                                                 : 1U))
                                               ? vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1
                                               : ((IData)(4U) 
                                                  + vlSelf->pc))
                    : ((IData)(4U) + vlSelf->pc))));
}

VL_ATTR_COLD void Vysyx_25020037_cpu___024root___eval_stl(Vysyx_25020037_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037_cpu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25020037_cpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
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
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or negedge rst)\n");
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
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or negedge rst)\n");
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
    vlSelf->mtvec = VL_RAND_RESET_I(32);
    vlSelf->mepc = VL_RAND_RESET_I(32);
    vlSelf->mstatus = VL_RAND_RESET_I(32);
    vlSelf->mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__ftrace_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__eu_to_lu_bus = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_25020037_cpu__DOT__wu_to_gu_bus = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_25020037_cpu__DOT__du_to_gu_bus = VL_RAND_RESET_Q(53);
    vlSelf->ysyx_25020037_cpu__DOT__du_to_eu_bus = VL_RAND_RESET_Q(59);
    vlSelf->ysyx_25020037_cpu__DOT__du_to_lu_bus = VL_RAND_RESET_I(6);
    vlSelf->ysyx_25020037_cpu__DOT__du_to_wu_bus = VL_RAND_RESET_I(9);
    vlSelf->ysyx_25020037_cpu__DOT__lu_to_wu_bus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__eu_to_wu_bus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__dnpc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__ifu_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__ifu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__ifu_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__ifu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__ifu_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25020037_cpu__DOT__ifu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__ifu_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__wbu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__wbu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__sram_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__sram_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25020037_cpu__DOT__sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__sram_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__sram_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25020037_cpu__DOT__sram_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__sram_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__sram_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25020037_cpu__DOT__sram_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__sram_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__csr_wgpr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__csr_wcsr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__inst_s = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__inst_l = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25020037_cpu__DOT____VdfgTmp_h53724e58__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__wu_to_gu_bus_r = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT__mstatus_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__gpr32__dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h63cff1f9__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_hce943a67__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__ifu_cpu__DOT__last_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__alu_op = VL_RAND_RESET_I(17);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__gpr_we_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rlsu_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__wlsu_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__bit_sext = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__half_sext = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__src1_is_pc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__src2_is_imm = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_pc_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__double_cal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ebreak = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_not_realize = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csr_w_gpr_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrw_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__csrrs_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__ecall_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__mret_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__is_csr_op = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_ori = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_xori = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_andi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_slli = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sltiu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_srli = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_beq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bne = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bgeu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_blt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_bltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_R = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_I = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_U = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__TYPE_W = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h68914676__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h6b17a27c__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h3fbc711e__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h095ff4dc__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_had4ecb64__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_ha5cbf650__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__lsu_cpu__DOT__eu_to_lu_bus_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__current_master = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25020037_cpu__DOT__u_axi_arbiter__DOT__next_master = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__write_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__write_strb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_read_req = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__is_write_req = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__lfsr = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__delay_count = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__target_delay = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25020037_cpu__DOT__u_sram__DOT__lfsr_tap = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__du_to_eu_bus_r = VL_RAND_RESET_Q(59);
    VL_RAND_RESET_W(128, vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__gu_to_eu_bus_r);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__dnpc_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_result1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__aupic_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_d = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cout1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h980baa1a__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT____VdfgTmp_h91fcc8ab__0 = 0;
    vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__du_to_wu_bus_r = VL_RAND_RESET_I(9);
    vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__lu_to_wu_bus_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__final_gpr_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25020037_cpu__DOT__wbu_cpu__DOT__final_result = VL_RAND_RESET_I(32);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vdly__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ysyx_25020037_cpu__DOT__gpr_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_25020037_cpu__DOT__idu_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_25020037_cpu__DOT__lsu_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_25020037_cpu__DOT__lsu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_25020037_cpu__DOT__lsu_rready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_25020037_cpu__DOT__lsu_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_25020037_cpu__DOT__lsu_bready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_25020037_cpu__DOT__exu_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
