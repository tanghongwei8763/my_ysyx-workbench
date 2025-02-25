// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMuxKey.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMuxKey__Syms.h"
#include "VMuxKey___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMuxKey___024root___dump_triggers__stl(VMuxKey___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMuxKey___024root___eval_triggers__stl(VMuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMuxKey___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
