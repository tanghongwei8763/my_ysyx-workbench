`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

module ysyx_25020037_exu (
    input  wire         clk,
    input  wire         rst,
    input  wire         idu_valid,
    input  wire         lsu_ready,
    output reg          exu_valid,
    output wire         exu_ready,
    input  wire [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus,
    output reg  [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus,
    output reg  [`EU_TO_IC_BUS_WD -1:0] eu_to_ic_bus,
    output reg          exu_dnpc_valid,
    output reg  [31: 0] exu_dnpc
);
`ifdef VERILATOR
    import "DPI-C" function void hit(input int inst_not_realize);
`endif

    wire [`DU_TO_GU_BUS_WD -1:0] du_to_gu_bus;
    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire [`DU_TO_WU_BUS_WD -1:0] du_to_wu_bus;
    wire [31: 0] pc;
    wire         inst_l;
    wire         inst_s;
    wire         is_fence_i;
    wire [31: 0] imm;
    wire [31: 0] src1;
    wire [31: 0] src2;
    wire [16: 0] alu_op;
    wire         src1_is_pc;
    wire         src2_is_imm;
    wire         is_pc_jump;
    wire         double_cal;
    wire         ebreak;
    wire         inst_not_realize;
    wire         ecall_en;
    wire         mret_en;
    wire [31: 0] csr_data;
    wire         csrrs_op;
    wire         csrrw_op;
    assign {du_to_gu_bus,
            du_to_lu_bus,
            du_to_wu_bus,
            pc,
            inst_l,
            inst_s,
            is_fence_i,
            imm,
            src1,
            src2, 
            alu_op,
            src1_is_pc,
            src2_is_imm,
            is_pc_jump,
            double_cal,
            ebreak,
            inst_not_realize,
            ecall_en,
            mret_en,
            csr_data,
            csrrs_op,
            csrrw_op
           } = du_to_eu_bus;

    wire [31: 0] dnpc_r;
    wire [31: 0] result;
    wire [31: 0] alu_src1;
    wire [31: 0] alu_src2;
    wire [31: 0] alu_src3;
    wire [31: 0] alu_src4;
    wire [31: 0] alu_result1;
    wire [31: 0] alu_result2;
    wire [31: 0] csr_wcsr_data;

    assign alu_src1 = src1_is_pc  ? pc  : src1;
    assign alu_src2 = src2_is_imm ? imm : src2;
    assign alu_src3 = src1;
    assign alu_src4 = src2;

    ysyx_25020037_alu alu_cpu(
        .double_cal     (double_cal ),
        .alu_op         (alu_op     ),
        .alu_src1       (alu_src1   ),
        .alu_src2       (alu_src2   ),
        .alu_src3       (alu_src3   ),
        .alu_src4       (alu_src4   ),
        .alu_result1    (alu_result1),
        .alu_result2    (alu_result2)
        );

    assign csr_wcsr_data    = ({32{csrrw_op}} & src1)
                            | ({32{csrrs_op}} & (src1 | csr_data));
    assign dnpc_r = (ecall_en | mret_en) ? csr_data :
                    is_pc_jump           ? (alu_result2 == 32'b1) ? alu_result1 : 32'b0
                                         : 32'b0;

    assign result    = is_pc_jump ? pc + 32'h4 : alu_result1;

    assign exu_ready = lsu_ready;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            exu_valid <= 0;
            eu_to_lu_bus <= `EU_TO_LU_BUS_WD'b0;
            eu_to_ic_bus <= `EU_TO_IC_BUS_WD'b0;
            exu_dnpc_valid <=1'b0;
            exu_dnpc <= 32'b0;
        end else begin
            exu_valid <= 1'b0;
            eu_to_ic_bus <= 'b0;
            eu_to_lu_bus <= 'b0;
            if(lsu_ready) begin
                if (idu_valid) begin
                    exu_valid <= 1'b1;
                    if(dnpc_r != 32'b0) begin
                        exu_dnpc_valid <=1'b1;
                        exu_dnpc <= dnpc_r;
                    end else begin
                        exu_dnpc_valid <=1'b0;
                        exu_dnpc <= 32'b0;
                    end
                    eu_to_lu_bus <= {
                        du_to_gu_bus,
                        du_to_lu_bus,
                        du_to_wu_bus,  
                        csr_wcsr_data,       
                        result,
                        src2
                    };
                    eu_to_ic_bus <= is_fence_i;
                end
            end
        end
    end

`ifdef VERILATOR
    always @(*) begin
       if(ebreak | inst_not_realize) begin hit({32{inst_not_realize}}); end
    end
`endif
endmodule
