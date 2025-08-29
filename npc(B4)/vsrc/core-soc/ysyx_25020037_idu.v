`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

module ysyx_25020037_idu (
    input  wire         clk,
    input  wire         rst,
    input  wire [31: 0] pc,
    input  wire [31: 0] inst,
    input  wire         ifu_valid,
    input  wire         exu_ready,
    output reg          idu_valid,
    output reg          idu_ready,
    output reg          inst_l,
    output reg          inst_s,
    output reg          gpr_we,
    output reg  [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus,
    output reg  [`DU_TO_GU_BUS_WD -1:0] du_to_gu_bus,
    output reg  [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus,
    output reg  [`DU_TO_WU_BUS_WD -1:0] du_to_wu_bus
);
`ifdef VERILATOR
    import "DPI-C" function void performance_counter(input int valid, input int type_, input int cache_hit);
    always @(posedge clk) begin
       if(idu_valid & ~rst) begin performance_counter(32'b0, {25'b0, TYPE_R,TYPE_I,TYPE_S,TYPE_B,TYPE_U,TYPE_J,TYPE_N}, 32'b0);end
    end
`endif
    parameter MSTATUS   = 12'h300;
    parameter MTVEC     = 12'h305;
    parameter MEPC      = 12'h341;
    parameter MCAUSE    = 12'h342;
    parameter MVENDORID = 12'hF11;
    parameter MARCHID   = 12'hF12;

    localparam IDLE   = 1'b0;
    localparam BUSY   = 1'b1;
    reg state, next_state;

    reg  [31: 0] inst_r;
    wire [ 4: 0] rs1;
    wire [ 4: 0] rs2;
    wire [ 4: 0] rd;
    wire [31: 0] imm;
    wire [16: 0] alu_op;
    wire         gpr_we_r;
    wire         rlsu_we;
    wire         wlsu_we;
    wire         bit_sext;
    wire         half_sext;
    wire [ 2: 0] lw_lh_lb;
    wire [ 2: 0] sw_sh_sb;
    wire         src1_is_pc;
    wire         src2_is_imm;
    wire         is_pc_jump;
    wire         double_cal;
    wire         ebreak;
    wire         inst_not_realize;
    wire         csr_w_gpr_we;
    wire         csrrw_op;
    wire         csrrs_op;
    wire         ecall_en;
    wire         mret_en;
    wire         is_csr_op;
    wire         csrs_mtvec_wen;
    wire         csrs_mepc_wen;
    wire         csrs_mstatus_wen;
    wire         csrs_mcause_wen;
    wire         csrs_mvendorid_wen;
    wire         csrs_marchid_wen;

    wire [ 6:0] opcode_31_25;
    wire [ 5:0] opcode_31_26;
    wire [ 2:0] opcode_14_12;
    wire [ 6:0] opcode_06_00;
    wire [31:0] immI;
    wire [31:0] immS;
    wire [31:0] immB;
    wire [31:0] immU;
    wire [31:0] immJ;

    wire [127:0] opcode_31_25_d;
    wire [63:0]  opcode_31_26_d;
    wire [ 7:0]  opcode_14_12_d;
    wire [127:0] opcode_06_00_d;

    wire [31:0]  rs1_d;
    wire [31:0]  rs2_d;
    wire [31:0]  rd_d;
    wire         rw_word_1;
    wire         rw_word_2;
    wire         rw_word_4;

    wire        is_fence_i;

    wire        inst_add;
    wire        inst_and;
    wire        inst_or;
    wire        inst_ori;
    wire        inst_xor;
    wire        inst_xori;
    wire        inst_sub;
    wire        inst_slt;
    wire        inst_sltu;
    wire        inst_addi;
    wire        inst_andi;
    wire        inst_jarl;
    wire        inst_lb;
    wire        inst_lbu;
    wire        inst_lh;
    wire        inst_lhu;
    wire        inst_lw;
    wire        inst_sll;
    wire        inst_slli;
    wire        inst_sltiu;//seqz
    wire        inst_sra;
    wire        inst_srai;
    wire        inst_srl;
    wire        inst_srli;
    wire        inst_csrrw;
    wire        inst_csrrs;
    wire        inst_ecall;
    wire        inst_mret;
    wire        inst_sb;
    wire        inst_sh;
    wire        inst_sw;
    wire        inst_beq;
    wire        inst_bne;
    wire        inst_bge;
    wire        inst_bgeu;
    wire        inst_blt;
    wire        inst_bltu;
    wire        inst_auipc;
    wire        inst_lui;
    wire        inst_jal;
    wire        inst_fence_i;
    wire        inst_ebreak;
    wire        inst_waiting;

    wire        TYPE_R;
    wire        TYPE_I;
    wire        TYPE_S;
    wire        TYPE_B;
    wire        TYPE_U;
    wire        TYPE_J;
    wire        TYPE_N;

    assign opcode_31_25  = inst_r[31:25];
    assign opcode_31_26  = inst_r[31:26];
    assign opcode_14_12  = inst_r[14:12];
    assign opcode_06_00  = inst_r[ 6: 0];

    assign rs1   = inst_r[19:15];
    assign rs2   = inst_r[24:20];
    assign rd    = inst_r[11: 7];

    assign immI  = {{20{inst_r[31]}}, inst_r[31:20]};
    assign immS  = {{20{inst_r[31]}}, inst_r[31:25], inst_r[11:7]};
    assign immB  = {{20{inst_r[31]}}, inst_r[7], inst_r[30:25], inst_r[11:8], 1'b0};
    assign immU  = {inst_r[31:12], 12'b0};
    assign immJ  = {{12{inst_r[31]}}, inst_r[19:12], inst_r[20], inst_r[30:21], 1'b0};
    
    decoder_7_128 u_dec0(.in(opcode_31_25 ), .out(opcode_31_25_d ));
    decoder_6_64  u_dec1(.in(opcode_31_26 ), .out(opcode_31_26_d ));
    decoder_3_8   u_dec2(.in(opcode_14_12 ), .out(opcode_14_12_d ));
    decoder_7_128 u_dec3(.in(opcode_06_00 ), .out(opcode_06_00_d ));

    decoder_5_32  u_dec4(.in(rs1 ), .out(rs1_d ));
    decoder_5_32  u_dec5(.in(rs2 ), .out(rs2_d ));
    decoder_5_32  u_dec6(.in(rd  ), .out(rd_d  ));

    assign inst_add       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h0] & opcode_31_25_d[7'h00];
    assign inst_and       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h7] & opcode_31_25_d[7'h00];
    assign inst_or        = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h6] & opcode_31_25_d[7'h00];
    assign inst_xor       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h4] & opcode_31_25_d[7'h00];
    assign inst_sll       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h1] & opcode_31_25_d[7'h00];
    assign inst_sub       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h0] & opcode_31_25_d[7'h20];
    assign inst_slt       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h2] & opcode_31_25_d[7'h00];
    assign inst_sltu      = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h3] & opcode_31_25_d[7'h00];
    assign inst_addi      = opcode_06_00_d[7'h13] & opcode_14_12_d[3'h0];
    assign inst_andi      = opcode_06_00_d[7'h13] & opcode_14_12_d[3'h7];
    assign inst_jarl      = opcode_06_00_d[7'h67] & opcode_14_12_d[3'h0];
    assign inst_lb        = opcode_06_00_d[7'h03] & opcode_14_12_d[3'h0];
    assign inst_lbu       = opcode_06_00_d[7'h03] & opcode_14_12_d[3'h4];
    assign inst_lh        = opcode_06_00_d[7'h03] & opcode_14_12_d[3'h1];
    assign inst_lhu       = opcode_06_00_d[7'h03] & opcode_14_12_d[3'h5];
    assign inst_lw        = opcode_06_00_d[7'h03] & opcode_14_12_d[3'h2];
    assign inst_slli      = opcode_06_00_d[7'h13] & opcode_14_12_d[3'h1] & opcode_31_26_d[6'h00];
    assign inst_sltiu     = opcode_06_00_d[7'h13] & opcode_14_12_d[3'h3];
    assign inst_sra       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h5] & opcode_31_26_d[6'h10];
    assign inst_srai      = opcode_06_00_d[7'h13] & opcode_14_12_d[3'h5] & opcode_31_26_d[6'h10];
    assign inst_srl       = opcode_06_00_d[7'h33] & opcode_14_12_d[3'h5] & opcode_31_26_d[6'h00];
    assign inst_srli      = opcode_06_00_d[7'h13] & opcode_14_12_d[3'h5] & opcode_31_26_d[6'h00];
    assign inst_ori       = opcode_06_00_d[7'h13] & opcode_14_12_d[3'h6];
    assign inst_xori      = opcode_06_00_d[7'h13] & opcode_14_12_d[3'h4];
    assign inst_csrrw     = opcode_06_00_d[7'h73] & opcode_14_12_d[3'h1];
    assign inst_csrrs     = opcode_06_00_d[7'h73] & opcode_14_12_d[3'h2];
    assign inst_sb        = opcode_06_00_d[7'h23] & opcode_14_12_d[3'h0];
    assign inst_sh        = opcode_06_00_d[7'h23] & opcode_14_12_d[3'h1];
    assign inst_sw        = opcode_06_00_d[7'h23] & opcode_14_12_d[3'h2];
    assign inst_beq       = opcode_06_00_d[7'h63] & opcode_14_12_d[3'h0];
    assign inst_bne       = opcode_06_00_d[7'h63] & opcode_14_12_d[3'h1];
    assign inst_bge       = opcode_06_00_d[7'h63] & opcode_14_12_d[3'h5];
    assign inst_bgeu      = opcode_06_00_d[7'h63] & opcode_14_12_d[3'h7];
    assign inst_blt       = opcode_06_00_d[7'h63] & opcode_14_12_d[3'h4];
    assign inst_bltu      = opcode_06_00_d[7'h63] & opcode_14_12_d[3'h6];
    assign inst_auipc     = opcode_06_00_d[7'h17];
    assign inst_lui       = opcode_06_00_d[7'h37];
    assign inst_jal       = opcode_06_00_d[7'h6f];
    assign inst_fence_i   = opcode_06_00_d[7'h0f] & rd_d[5'h00] & opcode_14_12_d[3'h1] & rs1_d[5'h00] & rs2_d[5'h00] & opcode_31_25_d[7'h00];
    assign inst_mret      = opcode_06_00_d[7'h73] & rd_d[5'h00] & opcode_14_12_d[3'h0] & rs1_d[5'h00] & rs2_d[5'h02] & opcode_31_25_d[7'h18];
    assign inst_ecall     = opcode_06_00_d[7'h73] & rd_d[5'h00] & opcode_14_12_d[3'h0] & rs1_d[5'h00] & rs2_d[5'h00] & opcode_31_25_d[7'h00];
    assign inst_ebreak    = opcode_06_00_d[7'h73] & rd_d[5'h00] & opcode_14_12_d[3'h0] & rs1_d[5'h00] & rs2_d[5'h01] & opcode_31_25_d[7'h00];
    assign inst_waiting   = opcode_06_00_d[7'h00] & rd_d[5'h00] & opcode_14_12_d[3'h0] & rs1_d[5'h00] & rs2_d[5'h00] & opcode_31_25_d[7'h00];

    assign alu_op[ 0] = inst_add  | inst_addi | inst_auipc | inst_jal | inst_sb  |
                        inst_jarl | inst_lw   | inst_lbu   | inst_lh  | inst_lhu |
                        inst_sw   | inst_sh   | inst_lb;
    assign alu_op[ 1] = inst_sub;
    assign alu_op[ 2] = inst_slt;
    assign alu_op[ 3] = inst_sltu | inst_sltiu;
    assign alu_op[ 4] = inst_and  | inst_andi;
    assign alu_op[ 5] = inst_or   | inst_ori;
    assign alu_op[ 6] = inst_xor  | inst_xori;
    assign alu_op[ 7] = inst_slli | inst_sll;
    assign alu_op[ 8] = inst_srli | inst_srl;
    assign alu_op[ 9] = inst_srai | inst_sra;
    assign alu_op[10] = inst_lui;

    assign alu_op[11] = inst_bne;
    assign alu_op[12] = inst_beq;
    assign alu_op[13] = inst_bge;
    assign alu_op[14] = inst_bgeu;
    assign alu_op[15] = inst_blt;
    assign alu_op[16] = inst_bltu;

    assign TYPE_R = inst_add    | inst_and  | inst_sub | inst_or    | inst_xor  | 
                    inst_sra    | inst_srl  | inst_slt | inst_sltu  | inst_sll;
    assign TYPE_I = inst_addi   | inst_jarl | inst_lw  | inst_sltiu | inst_srai | 
                    inst_lbu    | inst_lh   | inst_lhu |inst_andi   | inst_xori | 
                    inst_srli   | inst_slli | inst_lb  | inst_ori   | inst_csrrw|
                    inst_csrrs  | inst_fence_i;
    assign TYPE_S = inst_sw     | inst_sh   | inst_sb;
    assign TYPE_B = inst_bne    | inst_beq  | inst_bge | inst_bgeu  | inst_blt  | inst_bltu;
    assign TYPE_U = inst_auipc  | inst_lui;
    assign TYPE_J = inst_jal;
    assign TYPE_N = inst_ebreak | inst_waiting;

    assign imm = ({32{TYPE_I}} & immI)
               | ({32{TYPE_S}} & immS)
               | ({32{TYPE_B}} & immB)
               | ({32{TYPE_U}} & immU)
               | ({32{TYPE_J}} & immJ);

    assign gpr_we_r = inst_add  | inst_and  | inst_sub  | inst_or    | inst_xor  | 
                      inst_sra  | inst_srl  | inst_slt  | inst_sltu  | inst_sll  | 
                      inst_addi | inst_jarl | inst_sltiu| inst_srai  | inst_andi | 
                      inst_xori | inst_srli | inst_slli | inst_ori   | inst_csrrw|
                      inst_csrrs| inst_jal  | inst_auipc| inst_lui   | inst_lw   |
                      inst_lbu  | inst_lh   | inst_lhu  | inst_lb;
    assign rlsu_we  = inst_lw | inst_lbu | inst_lh  | inst_lhu   | inst_lb;
    assign wlsu_we  = inst_sw | inst_sh  | inst_sb;
    assign bit_sext   = inst_lb;
    assign half_sext  = inst_lh;

    assign src1_is_pc    = inst_jal | inst_auipc | TYPE_B;
    assign src2_is_imm   = TYPE_I     |
                           inst_sw    |
                           inst_sh    |
                           inst_sb    |
                           inst_lui   |
                           inst_auipc |
                           inst_jal   |
                           TYPE_B     |   //B型指令使用参数类型都一致
                           inst_jarl  ;

    assign sw_sh_sb = {inst_sw, inst_sh, inst_sb};
    assign lw_lh_lb = {inst_lw, (inst_lh | inst_lhu), (inst_lb | inst_lbu)};
                      
    assign is_pc_jump   = inst_jal | inst_jarl | TYPE_B | inst_ecall | inst_mret;
    assign double_cal   = TYPE_B;
    assign ebreak       = inst_ebreak;
    assign is_fence_i   = inst_fence_i;

    assign csr_w_gpr_we = inst_csrrw | inst_csrrs;
    assign csrrw_op     = inst_csrrw;
    assign csrrs_op     = inst_csrrs;
    assign ecall_en     = inst_ecall;
    assign mret_en      = inst_mret;
    assign is_csr_op    = inst_csrrw | inst_csrrs | inst_ecall | inst_mret;
    assign csrs_mtvec_wen     = (imm[11:0] == MTVEC) & is_csr_op;
    assign csrs_mepc_wen      = (imm[11:0] == MEPC) & is_csr_op;
    assign csrs_mstatus_wen   = (imm[11:0] == MSTATUS) & is_csr_op;
    assign csrs_mcause_wen    = (imm[11:0] == MCAUSE) & is_csr_op;
    assign csrs_mvendorid_wen = (imm[11:0] == MVENDORID) & is_csr_op;
    assign csrs_marchid_wen   = (imm[11:0] == MARCHID) & is_csr_op;

    assign inst_not_realize = ~(TYPE_B | TYPE_I | TYPE_J | TYPE_N | TYPE_R | TYPE_S | TYPE_U | inst_ecall | inst_mret);

    always @(*) begin
        case (state)
            IDLE: next_state = (ifu_valid & idu_ready) ? BUSY : IDLE;
            BUSY: next_state = (idu_valid & exu_ready) ? IDLE : BUSY;
            default: next_state = IDLE;
        endcase
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            idu_valid <= 1'b0;
            idu_ready <= 1'h1;
            du_to_eu_bus <= `DU_TO_EU_BUS_WD'b0;
            du_to_gu_bus <= `DU_TO_GU_BUS_WD'b0;
            du_to_lu_bus <= `DU_TO_LU_BUS_WD'b0;
            du_to_wu_bus <= `DU_TO_WU_BUS_WD'b0;
        end else begin
            state <= next_state;

            case (state)
                IDLE: begin
                    if (ifu_valid & idu_ready) begin
                        inst_r <= inst;
                        idu_ready <= 1'b0;
                    end
                    idu_valid <= 1'b0;
                end
                BUSY: begin
                    if (exu_ready) begin
                        inst_s <= inst_sw | inst_sh | inst_sb;
                        inst_l <= inst_lw | inst_lh | inst_lb | inst_lhu | inst_lbu;
                        gpr_we <= gpr_we_r;
                        du_to_eu_bus <= {
                            is_fence_i,         
                            imm,             
                            alu_op,             
                            src1_is_pc,      
                            src2_is_imm,     
                            is_pc_jump,      
                            double_cal,      
                            ebreak,          
                            inst_not_realize,
                            ecall_en,
                            mret_en,
                            csrrs_op,
                            csrrw_op
                        };
                        du_to_gu_bus <= {
                            pc,
                            rd,
                            rs1,             
                            rs2,
                            csrs_mtvec_wen,
                            csrs_mepc_wen,
                            csrs_mstatus_wen,
                            csrs_mcause_wen,
                            csrs_mvendorid_wen,
                            csrs_marchid_wen,
                            ecall_en,
                            mret_en       
                        };
                        du_to_lu_bus <= {
                            lw_lh_lb,   
                            sw_sh_sb,
                            rlsu_we,         
                            wlsu_we   
                        };
                        du_to_wu_bus <= {
                            lw_lh_lb,  
                            bit_sext,        
                            half_sext,
                            gpr_we,
                            rlsu_we,        
                            csr_w_gpr_we
                        };
                        idu_valid <= 1'b1;
                        idu_ready <= 1'b1;
                    end
                end
            endcase
        end
    end

endmodule
