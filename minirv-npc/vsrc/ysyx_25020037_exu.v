module ysyx_25020037_exu (
    input  wire [31: 0] src1,
    input  wire [31: 0] src2,
    input  wire [31: 0] imm,
    input  wire [31: 0] pc,
    input  wire [ 1: 0] alu_op,
    input  wire         src2_is_imm,
    input  wire         is_pc_jump,
    input  wire         exec_is_end,
    input  wire         inst_not_realize,
    output wire [31: 0] dnpc,
    output wire [31: 0] result
);
`ifdef VERILATOR
    import "DPI-C" function void hit(input int inst_not_realize);
`endif
    wire [31: 0] snpc;

    wire [31: 0] alu_src1;
    wire [31: 0] alu_src2;
    wire [31: 0] alu_result1;

    assign alu_src1 = src1;
    assign alu_src2 = src2_is_imm ? imm : src2;

    ysyx_25020037_alu alu_cpu(
        .alu_op         (alu_op     ),
        .alu_src1       (alu_src1   ),
        .alu_src2       (alu_src2   ),
        .alu_result1    (alu_result1)
        );

    assign snpc   = pc + 32'h4;
    assign dnpc   = is_pc_jump  ? alu_result1 : snpc;

    assign result    = is_pc_jump ? pc + 32'h4 : alu_result1;
`ifdef VERILATOR
    always @(*) begin
        if(exec_is_end | inst_not_realize) begin hit({32{inst_not_realize}}); end
    end
`endif
endmodule
