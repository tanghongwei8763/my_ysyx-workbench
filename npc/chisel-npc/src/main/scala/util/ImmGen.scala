package core

import chisel3._
import chisel3.util._

// ===========================================================================
// 立即数生成器
// 从 RISC-V 指令中提取立即数并符号扩展
//
// imm_sel: 0=I, 1=S, 2=B, 3=U, 4=J
// ===========================================================================

object ImmSel {
  val I = 0.U(3.W)
  val S = 1.U(3.W)
  val B = 2.U(3.W)
  val U = 3.U(3.W)
  val J = 4.U(3.W)
}

class ImmGen extends Module {
  val io = IO(new Bundle {
    val inst   = Input(UInt(32.W))
    val sel    = Input(UInt(3.W))
    val imm    = Output(UInt(32.W))
  })

  // 各类立即数的原始值 (未符号扩展)
  val immI = io.inst(31, 20)                                                       // 12 位
  val immS = Cat(io.inst(31, 25), io.inst(11, 7))                                  // 12 位
  val immB = Cat(io.inst(31), io.inst(7), io.inst(30, 25), io.inst(11, 8), 0.U(1.W)) // 13 位
  val immU = Cat(io.inst(31, 12), 0.U(12.W))                                       // 32 位
  val immJ = Cat(io.inst(31), io.inst(19, 12), io.inst(20), io.inst(30, 21), 0.U(1.W)) // 21 位

  // 各类立即数的符号扩展至 32 位
  val extI = immI.asSInt.pad(32).asUInt   // 用 asSInt 做符号扩展
  val extS = immS.asSInt.pad(32).asUInt
  val extB = immB.asSInt.pad(32).asUInt
  val extU = immU                  // U 型已经 32 位宽, 低 12 位为 0
  val extJ = immJ.asSInt.pad(32).asUInt

  io.imm := MuxLookup(io.sel, 0.U(32.W))(Seq(
    ImmSel.I -> extI,
    ImmSel.S -> extS,
    ImmSel.B -> extB,
    ImmSel.U -> extU,
    ImmSel.J -> extJ,
  ))
}
