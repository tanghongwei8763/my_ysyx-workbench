module decoder_7_128(
    input  [ 6:0] in,
    output [127:0] out
);

genvar i;
generate 
	for (i=0; i<128; i=i+1) 
	begin : gen_for_dec_7_128  //bug8
    	assign out[i] = (in == i);
	end
endgenerate

endmodule
