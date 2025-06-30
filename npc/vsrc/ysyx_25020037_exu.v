module ysyx_25020037_exu (
    input  wire [31: 0] src1,
    input  wire [31: 0] src2,
    input  wire [31: 0] imm,
    input  wire [31: 0] pc,
    input  wire [16: 0] alu_op,
    input  wire         src1_is_pc,
    input  wire         src2_is_imm,
    input  wire         is_pc_jump,
    input  wire         double_cal,
    input  wire         exec_is_end,
    input  wire         inst_not_realize,
    input  wire         ecall_en,
    input  wire         mret_en,
    input  wire [31: 0] mtvec,
    input  wire [31: 0] mepc,
    output wire [31: 0] dnpc,
    output wire [31: 0] result
);

    import "DPI-C" function void hit(input int inst_not_realize);

    wire [31: 0] snpc;

    wire [31: 0] alu_src1;
    wire [31: 0] alu_src2;
    wire [31: 0] alu_src3;
    wire [31: 0] alu_src4;
    wire [31: 0] alu_result1;
    wire [31: 0] alu_result2;

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

    assign snpc   = pc + 32'h4;
    assign dnpc   = ecall_en    ? mtvec :
                    mret_en     ? mepc  :
                    is_pc_jump  ? (alu_result2 == 32'b1) ? alu_result1 : snpc
                                : snpc;

    assign result    = is_pc_jump ? pc + 32'h4 : alu_result1;

    always @(*) begin
        if(exec_is_end | inst_not_realize) begin hit({32{inst_not_realize}}); end
    end

endmodule
