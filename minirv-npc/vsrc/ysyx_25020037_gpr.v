//寄存器堆
module ysyx_25020037_gpr (
  input  wire         clk,
  input  wire         rst,
  input  wire [31: 0] pc,
  input  wire [31: 0] gpr_wdata,
  input  wire [ 4: 0] rs1,
  input  wire [ 4: 0] rs2,
  output reg  [31: 0] src1,
  output reg  [31: 0] src2,

  input  wire [ 4: 0] gpr_waddr,
  input  wire         gpr_wen
);

  reg  [31: 0] regs [31: 0];
  generate
    genvar i;
    for (i = 0; i < 16; i = i+1) begin : GPR32
      ysyx_25020037_Reg #(32, 32'b0) gpr32 (
        .clk        (clk        ), 
        .rst        (rst        ), 
        .din        (gpr_wdata  ), 
        .dout       (regs[i]    ), 
        .wen        ((gpr_waddr != 5'b0) && gpr_wen && (gpr_waddr == i))
        );
    end
  endgenerate

  assign src1 = regs[rs1];
  assign src2 = regs[rs2];
  
endmodule
