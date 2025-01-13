// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexample.h for the primary calling header

#include "verilated.h"

#include "Vexample___024root.h"

VL_ATTR_COLD void Vexample___024root___eval_static(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vexample___024root___eval_initial(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vexample___024root___eval_final(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vexample___024root___eval_settle(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexample___024root___dump_triggers__act(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexample___024root___dump_triggers__nba(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexample___024root___ctor_var_reset(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___ctor_var_reset\n"); );
}
