package core

import chisel3._
import chisel3.util._

class RegFile extends Module {
  val io = IO(new Bundle {
    // 读端口 1
    val rs1_addr = Input(UInt(5.W))
    val rs1_data = Output(UInt(32.W))

    // 读端口 2
    val rs2_addr = Input(UInt(5.W))
    val rs2_data = Output(UInt(32.W))

    // 写端口
    val rd_addr  = Input(UInt(5.W))
    val rd_data  = Input(UInt(32.W))
    val rd_wen   = Input(Bool())

    val debug_a0 = Output(UInt(32.W))
  })

  val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

  io.rs1_data := Mux(io.rs1_addr === 0.U, 0.U, regs(io.rs1_addr))
  io.rs2_data := Mux(io.rs2_addr === 0.U, 0.U, regs(io.rs2_addr))

  when(io.rd_wen && io.rd_addr =/= 0.U) {
    regs(io.rd_addr) := io.rd_data
  }

  io.debug_a0 := regs(10.U)
}
