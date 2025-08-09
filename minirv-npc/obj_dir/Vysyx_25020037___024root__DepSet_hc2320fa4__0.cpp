// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25020037.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25020037__Syms.h"
#include "Vysyx_25020037___024root.h"

extern "C" int pmem_read(int addr, int len, int trace_on);

VL_INLINE_OPT void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ trace_on, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__ifu_cpu__DOT__pmem_read_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    int trace_on__Vcvt;
    for (size_t trace_on__Vidx = 0; trace_on__Vidx < 1; ++trace_on__Vidx) trace_on__Vcvt = trace_on;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(addr__Vcvt, len__Vcvt, trace_on__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(int addr, int len, int data, int trace_on);

VL_INLINE_OPT void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__lsu_cpu__DOT__pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data, IData/*31:0*/ trace_on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__lsu_cpu__DOT__pmem_write_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int trace_on__Vcvt;
    for (size_t trace_on__Vidx = 0; trace_on__Vidx < 1; ++trace_on__Vidx) trace_on__Vcvt = trace_on;
    pmem_write(addr__Vcvt, len__Vcvt, data__Vcvt, trace_on__Vcvt);
}

extern "C" void hit(int inst_not_realize);

VL_INLINE_OPT void Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__exu_cpu__DOT__hit_TOP(IData/*31:0*/ inst_not_realize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root____Vdpiimwrap_ysyx_25020037__DOT__exu_cpu__DOT__hit_TOP\n"); );
    // Body
    int inst_not_realize__Vcvt;
    for (size_t inst_not_realize__Vidx = 0; inst_not_realize__Vidx < 1; ++inst_not_realize__Vidx) inst_not_realize__Vcvt = inst_not_realize;
    hit(inst_not_realize__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__ico(Vysyx_25020037___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25020037___024root___eval_triggers__ico(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25020037___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25020037___024root___dump_triggers__act(Vysyx_25020037___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25020037___024root___eval_triggers__act(Vysyx_25020037___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25020037__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25020037___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25020037___024root___dump_triggers__act(vlSelf);
    }
#endif
}
