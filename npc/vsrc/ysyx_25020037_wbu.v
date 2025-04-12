module ysyx_25020037_wbu (
    input rst,
    input [31:0] result,
    input [31:0] rdata_lsu,
    input [2:0] TYPE_type,
    output reg [31:0] wdata_gpr,
    output reg wen_gpr
);


    parameter TYPE_R = 3'b000;
    parameter TYPE_I = 3'b001;
    parameter TYPE_S = 3'b010;
    parameter TYPE_U = 3'b100;
    parameter TYPE_J = 3'b101;
    

    always @(*) begin
        if (rst) begin
            wen_gpr = 1'b0;
        end else begin
            if((TYPE_type == TYPE_I) ||
               (TYPE_type == TYPE_U) || 
               (TYPE_type == TYPE_R) || 
               (TYPE_type == TYPE_J))
                wen_gpr = 1'b1;
            else
                wen_gpr = 1'b0;
        end
    end

    always @(*) begin
        case(TYPE_type) 
            TYPE_S: begin wdata_gpr = rdata_lsu; end
            default: begin wdata_gpr = result; end
        endcase
    end

endmodule
