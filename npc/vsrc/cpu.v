module ysyx_25020037_CPU (
    input clk,
    input rst
);
    reg [31:0] pc, nspc, dspc;
    reg [31:0] s;
    reg [4:0] rs1, rs2, rd;
    reg [31:0] imm, src1, src2, result;
    reg [2:0] TYPE_type;
    

    initial begin
        pc = 32'h80000000;
        nspc = pc + 3'h4;
    end

    //取指
    ysyx_25020037_IFU ifu(clk, pc, s);

    //译码
    ysyx_25020037_IDU idu(s, rs1, rs2, imm, TYPE_type);

    ysyx_25020037_GPR gpr(
        .clk(clk),
        .rst(rst),
        .d(result),
        .rs1(rs1),
        .rs2(rs2),
        .src1(src1),
        .src2(src2),
        .waddr(rd),
        .wen(1'b0)
        );
    
    //执行
    ysyx_25020037_EXU exu(clk, src1, src2, TYPE_type, imm, result);

    ysyx_25020037_GPR gpr(
        .clk(clk),
        .rst(rst),
        .d(result),
        .rs1(rs1),
        .rs2(rs2),
        .src1(src1),
        .src2(src2),
        .waddr(rd),
        .wen(1'b1)
        );
endmodule