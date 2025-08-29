`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

module ysyx_25020037_ifu #(
    parameter BLOCK_SIZE = 4
) (
    input  wire         clk,
    input  wire         rst,
    input  wire         exu_dnpc_valid,
    input  wire [31: 0] exu_dnpc,
    output wire         pc_updata,
    input  wire         idu_ready,
    output reg          ifu_valid,
    output reg  [`FU_TO_DU_BUS_WD-1: 0] fu_to_du_bus,
    output reg          access_fault,

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
    input  wire [ 3: 0] rid,

    output wire [31: 0] icache_addr,
    input  wire [31: 0] icache_data,
    input  wire         icache_hit,
    input  wire         icache_ready,
    input  wire         mem_req,
    input  wire [31: 0] mem_addr,
    output reg  [BLOCK_SIZE*8-1:0] mem_data,
    output reg          mem_ready
);
    localparam SDRAM_BASE = 32'hA0000000;
    localparam SDRAM_END  = 32'hBFFFFFFF;

    localparam OFFSET_WIDTH = $clog2(BLOCK_SIZE);
    localparam TRANSFER_COUNT = BLOCK_SIZE / 4;
    localparam IDLE    = 2'b00;
    localparam BUSY    = 2'b01;
    localparam READ    = 2'b10;
    
    reg  [ 1:0] state, next_state;
    wire [31:0] pc;
    wire [31:0] inst;
    wire [31:0] snpc;
    wire [31:0] dnpc;
    reg  [31:0] read_len;
    wire [31:0] block_base_addr = {pc[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
    wire        is_sdram = (block_base_addr >= SDRAM_BASE) && (block_base_addr <= SDRAM_END);
    reg  [1:0]  burst_cnt;
    reg         is_burst_done;

    ysyx_25020037_Reg #(32, 32'h30000000) PC (
        .clk         (clk      ),
        .rst         (rst      ),
        .din         (dnpc     ),
        .dout        (pc       ),
        .wen         (pc_updata)
    );
    assign      pc_updata = (next_state == IDLE) & idu_ready;
    assign      inst = fu_to_du_bus[31:0];
    assign      snpc = pc + 32'h4;
    assign      dnpc = exu_dnpc_valid ? exu_dnpc : snpc;

    always @(*) begin
        case (state)
            IDLE:  begin next_state = (idu_ready) ? (icache_hit) ? IDLE : BUSY : IDLE; end
            BUSY:  begin next_state = (mem_ready) ? READ : BUSY; end
            READ:  begin next_state = (idu_ready) ? IDLE : READ; end
            default: next_state = IDLE;
        endcase
    end

    assign icache_addr = pc;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            ifu_valid <= 1'b0;
            araddr <= 32'h0;
            arvalid <= 1'b0;
            arid <= 4'h0;
            arlen <= 8'h0;
            arsize <= 3'h0;
            arburst <= 2'h0;
            rready <= 1'b0;
            mem_data <= 'b0;
            mem_ready <= 1'b0;
            read_len <= 32'b0;
            access_fault <= 1'b0;
            burst_cnt <= 2'd0;
            is_burst_done <= 1'b0;
        end else begin
            state <= next_state;
            case (state)
                IDLE: begin
                    read_len <= 32'b0;
                    arvalid <= 1'b0;
                    rready <= 1'b0;
                    access_fault <= 1'b0;
                    burst_cnt <= 2'd0;
                    is_burst_done <= 1'b0;
                    mem_ready <= 1'b0;
                    mem_data <= 'b0;
                    if (idu_ready) begin
                        ifu_valid <= 1'b0;
                        fu_to_du_bus <= 'b0;
                        if (icache_hit) begin
                            fu_to_du_bus <= {pc, icache_data};
                            ifu_valid <= exu_dnpc_valid ? 1'b0 : 1'b1;
                        end else if (mem_req) begin
                            araddr <= block_base_addr;
                            arvalid <= 1'b1;
                            arid <= 4'h0;
                            arsize <= 3'h2;
                            if (is_sdram) begin
                                arlen <= 8'(TRANSFER_COUNT - 1);
                                arburst <= 2'h1;
                            end else begin
                                arlen <= 8'h0;
                                arburst <= 2'h0;
                            end
                        end
                    end
                end
                BUSY: begin
                    if (arvalid && arready) begin
                        arvalid <= 1'b0;
                        rready <= 1'b1;
                        is_burst_done <= 1'b0;
                    end
                    if (rvalid && rready) begin
                        if (rresp != 2'b00) begin
                            access_fault <= 1'b1;
                            mem_ready <= 1'b1;
                            rready <= 1'b0;
                            burst_cnt <= 2'd0;
                            is_burst_done <= 1'b0;
                        end else begin
                            mem_data[burst_cnt*32 +: 32] <= rdata;
                            burst_cnt <= burst_cnt + 1'b1;
                            if (is_sdram) begin
                                if (rlast) begin
                                    mem_ready <= 1'b1;
                                    rready <= 1'b0;
                                    burst_cnt <= 2'd0;
                                    is_burst_done <= 1'b1;
                                end
                            end else begin
                                if ({{30{1'b0}}, burst_cnt} == (TRANSFER_COUNT - 1)) begin
                                    mem_ready <= 1'b1;
                                    rready <= 1'b0;
                                    burst_cnt <= 2'd0;
                                    is_burst_done <= 1'b1;
                                end else begin
                                    araddr <= block_base_addr + ({{30{1'b0}}, burst_cnt} + 32'd1) * 32'd4;
                                    arvalid <= 1'b1;
                                end
                            end
                        end
                    end
                end
                READ: begin
                    mem_ready <= 1'b0;
                    mem_data <= 'b0;
                    if (idu_ready) begin
                        fu_to_du_bus <= {pc, icache_data};
                        ifu_valid <= exu_dnpc_valid ? 1'b0 : 1'b1;
                    end
                end
                default: begin 
                    arvalid <= 1'b0;
                    rready <= 1'b0;
                    ifu_valid <= 1'b0;
                    fu_to_du_bus <= 'b0;
                end
            endcase
        end
    end

endmodule
