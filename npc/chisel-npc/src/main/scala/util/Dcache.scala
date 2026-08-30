package core

import chisel3._
import chisel3.util._

class Dcache extends Module {

  val CACHE_SETS   = 16
  val WAYS         = 2
  val BLOCK_SIZE   = 16
  val OFFSET_WIDTH = log2Ceil(BLOCK_SIZE)       // 4
  val INDEX_WIDTH  = log2Ceil(CACHE_SETS)       // 4
  val TAG_WIDTH    = 32 - INDEX_WIDTH - OFFSET_WIDTH // 24

  val io = IO(new Bundle {
    val addr        = Input(UInt(32.W))
    val addr_valid  = Input(Bool())
    val we          = Input(Bool())
    val wdata       = Input(UInt(32.W))
    val wstrb       = Input(UInt(4.W))
    val uncache_en  = Input(Bool())

    val cbo_valid   = Input(Bool())
    val cbo_va      = Input(UInt(32.W))

    val rdata       = Output(UInt(32.W))
    val ready       = Output(Bool())
    val done        = Output(Bool())

    val axi         = new AXI_Bus
  })

  def tSplit(addr: UInt) = {
    val tag    = addr(31, OFFSET_WIDTH + INDEX_WIDTH)
    val index  = addr(OFFSET_WIDTH + INDEX_WIDTH - 1, OFFSET_WIDTH)
    val offset = addr(OFFSET_WIDTH - 1, 0)
    (tag, index, offset)
  }

  val dcache_tag   = io.addr(31, OFFSET_WIDTH + INDEX_WIDTH)
  val dcache_index = io.addr(OFFSET_WIDTH + INDEX_WIDTH - 1, OFFSET_WIDTH)
  val dcache_offset= io.addr(OFFSET_WIDTH - 1, 0)

  // -- 状态 --
  val state = RegInit(CACHE_STATE.IDLE)
  val nextState = WireDefault(CACHE_STATE.IDLE)

  // -- 请求锁存 --
  val req_active     = RegInit(false.B)
  val req_we_r       = RegInit(false.B)
  val req_wdata_r    = RegInit(0.U(32.W))
  val req_wstrb_r    = RegInit(0.U(4.W))
  val req_addr_r     = RegInit(0.U(32.W))
  val req_index      = RegInit(0.U(INDEX_WIDTH.W))
  val req_offset     = RegInit(0.U(OFFSET_WIDTH.W))
  val req_uncache_r  = RegInit(false.B)

  def req_tag = req_addr_r(31, OFFSET_WIDTH + INDEX_WIDTH)

  // -- CBO --
  val cbo_ing          = RegInit(false.B)
  val cbo_lookup_ready = RegInit(false.B)
  val cbo_index_r      = RegInit(0.U(INDEX_WIDTH.W))
  val cbo_tag_r        = RegInit(0.U(TAG_WIDTH.W))

  val cbo_index = io.cbo_va(OFFSET_WIDTH + INDEX_WIDTH - 1, OFFSET_WIDTH)
  val cbo_tag   = io.cbo_va(31, OFFSET_WIDTH + INDEX_WIDTH)

  val wb_valid  = RegInit(false.B)
  val wb_index  = RegInit(0.U(INDEX_WIDTH.W))
  val wb_wstrb  = RegInit(0.U(4.W))
  val wb_wdata  = RegInit(0.U(32.W))
  val wb_offset = RegInit(0.U(OFFSET_WIDTH.W))
  val wb_way    = RegInit(0.U(log2Ceil(WAYS).W))

  // -- REFILL --
  val tag_r          = RegInit(0.U(TAG_WIDTH.W))
  val replace_way_r  = RegInit(0.U(log2Ceil(WAYS).W))
  val wb_index_r     = RegInit(0.U(INDEX_WIDTH.W))
  val wb_line_r      = RegInit(0.U((BLOCK_SIZE * 8).W))
  val ld_burst_cnt   = RegInit(0.U(2.W))
  val st_burst_cnt   = RegInit(0.U(2.W))
  val cache_ld_ing   = RegInit(false.B)
  val cache_st_ing   = RegInit(false.B)
  val refill_done    = RegInit(false.B)

  //
  val rdata_array    = Reg(Vec(4, UInt(32.W)))
  val uncache_rdata  = RegInit(0.U(32.W))
  val rdata_r        = RegInit(0.U(32.W))

