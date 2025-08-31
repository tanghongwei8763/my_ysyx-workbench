`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"
module ysyx_25020037_lsu (
    input  wire         clk,
    input  wire         rst,
    input  wire         exu_valid,
    input  wire         wbu_ready,
    output wire         lsu_ready,
    output reg          lsu_valid,
    input  wire         exu_dnpc_valid,
    output wire [31: 0] rdata_processed,
    input  wire [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus,
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
    reg                          exu_dnpc_valid_r;
    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire [`DU_TO_WU_BUS_WD -1:0] du_to_wu_bus;
    wire [`DU_TO_GU_BUS_WD -1:0] du_to_gu_bus;
    assign {du_to_gu_bus,
            du_to_lu_bus,
            du_to_wu_bus, 
            csr_wcsr_data,     
            addr,
            data
           } = eu_to_lu_bus;
    wire [31:0] addr;
    wire [31:0] csr_wcsr_data;
    wire [31:0] data;
    wire [31:0] addr_off = addr & 32'b11;
    wire [31:0] aligned_wdata = data << (addr_off << 3);

    wire [ 2:0] data_rop;
    wire [ 2:0] data_wop;
    wire        bit_sext;
    wire        half_sext;
    wire        is_write;
    wire        is_read;
    assign {data_rop,    
            data_wop,     
            bit_sext,
            half_sext,
            is_read,
            is_write
           } = du_to_lu_bus;

    wire is_sdram = (addr >= SDRAM_BASE) && (addr <= SDRAM_END);

    wire [ 2:0] axi_rsize;
    wire [ 2:0] axi_wsize;
    assign axi_rsize = ({3{data_rop == 3'b001}} & AXI_SIZE_BYTE)
                     | ({3{data_rop == 3'b010}} & AXI_SIZE_HALF)
                     | ({3{data_rop == 3'b100}} & AXI_SIZE_WORD);
    assign axi_wsize = ({3{data_wop == 3'b001}} & AXI_SIZE_BYTE)
                     | ({3{data_wop == 3'b010}} & AXI_SIZE_HALF)
                     | ({3{data_wop == 3'b100}} & AXI_SIZE_WORD);

    always @(*) begin
        case (state)
            IDLE: begin next_state = (exu_valid & (is_write | is_read)) ? BUSY : IDLE; end
            BUSY: begin next_state = (lsu_valid | (bvalid & wlast) | (rvalid & rlast)) ? IDLE : BUSY; end
            default: next_state = IDLE;
        endcase
    end

    wire [31: 0] lsu_rdata;
    assign lsu_rdata = |data_rop ? (rdata >> ((addr & 32'b11) << 3)) : rdata;
    assign rdata_processed = (data_rop == 3'b001) ? 
                             (bit_sext ? {{24{lsu_rdata[ 7]}}, lsu_rdata[ 7:0]} 
                                       : {24'b0          , lsu_rdata[ 7:0]} ) :
                             (data_rop == 3'b010) ? 
                             (half_sext ? {{16{lsu_rdata[15]}}, lsu_rdata[15:0]} 
                                        : {16'b0          , lsu_rdata[15:0]}) :
                             lsu_rdata;

    assign lsu_ready = ((bvalid & wlast) | (rvalid & rlast) | exu_dnpc_valid_r) ? 1'b1 : ~(is_write | is_read);
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
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
            exu_dnpc_valid_r <= exu_dnpc_valid;
            case (state)
                IDLE: begin
                    lsu_valid <= 1'b0;
                    lu_to_wu_bus <= 'b0;
                    access_fault <= 1'b0;
                    awvalid <= 1'b0;
                    wvalid <= 1'b0;
                    arvalid <= 1'b0;
                    bready <= 1'b0;
                    rready <= 1'b0;
                    if (exu_valid) begin
                        if (is_read) begin
                            araddr  <= addr;
                            arvalid <= 1'b1;
                            arid <= 4'h0;
                            arlen <= AXI_LEN_SINGLE;
                            arsize <= axi_rsize;
                            arburst <= is_sdram ? AXI_BURST_INCR : AXI_BURST_FIXED;
                        end else if (is_write) begin
                            awvalid <= 1'b1;
                            wvalid <= 1'b1;
                            awaddr  <= addr;
                            wdata   <= aligned_wdata;
                            awid <= 4'h0;
                            awlen <= AXI_LEN_SINGLE;
                            awsize <= axi_wsize;
                            awburst <= is_sdram ? AXI_BURST_INCR : AXI_BURST_FIXED;
                            wlast <= 1'b1;
                            case (data_wop)
                                3'b001: wstrb <= (4'b0001 << addr_off);
                                3'b010: wstrb <= (4'b0011 << addr_off);
                                3'b100: wstrb <= (4'b1111 << addr_off);
                                default: wstrb <= 4'b0000;
                            endcase
                        end else begin
                            lsu_valid <= 1'b1;
                            lu_to_wu_bus <= {
                                du_to_wu_bus,
                                du_to_gu_bus,
                                csr_wcsr_data,
                                addr,
                                addr
                            };
                        end
                    end
                end
                BUSY: begin
                    lsu_valid <= 1'b0;
                    lu_to_wu_bus <= 'b0;
                    if (is_read) begin
                        if (arvalid && arready) begin
                            arvalid <= 1'b0;
                            rready <= 1'b1;
                        end
                        if (rvalid && rready) begin
                            lu_to_wu_bus <= {
                                du_to_wu_bus,
                                du_to_gu_bus,
                                csr_wcsr_data,
                                addr, 
                                rdata_processed
                                };
                            lsu_valid <= 1'b1;
                            access_fault <= (rresp != 2'b00);
                            rready <= 1'b0;
                        end
                    end else if (is_write) begin 
                        if (awvalid && awready && wvalid && wready) begin
                            awvalid <= 1'b0;
                            wvalid <= 1'b0;
                            bready <= 1'b1;
                        end
                        if (bvalid && bready) begin
                            lsu_valid <= 1'b1;
                            access_fault <= (bresp != 2'b00);
                            bready <= 1'b0;
                        end
                    end
                end
            endcase
        end
    end

endmodule
