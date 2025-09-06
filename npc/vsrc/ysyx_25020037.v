module ysyx_25020037 (
    input   wire         clock,
    input   wire         reset
);

    parameter MSTATUS = 32'h300;
    parameter MTVEC   = 32'h305;
    parameter MEPC    = 32'h341;
    parameter MCAUSE  = 32'h342;

    wire [31: 0] pc;
    wire [31: 0] inst;
    wire [ 3: 0] rs1;
    wire [ 3: 0] rs2;
    wire [ 3: 0] rd;
    wire [31: 0] src1;
    wire [31: 0] src2;
    wire [31: 0] imm;
    wire [ 1: 0] alu_op;
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

    wire         rw_word_1;
    wire         rw_word_4;
    wire         src2_is_imm;
    wire         is_pc_jump;

    wire         exec_is_end;
    wire         inst_not_realize;

    wire [31: 0] result;
    wire [31: 0] final_result; 
    wire [31: 0] dnpc;

    assign rlsu_addr  = result;
    assign rlsu_len   = ({32{rw_word_1}} & 32'h1)
                      | ({32{rw_word_4}} & 32'h4);
    assign wlsu_addr  = result;
    assign wlsu_len   = ({32{rw_word_1}} & 32'h1)
                      | ({32{rw_word_4}} & 32'h4);
    assign wlsu_data  = src2;

    ysyx_25020037_Reg #(32, 32'h80000000) PC (
        .clk         (clock    ),
        .rst         (reset    ),
        .din         (dnpc     ),
        .dout        (pc       ),
        .wen         (~reset   )
    );

    ysyx_25020037_gpr gpr_cpu (
        .clk              (clock           ),
        .rst              (reset           ),
        .pc               (pc              ),
        .gpr_wdata        (final_result    ),
        .rs1              (rs1             ),
        .rs2              (rs2             ),
        .src1             (src1            ),
        .src2             (src2            ),
        .gpr_waddr        (rd              ),
        .gpr_wen          (final_gpr_we    )  
    );          
    
    ysyx_25020037_ifu ifu_cpu(
        .rst  (reset ),
        .pc   (pc    ),
        .inst (inst  )
        );
    
    ysyx_25020037_idu idu_cpu(
        .inst        (inst       ),
        .rs1_r       (rs1        ),
        .rs2_r       (rs2        ),
        .rd_r        (rd         ),
        .imm         (imm        ),
        .alu_op      (alu_op     ),
        .gpr_we      (gpr_we     ),
        .rlsu_we     (rlsu_we    ),
        .wlsu_we     (wlsu_we    ),
        .rw_word_1   (rw_word_1  ),
        .rw_word_4   (rw_word_4  ),
        .src2_is_imm (src2_is_imm),
        .is_pc_jump  (is_pc_jump ),
        .exec_is_end (exec_is_end),
        .inst_not_realize(inst_not_realize)
        );

    ysyx_25020037_wbu wbu_cpu(
        .rst          (reset          ),
        .gpr_we       (gpr_we         ),
        .rlsu_we      (rlsu_we        ),
        .result       (result         ),
        .rlsu_data    (rlsu_data      ),
        .final_gpr_we (final_gpr_we   ),
        .final_result (final_result   )
        );

    ysyx_25020037_lsu lsu_cpu(
        .clk         (clock      ),
        .rst         (reset      ),
        .rlsu_addr   (rlsu_addr  ),
        .rlsu_len    (rlsu_len   ),
        .wlsu_addr   (wlsu_addr  ),
        .wlsu_len    (wlsu_len   ),
        .wlsu_data   (wlsu_data  ),
        .rlsu_we     (rlsu_we    ),
        .wlsu_we     (wlsu_we    ),
        .rlsu_data   (rlsu_data  )
    );

    ysyx_25020037_exu exu_cpu(
        .src1        (src1        ),
        .src2        (src2        ),
        .imm         (imm         ),
        .pc          (pc          ),
        .alu_op      (alu_op      ),
        .src2_is_imm (src2_is_imm ),
        .is_pc_jump  (is_pc_jump  ),
        .exec_is_end (exec_is_end ),
        .inst_not_realize(inst_not_realize),
        .dnpc        (dnpc        ),
        .result      (result      )
    );

endmodule
