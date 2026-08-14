package core

import chisel3._
import chisel3.util._

object CACHE_STATE {
    val IDLE       = 0.U(2.W)
    val LOOKUP     = 1.U(2.W)
    val REFILL     = 2.U(2.W)
    val FENCEN     = 3.U(2.W)
}

class Icache extends Module {

  val CACHE_SETS   = 16
  val WAYS         = 2
  val BLOCK_SIZE   = 16
  val OFFSET_WIDTH = log2Ceil(BLOCK_SIZE)       // 4
  val INDEX_WIDTH  = log2Ceil(CACHE_SETS)       // 8
  val TAG_WIDTH    = 32 - INDEX_WIDTH - OFFSET_WIDTH // 20

  val io = IO(new Bundle {
    val addr       = Input(UInt(32.W))
    val addr_valid = Input(Bool())
    val rdata      = Output(UInt(32.W))
    val ready      = Output(Bool())
    val done       = Output(Bool())

    val axi        = new AXI_Bus
  })

  val tag   = io.addr(31, OFFSET_WIDTH + INDEX_WIDTH)
  val index = io.addr(OFFSET_WIDTH + INDEX_WIDTH - 1, OFFSET_WIDTH)
  val offset= io.addr(OFFSET_WIDTH - 1, 0)

  val state = RegInit(CACHE_STATE.IDLE)
  val nextState = WireDefault(CACHE_STATE.IDLE)
  state := nextState

  val req_active    = RegInit(false.B)
  val req_addr_r    = RegInit(0.U(32.W))
  val req_index     = RegInit(0.U(INDEX_WIDTH.W))
  val req_offset    = RegInit(0.U(OFFSET_WIDTH.W))

  def req_tag = req_addr_r(31, OFFSET_WIDTH + INDEX_WIDTH)

  val tag_r         = RegInit(0.U(TAG_WIDTH.W))
  val replace_way_r = RegInit(0.U(log2Ceil(WAYS).W))
  val ld_burst_cnt  = RegInit(0.U(2.W))
  val cache_ld_ing  = RegInit(false.B)
  val refill_done   = RegInit(false.B)

  val rdata_array    = Reg(Vec(4, UInt(32.W)))

  val arvalid_r = RegInit(false.B)
  val rready_r  = RegInit(false.B)
  val araddr_r  = RegInit(0.U(32.W))
  val arlen_r   = RegInit(0.U(8.W))
  val arsize_r  = RegInit(0.U(3.W))
  val arburst_r = RegInit(0.U(2.W))

  // ── LRU 阵列 (每路最近使用标记) ──
  val lru_array = Reg(Vec(CACHE_SETS, UInt(WAYS.W)))
  when(reset.asBool) {
    for (i <- 0 until CACHE_SETS) { lru_array(i) := "b10".U(WAYS.W) }
  }

  val data_banks = Seq.fill(WAYS) { Seq.fill(4) { Module(new DataBankSRAM(CACHE_SETS)) } }
  val tagv_srams = Seq.fill(WAYS) { Module(new TagVSRAM(TAG_WIDTH + 1, CACHE_SETS)) }

  val way_data  = Wire(Vec(WAYS, UInt((BLOCK_SIZE * 8).W)))
  val way_tag   = Wire(Vec(WAYS, UInt(TAG_WIDTH.W)))
  val way_valid = Wire(Vec(WAYS, Bool()))

  for (w <- 0 until WAYS) {
    way_data(w)  := Cat(data_banks(w)(3).io.douta, data_banks(w)(2).io.douta,
                         data_banks(w)(1).io.douta, data_banks(w)(0).io.douta)
    way_tag(w)   := tagv_srams(w).io.douta(TAG_WIDTH, 1)
    way_valid(w) := tagv_srams(w).io.douta(0)
  }

  val way_hit = Wire(Vec(WAYS, Bool()))
  for (w <- 0 until WAYS) { way_hit(w) := way_valid(w) && (way_tag(w) === req_tag) }

  val icache_hit = way_hit.asUInt.orR && req_active && (state === CACHE_STATE.LOOKUP)

  val hit_way = WireDefault(0.U(log2Ceil(WAYS).W))
  for (w <- 0 until WAYS) { when(way_hit(w)) { hit_way := w.U } }

  val replace_way_sel = WireDefault(0.U(log2Ceil(WAYS).W))
  for (w <- 0 until WAYS) {
    when(lru_array(req_index)(w) === 0.U) { replace_way_sel := w.U }
  }

  val req_mem_addr = Cat(req_tag, req_index, 0.U(OFFSET_WIDTH.W))
  val uhit_data    = Cat(rdata_array(3), rdata_array(2), rdata_array(1), rdata_array(0))

  // 输出数据: word 选择
  val word_sel = req_offset(3, 2) * 32.U
  io.rdata := Mux(icache_hit,
    (way_data(hit_way) >> word_sel)(31, 0),
    (uhit_data >> word_sel)(31, 0))

  // 握手
  val ld_ing          = cache_ld_ing && !(io.axi.r.valid && rready_r && io.axi.r.bits.last)
  val refilling       = ld_ing
  val icache_req_done = icache_hit || (refill_done && !refilling)
  val accept_ready    = Mux(req_active, icache_req_done, state === CACHE_STATE.IDLE)
  val request_done    = req_active && icache_req_done
  val request_accept  = io.addr_valid && accept_ready

