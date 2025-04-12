// 触发器模板
module ysyx_25020037_Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen_gpr
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen_gpr) dout <= din;
  end
endmodule
