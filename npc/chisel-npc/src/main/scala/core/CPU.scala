package core

import chisel3._
import chisel3.util._

class ysyx_25020037 extends Module {
  val io = IO(new Bundle {
    val interrupt     = Input(UInt(1.W))   // → io_interrupt (与 SoC BlackBox 匹配)

    val master = new AXI_Flat          // master 口 (扁平 AXI, 与 ysyxSoC BlackBox 兼容)
    val slave  = Flipped(new AXI_Flat) // slave 口：暂未使用

    val sim_end   = Output(Bool())     // ebreak → 通知仿真结束
    val test_pass = Output(UInt(32.W)) // 结束时 a0 的值, 用于判定结果

    // Difftest debug ports
    val debug_commit_valid = Output(Bool())
    val debug_commit_pc    = Output(UInt(32.W))
    val debug_commit_wen   = Output(Bool())
    val debug_commit_wdest = Output(UInt(5.W))
    val debug_commit_wdata = Output(UInt(32.W))
  })

  val regfile = Module(new RegFile)

  // 五级流水线
  val ifu = Module(new StageIFU)
  val idu = Module(new StageIDU)
  val exu = Module(new StageEXU)
  val lsu = Module(new StageLSU)
  val wbu = Module(new StageWBU)

  // 仲裁器和旁路模块
  val bypass      = Module(new Bypass)
  val axi_arbiter = Module(new AxiArbiter)

  val icache  = Module(new Icache)
  val dcache  = Module(new Dcache)

  idu.io.in <> ifu.io.out
  exu.io.in <> idu.io.out
  lsu.io.in <> exu.io.out
  wbu.io.in <> lsu.io.out

  // ═════════════════════════════════════════════════════════════════════
  //  AXI 扁平接口 ↔ 内部 AXI_Bus 转换
  //  顶层 IO (AXI_Flat) 与 ysyxSoC BlackBox 期望的端口名一致
  //  (io_master_awaddr、io_master_awvalid … 无 _bits_ 层级)
  // ═════════════════════════════════════════════════════════════════════

  // ── AW 通道 ──
  io.master.awvalid               := axi_arbiter.io.master.aw.valid
  io.master.awaddr                := axi_arbiter.io.master.aw.bits.addr
  io.master.awid                  := axi_arbiter.io.master.aw.bits.id
  io.master.awlen                 := axi_arbiter.io.master.aw.bits.len
  io.master.awsize                := axi_arbiter.io.master.aw.bits.size
  io.master.awburst               := axi_arbiter.io.master.aw.bits.burst
  axi_arbiter.io.master.aw.ready  := io.master.awready

  // ── W 通道 ──
  io.master.wvalid                := axi_arbiter.io.master.w.valid
  io.master.wdata                 := axi_arbiter.io.master.w.bits.data
  io.master.wstrb                 := axi_arbiter.io.master.w.bits.strb
  io.master.wlast                 := axi_arbiter.io.master.w.bits.last
  axi_arbiter.io.master.w.ready   := io.master.wready

  // ── B 通道 (slave → master) ──
  axi_arbiter.io.master.b.valid   := io.master.bvalid
  axi_arbiter.io.master.b.bits.resp := io.master.bresp
  axi_arbiter.io.master.b.bits.id   := io.master.bid
  io.master.bready                := axi_arbiter.io.master.b.ready

  // ── AR 通道 ──
  io.master.arvalid               := axi_arbiter.io.master.ar.valid
  io.master.araddr                := axi_arbiter.io.master.ar.bits.addr
  io.master.arid                  := axi_arbiter.io.master.ar.bits.id
  io.master.arlen                 := axi_arbiter.io.master.ar.bits.len
  io.master.arsize                := axi_arbiter.io.master.ar.bits.size
  io.master.arburst               := axi_arbiter.io.master.ar.bits.burst
  axi_arbiter.io.master.ar.ready  := io.master.arready

  // ── R 通道 (slave → master) ──
  axi_arbiter.io.master.r.valid   := io.master.rvalid
  axi_arbiter.io.master.r.bits.resp := io.master.rresp
  axi_arbiter.io.master.r.bits.data := io.master.rdata
  axi_arbiter.io.master.r.bits.last := io.master.rlast
  axi_arbiter.io.master.r.bits.id   := io.master.rid
  io.master.rready                := axi_arbiter.io.master.r.ready

  // slave 口暂未使用
  io.slave  := DontCare

  dcache.io.addr       := exu.io.dcache_addr
  dcache.io.addr_valid := exu.io.dcache_addr_valid
  dcache.io.we         := exu.io.dcache_we
  dcache.io.wdata      := exu.io.dcache_wdata
  dcache.io.wstrb      := exu.io.dcache_wstrb
  dcache.io.uncache_en := false.B            // 暂不支持 uncache

  lsu.io.dcache_rdata := dcache.io.rdata
  lsu.io.dcache_ready := dcache.io.ready

  dcache.io.axi <> axi_arbiter.io.lsu

  // ── Icache: IFU → Icache → 仲裁器 IFU 口 ──
  icache.io.addr       := ifu.io.inst_vaddr
  icache.io.addr_valid := ifu.io.inst_valid
  ifu.io.icache_rdata  := icache.io.rdata
  ifu.io.icache_done   := icache.io.done
  icache.io.axi <> axi_arbiter.io.ifu

  // ================= 寄存器操作 ==================
  bypass.io.rs1_addr  := idu.io.rs1_addr
  bypass.io.rs2_addr  := idu.io.rs2_addr
  regfile.io.rs1_addr := idu.io.rs1_addr
  regfile.io.rs2_addr := idu.io.rs2_addr
  // 数据旁路
  bypass.io.src1_data := regfile.io.rs1_data
  bypass.io.src2_data := regfile.io.rs2_data
  idu.io.rs1_data     := bypass.io.bypass_src1_data
  idu.io.rs2_data     := bypass.io.bypass_src2_data

  bypass.io.rd_w_bypass_data := exu.io.rd_w_bypass_data
  bypass.io.rd_w_bypass_en   := exu.io.rd_w_bypass_en
  bypass.io.rd_w_bypass      := exu.io.rd_w_bypass

  // 写端口 ← WBU
  regfile.io.rd_addr := wbu.io.rd_addr
  regfile.io.rd_data := wbu.io.rd_data
  regfile.io.rd_wen  := wbu.io.rd_wen

  // ================= flush操作 ==================
  ifu.io.flush     := exu.io.flush_en
  ifu.io.flush_pc  := exu.io.flush_pc
  idu.io.flush     := exu.io.flush_en
  exu.io.pc_update := ifu.io.pc_update

  // ================= 仿真控制 ==================
  io.sim_end   := exu.io.sim_end
  io.test_pass := regfile.io.debug_a0

  // ================= Difftest ==================
  io.debug_commit_valid := wbu.io.debug_commit_valid
  io.debug_commit_pc    := wbu.io.debug_pc
  io.debug_commit_wen   := wbu.io.rd_wen
  io.debug_commit_wdest := wbu.io.rd_addr
  io.debug_commit_wdata := wbu.io.rd_data
}

object ysyx_25020037 extends App {
  (new _root_.circt.stage.ChiselStage).execute(
    Array("--target", "verilog", "--target-dir", "build"),
    Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new ysyx_25020037)),
  )
}