  io.ready := accept_ready
  io.done  := request_done

  nextState := state
  switch(state) {
    is(CACHE_STATE.IDLE)   { when(request_accept) { nextState := CACHE_STATE.LOOKUP } }
    is(CACHE_STATE.LOOKUP) { when(icache_hit) { when(request_accept) { nextState := CACHE_STATE.LOOKUP }
                                                .otherwise { nextState := CACHE_STATE.IDLE } }
                            .otherwise{ nextState := CACHE_STATE.REFILL } }
    is(CACHE_STATE.REFILL) { when(icache_req_done) { when(request_accept) { nextState := CACHE_STATE.LOOKUP }.otherwise { nextState := CACHE_STATE.IDLE } } }
  }

  when(reset.asBool) {
    req_active    := false.B
    req_addr_r    := 0.U;  req_index := 0.U;  req_offset := 0.U
    ld_burst_cnt  := 0.U
    cache_ld_ing  := false.B
    refill_done   := false.B
    tag_r         := 0.U
    replace_way_r := 0.U
    for (i <- 0 until 4) rdata_array(i) := 0.U
    arvalid_r := false.B; rready_r := false.B
    araddr_r := 0.U; arlen_r := 0.U; arsize_r := 0.U; arburst_r := 0.U

  }.otherwise {
    refill_done    := false.B

    // 请求锁存
    when(request_done)  { req_active := false.B }
    when(request_accept) {
      req_active := true.B
      req_addr_r := io.addr
      req_index  := index
      req_offset := offset
    }

    switch(state) {
      is(CACHE_STATE.IDLE) { }

      is(CACHE_STATE.LOOKUP) {
        when(req_active && icache_hit) {                         // HIT
          for (w <- 0 until WAYS) {
            when(way_hit(w)) {
              lru_array(req_index) := Mux(w.U === 0.U, "b10".U, "b01".U)
            }
          }
        }
        when(req_active && !icache_hit) {                        // MISS
          tag_r         := req_tag
          replace_way_r := replace_way_sel
          ld_burst_cnt  := 0.U
          cache_ld_ing  := true.B

          arvalid_r := true.B
          araddr_r  := req_mem_addr
          arlen_r   := 3.U
          arsize_r  := 2.U
          arburst_r := 1.U
        }
      }

      is(CACHE_STATE.REFILL) {
        // AXI 读 (refill)
        when(io.axi.ar.ready && io.axi.ar.valid) {
          arvalid_r := false.B
          rready_r  := true.B
        }
        when(io.axi.r.valid && io.axi.r.ready) {
          rdata_array(ld_burst_cnt) := io.axi.r.bits.data
          ld_burst_cnt := ld_burst_cnt + 1.U
          when(io.axi.r.bits.last) {
            cache_ld_ing := false.B
            rready_r     := false.B
            lru_array(req_index) := Mux(replace_way_r === 0.U, "b10".U, "b01".U)
          }
        }
        when(!cache_ld_ing) { refill_done := true.B }
      }
    }
  }

  io.axi.ar.valid      := arvalid_r
  io.axi.ar.bits.addr  := araddr_r
  io.axi.ar.bits.len   := arlen_r
  io.axi.ar.bits.size  := arsize_r
  io.axi.ar.bits.burst := arburst_r
  io.axi.ar.bits.id    := 0.U
  io.axi.r.ready       := rready_r

  // Icache 只读: 写通道全部关闭
  io.axi.aw.valid      := false.B
  io.axi.aw.bits.addr  := 0.U
  io.axi.aw.bits.id    := 0.U
  io.axi.aw.bits.len   := 0.U
  io.axi.aw.bits.size  := 0.U
  io.axi.aw.bits.burst := 0.U
  io.axi.w.valid       := false.B
  io.axi.w.bits.data   := 0.U
  io.axi.w.bits.strb   := 0.U
  io.axi.w.bits.last   := false.B
  io.axi.b.ready       := false.B

  for (w <- 0 until WAYS; j <- 0 until 4) {
    val sram = data_banks(w)(j)
    sram.io.addra := Mux(state === CACHE_STATE.IDLE   || 
                         state === CACHE_STATE.LOOKUP || 
                        (state === CACHE_STATE.REFILL && request_done),
                         index, req_index)
    sram.io.ena   := true.B

    val we = WireDefault(0.U(4.W))
    // REFILL 读回数据写入
    when(state === CACHE_STATE.REFILL &&
         io.axi.r.valid && io.axi.r.ready && replace_way_r === w.U && ld_burst_cnt === j.U) {
      we := "b1111".U
    }
    sram.io.wea := we

    sram.io.dina := Mux(state === CACHE_STATE.REFILL && io.axi.r.valid,
                        io.axi.r.bits.data, 0.U)
  }

  for (w <- 0 until WAYS) {
    val sram = tagv_srams(w)
    sram.io.addra := Mux(state === CACHE_STATE.IDLE   || 
                         state === CACHE_STATE.LOOKUP || 
                        (state === CACHE_STATE.REFILL && request_done),
                         index, req_index)
    sram.io.wea := (state === CACHE_STATE.REFILL &&
                    io.axi.r.valid && io.axi.r.ready && io.axi.r.bits.last &&
                    replace_way_r === w.U)
    sram.io.dina := Cat(req_tag, 1.U(1.W))

    sram.io.ena  := !(state === CACHE_STATE.LOOKUP && req_active && !icache_hit)
  }
}
