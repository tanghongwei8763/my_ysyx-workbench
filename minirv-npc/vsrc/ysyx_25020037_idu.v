module ysyx_25020037_idu (
    input  wire [31: 0] inst,
    output wire [ 3: 0] rs1_r,
    output wire [ 3: 0] rs2_r,
    output wire [ 3: 0] rd_r,
    output wire [31: 0] imm,
    output wire [ 1: 0] alu_op,

    output wire         gpr_we,
    output wire         rlsu_we,
    output wire         wlsu_we,

    output wire         rw_word_1,
    output wire         rw_word_4,

    output wire         src2_is_imm,
    output wire         is_pc_jump,
    output wire         exec_is_end,
    output wire         inst_not_realize
);

    wire [ 6:0] opcode_31_25;
    wire [ 5:0] opcode_31_26;
    wire [ 2:0] opcode_14_12;
    wire [ 6:0] opcode_06_00;
    wire [31:0] immI;
    wire [31:0] immS;
    wire [31:0] immU;

    wire        inst_add;
    wire        inst_addi;
    wire        inst_jarl;
    wire        inst_lbu;
    wire        inst_lw;
    wire        inst_sb;
    wire        inst_sw;
    wire        inst_lui;
    wire        inst_ebreak;
    wire        inst_waiting;

    wire        TYPE_R;
    wire        TYPE_I;
    wire        TYPE_S;
    wire        TYPE_U;
    wire        TYPE_N;


    assign opcode_31_25  = inst[31:25];
    assign opcode_31_26  = inst[31:26];
    assign opcode_14_12  = inst[14:12];
    assign opcode_06_00  = inst[ 6: 0];

    wire [ 4: 0] rs1;
    wire [ 4: 0] rs2;
    wire [ 4: 0] rd;
    assign rs1   = inst[19:15];
    assign rs2   = inst[24:20];
    assign rd    = inst[11: 7];
    assign rs1_r   = rs1[3:0];
    assign rs2_r   = rs2[3:0];
    assign rd_r    = rd[3:0];

    assign immI  = {{20{inst[31]}}, inst[31:20]};
    assign immS  = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign immU  = {inst[31:12], 12'b0};
    
    assign inst_add       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h0) & (opcode_31_25 == 7'h00);
    assign inst_addi      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h0);
    assign inst_jarl      = (opcode_06_00 == 7'h67) & (opcode_14_12 == 3'h0);
    assign inst_lbu       = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h4);
    assign inst_lw        = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h2);
    assign inst_sb        = (opcode_06_00 == 7'h23) & (opcode_14_12 == 3'h0);
    assign inst_sw        = (opcode_06_00 == 7'h23) & (opcode_14_12 == 3'h2);
    assign inst_lui       = (opcode_06_00 == 7'h37);
    assign inst_ebreak    = (opcode_06_00 == 7'h73) & (rd == 5'h00) & (opcode_14_12 == 3'h0) & (rs1 == 5'h00) & (rs2 == 5'h01) & (opcode_31_25 == 7'h00);
    assign inst_waiting   = (opcode_06_00 == 7'h00) & (rd == 5'h00) & (opcode_14_12 == 3'h0) & (rs1 == 5'h00) & (rs2 == 5'h00) & (opcode_31_25 == 7'h00);

    assign alu_op[ 0] = inst_add  | inst_addi | inst_sb  |
                        inst_jarl | inst_lw   | inst_lbu |
                        inst_sw;
    assign alu_op[ 1] = inst_lui;

    assign TYPE_R = inst_add ;
    assign TYPE_I = inst_addi   | inst_jarl | inst_lw  | inst_lbu;
    assign TYPE_S = inst_sw     | inst_sb;
    assign TYPE_U = inst_lui;
    assign TYPE_N = inst_ebreak | inst_waiting;

    assign imm = ({32{TYPE_I}} & immI)
               | ({32{TYPE_S}} & immS)
               | ({32{TYPE_U}} & immU);

    assign gpr_we   = TYPE_R  | TYPE_I   | inst_lui;
    assign rlsu_we  = inst_lw | inst_lbu ;
    assign wlsu_we  = inst_sw | inst_sb;

    assign src2_is_imm   = TYPE_I     |
                           inst_sw    |
                           inst_sb    |
                           inst_lui   |
                           inst_jarl  ;

    assign rw_word_4    = inst_sw  | inst_lw;
    assign rw_word_1    = inst_lbu | inst_sb;

    assign is_pc_jump   = inst_jarl;
    assign exec_is_end  = inst_ebreak;
    

    assign inst_not_realize = ~(TYPE_I | TYPE_N | TYPE_R | TYPE_S | TYPE_U);

endmodule
