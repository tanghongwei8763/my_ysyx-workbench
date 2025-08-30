`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

module ysyx_25020037_wbu (
    input  wire         lsu_valid,
    output reg          wbu_valid,
    output reg          wbu_ready,
    input  wire         clk,
    input  wire         rst,
    input  wire [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus,
    output reg  [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus
);
    wire [`DU_TO_WU_BUS_WD -1:0] du_to_wu_bus;
    wire [`DU_TO_GU_BUS_WD -1:0] du_to_gu_bus;
    wire [31: 0] addr;
    wire [31: 0] csr_wcsr_data;
    wire [31: 0] rdata_processed;
    assign {du_to_wu_bus,
            du_to_gu_bus,
            csr_wcsr_data,
            addr,
            rdata_processed
           } = lu_to_wu_bus;
    wire         gpr_we;
    wire         rlsu_we;
    wire         csr_w_gpr_we;
    wire [31: 0] csr_data;
    assign {gpr_we,
            rlsu_we,
            csr_w_gpr_we,
            csr_data
           } = du_to_wu_bus;

    wire         final_gpr_we;
    wire [31: 0] final_result;
    wire         final_gpr_we = ~rst & (gpr_we | rlsu_we);
    wire [31: 0] final_result = ~{32{rst}} & (csr_w_gpr_we ? csr_data : rdata_processed);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            wbu_valid <= 1'b0;
            wu_to_gu_bus <= `WU_TO_GU_BUS_WD'b0;
        end else begin
            wbu_valid <= 1'b0;
            if (lsu_valid) begin
                wbu_valid <= 1'b1;
                wu_to_gu_bus <= {
                    du_to_gu_bus,
                    csr_wcsr_data,     
                    final_gpr_we,         
                    final_result 
                };
            end
        end
    end

endmodule
