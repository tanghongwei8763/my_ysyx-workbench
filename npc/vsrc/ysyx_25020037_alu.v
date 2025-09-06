module ysyx_25020037_alu(
  input  wire [ 1:0] alu_op,
  input  wire [31:0] alu_src1,
  input  wire [31:0] alu_src2,
  output wire [31:0] alu_result1

);

wire         op_add;
wire         op_lui;

wire         op_bne;
wire         op_beq;
wire         op_bge;
wire         op_bgeu;
wire         op_blt;
wire         op_bltu;

wire [31: 0] add_sub_result;
wire [31: 0] lui_result;

wire [31: 0] adder_a;
wire [31: 0] adder_b;
wire         adder_cin;
wire [31: 0] adder_result;
wire         adder_cout;

assign op_add  = alu_op[ 0];
assign op_lui  = alu_op[ 1];

assign adder_a   = alu_src1;
assign adder_b   = alu_src2;
assign adder_cin = 1'b0;
assign {adder_cout, adder_result} = adder_a + adder_b + {{32{1'b0}}, adder_cin};

assign add_sub_result = adder_result;

assign lui_result = alu_src2;

assign alu_result1 = ({32{op_add       }} & add_sub_result)
                   | ({32{op_lui       }} & lui_result);

endmodule