  // 
  val arvalid_r = RegInit(false.B)
  val awvalid_r = RegInit(false.B)
  val wvalid_r  = RegInit(false.B)
  val wlast_r   = RegInit(false.B)
  val bready_r  = RegInit(false.B)
  val rready_r  = RegInit(false.B)

  //
  val araddr_r   = RegInit(0.U(32.W))
  val arlen_r    = RegInit(0.U(8.W))
  val arsize_r   = RegInit(0.U(3.W))
  val arburst_r  = RegInit(0.U(2.W))
  val awaddr_r   = RegInit(0.U(32.W))
  val awlen_r    = RegInit(0.U(8.W))
  val awsize_r   = RegInit(0.U(3.W))
  val awburst_r  = RegInit(0.U(2.W))
  val wdata_r    = RegInit(0.U(32.W))
  val wstrb_r    = RegInit(0.U(4.W))

  val dirty_array = Reg(Vec(CACHE_SETS, UInt(WAYS.W)))
  val lru_array   = Reg(Vec(CACHE_SETS, UInt(WAYS.W)))

  // SRAM 实例
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

  val dcache_hit = way_hit.asUInt.orR && !req_uncache_r && req_active && (state === CACHE_STATE.LOOKUP)

  val hit_way = WireDefault(0.U(log2Ceil(WAYS).W))
  for (w <- 0 until WAYS) { when(way_hit(w)) { hit_way := w.U } }

  val replace_way_sel = WireDefault(0.U(log2Ceil(WAYS).W))
  for (w <- 0 until WAYS) {
    when(lru_array(req_index)(w) === 1.U) { replace_way_sel := w.U }
  }

  // -- CBO 命中/脏判断 --
  val cbo_way_hit = Wire(Vec(WAYS, Bool()))
  for (w <- 0 until WAYS) { cbo_way_hit(w) := way_valid(w) && (way_tag(w) === cbo_tag_r) }
  val cbo_hit       = cbo_way_hit.asUInt.orR
  val cbo_hit_way   = WireDefault(0.U(log2Ceil(WAYS).W))
  for (w <- 0 until WAYS) { when(cbo_way_hit(w)) { cbo_hit_way := w.U } }
  val cbo_tag_dirty = cbo_hit && dirty_array(cbo_index_r)(cbo_hit_way)

  val cache_addr = Cat(req_tag, req_index, 0.U(OFFSET_WIDTH.W))
  val mem_addr   = Mux(req_uncache_r, req_addr_r, cache_addr)

  val uhit_data  = Cat(rdata_array(3), rdata_array(2), rdata_array(1), rdata_array(0))

  val word_sel = req_offset(3, 2) * 32.U
  val load_data_now = Mux(req_uncache_r, uncache_rdata,
                        Mux(state === CACHE_STATE.LOOKUP && dcache_hit,
                            (way_data(hit_way) >> word_sel)(31, 0),
                            (uhit_data >> word_sel)(31, 0)))

  val ld_ing   = cache_ld_ing && !(io.axi.r.valid && rready_r && io.axi.r.bits.last)
  val st_ing   = cache_st_ing && !(io.axi.b.valid && bready_r)
  val refilling = ld_ing || st_ing
  val uncache_done = req_uncache_r && (
    (io.axi.r.valid && rready_r && io.axi.r.bits.last) ||
    (io.axi.b.valid && bready_r))

  // 当前请求完成
  val data_ok = (state === CACHE_STATE.LOOKUP && dcache_hit) ||
                (state === CACHE_STATE.REFILL && refill_done && !refilling) ||
                uncache_done

  val wb_bank_conflict = wb_valid && (wb_offset(3, 2) === dcache_offset(3, 2))
  val st_ld_hazard     = req_active && req_we_r && !io.we && (req_offset(3, 2) === dcache_offset(3, 2))
  val idle2lookup      = !wb_bank_conflict
  val lookup2lookup    = !wb_bank_conflict && !st_ld_hazard && dcache_hit
  val addr_ok = (state === CACHE_STATE.IDLE   && idle2lookup) ||
                (state === CACHE_STATE.LOOKUP && lookup2lookup)

  // CBO 接受
  val cbo_accept_ready = (state === CACHE_STATE.IDLE) || (req_active && data_ok)
  val cbo_accept       = io.cbo_valid && cbo_accept_ready

