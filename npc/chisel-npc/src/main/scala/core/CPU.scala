package core

import chisel3._
import chisel3.util._

class ysyx_25020037 extends Module {
  val io = IO(new Bundle {
    val interrupt     = Input(UInt(1.W)) 

    val master = new AXI_Flat
    val slave  = Flipped(new AXI_Flat) 

    val sim_end   = Output(Bool())
    val test_pass = Output(UInt(32.W))

    // Difftest debug ports
    val debug_commit_valid = Output(Bool())
    val debug_commit_pc    = Output(UInt(32.W))
    val debug_commit_wen   = Output(Bool())
    val debug_commit_wdest = Output(UInt(5.W))
    val debug_commit_wdata = Output(UInt(32.W))
  })

  val regfile = Module(new RegFile)

  val ifu = Module(new StageIFU)
  val idu = Module(new StageIDU)
  val exu = Module(new StageEXU)
  val lsu = Module(new StageLSU)
  val wbu = Module(new StageWBU)

  val axi_arbiter = Module(new AxiArbiter)
  val bypass      = Module(new Bypass)

  val icache  = Module(new Icache)
  val dcache  = Module(new Dcache)

  idu.io.in <> ifu.io.out
  exu.io.in <> idu.io.out
  lsu.io.in <> exu.io.out
  wbu.io.in <> lsu.io.out

  io.master.awvalid               := axi_arbiter.io.master.aw.valid
  io.master.awaddr                := axi_arbiter.io.master.aw.bits.addr
  io.master.awid                  := axi_arbiter.io.master.aw.bits.id
  io.master.awlen                 := axi_arbiter.io.master.aw.bits.len
  io.master.awsize                := axi_arbiter.io.master.aw.bits.size
  io.master.awburst               := axi_arbiter.io.master.aw.bits.burst
  axi_arbiter.io.master.aw.ready  := io.master.awready

  io.master.wvalid                := axi_arbiter.io.master.w.valid
  io.master.wdata                 := axi_arbiter.io.master.w.bits.data
  io.master.wstrb                 := axi_arbiter.io.master.w.bits.strb
  io.master.wlast                 := axi_arbiter.io.master.w.bits.last
  axi_arbiter.io.master.w.ready   := io.master.wready

  axi_arbiter.io.master.b.valid   := io.master.bvalid
  axi_arbiter.io.master.b.bits.resp := io.master.bresp
  axi_arbiter.io.master.b.bits.id   := io.master.bid
  io.master.bready                := axi_arbiter.io.master.b.ready

  io.master.arvalid               := axi_arbiter.io.master.ar.valid
  io.master.araddr                := axi_arbiter.io.master.ar.bits.addr
  io.master.arid                  := axi_arbiter.io.master.ar.bits.id
  io.master.arlen                 := axi_arbiter.io.master.ar.bits.len
  io.master.arsize                := axi_arbiter.io.master.ar.bits.size
  io.master.arburst               := axi_arbiter.io.master.ar.bits.burst
  axi_arbiter.io.master.ar.ready  := io.master.arready

  axi_arbiter.io.master.r.valid   := io.master.rvalid
  axi_arbiter.io.master.r.bits.resp := io.master.rresp
  axi_arbiter.io.master.r.bits.data := io.master.rdata
  axi_arbiter.io.master.r.bits.last := io.master.rlast
  axi_arbiter.io.master.r.bits.id   := io.master.rid
  io.master.rready                := axi_arbiter.io.master.r.ready

  io.slave  := DontCare

  dcache.io.cbo_valid  := exu.io.cbo_valid
  dcache.io.cbo_va     := exu.io.cbo_va

  dcache.io.addr       := exu.io.dcache_addr
  dcache.io.addr_valid := exu.io.dcache_addr_valid
  dcache.io.we         := exu.io.dcache_we
  dcache.io.wdata      := exu.io.dcache_wdata
  dcache.io.wstrb      := exu.io.dcache_wstrb
  dcache.io.uncache_en := false.B 

