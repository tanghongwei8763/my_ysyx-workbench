module encoder_4_2(
    input  [3:0] in,
    output [1:0] out
);

assign out = {2{in[0]}} & 2'd0 |
	     {2{in[1]}} & 2'd1 |
	     {2{in[2]}} & 2'd2 |
	     {2{in[3]}} & 2'd3 ;

endmodule