  val request_accept = io.addr_valid && addr_ok && !cbo_accept
  val request_done   = req_active && data_ok

  val cbo_busy   = cbo_ing
  val cbo_sram   = state === CACHE_STATE.CBO 

  io.ready := !cbo_busy && (!req_active || data_ok) && (!io.addr_valid || addr_ok)
  io.done  := request_done

  when(request_done) { rdata_r := load_data_now }
  io.rdata := Mux(request_done, load_data_now, rdata_r)

  // CBO 间接写回完成
  val cbo_wb_done = (state === CACHE_STATE.REFILL) && cbo_ing &&
                    refill_done && !refilling

  nextState := state
  switch(state) {
    is(CACHE_STATE.IDLE)   { when(cbo_accept)           { nextState := CACHE_STATE.CBO }
                              .elsewhen(request_accept) { nextState := CACHE_STATE.LOOKUP } }
    is(CACHE_STATE.LOOKUP) { when(cbo_accept)           { nextState := CACHE_STATE.CBO }
                              .elsewhen(request_accept) { nextState := CACHE_STATE.LOOKUP }
                              .elsewhen(data_ok)        { nextState := CACHE_STATE.IDLE   }
                              .otherwise                { nextState := CACHE_STATE.REFILL } }
    is(CACHE_STATE.REFILL) { when(cbo_wb_done)          { nextState := CACHE_STATE.IDLE }
                              .elsewhen(request_done)   { when(cbo_accept)           { nextState := CACHE_STATE.CBO }
                                                           .elsewhen(request_accept) { nextState := CACHE_STATE.LOOKUP }
                                                           .otherwise                { nextState := CACHE_STATE.IDLE } } }
    is(CACHE_STATE.CBO)    { when(cbo_lookup_ready)     { nextState := Mux(cbo_tag_dirty, CACHE_STATE.REFILL, CACHE_STATE.IDLE) } }
  }

