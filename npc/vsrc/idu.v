module idu (
    input [31:0] s,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [31:0] imm,
    output TYPE_type
);

    localparam TYPE_I = 1'b0;
    /*
    //6种指令类型
    localparam TYPE_R = 3'b000;
    localparam TYPE_S = 3'b010;
    localparam TYPE_B = 3'b011;
    localparam TYPE_U = 3'b100;
    localparam TYPE_J = 3'b101;
    localparam TYPE_N = 3'b110;
    */
    //定义5种imm的拼接
    wire [31:0] immI;
    assign immI = {{20{s[31]}}, s[31:20]};
    //assign immS = {{20{s[31]}}, s[31:25], s[11:7]};
    //assign immB = {{20{s[31]}}, s[7], s[30:25], s[11:8], 1'b0};
    //assign immU = {{12{s[31]}}, s[31:12]};
    //assign immJ = {{12{s[31]}}, s[19:12], s[20], s[30:21], 1'b0};

    //获取3个寄存器的地址
    assign rs1 = s[19:15];
    assign rs2 = s[24:20];
    assign rd = s[11:7];

    assign imm = immI;
    
    // 定义指令匹配模式和对应的指令类型
    localparam NR_KEY_INS = 1;
    localparam KEY_LEN_INS = 32;
    localparam DATA_LEN_INS = 1;
    localparam LUT_INS_TYPE = {
        32'bxxxxxxx_xxxxx_xxxxx_000_xxxxx_0010011, TYPE_I //addi
    };

    //匹配指令，类似于INSTPAT那个宏但没有执行功能
    MuxKey #(NR_KEY_INS, KEY_LEN_INS, DATA_LEN_INS) INSTPAT_code (TYPE_type, s, LUT_INS_TYPE);

    assign imm = (TYPE_type == TYPE_I) ? immI : 32'b0;
    
endmodule
