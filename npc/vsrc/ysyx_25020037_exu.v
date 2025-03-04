module ysyx_25020037_exu (
    input [31:0] src1,
    input [31:0] src2,
    input [31:0] imm,
    input [2:0] TYPE_type,
    output reg [31:0] result,
    output wen
);

    import "DPI-C" function void ending();

    always @(*) begin
        case(TYPE_type)
            3'b000: begin result = src1 + src2; wen = 1'b1; end
            3'b001: begin result = src1 + imm; wen = 1'b1; end
            3'b010: begin ending(); end
            default: begin result = 32'b0; wen = 1'b0; end
        endcase
    end

endmodule
