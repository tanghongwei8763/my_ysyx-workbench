module lsu (
    input clk,
    input rst,
    input [31:0] d,
    input [4:0] rs1,
    input [4:0] rs2,
    output [31:0] src1,
    output [31:0] src2,
    input [4:0] rd,
    input wen
);

    gpr lsu_gpr (
        .clk(clk),
        .rst(rst),
        .d(d),
        .rs1(rs1),
        .rs2(rs2),
        .src1(src1),
        .src2(src2),
        .waddr(rd),
        .wen(wen)
    );

endmodule
