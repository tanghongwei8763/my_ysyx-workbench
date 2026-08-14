package core

import chisel3._
import chisel3.util._

object ALUOp {
  val ADD    = 0.U(5.W)
  val SUB    = 1.U(5.W)
  val SLL    = 2.U(5.W)
  val SLT    = 3.U(5.W)
  val SLTU   = 4.U(5.W)
  val XOR    = 5.U(5.W)
  val SRL    = 6.U(5.W)
  val SRA    = 7.U(5.W)
  val OR     = 8.U(5.W)
  val AND    = 9.U(5.W)
  val COPY_B = 10.U(5.W)
  val ADD_PC = 11.U(5.W)
}

class ALU extends Module {
  val io = IO(new Bundle {
    val src1 = Input(UInt(32.W))
    val src2 = Input(UInt(32.W))
    val op   = Input(UInt(5.W))
    val out  = Output(UInt(32.W))
  })

  io.out := MuxLookup(io.op, 0.U(32.W))(Seq(
    ALUOp.ADD    -> (io.src1 + io.src2),
    ALUOp.SUB    -> (io.src1 - io.src2),
    ALUOp.SLL    -> (io.src1 << io.src2(4, 0)),
    ALUOp.SLT    -> (io.src1.asSInt < io.src2.asSInt).asUInt,
    ALUOp.SLTU   -> (io.src1 < io.src2).asUInt,
    ALUOp.XOR    -> (io.src1 ^ io.src2),
    ALUOp.SRL    -> (io.src1 >> io.src2(4, 0)),
    ALUOp.SRA    -> (io.src1.asSInt >> io.src2(4, 0)).asUInt,
    ALUOp.OR     -> (io.src1 | io.src2),
    ALUOp.AND    -> (io.src1 & io.src2),
    ALUOp.COPY_B -> io.src2,              
    ALUOp.ADD_PC -> (io.src1 + io.src2),  
  ))
}
