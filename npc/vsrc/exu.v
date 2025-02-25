module exu (
    input clk,
    input [31:0] src1,
    input [31:0] src2,
    input [2:0] TYPE_type,
    input [31:0] imm,
    output [31:0] result,
    output wen
);

    assign result = src1 + imm;

    MuxKeyWithDefault #(2, 3, 32) mux_inst (
    .out(result),
    .key(TYPE_type),
    .default_out(32'b0),
    .lut({
        3'b0, result
        })
  );
    assign wen = 1'b1;
endmodule
