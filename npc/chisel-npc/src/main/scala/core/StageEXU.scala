package core

import chisel3._
import chisel3.util._

class StageEXU extends Module {
  val io = IO(new Bundle {
    val in               = Flipped(Decoupled(new ID_EX_Bus))
    val out              = Decoupled(new EX_MEM_Bus)

    val pc_update        = Input(Bool())
    val flush_en         = Output(Bool())    
    val flush_pc         = Output(UInt(32.W))

    val rd_w_bypass_data = Output(UInt(32.W))
    val rd_w_bypass_en   = Output(Bool())
    val rd_w_bypass      = Output(UInt(5.W))

    val dcache_addr       = Output(UInt(32.W))
    val dcache_addr_valid = Output(Bool())
    val dcache_we         = Output(Bool())
    val dcache_wdata      = Output(UInt(32.W))
    val dcache_wstrb      = Output(UInt(4.W))

    val sim_end          = Output(Bool())
  })

  val rs1_addr = io.in.bits.rs1_addr
  val rs2_addr = io.in.bits.rs2_addr

  val src1 = io.in.bits.rs1_val
  val src2 = io.in.bits.rs2_val

  // ALU
  val alu_src1 = Mux(io.in.bits.src1_sel, io.in.bits.pc, src1)
  val alu_src2 = Mux(io.in.bits.src2_sel, io.in.bits.imm, src2)

  val alu = Module(new ALU)
  alu.io.src1 := alu_src1
  alu.io.src2 := alu_src2
  alu.io.op   := io.in.bits.alu_op

  // BRU
  val flush_en_r    = RegInit(false.B)
  val flush_pc_r    = Reg(UInt(32.W))
  val branch_target = io.in.bits.pc + io.in.bits.imm
  val jalr_target   = (src1 + io.in.bits.imm) & ~1.U(32.W)
  val target_pc     = Mux(io.in.bits.is_jalr, jalr_target, branch_target)

  // funct3 编码: 000=BEQ, 001=BNE, 100=BLT, 101=BGE, 110=BLTU, 111=BGEU
  val funct3 = io.in.bits.inst(14, 12)

  val diff   = src1 - src2
  val is_eq  = diff === 0.U
  val is_lt  = src1.asSInt < src2.asSInt
  val is_ltu = src1 < src2

  val branch_cond = MuxLookup(funct3, false.B)(Seq(
    0.U -> is_eq  ,   // BEQ
    1.U -> !is_eq ,   // BNE
    4.U -> is_lt  ,   // BLT
    5.U -> !is_lt ,   // BGE
    6.U -> is_ltu ,   // BLTU
    7.U -> !is_ltu,   // BGEU
  ))

  // Jump 或分支条件满足 → flush
  val is_jump  = io.in.bits.is_jal || io.in.bits.is_jalr
  val taken    = (io.in.bits.is_branch && branch_cond) || is_jump

  val is_ebreak = io.in.bits.inst === 0x00100073.U(32.W)

  val wb_data = Mux(is_jump, io.in.bits.pc + 4.U, alu.io.out)

  val ex_result = Wire(new EX_MEM_Bus)
  ex_result.pc          := io.in.bits.pc
  ex_result.alu_out     := wb_data
  ex_result.rs2_val     := src2 
  ex_result.rd_addr     := io.in.bits.rd_addr
  ex_result.reg_wen     := io.in.bits.reg_wen
  ex_result.mem_ren     := io.in.bits.mem_ren
  ex_result.mem_wen     := io.in.bits.mem_wen
  ex_result.mem_size    := io.in.bits.mem_size
  ex_result.is_unsigned := io.in.bits.is_unsigned
  ex_result.is_load     := io.in.bits.is_load

  val pipe_data  = Reg(new EX_MEM_Bus)
  val pipe_valid = RegInit(false.B)

  val stall = !io.out.ready

  when(io.flush_en) {
    pipe_valid := false.B
  }.elsewhen(!stall & io.in.valid) {
    pipe_valid := io.in.valid
    pipe_data  := ex_result
  }.elsewhen(stall) {
    pipe_valid := pipe_valid
  }.otherwise {
    pipe_valid := false.B
  }

  when (!stall & io.in.valid & ~io.flush_en) {
    flush_en_r := taken
    flush_pc_r := target_pc
  } .elsewhen(io.pc_update) {
    flush_en_r := false.B
  }
  
  io.flush_en         := flush_en_r
  io.flush_pc         := flush_pc_r

  io.in.ready         := !stall
  io.out.valid        := pipe_valid
  io.out.bits         := pipe_data

  io.rd_w_bypass_data := wb_data
  io.rd_w_bypass_en   := io.in.valid & io.in.bits.reg_wen & ~io.in.bits.mem_ren & ~io.flush_en
  io.rd_w_bypass      := io.in.bits.rd_addr

  val addr_off = wb_data(1, 0)
  val baseMask = MuxLookup(io.in.bits.mem_size, "b1111".U(4.W))(Seq(
    0.U -> "b0001".U(4.W),
    1.U -> "b0011".U(4.W),
    2.U -> "b1111".U(4.W),
  ))

  io.dcache_addr       := wb_data
  io.dcache_addr_valid := io.in.valid & (io.in.bits.mem_ren | io.in.bits.mem_wen)
  io.dcache_we         := io.in.bits.mem_wen
  io.dcache_wdata      := src2
  io.dcache_wstrb      := (baseMask << addr_off)(3,0)

  io.sim_end           := is_ebreak
}
