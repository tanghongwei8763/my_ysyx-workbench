package core

import chisel3._
import chisel3.util._

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

  val immI = io.inst(31, 20)
  val immS = Cat(io.inst(31, 25), io.inst(11, 7))
  val immB = Cat(io.inst(31), io.inst(7), io.inst(30, 25), io.inst(11, 8), 0.U(1.W))
  val immU = Cat(io.inst(31, 12), 0.U(12.W))
  val immJ = Cat(io.inst(31), io.inst(19, 12), io.inst(20), io.inst(30, 21), 0.U(1.W))

  val extI = immI.asSInt.pad(32).asUInt
  val extS = immS.asSInt.pad(32).asUInt
  val extB = immB.asSInt.pad(32).asUInt
  val extU = immU
  val extJ = immJ.asSInt.pad(32).asUInt

  io.imm := MuxLookup(io.sel, 0.U(32.W))(Seq(
    ImmSel.I -> extI,
    ImmSel.S -> extS,
    ImmSel.B -> extB,
    ImmSel.U -> extU,
    ImmSel.J -> extJ,
  ))
}
