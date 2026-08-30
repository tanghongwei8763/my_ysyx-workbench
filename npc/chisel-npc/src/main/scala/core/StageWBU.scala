package core

import chisel3._
import chisel3.util._

class StageWBU extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new MEM_WB_Bus))

    val rd_addr = Output(UInt(5.W))
    val rd_data = Output(UInt(32.W))
    val rd_wen  = Output(Bool())

    val debug_commit_valid = Output(Bool())
    val debug_pc           = Output(UInt(32.W))
  })

  io.in.ready := true.B

  io.rd_data := Mux(io.in.bits.is_load, io.in.bits.mem_rdata, io.in.bits.alu_out)
  io.rd_addr := io.in.bits.rd_addr
  io.rd_wen  := io.in.bits.reg_wen && io.in.valid

  io.debug_commit_valid := io.in.valid
  io.debug_pc           := io.in.bits.pc
}
