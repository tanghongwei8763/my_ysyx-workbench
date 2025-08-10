`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

module ysyx_25020037_ifu(
    input  wire         clk,
    input  wire         rst,
    input  wire [31: 0] pc,
    input  wire         idu_ready,
    output reg  [31: 0] inst,
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
    input  wire [ 3: 0] rid
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
            access_fault <= 1'b0;
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
                        //araddr  <= 32'b0;
                        arvalid <= 1'b0;
                        rready <= 1'b1;
                    end
                    if (rvalid && rready && (rresp == 2'b00)) begin
                        inst <= rdata;
                        rready <= 1'b0;
                    end 
                    if (rresp != 2'b00) begin
                        access_fault <= 1'b1;
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
