`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/core-npc/ysyx_25020037_config.vh"

module ysyx_25020037_lsu (
    input  wire         clk,
    input  wire         rst,
    input  wire         exu_valid,
    input  wire         wbu_ready,
    output reg          lsu_ready,
    output reg          lsu_valid,
    input  wire [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus,
    input  wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus,
    output reg  [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus,

    output reg  [31:0] araddr,
    output reg         arvalid,
    input  wire        arready,

    output reg [31:0]  awaddr,
    output reg         awvalid,
    input  wire        awready,
    output reg  [31:0] wdata,

    output reg  [3:0]  wstrb,
    output reg         wvalid,
    input  wire        wready,

    input  wire  [1:0] bresp,
    input  wire        bvalid,
    output reg         bready,

    input  wire [31:0] rdata,
    input  wire [1:0]  rresp,
    input  wire        rvalid,
    output reg         rready
);
    localparam IDLE    = 1'b0;
    localparam BUSY    = 1'b1;
    reg          state, next_state;

    reg  [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus_r;

    function [3:0] generate_wstrb;
        input [31:0] len;
        begin
            case (len)
                32'd1: generate_wstrb = 4'b0001;
                32'd2: generate_wstrb = 4'b0011;
                default: generate_wstrb = 4'b1111;
            endcase
        end
    endfunction

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            lsu_ready <= 1'b1;
            lsu_valid <= 1'b0;
            araddr <= 32'h0;
            arvalid <= 1'b0;
            rready <= 1'b0;
            awaddr <= 32'h0;
            awvalid <= 1'b0;
            wdata <= 32'h0;
            wstrb <= 4'h0;
            wvalid <= 1'b0;
            bready <= 1'b0;
        end else begin
            state <= next_state;

            case (state)
                IDLE: begin
                    if (lsu_ready & exu_valid) begin
                        if (du_to_lu_bus[1]) begin
                            lsu_ready <= 1'b0;
                            araddr  <= eu_to_lu_bus[63:32];
                            arvalid <= 1'b1;
                            rready  <= 1'b0;
                        end else if (du_to_lu_bus[0]) begin
                            lsu_ready <= 1'b0;
                            awaddr  <= eu_to_lu_bus[63:32];
                            wdata   <= eu_to_lu_bus[31: 0];
                            wstrb   <= du_to_lu_bus[ 5: 2];
                            awvalid <= 1'b1;
                        end else begin
                            lsu_ready <= 1'b0;
                        end
                    end
                    lsu_valid <= 1'b0;
                end
                BUSY: begin
                    if (du_to_lu_bus[1]) begin
                        if (arvalid && arready) begin
                            arvalid <= 1'b0;
                            rready <= 1'b1;
                        end
                        if (rvalid && rready && (rresp == 2'b00)) begin
                            lu_to_wu_bus <= rdata;
                            rready <= 1'b0;
                            lsu_valid <= 1'b1;
                            lsu_ready <= 1'b1;
                        end
                    end else if (du_to_lu_bus[0]) begin                            
                        if (awvalid & awready) begin
                            awvalid <= 1'b0;
                            wvalid  <= 1'b1;
                        end
                        if (wvalid & wready) begin
                            wvalid  <= 1'b0;
                            bready  <= 1'b1;
                        end
                        if (bvalid & bready && (rresp == 2'b00)) begin
                            bready <= 1'b0;
                            lsu_valid <= 1'b1;
                            lsu_ready <= 1'b1;
                        end
                    end else begin
                        lu_to_wu_bus <= eu_to_lu_bus[63:32];
                        lsu_valid <= 1'b1;
                        lsu_ready <= 1'b1;
                    end
                end
            endcase
        end
    end

    always @(*) begin
        case (state)
            IDLE: next_state = (lsu_ready & exu_valid) ? BUSY : IDLE;        
            BUSY: next_state = (lsu_valid & wbu_ready) ? IDLE : BUSY;    
            default: next_state = IDLE;
        endcase
    end

endmodule