  lsu.io.dcache_rdata := dcache.io.rdata
  lsu.io.dcache_ready := dcache.io.ready

  dcache.io.axi <> axi_arbiter.io.lsu

  icache.io.addr       := ifu.io.inst_vaddr
  icache.io.addr_valid := ifu.io.inst_valid
  ifu.io.icache_rdata  := icache.io.rdata
  ifu.io.icache_done   := icache.io.done
  icache.io.axi <> axi_arbiter.io.ifu

  regfile.io.rs1_addr := idu.io.rs1_addr
  regfile.io.rs2_addr := idu.io.rs2_addr

  bypass.io.rs1_addr      := idu.io.rs1_addr
  bypass.io.rs2_addr      := idu.io.rs2_addr
  bypass.io.src1_data     := regfile.io.rs1_data
  bypass.io.src2_data     := regfile.io.rs2_data
  bypass.io.push_en       := exu.io.push_en
  bypass.io.push_addr     := exu.io.in.bits.rd_addr
  bypass.io.push_data     := exu.io.fwd_data
  bypass.io.push_is_load  := exu.io.in.bits.is_load
  bypass.io.fill_en       := lsu.io.fill_en
  bypass.io.fill_data     := lsu.io.fill_data

  val ex_fwd_rs1 = exu.io.fwd_en && (idu.io.rs1_addr === exu.io.fwd_reg) && (idu.io.rs1_addr =/= 0.U)
  val ex_fwd_rs2 = exu.io.fwd_en && (idu.io.rs2_addr === exu.io.fwd_reg) && (idu.io.rs2_addr =/= 0.U)
  val mem_fwd_rs1 = lsu.io.fwd_en && (idu.io.rs1_addr === lsu.io.fwd_reg) && (idu.io.rs1_addr =/= 0.U)
  val mem_fwd_rs2 = lsu.io.fwd_en && (idu.io.rs2_addr === lsu.io.fwd_reg) && (idu.io.rs2_addr =/= 0.U)

  val ex_resolves_rs1 = ex_fwd_rs1 && !exu.io.fwd_is_load
  val ex_resolves_rs2 = ex_fwd_rs2 && !exu.io.fwd_is_load
  val mem_resolves_rs1 = mem_fwd_rs1 && !lsu.io.fwd_stall
  val mem_resolves_rs2 = mem_fwd_rs2 && !lsu.io.fwd_stall

  idu.io.rs1_data := Mux(ex_resolves_rs1, exu.io.fwd_data,
                      Mux(mem_resolves_rs1, lsu.io.fwd_data,
                          bypass.io.bypass_src1_data))
  idu.io.rs2_data := Mux(ex_resolves_rs2, exu.io.fwd_data,
                      Mux(mem_resolves_rs2, lsu.io.fwd_data,
                          bypass.io.bypass_src2_data))

  val rs1_unresolved = !(ex_resolves_rs1 || mem_resolves_rs1) && bypass.io.stall_rs1
  val rs2_unresolved = !(ex_resolves_rs2 || mem_resolves_rs2) && bypass.io.stall_rs2

  idu.io.fwd_stall := idu.io.in.valid &&
                      ((ex_fwd_rs1 && exu.io.fwd_is_load) || (ex_fwd_rs2 && exu.io.fwd_is_load) ||
                       (mem_fwd_rs1 && lsu.io.fwd_stall)  || (mem_fwd_rs2 && lsu.io.fwd_stall) ||
                       rs1_unresolved || rs2_unresolved)

  regfile.io.rd_addr := wbu.io.rd_addr
  regfile.io.rd_data := wbu.io.rd_data
  regfile.io.rd_wen  := wbu.io.rd_wen

  ifu.io.flush     := exu.io.flush_en
  ifu.io.flush_pc  := exu.io.flush_pc
  idu.io.flush     := exu.io.flush_en
  exu.io.pc_update := ifu.io.pc_update

  io.sim_end   := exu.io.sim_end
  io.test_pass := regfile.io.debug_a0

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
