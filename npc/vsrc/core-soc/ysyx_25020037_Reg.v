// 触发器模板
module ysyx_25020037_Reg #(WIDTH = 1, RESET_VAL = 0) (
  input  wire             clk,
  input  wire             rst,
  input  wire [WIDTH-1:0] din,
  output reg  [WIDTH-1:0] dout,
  input  wire             wen
);

  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
  
endmodule
