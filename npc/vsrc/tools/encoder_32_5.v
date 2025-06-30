module encoder_32_5(
    input  [31:0] in,
    output [ 4:0] out
);

wire [3:0] out_0, out_1;

encoder_16_4 one (.in(in[15: 0]), .out(out_0));
encoder_16_4 two (.in(in[31:16]), .out(out_1));

assign out = {5{|in[15: 0]}} & {1'd0, out_0} |
	     {5{|in[31:16]}} & {1'd1, out_1} ;

endmodule