  when(reset.asBool) {
    req_active   := false.B; req_we_r := false.B
    req_wdata_r  := 0.U;     req_wstrb_r := 0.U
    req_addr_r   := 0.U;     req_index := 0.U
    req_offset   := 0.U;     req_uncache_r := false.B

    cbo_ing := false.B; cbo_lookup_ready := false.B
    cbo_index_r := 0.U; cbo_tag_r := 0.U

    wb_valid := false.B; wb_index := 0.U; wb_wstrb := 0.U
    wb_wdata := 0.U;    wb_offset := 0.U; wb_way := 0.U

    ld_burst_cnt := 0.U;     st_burst_cnt := 0.U
    cache_ld_ing := false.B; cache_st_ing := false.B
    refill_done  := false.B
    replace_way_r := 0.U;      wb_index_r := 0.U
    wb_line_r    := 0.U;       tag_r := 0.U
    for (i <- 0 until 4) rdata_array(i) := 0.U
    uncache_rdata := 0.U; rdata_r := 0.U
    arvalid_r := false.B; awvalid_r := false.B; wvalid_r := false.B
    wlast_r := false.B;   bready_r := false.B;  rready_r := false.B
    araddr_r := 0.U;      arlen_r := 0.U;       arsize_r := 0.U;  arburst_r := 0.U
    awaddr_r := 0.U;      awlen_r := 0.U;       awsize_r := 0.U;  awburst_r := 0.U
    wdata_r := 0.U;       wstrb_r := 0.U
    for (i <- 0 until CACHE_SETS) { dirty_array(i) := 0.U; lru_array(i) := "b10".U(WAYS.W) }

  }.otherwise {
    state          := nextState
    refill_done    := false.B

    when(request_done)  { req_active := false.B }
    when(request_accept) {
      req_active    := true.B
      req_we_r      := io.we
      req_wdata_r   := (io.wdata << (io.addr(1, 0) << 3))(31, 0)   // 数据按字节偏移对齐 (EXU 只传原始 rs2)
      req_wstrb_r   := io.wstrb
      req_addr_r    := io.addr
      req_index     := dcache_index
      req_offset    := dcache_offset
      req_uncache_r := io.uncache_en
    }

    when(cbo_accept) {
      cbo_ing          := true.B
      cbo_lookup_ready := false.B
      cbo_index_r      := cbo_index
      cbo_tag_r        := cbo_tag
    }

    // AXI 默认
    when(io.axi.ar.ready) { arvalid_r := false.B }
    when(io.axi.aw.ready) { awvalid_r := false.B }
    when(io.axi.b.valid  && bready_r) { bready_r := false.B; cache_st_ing := false.B; st_burst_cnt := 0.U }

    switch(state) {
      is(CACHE_STATE.IDLE) { }

      is(CACHE_STATE.LOOKUP) {
        when(req_active && dcache_hit) {                     // HIT
          for (w <- 0 until WAYS) {
            when(way_hit(w)) {
              lru_array(req_index) := Mux(w.U === 0.U, "b10".U, "b01".U)
            }
          }
        }
        when(req_active && !dcache_hit) {                    // MISS
          tag_r         := req_tag
          replace_way_r := replace_way_sel
          wb_index_r    := req_index
          ld_burst_cnt  := 0.U
          st_burst_cnt  := 0.U

          cache_ld_ing  := true.B
          arvalid_r     := true.B
          araddr_r      := mem_addr
          arlen_r       := 3.U
          arsize_r      := 2.U
          arburst_r     := 1.U

          cache_st_ing := dirty_array(req_index)(replace_way_sel)
          when(dirty_array(req_index)(replace_way_sel)) {
            awvalid_r := true.B
            awaddr_r  := Cat(way_tag(replace_way_sel), req_index, 0.U(OFFSET_WIDTH.W))
            awlen_r   := 3.U
            awsize_r  := 2.U
            awburst_r := 1.U
            when(!cbo_ing) {
              wb_line_r := way_data(replace_way_sel)
              wdata_r   := way_data(replace_way_sel)(31, 0)   // beat 0
            }
          }
        }
      }

      is(CACHE_STATE.REFILL) {
        when(io.axi.ar.ready && io.axi.ar.valid) {
          arvalid_r := false.B
          rready_r  := true.B
        }
        when(io.axi.r.valid && io.axi.r.ready) {
          rdata_array(ld_burst_cnt) := io.axi.r.bits.data
          ld_burst_cnt := ld_burst_cnt + 1.U
          when(io.axi.r.bits.last) {
            cache_ld_ing := false.B
            rready_r := false.B
            lru_array(req_index) := Mux(replace_way_r === 0.U, "b10".U, "b01".U)
          }
        }
        when(io.axi.aw.valid && io.axi.aw.ready) {
          awvalid_r := false.B
          wvalid_r  := true.B
          wlast_r   := false.B
          wstrb_r   := "b1111".U
        }
        when(io.axi.w.valid && io.axi.w.ready) {
          bready_r := true.B
          st_burst_cnt := st_burst_cnt + 1.U
          wvalid_r := true.B
          wlast_r := false.B
          switch(st_burst_cnt) {
            is(0.U) { wdata_r := wb_line_r(63, 32);  wlast_r := false.B }
            is(1.U) { wdata_r := wb_line_r(95, 64);  wlast_r := false.B }
            is(2.U) { wdata_r := wb_line_r(127, 96); wlast_r := true.B  }
            is(3.U) { wvalid_r := false.B;           wlast_r := false.B }
          }
        }
        when(io.axi.b.valid && bready_r) {
          dirty_array(wb_index_r) := dirty_array(wb_index_r) & ~(1.U(WAYS.W) << replace_way_r)
        }

        // refill 完成 (读 & 写都做完)
        when(!cache_ld_ing && !cache_st_ing) { refill_done := true.B }
        // store miss: refill 结束后把原始 store 数据写进新行
        when(refill_done && req_we_r && !cbo_ing) {
          dirty_array(req_index) := dirty_array(req_index) | (1.U(WAYS.W) << replace_way_r)
        }
        // CBO 间接写回完成
        when(cbo_wb_done) { cbo_ing := false.B }
      }

      is(CACHE_STATE.CBO) {
        when(!wb_valid) {
          cbo_lookup_ready := true.B
          when(cbo_lookup_ready) {
            when(cbo_hit) {
              dirty_array(cbo_index_r) := dirty_array(cbo_index_r) & ~(1.U(WAYS.W) << cbo_hit_way)
            }
            when(cbo_tag_dirty) {
              replace_way_r := cbo_hit_way
              wb_index_r    := cbo_index_r
              wb_line_r     := way_data(cbo_hit_way)
              wdata_r       := way_data(cbo_hit_way)(31, 0)   // beat 0
              cache_st_ing  := true.B
              awvalid_r     := true.B
              awaddr_r      := Cat(way_tag(cbo_hit_way), cbo_index_r, 0.U(OFFSET_WIDTH.W))
              awlen_r       := 3.U
              awsize_r      := 2.U
              awburst_r     := 1.U
            }.otherwise {
              cbo_ing := false.B
            }
          }
        }
      }
    }

    // 写缓冲
    when(state === CACHE_STATE.LOOKUP && dcache_hit && req_we_r) {
      wb_valid  := true.B
      wb_index  := req_index
      wb_wstrb  := req_wstrb_r
      wb_wdata  := req_wdata_r
      wb_offset := req_offset
      wb_way    := hit_way
    }.otherwise {
      wb_valid := false.B
    }

    // store 命中写回 data bank 时设置脏位
    when(wb_valid) {
      dirty_array(wb_index) := dirty_array(wb_index) | (1.U(WAYS.W) << wb_way)
    }
  }

