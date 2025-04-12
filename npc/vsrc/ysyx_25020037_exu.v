module ysyx_25020037_exu (
    input  wire         rst,
    input  wire [31: 0] src1,
    input  wire [31: 0] src2,
    input  wire [31: 0] imm,
    input  wire [31: 0] pc,
    input  wire [10: 0] alu_op,
    input  wire         src1_is_pc,
    input  wire         src2_is_imm,
    input  wire         is_pc_jump,
    input  wire         exec_is_end,
    output wire [31: 0] dnpc,
    output wire [31: 0] result
);

    import "DPI-C" function void hit();

    ysyx_25020037_alu alu_cpu(
        .alu_op         (alu_op    ),
        .alu_src1       (alu_src1  ),
        .alu_src2       (alu_src2  ),
        .alu_result     (alu_result)
        );


    wire [31: 0] snpc;

    assign snpc = pc + 32'h4;
    assign dnpc = is_pc_jump ? pc + imm : snpc;

    assign result = alu_result;

endmodule
