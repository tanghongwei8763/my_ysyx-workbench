package core

import chisel3._
import chisel3.util._

class IF_ID_Bus extends Bundle {
  val pc   = UInt(32.W)
  val inst = UInt(32.W)
}

class ID_EX_Bus extends Bundle {
  val pc         = UInt(32.W)
  val inst       = UInt(32.W)
  val rs1_val    = UInt(32.W)
  val rs2_val    = UInt(32.W)
  val imm        = UInt(32.W)
  val rd_addr    = UInt(5.W)
  val rs1_addr   = UInt(5.W)
  val rs2_addr   = UInt(5.W)

  val alu_op      = UInt(5.W)
  val src1_sel    = Bool()  
  val src2_sel    = Bool()
  val reg_wen     = Bool()
  val mem_ren     = Bool()
  val mem_wen     = Bool()
  val is_load     = Bool()
  val is_branch   = Bool()
  val is_jal      = Bool()
  val is_jalr     = Bool()
  val mem_size    = UInt(2.W)
  val is_unsigned = Bool()
  val is_cbo      = Bool()
}

class EX_MEM_Bus extends Bundle {
  val pc         = UInt(32.W)
  val alu_out    = UInt(32.W)
  val rs2_val    = UInt(32.W)
  val rd_addr    = UInt(5.W)
  val reg_wen    = Bool()
  val mem_ren    = Bool()
  val mem_wen    = Bool()
  val mem_size   = UInt(2.W)
  val is_unsigned = Bool()
  val is_load    = Bool()
}

class MEM_WB_Bus extends Bundle {
  val pc         = UInt(32.W)
  val alu_out    = UInt(32.W)
  val mem_rdata  = UInt(32.W)
  val rd_addr    = UInt(5.W)
  val reg_wen    = Bool()
  val is_load    = Bool()
}

class AXI_AW_Bundle extends Bundle {
  val addr  = UInt(32.W)
  val id    = UInt(4.W)
  val len   = UInt(8.W)
  val size  = UInt(3.W)
  val burst = UInt(2.W)
}

class AXI_W_Bundle extends Bundle {
  val data = UInt(32.W)
  val strb = UInt(4.W)
  val last = Bool()
}

class AXI_B_Bundle extends Bundle {
  val resp = UInt(2.W)
  val id   = UInt(4.W)
}

class AXI_AR_Bundle extends Bundle {
  val addr  = UInt(32.W)
  val id    = UInt(4.W)
  val len   = UInt(8.W)
  val size  = UInt(3.W)
  val burst = UInt(2.W)
}

class AXI_R_Bundle extends Bundle {
  val resp = UInt(2.W)
  val data = UInt(32.W)
  val last = Bool()
  val id   = UInt(4.W)
}

class AXI_Bus extends Bundle {
  val aw = Decoupled(new AXI_AW_Bundle)
  val w  = Decoupled(new AXI_W_Bundle)
  val b  = Flipped(Decoupled(new AXI_B_Bundle))
  val ar = Decoupled(new AXI_AR_Bundle)
  val r  = Flipped(Decoupled(new AXI_R_Bundle))
}

class AXI_Flat extends Bundle {
  val awready = Input(Bool())
  val awvalid = Output(Bool())
  val awid    = Output(UInt(4.W))
  val awaddr  = Output(UInt(32.W))
  val awlen   = Output(UInt(8.W))
  val awsize  = Output(UInt(3.W))
  val awburst = Output(UInt(2.W))

  val wready  = Input(Bool())
  val wvalid  = Output(Bool())
  val wdata   = Output(UInt(32.W))
  val wstrb   = Output(UInt(4.W))
  val wlast   = Output(Bool())

  val bready  = Output(Bool())
  val bvalid  = Input(Bool())
  val bresp   = Input(UInt(2.W))
  val bid     = Input(UInt(4.W))

  val arready = Input(Bool())
  val arvalid = Output(Bool())
  val arid    = Output(UInt(4.W))
  val araddr  = Output(UInt(32.W))
  val arlen   = Output(UInt(8.W))
  val arsize  = Output(UInt(3.W))
  val arburst = Output(UInt(2.W))

  val rready  = Output(Bool())
  val rvalid  = Input(Bool())
  val rresp   = Input(UInt(2.W))
  val rdata   = Input(UInt(32.W))
  val rlast   = Input(Bool())
  val rid     = Input(UInt(4.W))
}
