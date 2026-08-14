package core

import chisel3._
import chisel3.util._

class StageLSU extends Module {
  val io = IO(new Bundle {
    val in     = Flipped(Decoupled(new EX_MEM_Bus))
    val out    = Decoupled(new MEM_WB_Bus)

    val rdata_processed   = Output(UInt(32.W))

    val dcache_rdata      = Input (UInt(32.W))
    val dcache_ready      = Input (Bool())
  })

  val addr = io.in.bits.alu_out
  val addr_off  = addr(1, 0)        // 字内偏移

  val rs2 = io.in.bits.rs2_val
  val store_byte = rs2(7, 0)  << (addr_off ## 0.U(3.W))    // 左移 addr_off*8 位
  val store_half = rs2(15, 0) << (addr_off(1) ## 0.U(4.W)) // 左移 addr_off(1)*16 位

  val store_wdata = MuxLookup(io.in.bits.mem_size, rs2)(Seq(
    0.U -> store_byte,
    1.U -> store_half,
    2.U -> rs2,
  ))

  val lsu_rdata = io.dcache_rdata >> (addr_off << 3)
  val load_data = MuxLookup(io.in.bits.mem_size, lsu_rdata)(Seq(
    0.U -> Mux(io.in.bits.is_unsigned, Cat(0.U(24.W), lsu_rdata(7 , 0)), Cat(Fill(24, lsu_rdata(7)), lsu_rdata(7 , 0))),
    1.U -> Mux(io.in.bits.is_unsigned, Cat(0.U(16.W), lsu_rdata(15, 0)), Cat(Fill(16, lsu_rdata(7)), lsu_rdata(15, 0))),
  ))

  val mem_result = Wire(new MEM_WB_Bus)
  mem_result.pc        := io.in.bits.pc
  mem_result.alu_out   := io.in.bits.alu_out       // 非加载指令的 ALU 结果
  mem_result.mem_rdata := load_data                 // 加载指令读到的数据
  mem_result.rd_addr   := io.in.bits.rd_addr
  mem_result.reg_wen   := io.in.bits.reg_wen
  mem_result.is_load   := io.in.bits.is_load

  val pipe_data  = Reg(new MEM_WB_Bus)
  val pipe_valid = RegInit(false.B)


  val stall = !io.dcache_ready || !io.out.ready

  when(!stall & io.in.valid) {
    pipe_valid := io.in.valid
    pipe_data  := mem_result
  }.otherwise {
    pipe_valid := false.B
  }

  io.in.ready     := !stall
  io.out.valid    := pipe_valid
  io.out.bits     := pipe_data
  io.rdata_processed := load_data
}
