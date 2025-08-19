`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"
module ysyx_25020037_lsu (
    input  wire          clk,
    input  wire          rst,
    input  wire          exu_valid,
    input  wire          wbu_ready,
    output reg           lsu_ready,
    output reg           lsu_valid,
    input  wire [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus,
    input  wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus,
    output reg  [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus,
    output reg          access_fault,

    input  wire         awready,
    output reg          awvalid,
    output reg  [31: 0] awaddr,
    output reg  [ 3: 0] awid,
    output reg  [ 7: 0] awlen,
    output reg  [ 2: 0] awsize,
    output reg  [ 1: 0] awburst,
    input  wire         wready,
    output reg          wvalid,
    output reg  [31: 0] wdata,
    output reg  [ 3: 0] wstrb,
    output reg          wlast,
    output reg          bready,
    input  wire         bvalid,
    input  wire [ 1: 0] bresp,
    input  wire [ 3: 0] bid,
    input  wire         arready,
    output reg          arvalid,
    output reg  [31: 0] araddr,
    output reg  [ 3: 0] arid,
    output reg  [ 7: 0] arlen,
    output reg  [ 2: 0] arsize,
    output reg  [ 1: 0] arburst,
    output reg          rready,
    input  wire         rvalid,
    input  wire [ 1: 0] rresp,
    input  wire [31: 0] rdata,
    input  wire         rlast,
    input  wire [ 3: 0] rid
);
`ifdef VERILATOR
    import "DPI-C" function void difftest_skip_ref();
