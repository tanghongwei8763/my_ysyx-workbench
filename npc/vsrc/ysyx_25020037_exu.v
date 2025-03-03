module ysyx_25020037_exu (
    input [31:0] src1,
    input [31:0] src2,
    input [31:0] imm,
    input [2:0] TYPE_type,
    output reg [31:0] result,
    output wen
);

    always @(*) begin
        if(TYPE_type == 3'b000) begin result = src1 + imm; wen = 1'b1; end
        else if(TYPE_type == 3'b001) begin result = src1 + src2; wen = 1'b1; end
        else begin result = 32'b0; wen = 1'b0; end
    end

endmodule
