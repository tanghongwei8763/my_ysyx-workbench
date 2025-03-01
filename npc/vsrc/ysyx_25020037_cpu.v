module ysyx_25020037_cpu (
    input clk,
    input rst,
);

    reg [31:0] pc, inst;
    reg [4:0] rd, rs1, rs2;
    reg [31:0] imm, src1, src2, result;
    reg TYPE_type;
    reg wen;

    ysyx_25020037_Reg #(32, 32'h80000000) PC (
        .clk(clk),
        .rst(rst),
        .din(pc + 32'h4),
        .dout(pc),
        .wen(1'b1)
    );

    ysyx_25020037_ifu ifu_cpu(pc, inst);

    ysyx_25020037_idu idu_cpu(inst, rs1, rs2, rd, imm, TYPE_type);

    ysyx_25020037_lsu lsu_cpu(
        .clk(clk),
        .rst(rst),
        .d(result),
        .rs1(rs1),
        .rs2(rs2),
        .src1(src1),
        .src2(src2),
        .rd(rd),
        .wen(wen)
        );

    ysyx_25020037_exu exu_cpu(
        .src1(src1),
        .src2(src2),
        .imm(imm),
        .TYPE_type(TYPE_type),
        .result(result),
        .wen(wen)
    );
endmodule
