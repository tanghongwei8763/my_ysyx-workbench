package core

import chisel3._
import chisel3.util._

// ---- IF → ID ----
class IF_ID_Bus extends Bundle {
  val pc   = UInt(32.W)
  val inst = UInt(32.W)
}

// ---- ID → EX ----
class ID_EX_Bus extends Bundle {
  val pc         = UInt(32.W)
  val inst       = UInt(32.W)     // 原始指令 (EXU 解码分支条件用)
  val rs1_val    = UInt(32.W)
  val rs2_val    = UInt(32.W)
  val imm        = UInt(32.W)
  val rd_addr    = UInt(5.W)
  val rs1_addr   = UInt(5.W)
  val rs2_addr   = UInt(5.W)

  // 译码阶段生成的控制信号
  val alu_op      = UInt(5.W)
  val src1_sel    = Bool()        // 0=rs1, 1=PC (AUIPC)
  val src2_sel    = Bool()        // 0=rs2, 1=imm
  val reg_wen     = Bool()
  val mem_ren     = Bool()
  val mem_wen     = Bool()
  val is_load     = Bool()        // 用于 load-use 检测
  val is_branch   = Bool()
  val is_jal      = Bool()
  val is_jalr     = Bool()
  val mem_size    = UInt(2.W)     // 0=byte, 1=half, 2=word
  val is_unsigned = Bool()
}

// ---- EX → MEM ----
class EX_MEM_Bus extends Bundle {
  val pc         = UInt(32.W)
  val alu_out    = UInt(32.W)     // ALU 计算结果 (或 LUI/AUIPC 结果)
  val rs2_val    = UInt(32.W)     // 用于 store 指令
  val rd_addr    = UInt(5.W)
  val reg_wen    = Bool()
  val mem_ren    = Bool()
  val mem_wen    = Bool()
  val mem_size   = UInt(2.W)
  val is_unsigned = Bool()
  val is_load    = Bool()
}

// ---- MEM → WB ----
class MEM_WB_Bus extends Bundle {
  val pc         = UInt(32.W)
  val alu_out    = UInt(32.W)     // 非加载指令的结果
  val mem_rdata  = UInt(32.W)     // 加载指令从内存读到的数据
  val rd_addr    = UInt(5.W)
  val reg_wen    = Bool()
  val is_load    = Bool()         // true → 写回用 mem_rdata, false → 用 alu_out
}

// ---- 写地址通道 ----
class AXI_AW_Bundle extends Bundle {
  val addr  = UInt(32.W)
  val id    = UInt(4.W)
  val len   = UInt(8.W)
  val size  = UInt(3.W)
  val burst = UInt(2.W)
}

// ---- 写数据通道 ----
class AXI_W_Bundle extends Bundle {
  val data = UInt(32.W)
  val strb = UInt(4.W)
  val last = Bool()
}

// ---- 写响应通道 ----
class AXI_B_Bundle extends Bundle {
  val resp = UInt(2.W)
  val id   = UInt(4.W)
}

// ---- 读地址通道 ----
class AXI_AR_Bundle extends Bundle {
  val addr  = UInt(32.W)
  val id    = UInt(4.W)
  val len   = UInt(8.W)
  val size  = UInt(3.W)
  val burst = UInt(2.W)
}

// ---- 读数据通道 ----
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
  // ---- 写地址通道 ----
  val awready = Input(Bool())
  val awvalid = Output(Bool())
  val awid    = Output(UInt(4.W))
  val awaddr  = Output(UInt(32.W))
  val awlen   = Output(UInt(8.W))
  val awsize  = Output(UInt(3.W))
  val awburst = Output(UInt(2.W))
  // ---- 写数据通道 ----
  val wready  = Input(Bool())
  val wvalid  = Output(Bool())
  val wdata   = Output(UInt(32.W))
  val wstrb   = Output(UInt(4.W))
  val wlast   = Output(Bool())
  // ---- 写响应通道 ----
  val bready  = Output(Bool())
  val bvalid  = Input(Bool())
  val bresp   = Input(UInt(2.W))
  val bid     = Input(UInt(4.W))
  // ---- 读地址通道 ----
  val arready = Input(Bool())
  val arvalid = Output(Bool())
  val arid    = Output(UInt(4.W))
  val araddr  = Output(UInt(32.W))
  val arlen   = Output(UInt(8.W))
  val arsize  = Output(UInt(3.W))
  val arburst = Output(UInt(2.W))
  // ---- 读数据通道 ----
  val rready  = Output(Bool())
  val rvalid  = Input(Bool())
  val rresp   = Input(UInt(2.W))
  val rdata   = Input(UInt(32.W))
  val rlast   = Input(Bool())
  val rid     = Input(UInt(4.W))
}
