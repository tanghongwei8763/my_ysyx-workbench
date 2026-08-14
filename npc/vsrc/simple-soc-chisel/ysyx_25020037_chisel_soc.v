// =============================================================================
// Chisel CPU 的简单 SoC 封装
//
// 功能:
//   1. 实例化 Chisel CPU (ysyx_25020037)
//   2. 提供 AXI4 存储器从设备, 通过 DPI-C 访问 C++ 内存
//   3. 仿真结束信号 (sim_end / test_pass) 透传给 C++ 侧
//
// 地址映射 (与 sim_main.cpp 中的 pmem_read/pmem_write 一致):
//   0x3000_0000 - 0x303F_FFFF  Flash (4 MB, 存放 .text)
//   0x0F00_0000 - 0x0F00_1FFF  SRAM  (8 KB)
//   0x8000_0000 - 0x803F_FFFF  PSRAM (4 MB)
//   0xA000_0000 - 0xA3FF_FFFF  SDRAM (64 MB)
//
// 注意: Verilator 顶层模块, 配合 csrc/chisel/sim_main.cpp 使用
// =============================================================================

module ysyx_25020037_chisel_soc (
    input  wire        clock,
    input  wire        reset,
    output wire        sim_end,
    output wire [31:0] test_pass,

    // Difftest debug ports
    output wire        debug_commit_valid,
    output wire [31:0] debug_commit_pc,
    output wire        debug_commit_wen,
    output wire [ 4:0] debug_commit_wdest,
    output wire [31:0] debug_commit_wdata
);

    // ================================================================
    //  Chisel CPU AXI Master 信号
    // ================================================================

    // --- 读地址通道 (AR) ---
    wire        master_arready;
    wire        master_arvalid;
    wire [31:0] master_araddr;
    wire [ 3:0] master_arid;
    wire [ 7:0] master_arlen;
    wire [ 2:0] master_arsize;
    wire [ 1:0] master_arburst;

    // --- 读数据通道 (R) ---
    wire        master_rready;
    wire        master_rvalid;
    wire [ 1:0] master_rresp;
    wire [31:0] master_rdata;
    wire        master_rlast;
    wire [ 3:0] master_rid;

    // --- 写地址通道 (AW) ---
    wire        master_awready;
    wire        master_awvalid;
    wire [31:0] master_awaddr;
    wire [ 3:0] master_awid;
    wire [ 7:0] master_awlen;
    wire [ 2:0] master_awsize;
    wire [ 1:0] master_awburst;

    // --- 写数据通道 (W) ---
    wire        master_wready;
    wire        master_wvalid;
    wire [31:0] master_wdata;
    wire [ 3:0] master_wstrb;
    wire        master_wlast;

    // --- 写响应通道 (B) ---
    wire        master_bready;
    wire        master_bvalid;
    wire [ 1:0] master_bresp;
    wire [ 3:0] master_bid;

    // ================================================================
    //  Chisel CPU 实例化
    // ================================================================

    ysyx_25020037 cpu (
        .clock              (clock                ),
        .reset              (reset                ),
        .io_interrupt       (1'b0                 ),

        // Master AXI — 访问内存
        .io_master_awready  (master_awready       ),
        .io_master_awvalid  (master_awvalid       ),
        .io_master_awaddr   (master_awaddr        ),
        .io_master_awid     (master_awid          ),
        .io_master_awlen    (master_awlen         ),
        .io_master_awsize   (master_awsize        ),
        .io_master_awburst  (master_awburst       ),
        .io_master_wready   (master_wready        ),
        .io_master_wvalid   (master_wvalid        ),
        .io_master_wdata    (master_wdata         ),
        .io_master_wstrb    (master_wstrb         ),
        .io_master_wlast    (master_wlast         ),
        .io_master_bready   (master_bready        ),
        .io_master_bvalid   (master_bvalid        ),
        .io_master_bresp    (master_bresp         ),
        .io_master_bid      (master_bid           ),
        .io_master_arready  (master_arready       ),
        .io_master_arvalid  (master_arvalid       ),
        .io_master_araddr   (master_araddr        ),
        .io_master_arid     (master_arid          ),
        .io_master_arlen    (master_arlen         ),
        .io_master_arsize   (master_arsize        ),
        .io_master_arburst  (master_arburst       ),
        .io_master_rready   (master_rready        ),
        .io_master_rvalid   (master_rvalid        ),
        .io_master_rresp    (master_rresp         ),
        .io_master_rdata    (master_rdata         ),
        .io_master_rlast    (master_rlast         ),
        .io_master_rid      (master_rid           ),

        // Slave AXI (暂未使用)
        .io_slave_awready   (                     ),
        .io_slave_awvalid   (1'b0                 ),
        .io_slave_awaddr    (32'b0                ),
        .io_slave_awid      (4'b0                 ),
        .io_slave_awlen     (8'b0                 ),
        .io_slave_awsize    (3'b0                 ),
        .io_slave_awburst   (2'b0                 ),
        .io_slave_wready    (                     ),
        .io_slave_wvalid    (1'b0                 ),
        .io_slave_wdata     (32'b0                ),
        .io_slave_wstrb     (4'b0                 ),
        .io_slave_wlast     (1'b0                 ),
        .io_slave_bready    (1'b0                 ),
        .io_slave_bvalid    (                     ),
        .io_slave_bresp     (                     ),
        .io_slave_bid       (                     ),
        .io_slave_arready   (                     ),
        .io_slave_arvalid   (1'b0                 ),
        .io_slave_araddr    (32'b0                ),
        .io_slave_arid      (4'b0                 ),
        .io_slave_arlen     (8'b0                 ),
        .io_slave_arsize    (3'b0                 ),
        .io_slave_arburst   (2'b0                 ),
        .io_slave_rready    (1'b0                 ),
        .io_slave_rvalid    (                     ),
        .io_slave_rresp     (                     ),
        .io_slave_rdata     (                     ),
        .io_slave_rlast     (                     ),
        .io_slave_rid       (                     ),

        // 仿真控制
        .io_sim_end         (sim_end              ),
        .io_test_pass       (test_pass            ),

        // Difftest debug
        .io_debug_commit_valid (debug_commit_valid),
        .io_debug_commit_pc    (debug_commit_pc   ),
        .io_debug_commit_wen   (debug_commit_wen  ),
        .io_debug_commit_wdest (debug_commit_wdest),
        .io_debug_commit_wdata (debug_commit_wdata)
    );

    // ================================================================
    //  AXI4 存储器从设备 (Memory Slave)
    //
    //  处理 AXI 读取和写入突发传输, 通过 DPI-C 访问 C++ 侧内存.
    //  单次处理一个传输 (读优先), 支持任意长度的 INC 突发.
    // ================================================================

    import "DPI-C" function int  pmem_read( input int addr );
    import "DPI-C" function void pmem_write( input int addr, input int data, input int strb );

    // ── 状态编码 ──
    localparam IDLE        = 2'd0;
    localparam READ_BURST  = 2'd1;
    localparam WRITE_BURST = 2'd2;
    localparam WR_RESP     = 2'd3;

    reg [1:0] state;

    // 读状态寄存器
    reg [31:0] rd_addr_q;
    reg [ 3:0] rd_id_q;
    reg [ 7:0] rd_len_q;
    reg [ 7:0] rd_cnt_q;

    // 写状态寄存器
    reg [31:0] wr_addr_q;
    reg [ 3:0] wr_id_q;

    // ── 组合逻辑: 地址通道就绪信号 ──
    // 这些信号必须是组合的, 否则 CPU 在 arvalid=1 的同一周期看不到 arready=1,
    // 导致地址握手延迟一周期, 而状态机已经离开 IDLE → arready 永久为 0 → 死锁
    wire accept_ar = (state == IDLE) && !rvalid_q;
    wire accept_aw = (state == IDLE) && !rvalid_q && !master_arvalid;

    // ── 时序输出寄存器 ──
    reg         rvalid_q;
    reg  [31:0] rdata_q;
    reg         rlast_q;
    reg  [ 3:0] rid_q;
    reg  [ 1:0] rresp_q;

    reg         wready_q;
    reg         bvalid_q;
    reg  [ 1:0] bresp_q;
    reg  [ 3:0] bid_q;

    // ── 主状态机 ──
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            state     <= IDLE;
            wready_q  <= 1'b0;
            rvalid_q  <= 1'b0;
            rlast_q   <= 1'b0;
            bvalid_q  <= 1'b0;
            rd_cnt_q  <= 8'd0;
        end else begin
            case (state)
                // ====================================================
                // IDLE — 等待请求
                // ====================================================
                IDLE: begin
                    wready_q <= 1'b1;
                    rvalid_q <= 1'b0;
                    rlast_q  <= 1'b0;
                    bvalid_q <= 1'b0;

                    // ---- 读请求 (优先) ----
                    if (master_arvalid) begin
                        rd_addr_q <= master_araddr;
                        rd_id_q   <= master_arid;
                        rd_len_q  <= master_arlen;
                        rd_cnt_q  <= 8'd0;
                        state     <= READ_BURST;
                    end
                    // ---- 写请求 ----
                    else if (master_awvalid) begin
                        wr_addr_q <= master_awaddr;
                        wr_id_q   <= master_awid;
                        // 如果 W 数据同时到达, 直接写入
                        if (master_wvalid) begin
                            pmem_write(master_awaddr, master_wdata, {28'h0, master_wstrb});
                            if (master_wlast) begin
                                state <= WR_RESP;
                            end else begin
                                wr_addr_q <= master_awaddr + 32'd4;
                                state     <= WRITE_BURST;
                            end
                        end else begin
                            state <= WRITE_BURST;
                        end
                    end
                end

                // ====================================================
                // READ_BURST — 读突发传输
                // ====================================================
                READ_BURST: begin
                    rd_cnt_q  <= rd_cnt_q + 8'd1;
                    rd_addr_q <= rd_addr_q + 32'd4;
                    wready_q <= 1'b0;
                    rvalid_q <= 1'b1;
                    rdata_q  <= pmem_read(rd_addr_q);
                    rlast_q  <= (rd_cnt_q == rd_len_q);
                    rid_q    <= rd_id_q;
                    rresp_q  <= 2'b00;

                    if (master_rready & rvalid_q & rlast_q) begin
                        rvalid_q <= 1'b0;
                        state    <= IDLE;
                    end
                end

                // ====================================================
                // WRITE_BURST — 写突发传输
                // ====================================================
                WRITE_BURST: begin
                    wready_q <= 1'b1;

                    if (master_wvalid) begin
                        pmem_write(wr_addr_q, master_wdata, {28'h0, master_wstrb});
                        if (master_wlast) begin
                            wready_q <= 1'b0;
                            state    <= WR_RESP;
                        end else begin
                            wr_addr_q <= wr_addr_q + 32'd4;
                        end
                    end
                end

                // ====================================================
                // WR_RESP — 写响应 (B 通道)
                // ====================================================
                WR_RESP: begin
                    bvalid_q <= 1'b1;
                    bresp_q  <= 2'b00;
                    bid_q    <= wr_id_q;

                    state    <= IDLE;
                end
            endcase
        end
    end

    // ── 输出连续赋值 ──
    // 地址通道: 组合逻辑 (避免死锁)
    assign master_arready = accept_ar;
    assign master_awready = accept_aw;

    // 数据通道: 时序逻辑
    assign master_rvalid  = rvalid_q;
    assign master_rdata   = rdata_q;
    assign master_rlast   = rlast_q;
    assign master_rid     = rid_q;
    assign master_rresp   = rresp_q;

    assign master_wready  = wready_q;
    assign master_bvalid  = bvalid_q;
    assign master_bresp   = bresp_q;
    assign master_bid     = bid_q;

endmodule