`endif

    localparam IDLE    = 1'b0;
    localparam BUSY    = 1'b1;
    reg        state, next_state;

    localparam SDRAM_BASE = 32'hA0000000;
    localparam SDRAM_END  = 32'hBFFFFFFF;

    localparam AXI_ID       = 4'h0;
    localparam AXI_BURST_INCR = 2'b01;
    localparam AXI_BURST_FIXED = 2'b00;
    localparam AXI_LEN_SINGLE = 8'h0;
    localparam AXI_SIZE_BYTE   = 3'h0;
    localparam AXI_SIZE_HALF   = 3'h1;
    localparam AXI_SIZE_WORD   = 3'h2;

    wire [31:0] addr = eu_to_lu_bus[63:32];
    wire [31:0] addr_off = addr & 32'b11;
    wire [31:0] aligned_wdata = eu_to_lu_bus[31:0] << (addr_off << 3);
    wire [ 2:0] data_rop = du_to_lu_bus[7:5];  // 数据操作类型（复用原有信号）
    wire [ 2:0] data_wop = du_to_lu_bus[4:2];  // 数据操作类型（复用原有信号）

    wire is_sdram = (addr >= SDRAM_BASE) && (addr <= SDRAM_END);

    reg  [ 2:0] axi_rsize;
    reg  [ 2:0] axi_wsize;
    always @(*) begin
        case (data_rop)
            3'b001: axi_rsize = AXI_SIZE_BYTE;  // 字节访问
            3'b010: axi_rsize = AXI_SIZE_HALF;  // 半字访问
            3'b100: axi_rsize = AXI_SIZE_WORD;  // 字访问
            default: axi_rsize = AXI_SIZE_WORD;
        endcase
        case (data_wop)
            3'b001: axi_wsize = AXI_SIZE_BYTE;  // 字节访问
            3'b010: axi_wsize = AXI_SIZE_HALF;  // 半字访问
            3'b100: axi_wsize = AXI_SIZE_WORD;  // 字访问
            default: axi_wsize = AXI_SIZE_WORD;
        endcase
    end

    always @(*) begin
        case (state)
            IDLE: begin next_state = (lsu_ready & exu_valid) ? BUSY : IDLE; end
            BUSY: begin next_state = (lsu_valid & wbu_ready) ? IDLE : BUSY; end
            default: next_state = IDLE;
        endcase
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            lsu_ready <= 1'b1;
            lsu_valid <= 1'b0;
            access_fault <= 1'b0;
            lu_to_wu_bus <= 'b0;
            awvalid <= 1'b0;
            awaddr <= 32'h0;
            awid <= AXI_ID;
            awlen <= AXI_LEN_SINGLE;
            awsize <= AXI_SIZE_WORD;
            awburst <= AXI_BURST_FIXED;
            wvalid <= 1'b0;
            wdata <= 32'h0;
            wstrb <= 4'h0;
            wlast <= 1'b1;
            bready <= 1'b0;
            arvalid <= 1'b0;
            araddr <= 32'h0;
            arid <= AXI_ID;
            arlen <= AXI_LEN_SINGLE;
            arsize <= AXI_SIZE_WORD;
            arburst <= AXI_BURST_FIXED;
            rready <= 1'b0;
        end else begin
            state <= next_state;

            case (state)
                IDLE: begin
                    lsu_valid <= 1'b0;
                    access_fault <= 1'b0;
                    awvalid <= 1'b0;
                    wvalid <= 1'b0;
                    arvalid <= 1'b0;
                    bready <= 1'b0;
                    rready <= 1'b0;
                    if (lsu_ready & exu_valid) begin
                        lsu_ready <= 1'b0;
                        if (du_to_lu_bus[1]) begin
                            araddr  <= addr;
                            arvalid <= 1'b1;
                            arid <= 4'h0;
                            arlen <= AXI_LEN_SINGLE;
                            arsize <= axi_rsize;
                            arburst <= is_sdram ? AXI_BURST_INCR : AXI_BURST_FIXED;
                        end else if (du_to_lu_bus[0]) begin
                            awvalid <= 1'b1;
                            wvalid <= 1'b1;
                            awaddr  <= addr;
                            wdata   <= aligned_wdata;
                            awid <= 4'h0;
                            awlen <= AXI_LEN_SINGLE;
                            awsize <= axi_wsize;
                            awburst <= is_sdram ? AXI_BURST_INCR : AXI_BURST_FIXED;
                            wlast <= 1'b1;
                            case (du_to_lu_bus[4:2])
                                3'b001: wstrb <= (4'b0001 << addr_off);
                                3'b010: wstrb <= (4'b0011 << addr_off);
                                3'b100: wstrb <= (4'b1111 << addr_off);
                                default: wstrb <= 4'b0000;
                            endcase
                        end else begin
                            lu_to_wu_bus <= {eu_to_lu_bus[63:32], eu_to_lu_bus[63:32]};
                            lsu_valid <= 1'b1;
                            lsu_ready <= 1'b1;
                        end
                    end
                end
                BUSY: begin
                    if (du_to_lu_bus[1]) begin
                        if (arvalid && arready) begin
                            $write("0x%h\n", addr);
`ifdef VERILATOR
                            if (((addr >= 32'h10000000) && (addr <= 32'h10000fff)) || ((addr >= 32'h02000000) && (addr <= 32'h02000ffff))) begin
                                difftest_skip_ref();
                            end
`endif
                            arvalid <= 1'b0;
                            rready <= 1'b1;
                        end
                        if (rvalid && rready) begin
                            lu_to_wu_bus <= {eu_to_lu_bus[63:32], rdata};
                            lsu_valid <= 1'b1;
                            lsu_ready <= 1'b1;
                            access_fault <= (rresp != 2'b00);
                            rready <= 1'b0;
                        end
                    end else if (du_to_lu_bus[0]) begin 
                        if (awvalid && awready && wvalid && wready) begin
                            $write("0x%h\n", addr);
`ifdef VERILATOR
                            if (((addr >= 32'h02000000) && (addr <= 32'h02000ffff))) begin
                                difftest_skip_ref();
                            end
`endif
                            awvalid <= 1'b0;
                            wvalid <= 1'b0;
                            bready <= 1'b1;
                        end
                        if (bvalid && bready) begin
                            lsu_valid <= 1'b1;
                            lsu_ready <= 1'b1;
                            access_fault <= (bresp != 2'b00);
                            bready <= 1'b0;
                        end
                    end
                end
            endcase
        end
    end

endmodule
