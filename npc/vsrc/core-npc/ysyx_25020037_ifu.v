`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/core-npc/ysyx_25020037_config.vh"

module ysyx_25020037_ifu(
    input  wire         clk,
    input  wire         rst,
    input  wire [31: 0] pc,
    input  wire         idu_ready,
    output reg  [31: 0] inst,

    output reg  [31: 0] araddr,
    output reg          arvalid,
    input  wire         arready,

    input  wire [ 1: 0] rresp,
    input  wire         rvalid,
    output reg          rready,

    input  wire [31: 0] icache_data,
    input  wire         icache_hit,
    input  wire         icache_ready,
    input  wire         mem_req,
    output reg          icache_req,
    output reg          mem_ready

);
    localparam IDLE    = 2'b00;
    localparam CHECK   = 2'b01;
    localparam BUSY    = 2'b10;
    localparam WAIT    = 2'b11;
    
    reg  [ 1:0] state, next_state;
    reg  [31:0] last_pc;

    assign mem_ready = rvalid && (rresp == 2'b00);

    always @(*) begin
        case (state)
            IDLE: begin next_state = (pc != last_pc) ? CHECK : IDLE; end
            CHECK: begin next_state = mem_req ? BUSY : IDLE; end
            BUSY: begin next_state = (rvalid && rready && (rresp == 2'b00)) ? WAIT : BUSY; end
            WAIT: begin next_state = icache_ready ? IDLE : WAIT; end
            default: next_state = IDLE;
        endcase
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            inst <= 32'b0;
            araddr <= 32'h0;
            arvalid <= 1'b0;
            rready <= 1'b0;
            last_pc <= 32'h0;
        end else begin
            state <= next_state;
            
            case (state)
                IDLE: begin
                    if (pc != last_pc) begin
                        last_pc <= pc;
                        icache_req <= 1'b1;
                    end else begin
                        icache_req <= 1'b0;
                    end
                    arvalid <= 1'b0;
                    rready <= 1'b0;
                end
                CHECK: begin
                    icache_req <= 1'b0;
                    if (icache_hit) begin
                        inst <= icache_data;
                    end else begin
                        araddr <= pc;
                        arvalid <= 1'b1;
                    end
                end
                BUSY: begin
                    if (arvalid && arready) begin
                        arvalid <= 1'b0;
                        rready <= 1'b1;
                    end
                    if (rvalid && rready && (rresp == 2'b00)) begin
                        rready <= 1'b0;
                    end
                end
                WAIT: begin
                    if (icache_ready) begin
                        inst <= icache_data;
                    end
                end
            endcase
        end
    end

endmodule
