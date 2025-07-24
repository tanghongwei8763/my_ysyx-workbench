`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/ysyx_25020037_config.vh"

module ysyx_25020037_ifu(
    input  wire         clk,
    input  wire         rst,
    input  wire [31: 0] pc,
    input  wire         idu_ready,
    output reg  [31: 0] inst,

    output reg  [31: 0] araddr,
    output reg          arvalid,
    input  wire         arready,

    input  wire [31: 0] rdata,
    input  wire [ 1: 0] rresp,
    input  wire         rvalid,
    output reg          rready
);
    localparam IDLE    = 1'b0;
    localparam BUSY    = 1'b1;
    
    reg         state, next_state;
    reg  [31:0] last_pc;
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
                        araddr  <= pc;
                        arvalid <= 1'b1;
                        last_pc <= pc;
                        rready  <= 1'b0;
                    end
                end
                BUSY: begin
                    if (arvalid && arready) begin
                        arvalid <= 1'b0;
                        rready <= 1'b1;
                    end
                    if (rvalid && rready && (rresp == 2'b00)) begin
                        inst <= rdata;
                        rready <= 1'b0;
                    end
                end
            endcase
        end
    end

    always @(*) begin
        case (state)
            IDLE: next_state = (pc != araddr) ? BUSY : IDLE;        
            BUSY: next_state = (rvalid && rready) ? IDLE : BUSY;    
            default: next_state = IDLE;
        endcase
    end

endmodule
