module ysyx_25020037_idu (
    input [31:0] inst,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output reg [31:0] imm,
    output reg [2:0] TYPE_type
);
    
    //localparam TYPE_R = 3'b000;
    localparam TYPE_I = 3'b001;
    //localparam TYPE_S = 3'b010;
    //localparam TYPE_B = 3'b011;
    //localparam TYPE_U = 3'b100;
    //localparam TYPE_J = 3'b101;
    //localparam TYPE_N = 3'b110;
    
    //定义5种imm的拼接
    wire [31:0] immI;
    assign immI = {{20{inst[31]}}, inst[31:20]};
    //assign immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    //assign immB = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
    //assign immU = {{12{inst[31]}}, inst[31:12]};
    //assign immJ = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};

    //获取3个寄存器的地址
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign rd = inst[11:7];
    
    parameter MASKI = 32'b0000000_00000_00000_111_00000_11111_11;

    parameter addi = 32'bxxxxxxx_xxxxx_xxxxx_000_xxxxx_00100_11;
    parameter ebreak = 32'b0000000_00001_00000_000_00000_11100_11;

    always @(*) begin
        if ((inst&MASKI) == (addi&MASKI)) begin TYPE_type = TYPE_I;imm = immI;end
        else if (inst == ebreak) begin TYPE_type = 3'b010;imm = 32'b0; end
        else begin TYPE_type = 3'b100;imm = 32'b0;end
    end
endmodule
