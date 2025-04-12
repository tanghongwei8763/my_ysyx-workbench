//寄存器堆
module ysyx_25020037_gpr (
  input               clk,
  input               rst,
  input  wire [31: 0] wdata,
  input  wire [ 4: 0] rs1,
  input  wire [ 4: 0] rs2,
  output reg  [31: 0] src1,
  output reg  [31: 0] src2,
  output reg  [31: 0] regs [31:0],

  input  wire [ 4: 0] waddr,
  input  wire         wen
);

  //实例化寄存器
  generate
    genvar i;
    for (i = 0; i < 32; i = i+1) begin : GPR32
      ysyx_25020037_Reg #(32, 32'b0) reg_inst (clk, rst, wdata, regs[i], (waddr != 5'b0) && wen && (waddr == i));
    end
  endgenerate

  assign src1 = regs[rs1];
  assign src2 = regs[rs2];
endmodule
