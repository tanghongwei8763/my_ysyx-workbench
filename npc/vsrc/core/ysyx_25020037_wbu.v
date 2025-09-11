`include "ysyx_25020037_config.vh"

module ysyx_25020037_wbu (
    input  wire         lsu_valid,
    output reg          wbu_valid,
    input  wire         clk,
    input  wire         rst,
    input  wire [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus,
    output reg  [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus
);
    wire [29: 0] pc;
    wire [ 3: 0] rd;
    wire         ecall_en;
    wire         mret_en;
    wire [`EU_TO_GU_BUS_WD -1:0] eu_to_gu_bus;
    wire         gpr_we;
    wire         rlsu_we;
    wire [31: 0] csr_data;
    wire [`EU_TO_WU_BUS_WD -1:0] eu_to_wu_bus;
    wire [31: 0] addr;
    wire [31: 0] csr_wcsr_data;
    wire [31: 0] rdata_processed;
    assign {pc,
            rd,
            ecall_en,
            mret_en,
            eu_to_gu_bus,
            gpr_we,
            rlsu_we,
            csr_data,
            eu_to_wu_bus,
            csr_wcsr_data,
            addr,
            rdata_processed
           } = lu_to_wu_bus;
    wire         csr_w_gpr_we;
    assign csr_w_gpr_we = eu_to_wu_bus;

    wire         final_gpr_we = ~rst & (gpr_we | rlsu_we);
    wire [31: 0] final_result = ~{32{rst}} & (csr_w_gpr_we ? csr_data : rdata_processed);

    always @(posedge clk) begin
        wbu_valid <= 1'b0;
        wu_to_gu_bus <= 'b0;
        if (lsu_valid) begin
            wbu_valid <= 1'b1;
            wu_to_gu_bus <= {
                pc,
                rd,
                ecall_en,
                mret_en,
                eu_to_gu_bus,
                csr_wcsr_data,     
                final_gpr_we,         
                final_result 
            };
        end
    end

endmodule
