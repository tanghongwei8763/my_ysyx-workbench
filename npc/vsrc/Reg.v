// 触发器模板
module Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule

//寄存器堆
module Gpr (
  input clk,
  input rst,
  input [31:0] d,
  input [4:0] rs1,
  input [4:0] rs2,
  output [31:0] src1,
  output [31:0] src2,
  input [4:0] waddr,
  input wen
);

  reg [31:0] regs [31:0];


  //实例化寄存器
  generate
    genvar i;
    for (i = 0; i < 32; i = i+1) begin : RBG32
      Reg #(32, 32'b0) reg_inst (clk, rst, d, regs[i], (wen & waddr == 1));
    end
  endgenerate

  assign src1 = regs[rs1];
  assign src2 = regs[rs2];
endmodule
