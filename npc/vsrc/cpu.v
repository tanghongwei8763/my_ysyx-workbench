module cpu (
    input clk,
    input rst
);

    reg [31:0] pc, s;
    reg [4:0] rd, rs1, rs2;
    reg [31:0] imm, src1, src2, result;
    reg wen;

    Reg #(32, 32'h80000000) PC (
        .clk(clk),
        .rst(rst),
        .din(pc + 32'h4),
        .dout(pc),
        .wen(1'b1)
    );

    ifu ifu_cpu(clk, pc, s);

    idu idu_cpu(s, rs1, rs2, rd, imm);

    lsu lsu_cpu(
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

    exu exu_cpu(
        .src1(src1),
        .src2(src2),
        .imm(imm),
        .result(result),
        .wen(wen)
    );
endmodule
