`include "ysyx_25020037_config.vh"

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

    output wire [31: 0] icache_addr,
    output wire         icache_valid,
    input  wire [31: 0] icache_data,
    input  wire         icache_hit
);
    reg  [31:0] pc;
    wire [31:0] inst = fu_to_du_bus[31:0];
    wire [31:0] snpc = pc + 32'h4;
    wire [31:0] dnpc = exu_dnpc_valid ? exu_dnpc : snpc;
    assign      pc_updata = icache_hit & idu_ready;

    assign icache_addr       = pc;
    assign icache_valid = idu_ready;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pc <= `PC_RESET_VAL;
        end else begin
            pc <= pc_updata ? dnpc : pc;
            if (idu_ready) begin
                if (icache_hit) begin
                    fu_to_du_bus <= {pc[31:2], icache_data};
                    ifu_valid <= exu_dnpc_valid ? 1'b0 : 1'b1;
                end else begin
                    ifu_valid <= 1'b0;
                    fu_to_du_bus <= 'b0;
                end
            end
        end
    end

endmodule
