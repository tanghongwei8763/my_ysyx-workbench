`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/core-npc/ysyx_25020037_config.vh"

module ysyx_25020037_ifu #(
    parameter BLOCK_SIZE = 4
) (
    input  wire         clk,
    input  wire         rst,
    input  wire [31: 0] pc,
    input  wire         idu_ready,
    output reg          ifu_valid,
    output reg  [31: 0] inst,

    output reg  [31: 0] araddr,
    output reg          arvalid,
    input  wire         arready,

    input  wire [31: 0] rdata,
    input  wire [ 1: 0] rresp,
    input  wire         rvalid,
    output reg          rready,

    output reg  [31: 0] icache_addr,
    output reg          icache_req,
    input  wire [31: 0] icache_data,
    input  wire         icache_hit,
    input  wire         icache_ready,
    input  wire         mem_req,
    input  wire [31: 0] mem_addr,
    output reg  [BLOCK_SIZE*8-1:0] mem_data,
    output reg          mem_ready

);
    localparam OFFSET_WIDTH = $clog2(BLOCK_SIZE);
    localparam IDLE    = 2'b00;
    localparam CHECK   = 2'b01;
    localparam BUSY    = 2'b10;
    
    reg  [ 1:0] state, next_state;
    reg  [31:0] last_pc;
    reg         icache_hit_reg;
    reg  [31:0] block_base_addr;
    reg  [31:0] read_len;
    wire [31:0] aligned_addr = {pc[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};

    always @(*) begin
        case (state)
            IDLE:  begin next_state = (pc != last_pc && idu_ready) ? CHECK : IDLE; end
            CHECK: begin next_state = (icache_hit_reg) ? IDLE : (mem_req) ? BUSY : CHECK; end
            BUSY:  begin next_state = (mem_ready && idu_ready) ? IDLE : BUSY; end
            default: next_state = IDLE;
        endcase
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            inst <= 32'b0;
            ifu_valid <= 1'b0;
            araddr <= 32'h0;
            arvalid <= 1'b0;
            rready <= 1'b0;
            last_pc <= 32'h0;
            icache_addr <= 32'h0;
            icache_req <= 1'b0;
            mem_data <= 'b0;
            mem_ready <= 1'b0;
            block_base_addr <= 32'h0;
            read_len <= 32'b0;
        end else begin
            state <= next_state;
            icache_hit_reg <= icache_hit;
            case (state)
                IDLE: begin
                    if (pc != last_pc && idu_ready) begin
                        last_pc <= pc;
                        icache_addr <= pc;
                        icache_req <= 1'b1;
                        block_base_addr <= aligned_addr;
                    end else begin
                        icache_req <= 1'b0;
                    end
                    ifu_valid <= 1'b0;
                    mem_ready <= 1'b0;
                    read_len <= 32'b0;
                    mem_data <= 'b0;
                end
                CHECK: begin
                    icache_req <= 1'b0;
                    if(!icache_req) begin
                        if (icache_hit_reg) begin
                            inst <= icache_data;
                            ifu_valid <= 1'b1;
                        end else if (mem_req) begin
                            araddr <= block_base_addr;
                            arvalid <= 1'b1;
                        end
                    end
                end
                BUSY: begin
                    if (arvalid && arready) begin
                        arvalid <= 1'b0;
                        rready <= 1'b1;
                    end
                    if (rvalid && rready && (rresp == 2'b00)) begin
                        mem_data[read_len*8 +: 32] <= rdata;
                        read_len <= read_len + 4;
                        if (read_len + 4 == BLOCK_SIZE) begin
                            mem_ready <= 1'b1;
                            inst <= icache_data;
                            ifu_valid <= 1'b1;
                            rready <= 1'b0;
                        end else begin
                            araddr <= block_base_addr + read_len + 4;
                            arvalid <= 1'b1;
                        end
                    end
                end
                default: begin 
                    arvalid <= 1'b0;
                    rready <= 1'b0;
                    ifu_valid <= 1'b0;
                end
            endcase
        end
    end

endmodule