  io.axi.ar.valid := arvalid_r;    io.axi.ar.bits.addr  := araddr_r
  io.axi.ar.bits.len  := arlen_r;  io.axi.ar.bits.size  := arsize_r
  io.axi.ar.bits.burst := arburst_r
  io.axi.ar.bits.id   := 0.U

  io.axi.aw.valid := awvalid_r;    io.axi.aw.bits.addr  := awaddr_r
  io.axi.aw.bits.len  := awlen_r;  io.axi.aw.bits.size  := awsize_r
  io.axi.aw.bits.burst := awburst_r
  io.axi.aw.bits.id   := 0.U

  io.axi.w.valid      := wvalid_r
  io.axi.w.bits.last  := wlast_r
  io.axi.w.bits.data  := wdata_r
  io.axi.w.bits.strb  := wstrb_r
  io.axi.r.ready      := rready_r
  io.axi.b.ready      := bready_r

  for (w <- 0 until WAYS; j <- 0 until 4) {
    val sram = data_banks(w)(j)
    val wr_match = wb_valid && (wb_way === w.U) && (wb_offset(3, 2) === j.U)

    // CBO 查表时以 cbo 块地址读 data bank
    sram.io.addra := Mux(wr_match, wb_index,
                     Mux(cbo_sram, cbo_index_r,
                         Mux(request_accept, dcache_index, req_index)))
    sram.io.ena   := true.B

    val we = WireDefault(0.U(4.W))
    // 写缓冲写 (store 命中, 下一拍写回)
    when(wr_match) { we := wb_wstrb }
    // REFILL 读数据写入
    when(state === CACHE_STATE.REFILL && !req_uncache_r &&
         io.axi.r.valid && rready_r && replace_way_r === w.U && ld_burst_cnt === j.U) { we := "b1111".U }
    // REFILL 完成后, 原始写请求 (store miss) 写该 bank
    when(state === CACHE_STATE.REFILL && !req_uncache_r && !cbo_ing &&
         refill_done && req_we_r && replace_way_r === w.U &&
         req_offset(OFFSET_WIDTH - 1, 2) === j.U) { we := req_wstrb_r }
    sram.io.wea := we

    val din = WireDefault(0.U(32.W))
    when(wr_match) { din := wb_wdata }
    when(state === CACHE_STATE.REFILL && !req_uncache_r && io.axi.r.valid) { din := io.axi.r.bits.data }
    when(state === CACHE_STATE.REFILL && !req_uncache_r && !cbo_ing && refill_done && req_we_r) { din := req_wdata_r }
    sram.io.dina := din
  }

  for (w <- 0 until WAYS) {
    val sram = tagv_srams(w)
    val cbo_inv = cbo_sram && cbo_lookup_ready && cbo_hit && (cbo_hit_way === w.U)
    sram.io.addra := Mux(cbo_sram, cbo_index_r, Mux(request_accept, dcache_index, req_index))
    sram.io.wea := cbo_inv ||
                   (state === CACHE_STATE.REFILL && !req_uncache_r &&
                    io.axi.r.valid && rready_r && io.axi.r.bits.last &&
                    replace_way_r === w.U)
    sram.io.dina := Mux(cbo_inv, 0.U((TAG_WIDTH + 1).W), Cat(req_tag, 1.U(1.W)))
    sram.io.ena  := true.B
  }

}
