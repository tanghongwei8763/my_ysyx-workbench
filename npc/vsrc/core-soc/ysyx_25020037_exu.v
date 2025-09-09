`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

module ysyx_25020037_exu (
    input  wire         clk,
    input  wire         rst,
    input  wire         idu_valid,
    input  wire         lsu_ready,
    output reg          exu_valid,
    output wire         exu_ready,
    input  wire [31: 0] rdata_processed,
    input  wire [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus,
    output reg  [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus,
    output reg  [`EU_TO_IC_BUS_WD -1:0] eu_to_ic_bus,
    input  wire         pc_updata,
    output reg          exu_dnpc_valid,
    output reg  [31: 0] exu_dnpc
);
`ifdef VERILATOR
    import "DPI-C" function void hit(input int inst_not_realize);
`endif

    parameter MSTATUS   = 12'h300;
    parameter MTVEC     = 12'h305;
    parameter MEPC      = 12'h341;
    parameter MCAUSE    = 12'h342;
    parameter MVENDORID = 12'hF11;
    parameter MARCHID   = 12'hF12;

    localparam BYPASS_DEPTH = 4;
    reg [ 3:0] bypass_rd[     BYPASS_DEPTH-1:0];
    reg [31:0] bypass_data[   BYPASS_DEPTH-1:0];
    reg        bypass_is_load[BYPASS_DEPTH-1:0];

    wire [31: 0] src1;
    wire [31: 0] src2;
    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire [31: 0] pc;
    wire [ 1: 0] lw_lh_lb;
    wire [ 1: 0] sw_sh_sb;
    wire         is_fence_i;
    wire [31: 0] imm;
    wire [ 3: 0] rd;
    wire [ 3: 0] rs1;
    wire [ 3: 0] rs2;
    wire [31: 0] src1_r;
    wire [31: 0] src2_r;
    wire         is_write;
    wire         is_read;
    wire         gpr_we;
    wire [16: 0] alu_op;
    wire         src1_is_pc;
    wire         src2_is_imm;
    wire         is_pc_jump;
    wire         double_cal;
    wire         ebreak;
    wire         ecall_en;
    wire         mret_en;
    wire [31: 0] csr_data;
    wire         csrrs_op;
    wire         csrrw_op;
    assign {du_to_lu_bus,
            pc,
            lw_lh_lb,
            sw_sh_sb,
            is_fence_i,
            imm,
            rd,
            rs1,
            rs2,
            src1_r,
            src2_r, 
            is_write,
            is_read,
            gpr_we,
            alu_op,
            src1_is_pc,
            src2_is_imm,
            is_pc_jump,
            double_cal,
            ebreak,
            ecall_en,
            mret_en,
            csr_data,
            csrrs_op,
            csrrw_op
           } = du_to_eu_bus;

    wire   csr_w_gpr_we;
    wire   csrs_mtvec_wen;
    wire   csrs_mepc_wen;
    wire   csrs_mstatus_wen;
    wire   csrs_mcause_wen;

    assign csr_w_gpr_we = csrrs_op | csrrw_op;
    assign csrs_mtvec_wen     = (imm[11:0] == MTVEC) & csr_w_gpr_we;
    assign csrs_mepc_wen      = (imm[11:0] == MEPC) & csr_w_gpr_we;
    assign csrs_mstatus_wen   = (imm[11:0] == MSTATUS) & csr_w_gpr_we;
    assign csrs_mcause_wen    = (imm[11:0] == MCAUSE) & csr_w_gpr_we;

    wire [`EU_TO_GU_BUS_WD -1:0] eu_to_gu_bus;
    wire [`EU_TO_WU_BUS_WD -1:0] eu_to_wu_bus;
    assign eu_to_gu_bus = {
        //pc,
        //rd[3:0],
        csrs_mtvec_wen,
        csrs_mepc_wen,
        csrs_mstatus_wen,
        csrs_mcause_wen
        //inst_ecall,
        //inst_mret       
    };
    assign eu_to_wu_bus = {
        //gpr_we,
        //rlsu_we,        
        csr_w_gpr_we
        //csr_data
    };
    reg src1_wait;
    reg src2_wait;
    reg [31:0] bypass_src1;
    reg [31:0] bypass_src2;
    integer i;
    always @(*) begin
        bypass_src1 = src1_r;
        src1_wait = 1'b0;
        for (i = BYPASS_DEPTH - 1; i >= 0; i = i - 1) begin
            if ((bypass_rd[i] == rs1) & (rs1 != 4'd0)) begin
                bypass_src1 = bypass_data[i];
                if (bypass_is_load[i]) begin
                    src1_wait = 1'b1;
                end
            end
        end
    end

    always @(*) begin
        bypass_src2 = src2_r;
        src2_wait = 1'b0;
        for (i = BYPASS_DEPTH - 1; i >= 0; i = i - 1) begin
            if ((bypass_rd[i] == rs2) & (rs2 != 4'd0)) begin
                bypass_src2 = bypass_data[i];
                if (bypass_is_load[i]) begin
                    src2_wait = 1'b1;
                end
            end
        end
    end

    assign src1 = bypass_src1;
    assign src2 = bypass_src2;
    assign exu_ready = lsu_ready & !src1_wait & !src2_wait;

    wire [31: 0] dnpc_r;
    wire [31: 0] result;
    wire [31: 0] alu_src1;
    wire [31: 0] alu_src2;
    wire [31: 0] alu_src3;
    wire [31: 0] alu_src4;
    wire [31: 0] alu_result1;
    wire         alu_result2;
    wire [31: 0] csr_wcsr_data;

    assign alu_src1 = src1_is_pc  ? pc  : src1;
    assign alu_src2 = src2_is_imm ? imm : src2;
    assign alu_src3 = src1;
    assign alu_src4 = src2;

    ysyx_25020037_alu alu_cpu(
        .double_cal     (double_cal ),
        .alu_op         (alu_op     ),
        .alu_src1       (alu_src1   ),
        .alu_src2       (alu_src2   ),
        .alu_src3       (alu_src3   ),
        .alu_src4       (alu_src4   ),
        .alu_result1    (alu_result1),
        .alu_result2    (alu_result2)
        );

    assign csr_wcsr_data    = ({32{csrrw_op}} & src1)
                            | ({32{csrrs_op}} & (src1 | csr_data));
    assign dnpc_r           = ({32{ecall_en   | mret_en    }} & csr_data)
                            | ({32{is_pc_jump & alu_result2}} & alu_result1);

    assign result    = is_pc_jump ? pc + 32'h4 : alu_result1;

    always @(posedge clk) begin
        if (lsu_ready) begin
            for (i = 0; i < BYPASS_DEPTH; i = i + 1) begin
                if (bypass_is_load[i]) begin
                    bypass_data[i]    = rdata_processed;
                    bypass_is_load[i] = 1'b0;
                end
            end
        end
        if (exu_ready && idu_valid && !exu_dnpc_valid) begin
            for (i = BYPASS_DEPTH - 1; i > 0; i = i - 1) begin
                bypass_rd[i]       <= bypass_rd[i - 1];
                bypass_data[i]     <= bypass_data[i - 1];
                bypass_is_load[i]  <= bypass_is_load[i - 1];
            end
            bypass_rd[0]       <= gpr_we ? rd      : bypass_rd[0];
            bypass_data[0]     <= gpr_we ? (csrrs_op | csrrw_op) ? csr_data : result : bypass_data[0];
            bypass_is_load[0]  <= gpr_we ? is_read : bypass_is_load[0];
        end
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            exu_dnpc_valid <=1'b0;
            eu_to_lu_bus <= 'b0;
        end else begin
            if(exu_ready) begin
                if(dnpc_r != 32'b0 && ~exu_dnpc_valid) begin
                    exu_dnpc_valid <= idu_valid & (dnpc_r != pc + 32'h4);
                    exu_dnpc <= dnpc_r;
                end else if (pc_updata) begin
                    exu_dnpc_valid <=1'b0;
                end
                exu_valid <= 1'b0;
                eu_to_ic_bus <= 'b0;
                eu_to_lu_bus <= 'b0;
                if (idu_valid) begin
                    exu_valid <= exu_dnpc_valid ? 1'b0 : 1'b1;
                    eu_to_lu_bus <= {
                        pc,
                        rd,
                        ecall_en,
                        mret_en,
                        eu_to_gu_bus,
                        lw_lh_lb,
                        sw_sh_sb,
                        is_write,
                        is_read,
                        du_to_lu_bus,
                        gpr_we,
                        csr_data,
                        eu_to_wu_bus,  
                        csr_wcsr_data,       
                        result,
                        src2
                    };
                    eu_to_ic_bus <= is_fence_i;
                end
            end
        end
    end

`ifdef VERILATOR
    always @(*) begin
       if(~exu_dnpc_valid & idu_valid & ebreak) begin hit(32'b0); end
    end
`endif
endmodule
