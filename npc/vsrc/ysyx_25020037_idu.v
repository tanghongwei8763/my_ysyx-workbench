module ysyx_25020037_idu (
    input  wire [31: 0] inst,
    output wire [ 4: 0] rs1,
    output wire [ 4: 0] rs2,
    output wire [ 4: 0] rd,
    output wire [31: 0] imm,
    output wire [10: 0] alu_op,

    output wire [31: 0] gpr_we,
    output wire [31: 0] rmem_we,
    output wire [31: 0] wmem_we,

    output wire         src1_is_pc,
    output wire         src2_is_imm,
    output wire         is_pc_jump,
    output wire         exec_is_end
);
    
    wire [ 6:0] opcode_31_25;
    wire [ 5:0] opcode_31_26;
    wire [ 2:0] opcode_14_12;
    wire [ 6:0] opcode_06_00;
    wire [31:0] immI;
    wire [31:0] immS;
    wire [31:0] immB;
    wire [31:0] immU;
    wire [31:0] immJ;

    wire [127:0]opcode_31_25_d;
    wire [63:0] opcode_31_26_d;
    wire [ 7:0] opcode_14_12_d;
    wire [127:0]opcode_06_00_d;

    wire [31:0] rs1_d;
    wire [31:0] rs2_d;
    wire [31:0] rd_d;

    wire        inst_add;
    wire        inst_and;
    wire        inst_or;
    wire        inst_xor;
    wire        inst_sub;
    wire        inst_slt;
    wire        inst_sltu;
    wire        inst_addi;
    wire        inst_jarl;
    wire        inst_lw;
    wire        inst_sw;
    wire        inst_auipc;
    wire        inst_jal;
    wire        inst_ebreak;
    wire        inst_waiting;

    wire        TYPE_R;
    wire        TYPE_I;
    wire        TYPE_S;
    wire        TYPE_B;
    wire        TYPE_U;
    wire        TYPE_J;
    wire        TYPE_N;
    wire        TYPE_W;


    assign opcode_31_25  = inst[31:25];
    assign opcode_31_26  = inst[31:26];
    assign opcode_14_12  = inst[14:12];
    assign opcode_06_00  = inst[ 6: 0];

    assign rs1   = inst[19:15];
    assign rs2   = inst[24:20];
    assign rd    = inst[11: 7];

    assign immI  = {{20{inst[31]}}, inst[31:20]};
    assign immS  = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign immB  = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
    assign immU  = {inst[31:12], 12'b0};
    assign immJ  = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
    
    decoder_7_128 u_dec0(.in(opcode_31_25 ), .out(opcode_31_25_d ));
    decoder_6_64  u_dec1(.in(opcode_31_26 ), .out(opcode_31_26_d ));
    decoder_3_8   u_dec2(.in(opcode_14_12 ), .out(opcode_14_12_d ));
    decoder_7_128 u_dec3(.in(opcode_06_00 ), .out(opcode_06_00_d ));

    decoder_5_32 u_dec4(.in(rs1 ), .out(rs1_d ));
    decoder_5_32 u_dec5(.in(rs2 ), .out(rs2_d ));
    decoder_5_32 u_dec6(.in(rd  ), .out(rd_d  ));

    assign inst_add       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h0] & opcode_31_25_d[7'h00];
    assign inst_and       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h7] & opcode_31_25_d[7'h00];
    assign inst_or        = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h6] & opcode_31_25_d[7'h00];
    assign inst_xor       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h4] & opcode_31_25_d[7'h00];
    assign inst_sub       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h0] & opcode_31_25_d[7'h64];
    assign inst_slt       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h2] & opcode_31_25_d[7'h00];
    assign inst_sltu      = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h3] & opcode_31_25_d[7'h00];
    assign inst_addi      = opcode_06_00_d[7'h13] & opcode_14_12_d[3'h0];
    assign inst_jarl      = opcode_06_00_d[7'h67] & opcode_14_12_d[3'h0];
    assign inst_lw        = opcode_06_00_d[7'h03] & opcode_14_12_d[3'h2];
    assign inst_sw        = opcode_06_00_d[7'h23] & opcode_14_12_d[3'h2];
    assign inst_auipc     = opcode_06_00_d[7'h17];
    assign inst_jal       = opcode_06_00_d[7'h6f];
    assign inst_ebreak    = opcode_06_00_d[7'h73] & rd_d[5'h00] & opcode_14_12_d[3'h0] & rs2_d[5'h00] & rs1_d[5'h01] & opcode_31_25_d[7'h00];
    assign inst_waiting   = opcode_06_00_d[7'h00] & rd_d[5'h00] & opcode_14_12_d[3'h0] & rs2_d[5'h00] & rs1_d[5'h00] & opcode_31_25_d[7'h00];

    assign alu_op[ 0] = inst_add | inst_addi | inst_auipc | inst_jal | 
                        inst_jarl | inst_lw | inst_slli | inst_srai | 
                        inst_srli | inst_sw;
    assign alu_op[ 1] = inst_sub;
    assign alu_op[ 2] = inst_slt;
    assign alu_op[ 3] = inst_sltu;
    assign alu_op[ 4] = inst_and;
    assign alu_op[ 5] = inst_or;
    assign alu_op[ 6] = inst_xor;
    assign alu_op[ 7] = inst_slli;
    assign alu_op[ 8] = inst_srli;
    assign alu_op[ 9] = inst_srai;
    assign alu_op[10] = inst_lui;

    assign TYPE_R = inst_add | inst_and | inst_sub | inst_or | inst_xor | inst_slt | inst_sltu;
    assign TYPE_I = inst_addi | inst_jarl;
    assign TYPE_S = inst_sw;
    assign TYPE_B = inst_bne;
    assign TYPE_U = inst_auipc | inst_lui;
    assign TYPE_J = inst_jal;
    assign TYPE_N = inst_ebreak | inst_waiting;

    assign imm = ({32{TYPE_I}} & immI)
               | ({32{TYPE_S}} & immS)
               | ({32{TYPE_B}} & immB)
               | ({32{TYPE_U}} & immU)
               | ({32{TYPE_J}} & immJ);

    assign gpr_we   = inst_add | inst_addi | inst_sub | inst_slt | 
                      inst_sltu | inst_and | inst_or | inst_xor | 
                      inst_jarl | inst_jal | inst_auipc;
    assign rmem_we  = inst_lw;
    assign wmem_we  = inst_sw;

    assign src1_is_pc    = inst_jal | inst_jarl | inst_auipc;
    assign src2_is_imm   = inst_slli |
                           inst_srli |
                           inst_srai |
                           inst_addi |
                           inst_lw   |
                           inst_sw   |
                           inst_lui  |
                           inst_jal  |
                           inst_jarl ;

    assign is_pc_jump   = inst_jal | inst_jarl;
    assign exec_is_end  = inst_ebreak;

endmodule
