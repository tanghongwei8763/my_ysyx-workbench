package core

import chisel3._
import chisel3.util._

object ARBITER_STATE {
    val IDLE       = 0.U(2.W)
    val IFU_ACCESS = 1.U(2.W)
    val LSU_ACCESS = 2.U(2.W)
}

class AxiArbiter extends Module {
    val io = IO(new Bundle {
        val ifu    = Flipped(new AXI_Bus)
        val lsu    = Flipped(new AXI_Bus)
        val master = new AXI_Bus         
    })

    val current_master  = RegInit(ARBITER_STATE.IDLE)
    val next_master     = WireDefault(ARBITER_STATE.IDLE)

    // 状态标志
    val state_ifu   = current_master === ARBITER_STATE.IFU_ACCESS
    val state_lsu   = current_master === ARBITER_STATE.LSU_ACCESS
    // 组合逻辑辅助信号
    val ifu_req  = io.ifu.ar.valid
    val lsu_req  = io.lsu.ar.valid || io.lsu.aw.valid
    val ifu_done = state_ifu && 
                   (io.master.r.ready && io.master.r.valid && io.master.r.bits.last)
    val lsu_done = state_lsu && 
                   ((io.master.r.ready && io.master.r.valid && io.master.r.bits.last) ||
                    (io.master.b.valid && io.master.b.ready))

    next_master := current_master
    switch(current_master) {
        is(ARBITER_STATE.IDLE      ) { when(lsu_req)  { next_master := ARBITER_STATE.LSU_ACCESS }.elsewhen(ifu_req) {next_master := ARBITER_STATE.IFU_ACCESS} }
        is(ARBITER_STATE.IFU_ACCESS) { when(ifu_done) { next_master := ARBITER_STATE.IDLE } }
        is(ARBITER_STATE.LSU_ACCESS) { when(lsu_done) { next_master := ARBITER_STATE.IDLE } }
    }
    current_master := next_master

    io.ifu.ar.ready       := state_ifu && io.master.ar.ready
    io.ifu.r.valid        := state_ifu && io.master.r.valid
    io.ifu.r.bits.resp    := Mux(state_ifu, io.master.r.bits.resp,    0.U(2.W))
    io.ifu.r.bits.data    := Mux(state_ifu, io.master.r.bits.data,    0.U(32.W))
    io.ifu.r.bits.last    := Mux(state_ifu, io.master.r.bits.last,    false.B)
    io.ifu.r.bits.id      := Mux(state_ifu, io.master.r.bits.id,      0.U(4.W))

    io.ifu.aw.ready       := false.B
    io.ifu.w.ready        := false.B
    io.ifu.b.valid        := false.B
    io.ifu.b.bits.resp    := 0.U(2.W)
    io.ifu.b.bits.id      := 0.U(4.W)

    io.lsu.aw.ready       := state_lsu && io.master.aw.ready
    io.lsu.w.ready        := state_lsu && io.master.w.ready
    io.lsu.b.valid        := state_lsu && io.master.b.valid
    io.lsu.b.bits.resp    := Mux(state_lsu, io.master.b.bits.resp,    0.U(2.W))
    io.lsu.b.bits.id      := Mux(state_lsu, io.master.b.bits.id,      0.U(4.W))

    io.lsu.ar.ready       := Mux(state_lsu,   io.master.ar.ready, false.B)
    io.lsu.r.valid        := Mux(state_lsu,   io.master.r.valid,  false.B)
    io.lsu.r.bits.resp    := Mux(state_lsu, io.master.r.bits.resp, 0.U(2.W))
    io.lsu.r.bits.data    := Mux(state_lsu, io.master.r.bits.data, 0.U(32.W))
    io.lsu.r.bits.last    := Mux(state_lsu, io.master.r.bits.last, false.B)
    io.lsu.r.bits.id      := Mux(state_lsu, io.master.r.bits.id,   0.U(4.W))

    io.master.aw.valid       := state_lsu && io.lsu.aw.valid
    io.master.aw.bits.addr   := Mux(state_lsu, io.lsu.aw.bits.addr,  0.U(32.W))
    io.master.aw.bits.id     := Mux(state_lsu, io.lsu.aw.bits.id,    0.U(4.W))
    io.master.aw.bits.len    := Mux(state_lsu, io.lsu.aw.bits.len,   0.U(8.W))
    io.master.aw.bits.size   := Mux(state_lsu, io.lsu.aw.bits.size,  0.U(3.W))
    io.master.aw.bits.burst  := Mux(state_lsu, io.lsu.aw.bits.burst, 0.U(2.W))

    io.master.w.valid        := state_lsu && io.lsu.w.valid
    io.master.w.bits.data    := Mux(state_lsu, io.lsu.w.bits.data,   0.U(32.W))
    io.master.w.bits.strb    := Mux(state_lsu, io.lsu.w.bits.strb,   0.U(4.W))
    io.master.w.bits.last    := Mux(state_lsu, io.lsu.w.bits.last,   false.B)

    io.master.b.ready        := state_lsu && io.lsu.b.ready

    io.master.ar.valid       := Mux(state_ifu, io.ifu.ar.valid,
                                 Mux(state_lsu, io.lsu.ar.valid, false.B))
    io.master.ar.bits.addr   := Mux(state_ifu, io.ifu.ar.bits.addr,
                                 Mux(state_lsu, io.lsu.ar.bits.addr, 0.U(32.W)))
    io.master.ar.bits.id     := Mux(state_ifu, io.ifu.ar.bits.id,
                                 Mux(state_lsu, io.lsu.ar.bits.id,   0.U(4.W)))
    io.master.ar.bits.len    := Mux(state_ifu, io.ifu.ar.bits.len,
                                 Mux(state_lsu, io.lsu.ar.bits.len,  0.U(8.W)))
    io.master.ar.bits.size   := Mux(state_ifu, io.ifu.ar.bits.size,
                                 Mux(state_lsu, io.lsu.ar.bits.size, 0.U(3.W)))
    io.master.ar.bits.burst  := Mux(state_ifu, io.ifu.ar.bits.burst,
                                 Mux(state_lsu, io.lsu.ar.bits.burst, 0.U(2.W)))

    io.master.r.ready        := Mux(state_ifu, io.ifu.r.ready,
                                 Mux(state_lsu, io.lsu.r.ready, false.B))
}
