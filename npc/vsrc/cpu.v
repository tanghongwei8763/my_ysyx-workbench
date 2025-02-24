module cpu (
    input clk,
    input rst
);
    reg [31:0] pc, nspc, dspc;
    reg [31:0] s;
    reg [4:0] rs1, rs2, rd;
    reg [31:0] imm, src1, src2, result;
    reg [2:0] TYPE_type;
    reg wen;
    

    initial begin
        pc = 32'h80000000;
        nspc = pc + 3'h4;
    end

    //取指
    ifu ifu(clk, pc, s);

    //译码
    idu idu(s, rs1, rs2, imm, TYPE_type);

    Gpr gpr(
        .clk(clk),
        .rst(rst),
        .d(result),
        .rs1(rs1),
        .rs2(rs2),
        .src1(src1),
        .src2(src2),
        .waddr(rd),
        .wen(wen)
        );
    
    //执行
    exu exu(clk, src1, src2, TYPE_type, imm, result);
endmodule
