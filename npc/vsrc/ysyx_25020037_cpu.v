module ysyx_25020037_cpu (
    input clk,
    input rst,
    input [31:0] inst,
    output reg [31:0] regs [31:0]
    /*
    output reg [31:0] result,
    output reg [31:0] imm,
    output reg [2:0] TYPE_type,
    output reg [4:0] rd
    */
);


    reg [4:0] rd, rs1, rs2;
    reg [31:0] src1, src2, result, imm;
    reg [2:0] TYPE_type;
    reg wen;
    /*
    ysyx_25020037_Reg #(32, 32'h80000000) PC (
        .clk(clk),
        .rst(rst),
        .din(pc + 32'h4),
        .dout(pc),
        .wen(1'b1)
    );
    initial begin
        $display("pc=%h", pc);
    end
    */
    //ysyx_25020037_ifu ifu_cpu(pc, inst);

    ysyx_25020037_idu idu_cpu(inst, rs1, rs2, rd, imm, TYPE_type);

    ysyx_25020037_lsu lsu_cpu(
        .clk(clk),
        .rst(rst),
        .d(result),
        .rs1(rs1),
        .rs2(rs2),
        .src1(src1),
        .src2(src2),
        .regs(regs),
        .rd(rd),
        .wen((~rst)&wen)
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
