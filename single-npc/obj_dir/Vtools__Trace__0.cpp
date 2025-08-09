// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtools__Syms.h"


void Vtools___024root__trace_chg_sub_0(Vtools___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtools___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root__trace_chg_top_0\n"); );
    // Init
    Vtools___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtools___024root*>(voidSelf);
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtools___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtools___024root__trace_chg_sub_0(Vtools___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25020037_cpu__DOT__imm),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25020037_cpu__DOT__rlsu_addr),32);
        bufp->chgIData(oldp+2,(((1U & (- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__rw_word_1)))) 
                                | ((2U & (- (IData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__rw_word_2)))) 
                                   | (4U & (- (IData)(
                                                      ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we) 
                                                       | (IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we)))))))),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_25020037_cpu__DOT__rlsu_data),32);
        bufp->chgBit(oldp+4,(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we));
        bufp->chgBit(oldp+5,(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we));
        bufp->chgBit(oldp+6,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we) 
                              | (IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we))));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump));
        bufp->chgIData(oldp+8,(vlSelf->ysyx_25020037_cpu__DOT__final_result),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result),32);
        bufp->chgBit(oldp+11,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub));
        bufp->chgBit(oldp+12,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt));
        bufp->chgBit(oldp+13,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu));
        bufp->chgBit(oldp+14,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and));
        bufp->chgBit(oldp+15,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or));
        bufp->chgBit(oldp+16,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor));
        bufp->chgBit(oldp+17,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll));
        bufp->chgBit(oldp+18,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl));
        bufp->chgBit(oldp+19,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra));
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result),32);
        bufp->chgIData(oldp+21,((1U & (((~ (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result 
                                            >> 0x1fU)) 
                                        & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                           >> 0x1fU)) 
                                       | ((~ ((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                               ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result) 
                                              >> 0x1fU)) 
                                          & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__add_sub_result 
                                             >> 0x1fU))))),32);
        bufp->chgIData(oldp+22,((1U & (~ (IData)((1ULL 
                                                  & (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                                      + 
                                                      ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                       + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                                     >> 0x20U)))))),32);
        bufp->chgIData(oldp+23,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                 & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+24,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                 | vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+25,((vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                 ^ vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)),32);
        bufp->chgIData(oldp+26,(((0x1fU >= vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)
                                  ? (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                     << vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)
                                  : 0U)),32);
        bufp->chgQData(oldp+27,(((((QData)((IData)(
                                                   (- (IData)(
                                                              ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                               & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                  >> 0x1fU)))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                 >> (0x1fU & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result))),64);
        bufp->chgIData(oldp+29,((IData)(((((QData)((IData)(
                                                           (- (IData)(
                                                                      ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                                       & (vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a 
                                                                          >> 0x1fU)))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a))) 
                                         >> (0x1fU 
                                             & vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__lui_result)))),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b),32);
        bufp->chgBit(oldp+31,(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin));
        bufp->chgBit(oldp+32,((1U & (IData)((1ULL & 
                                             (((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_a)) 
                                               + ((QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_b)) 
                                                  + (QData)((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__adder_cin)))) 
                                              >> 0x20U))))));
        bufp->chgWData(oldp+33,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_25_d),128);
        bufp->chgQData(oldp+37,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_31_26_d),64);
        bufp->chgWData(oldp+39,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__opcode_06_00_d),128);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs1_d),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rs2_d),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__rd_d),32);
        bufp->chgBit(oldp+46,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi));
        bufp->chgBit(oldp+48,(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl));
        bufp->chgBit(oldp+49,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_add) 
                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and) 
                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or) 
                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor) 
                                           | (IData)(vlSelf->__VdfgTmp_h39165432__0))))))));
        bufp->chgBit(oldp+50,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                               | (IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25020037_cpu__DOT__rst_delay));
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[0]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[1]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[2]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[3]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[4]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[5]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[6]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[7]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[8]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[9]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[10]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[11]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[12]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[13]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[14]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[15]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[16]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[17]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[18]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[19]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[20]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[21]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[22]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[23]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[24]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[25]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[26]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[27]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[28]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[29]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[30]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs[31]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__0__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__10__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__11__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__12__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__13__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__14__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__15__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__16__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__17__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__18__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__19__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__1__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__20__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__21__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__22__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__23__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__24__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__25__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__26__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__27__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__28__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__29__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__2__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__30__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__31__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__3__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__4__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__5__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__6__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__7__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__8__KET____DOT__reg_inst__dout),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____Vcellout__GPR32__BRA__9__KET____DOT__reg_inst__dout),32);
    }
    bufp->chgCData(oldp+116,(vlSelf->decoder_2_4__02Ein),2);
    bufp->chgCData(oldp+117,(vlSelf->decoder_2_4__02Eout),4);
    bufp->chgCData(oldp+118,(vlSelf->decoder_4_16__02Ein),4);
    bufp->chgSData(oldp+119,(vlSelf->decoder_4_16__02Eout),16);
    bufp->chgIData(oldp+120,(vlSelf->encoder_32_5__02Ein),32);
    bufp->chgCData(oldp+121,(vlSelf->encoder_32_5__02Eout),5);
    bufp->chgBit(oldp+122,(vlSelf->clk));
    bufp->chgBit(oldp+123,(vlSelf->rst));
    bufp->chgIData(oldp+124,(vlSelf->inst),32);
    bufp->chgIData(oldp+125,(vlSelf->pc),32);
    bufp->chgIData(oldp+126,(vlSelf->regs[0]),32);
    bufp->chgIData(oldp+127,(vlSelf->regs[1]),32);
    bufp->chgIData(oldp+128,(vlSelf->regs[2]),32);
    bufp->chgIData(oldp+129,(vlSelf->regs[3]),32);
    bufp->chgIData(oldp+130,(vlSelf->regs[4]),32);
    bufp->chgIData(oldp+131,(vlSelf->regs[5]),32);
    bufp->chgIData(oldp+132,(vlSelf->regs[6]),32);
    bufp->chgIData(oldp+133,(vlSelf->regs[7]),32);
    bufp->chgIData(oldp+134,(vlSelf->regs[8]),32);
    bufp->chgIData(oldp+135,(vlSelf->regs[9]),32);
    bufp->chgIData(oldp+136,(vlSelf->regs[10]),32);
    bufp->chgIData(oldp+137,(vlSelf->regs[11]),32);
    bufp->chgIData(oldp+138,(vlSelf->regs[12]),32);
    bufp->chgIData(oldp+139,(vlSelf->regs[13]),32);
    bufp->chgIData(oldp+140,(vlSelf->regs[14]),32);
    bufp->chgIData(oldp+141,(vlSelf->regs[15]),32);
    bufp->chgIData(oldp+142,(vlSelf->regs[16]),32);
    bufp->chgIData(oldp+143,(vlSelf->regs[17]),32);
    bufp->chgIData(oldp+144,(vlSelf->regs[18]),32);
    bufp->chgIData(oldp+145,(vlSelf->regs[19]),32);
    bufp->chgIData(oldp+146,(vlSelf->regs[20]),32);
    bufp->chgIData(oldp+147,(vlSelf->regs[21]),32);
    bufp->chgIData(oldp+148,(vlSelf->regs[22]),32);
    bufp->chgIData(oldp+149,(vlSelf->regs[23]),32);
    bufp->chgIData(oldp+150,(vlSelf->regs[24]),32);
    bufp->chgIData(oldp+151,(vlSelf->regs[25]),32);
    bufp->chgIData(oldp+152,(vlSelf->regs[26]),32);
    bufp->chgIData(oldp+153,(vlSelf->regs[27]),32);
    bufp->chgIData(oldp+154,(vlSelf->regs[28]),32);
    bufp->chgIData(oldp+155,(vlSelf->regs[29]),32);
    bufp->chgIData(oldp+156,(vlSelf->regs[30]),32);
    bufp->chgIData(oldp+157,(vlSelf->regs[31]),32);
    bufp->chgCData(oldp+158,(((3U & ((- (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & vlSelf->encoder_32_5__02Ein)))) 
                                     & ((1U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 1U))))) 
                                        | ((2U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->encoder_32_5__02Ein 
                                                                >> 2U))))) 
                                           | (- (IData)(
                                                        (1U 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 3U)))))))) 
                              | (((- (IData)((0U != 
                                              (0xfU 
                                               & (vlSelf->encoder_32_5__02Ein 
                                                  >> 4U))))) 
                                  & (4U | (3U & ((1U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                   >> 5U))))) 
                                                 | ((2U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->encoder_32_5__02Ein 
                                                                      >> 6U))))) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->encoder_32_5__02Ein 
                                                                     >> 7U))))))))) 
                                 | (((- (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (vlSelf->encoder_32_5__02Ein 
                                                     >> 8U))))) 
                                     & (8U | (3U & 
                                              ((1U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (vlSelf->encoder_32_5__02Ein 
                                                                 >> 9U))))) 
                                               | ((2U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->encoder_32_5__02Ein 
                                                                    >> 0xaU))))) 
                                                  | (- (IData)(
                                                               (1U 
                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                   >> 0xbU))))))))) 
                                    | ((- (IData)((0U 
                                                   != 
                                                   (0xfU 
                                                    & (vlSelf->encoder_32_5__02Ein 
                                                       >> 0xcU))))) 
                                       & (0xcU | (3U 
                                                  & ((1U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->encoder_32_5__02Ein 
                                                                       >> 0xdU))))) 
                                                     | ((2U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (vlSelf->encoder_32_5__02Ein 
                                                                          >> 0xeU))))) 
                                                        | (- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->encoder_32_5__02Ein 
                                                                         >> 0xfU))))))))))))),4);
    bufp->chgCData(oldp+159,(((3U & ((- (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (vlSelf->encoder_32_5__02Ein 
                                                     >> 0x10U))))) 
                                     & ((1U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->encoder_32_5__02Ein 
                                                             >> 0x11U))))) 
                                        | ((2U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->encoder_32_5__02Ein 
                                                                >> 0x12U))))) 
                                           | (- (IData)(
                                                        (1U 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 0x13U)))))))) 
                              | (((- (IData)((0U != 
                                              (0xfU 
                                               & (vlSelf->encoder_32_5__02Ein 
                                                  >> 0x14U))))) 
                                  & (4U | (3U & ((1U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                   >> 0x15U))))) 
                                                 | ((2U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->encoder_32_5__02Ein 
                                                                      >> 0x16U))))) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->encoder_32_5__02Ein 
                                                                     >> 0x17U))))))))) 
                                 | (((- (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (vlSelf->encoder_32_5__02Ein 
                                                     >> 0x18U))))) 
                                     & (8U | (3U & 
                                              ((1U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (vlSelf->encoder_32_5__02Ein 
                                                                 >> 0x19U))))) 
                                               | ((2U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->encoder_32_5__02Ein 
                                                                    >> 0x1aU))))) 
                                                  | (- (IData)(
                                                               (1U 
                                                                & (vlSelf->encoder_32_5__02Ein 
                                                                   >> 0x1bU))))))))) 
                                    | ((- (IData)((0U 
                                                   != 
                                                   (vlSelf->encoder_32_5__02Ein 
                                                    >> 0x1cU)))) 
                                       & (0xcU | (3U 
                                                  & ((1U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->encoder_32_5__02Ein 
                                                                       >> 0x1dU))))) 
                                                     | ((2U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (vlSelf->encoder_32_5__02Ein 
                                                                          >> 0x1eU))))) 
                                                        | (- (IData)(
                                                                     (vlSelf->encoder_32_5__02Ein 
                                                                      >> 0x1fU)))))))))))),4);
    bufp->chgSData(oldp+160,((0xffffU & vlSelf->encoder_32_5__02Ein)),16);
    bufp->chgCData(oldp+161,((3U & ((1U & (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 1U))))) 
                                    | ((2U & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 2U))))) 
                                       | (- (IData)(
                                                    (1U 
                                                     & (vlSelf->encoder_32_5__02Ein 
                                                        >> 3U)))))))),2);
    bufp->chgCData(oldp+162,((3U & ((1U & (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 5U))))) 
                                    | ((2U & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 6U))))) 
                                       | (- (IData)(
                                                    (1U 
                                                     & (vlSelf->encoder_32_5__02Ein 
                                                        >> 7U)))))))),2);
    bufp->chgCData(oldp+163,((3U & ((1U & (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 9U))))) 
                                    | ((2U & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 0xaU))))) 
                                       | (- (IData)(
                                                    (1U 
                                                     & (vlSelf->encoder_32_5__02Ein 
                                                        >> 0xbU)))))))),2);
    bufp->chgCData(oldp+164,((3U & ((1U & (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 0xdU))))) 
                                    | ((2U & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 0xeU))))) 
                                       | (- (IData)(
                                                    (1U 
                                                     & (vlSelf->encoder_32_5__02Ein 
                                                        >> 0xfU)))))))),2);
    bufp->chgCData(oldp+165,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                      >> 0xcU))),4);
    bufp->chgCData(oldp+166,((0xfU & vlSelf->encoder_32_5__02Ein)),4);
    bufp->chgCData(oldp+167,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                      >> 8U))),4);
    bufp->chgCData(oldp+168,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                      >> 4U))),4);
    bufp->chgSData(oldp+169,((vlSelf->encoder_32_5__02Ein 
                              >> 0x10U)),16);
    bufp->chgCData(oldp+170,((3U & ((1U & (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 0x11U))))) 
                                    | ((2U & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 0x12U))))) 
                                       | (- (IData)(
                                                    (1U 
                                                     & (vlSelf->encoder_32_5__02Ein 
                                                        >> 0x13U)))))))),2);
    bufp->chgCData(oldp+171,((3U & ((1U & (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 0x15U))))) 
                                    | ((2U & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 0x16U))))) 
                                       | (- (IData)(
                                                    (1U 
                                                     & (vlSelf->encoder_32_5__02Ein 
                                                        >> 0x17U)))))))),2);
    bufp->chgCData(oldp+172,((3U & ((1U & (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 0x19U))))) 
                                    | ((2U & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 0x1aU))))) 
                                       | (- (IData)(
                                                    (1U 
                                                     & (vlSelf->encoder_32_5__02Ein 
                                                        >> 0x1bU)))))))),2);
    bufp->chgCData(oldp+173,((3U & ((1U & (- (IData)(
                                                     (1U 
                                                      & (vlSelf->encoder_32_5__02Ein 
                                                         >> 0x1dU))))) 
                                    | ((2U & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->encoder_32_5__02Ein 
                                                            >> 0x1eU))))) 
                                       | (- (IData)(
                                                    (vlSelf->encoder_32_5__02Ein 
                                                     >> 0x1fU))))))),2);
    bufp->chgCData(oldp+174,((vlSelf->encoder_32_5__02Ein 
                              >> 0x1cU)),4);
    bufp->chgCData(oldp+175,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                      >> 0x10U))),4);
    bufp->chgCData(oldp+176,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                      >> 0x18U))),4);
    bufp->chgCData(oldp+177,((0xfU & (vlSelf->encoder_32_5__02Ein 
                                      >> 0x14U))),4);
    bufp->chgCData(oldp+178,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+179,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+180,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgIData(oldp+181,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
                             [(0x1fU & (vlSelf->inst 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+182,(vlSelf->ysyx_25020037_cpu__DOT____Vcellout__gpr_cpu__regs
                             [(0x1fU & (vlSelf->inst 
                                        >> 0x14U))]),32);
    bufp->chgSData(oldp+183,((((0x37U == (0x7fU & vlSelf->inst)) 
                               << 0xaU) | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                            << 9U) 
                                           | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
                                               << 8U) 
                                              | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0) 
                                                                      | ((0x17U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->inst)) 
                                                                         | ((0x6fU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->inst)) 
                                                                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                                                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                                                                | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
                                                                                | (IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we)))))))))))))))))))),11);
    bufp->chgBit(oldp+184,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0) 
                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu) 
                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and) 
                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or) 
                                           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor) 
                                              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                                 | ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst)) 
                                                    | (0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst)))))))))))));
    bufp->chgBit(oldp+185,(((~ (IData)(vlSelf->rst)) 
                            & ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0) 
                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sub) 
                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_slt) 
                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sltu) 
                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_and) 
                                           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_or) 
                                              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_xor) 
                                                 | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                                    | ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->inst)) 
                                                       | (0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst))))))))))))));
    bufp->chgBit(oldp+186,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump) 
                            | (0x17U == (0x7fU & vlSelf->inst)))));
    bufp->chgBit(oldp+187,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll) 
                            | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
                               | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_addi) 
                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we) 
                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we) 
                                           | ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->inst)) 
                                              | (IData)(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump))))))))));
    bufp->chgBit(oldp+188,((IData)((0x8073U == vlSelf->inst))));
    bufp->chgIData(oldp+189,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__is_pc_jump)
                               ? (vlSelf->ysyx_25020037_cpu__DOT__imm 
                                  + vlSelf->pc) : ((IData)(4U) 
                                                   + vlSelf->pc))),32);
    bufp->chgIData(oldp+190,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgBit(oldp+191,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT____VdfgTmp_h04762d85__0) 
                            | ((0x17U == (0x7fU & vlSelf->inst)) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->inst)) 
                                  | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__idu_cpu__DOT__inst_jarl) 
                                     | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__rlsu_we) 
                                        | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sll) 
                                           | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_sra) 
                                              | ((IData)(vlSelf->ysyx_25020037_cpu__DOT__exu_cpu__DOT__alu_cpu__DOT__op_srl) 
                                                 | (IData)(vlSelf->ysyx_25020037_cpu__DOT__wlsu_we)))))))))));
    bufp->chgBit(oldp+192,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+193,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+194,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x500U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+195,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x580U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+196,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x600U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+197,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x680U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+198,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x700U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+199,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x780U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+200,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x800U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+201,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x880U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+202,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x900U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+203,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x980U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+204,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+205,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xa00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+206,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xa80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+207,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xb00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+208,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xb80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+209,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xc00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+210,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xc80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+211,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xd00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+212,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xd80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+213,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xe00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+214,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xe80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+215,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x100U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+216,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xf00U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+217,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0xf80U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+218,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x180U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+219,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x200U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+220,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x280U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+221,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x300U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+222,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x380U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+223,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x400U == (0xf80U & vlSelf->inst)))));
    bufp->chgBit(oldp+224,(((IData)(vlSelf->ysyx_25020037_cpu__DOT__gpr_cpu__DOT____VdfgTmp_h2e704877__0) 
                            & (0x480U == (0xf80U & vlSelf->inst)))));
    bufp->chgCData(oldp+225,((vlSelf->inst >> 0x19U)),7);
    bufp->chgCData(oldp+226,((vlSelf->inst >> 0x1aU)),6);
    bufp->chgCData(oldp+227,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+228,((0x7fU & vlSelf->inst)),7);
    bufp->chgIData(oldp+229,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+230,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+231,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->inst 
                                                    >> 7U)))))),32);
    bufp->chgIData(oldp+232,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+233,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
    bufp->chgCData(oldp+234,((((7U == (7U & (vlSelf->inst 
                                             >> 0xcU))) 
                               << 7U) | (((6U == (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                          << 6U) | 
                                         (((5U == (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))) 
                                           << 5U) | 
                                          (((4U == 
                                             (7U & 
                                              (vlSelf->inst 
                                               >> 0xcU))) 
                                            << 4U) 
                                           | (((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))) 
                                               << 3U) 
                                              | (((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU))) 
                                                  << 2U) 
                                                 | (((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->inst 
                                                          >> 0xcU))) 
                                                     << 1U) 
                                                    | (0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->inst 
                                                           >> 0xcU))))))))))),8);
    bufp->chgBit(oldp+235,((IData)((0x1063U == (0x707fU 
                                                & vlSelf->inst)))));
    bufp->chgBit(oldp+236,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+237,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+238,((IData)((0U == vlSelf->inst))));
    bufp->chgBit(oldp+239,(((0x17U == (0x7fU & vlSelf->inst)) 
                            | (0x37U == (0x7fU & vlSelf->inst)))));
    bufp->chgBit(oldp+240,(((IData)((0x8073U == vlSelf->inst)) 
                            | (IData)((0U == vlSelf->inst)))));
}

void Vtools___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtools___024root__trace_cleanup\n"); );
    // Init
    Vtools___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtools___024root*>(voidSelf);
    Vtools__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
