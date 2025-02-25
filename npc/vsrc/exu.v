module exu (
    input [31:0] src1,
    input [31:0] src2,
    input [31:0] imm,
    input TYPE_type,
    output [31:0] result,
    output wen
);
    reg [31:0] result1, result2; 
    assign result1 = src1 + imm;
    assign result2 = src1 + src2;
    
    MuxKeyWithDefault #(2, 1, 32) mux_inst (
    .out(result),
    .key(TYPE_type),
    .default_out(32'b0),
    .lut({
        1'b0, result1,
        1'b1, result2
        })
    );
    
    assign wen = 1'b1;
endmodule
