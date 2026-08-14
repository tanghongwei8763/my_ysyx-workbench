package core

import chisel3._
import chisel3.util._

class StageIFU extends Module {
  val io = IO(new Bundle {
    val flush       = Input(Bool())
    val flush_pc    = Input(UInt(32.W))
    val pc_update   = Output(Bool())

    val out         = Decoupled(new IF_ID_Bus)

    val inst_vaddr  = Output(UInt(32.W))
    val inst_valid  = Output(Bool())
    val icache_rdata= Input (UInt(32.W))
    val icache_done = Input (Bool())
  })

  val pc   = RegInit(Config.START_ADDR.U(32.W))
  val inst = io.icache_rdata

  val inst_reg       = Reg(UInt(32.W))

  val pipe_data  = Reg(new IF_ID_Bus)
  val pipe_valid = RegInit(false.B)
  val done_reg   = RegInit(false.B)

  val stall = !io.out.ready

  val snpc  = pc + 4.U
  val dnpc  = Mux(io.flush, io.flush_pc, snpc)
  val rsting= pc === Config.START_ADDR.U(32.W)

  val update = !stall & (io.icache_done | done_reg)

  when(update) { pc := dnpc }

  when(!stall & ~io.flush & (io.icache_done | done_reg)) {
    when(!rsting) {
      pipe_valid     := true.B
      pipe_data.pc   := pc
      pipe_data.inst := Mux(done_reg, inst_reg, inst)
    }
  }.elsewhen(stall) {
    pipe_valid       := pipe_valid
  }.otherwise {
    pipe_valid       := false.B
  }

  when(stall && io.icache_done) {
    done_reg         := true.B
    inst_reg         := inst
  }.elsewhen(!stall) {
    done_reg         := false.B
  }

  io.pc_update  := update
  io.out.valid  := pipe_valid
  io.out.bits   := pipe_data
  io.inst_vaddr := dnpc
  io.inst_valid := !stall
}
