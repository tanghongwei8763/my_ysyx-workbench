module ysyx_25020037_cpu (
    input   wire         clk,
    input   wire         rst,
    output  wire [31: 0] inst,
    output  wire [31: 0] pc,
    output  reg  [31: 0] regs [31:0],
    output  wire [31: 0] mtvec,
    output  wire [31: 0] mepc,
    output  wire [31: 0] mstatus,
    output  wire [31: 0] mcause
);

    parameter CONFIG_FTRACE = 1'b0;
    import "DPI-C" function void call_func(input int pc, input int dnpc);
    import "DPI-C" function void ret_func(input int pc);
    wire         ftrace_jal;
    wire         ftrace_jalr;


    parameter MSTATUS = 32'h300;
    parameter MTVEC   = 32'h305;
    parameter MEPC    = 32'h341;
    parameter MCAUSE  = 32'h342;

    wire [ 4: 0] rs1;
    wire [ 4: 0] rs2;
    wire [ 4: 0] rd;
    wire [31: 0] src1;
    wire [31: 0] src2;
    wire [31: 0] imm;
    wire [16: 0] alu_op;
    wire         gpr_we;
    wire         final_gpr_we;


    wire [31: 0] rlsu_addr;
    wire [31: 0] rlsu_len;
    wire [31: 0] rlsu_data;
    wire [31: 0] wlsu_addr;
    wire [31: 0] wlsu_len;
    wire [31: 0] wlsu_data;
    wire         rlsu_we;
    wire         wlsu_we;
    wire         bit_sext;
    wire         half_sext;

    wire         rw_word_1;
    wire         rw_word_2;
    wire         rw_word_4;
    wire         src1_is_pc;
    wire         src2_is_imm;
    wire         is_pc_jump;
    wire         double_cal;

    wire         exec_is_end;
    wire         inst_not_realize;

    wire         csr_w_gpr_we;
    wire [31: 0] csr_wgpr_data;
    wire [31: 0] csr_wcsr_data;

    wire [31: 0] csr_mtvec_data;
    wire [31: 0] csr_mepc_data;
    wire [31: 0] csr_mstatus_data;
    wire [31: 0] csr_mcause_data;
    wire         csrs_mtvec_wen;
    wire         csrs_mepc_wen;
    wire         csrs_mstatus_wen;
    wire         csrs_mcause_wen;
    wire         csrrw_op;
    wire         csrrs_op;
    wire         ecall_en;
    wire         mret_en;
    wire         is_csr_op;

    wire [31: 0] result;
    wire [31: 0] final_result; 
    wire [31: 0] dnpc;

    assign rlsu_addr  = result;
    assign rlsu_len   = ({32{rw_word_1}} & 32'h1)
                      | ({32{rw_word_2}} & 32'h2)
                      | ({32{rw_word_4}} & 32'h4);
    assign wlsu_addr  = result;
    assign wlsu_len   = ({32{rw_word_1}} & 32'h1)
                      | ({32{rw_word_2}} & 32'h2)
                      | ({32{rw_word_4}} & 32'h4);
    assign wlsu_data  = src2;

    assign csrs_mtvec_wen   = (imm == MTVEC) & is_csr_op;
    assign csrs_mepc_wen    = (imm == MEPC) & is_csr_op;
    assign csrs_mstatus_wen = (imm == MSTATUS) & is_csr_op;
    assign csrs_mcause_wen  = (imm == MCAUSE) & is_csr_op;

    assign csr_wgpr_data    = ({32{imm == MTVEC  }} & mtvec)
                            | ({32{imm == MEPC   }} & mepc)
                            | ({32{imm == MSTATUS}} & mstatus)
                            | ({32{imm == MCAUSE }} & mcause);
    assign csr_wcsr_data    = ({32{csrrw_op      }} & src1)
                            | ({32{csrrs_op      }} & (src1 | csr_wgpr_data));

    ysyx_25020037_Reg #(32, 32'h80000000) PC (
        .clk         (clk      ),
        .rst         (rst      ),
        .din         (dnpc     ),
        .dout        (pc       ),
        .wen         (~rst     )
    );

    ysyx_25020037_gpr gpr_cpu (
        .clk              (clk             ),
        .rst              (rst             ),
        .pc               (pc              ),
        .gpr_wdata        (final_result    ),
        .rs1              (rs1             ),
        .rs2              (rs2             ),
        .src1             (src1            ),
        .src2             (src2            ),
        .regs             (regs            ),
        .gpr_waddr        (rd              ),
        .gpr_wen          (final_gpr_we    ),
        .csr_wcsr_data    (csr_wcsr_data   ),
        .csrs_mtvec_wen   (csrs_mtvec_wen  ),
        .csrs_mepc_wen    (csrs_mepc_wen   ),
        .csrs_mstatus_wen (csrs_mstatus_wen),
        .csrs_mcause_wen  (csrs_mcause_wen ),
        .ecall_en         (ecall_en        ),
        .mret_en          (mret_en         ),
        .mtvec            (mtvec           ),
        .mepc             (mepc            ),
        .mstatus          (mstatus         ),
        .mcause           (mcause          )      
    );          
    
    ysyx_25020037_ifu ifu_cpu(
        .rst  (rst ),
        .pc   (pc  ),
        .inst (inst)
        );
    
    ysyx_25020037_idu idu_cpu(
        .inst        (inst       ),
        .rs1         (rs1        ),
        .rs2         (rs2        ),
        .rd          (rd         ),
        .imm         (imm        ),
        .alu_op      (alu_op     ),
        .gpr_we      (gpr_we     ),
        .rlsu_we     (rlsu_we    ),
        .wlsu_we     (wlsu_we    ),
        .bit_sext    (bit_sext   ),
        .half_sext   (half_sext  ),
        .rw_word_1   (rw_word_1  ),
        .rw_word_2   (rw_word_2  ),
        .rw_word_4   (rw_word_4  ),
        .src1_is_pc  (src1_is_pc ),
        .src2_is_imm (src2_is_imm),
        .is_pc_jump  (is_pc_jump ),
        .double_cal  (double_cal ),
        .exec_is_end (exec_is_end),
        .inst_not_realize(inst_not_realize),
        .csr_w_gpr_we(csr_w_gpr_we),
        .csrrw_op    (csrrw_op   ),
        .csrrs_op    (csrrs_op   ),
        .ecall_en    (ecall_en   ),
        .mret_en     (mret_en    ),
        .is_csr_op   (is_csr_op  ),
        .ftrace_jal  (ftrace_jal ),
        .ftrace_jalr (ftrace_jalr)
        );

    ysyx_25020037_wbu wbu_cpu(
        .rst          (rst          ),
        .gpr_we       (gpr_we       ),
        .rlsu_we      (rlsu_we      ),
        .csr_w_gpr_we (csr_w_gpr_we ),
        .result       (result       ),
        .rlsu_data    (rlsu_data    ),
        .csr_wgpr_data(csr_wgpr_data),
        .final_gpr_we (final_gpr_we ),
        .final_result (final_result )
        );

    ysyx_25020037_lsu lsu_cpu(
        .clk         (clk      ),
        .rst         (rst      ),
        .rlsu_addr   (rlsu_addr),
        .rlsu_len    (rlsu_len ),
        .wlsu_addr   (wlsu_addr),
        .wlsu_len    (wlsu_len ),
        .wlsu_data   (wlsu_data),
        .rlsu_we     (rlsu_we  ),
        .wlsu_we     (wlsu_we  ),
        .bit_sext    (bit_sext ),
        .half_sext   (half_sext),
        .rlsu_data   (rlsu_data)
    );

    ysyx_25020037_exu exu_cpu(
        .src1        (src1        ),
        .src2        (src2        ),
        .imm         (imm         ),
        .pc          (pc          ),
        .alu_op      (alu_op      ),
        .src1_is_pc  (src1_is_pc  ),
        .src2_is_imm (src2_is_imm ),
        .is_pc_jump  (is_pc_jump  ),
        .double_cal  (double_cal  ),
        .exec_is_end (exec_is_end ),
        .inst_not_realize(inst_not_realize),
        .ecall_en    (ecall_en    ),
        .mret_en     (mret_en     ),
        .mtvec       (mtvec       ),
        .mepc        (mepc        ),
        .dnpc        (dnpc        ),
        .result      (result      )
    );

    always @(posedge clk) begin
        if(CONFIG_FTRACE) begin
            if(ftrace_jalr) begin
                if(rd == 5'h1) begin call_func(pc, dnpc); end
                else if(rd == 5'h0 && src1 == regs[1]) begin ret_func(pc); end
            end
            if(ftrace_jal) begin
                if(rd == 5'h1) begin call_func(pc, dnpc); end
            end
        end
    end

endmodule
