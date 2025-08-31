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

    localparam BYPASS_DEPTH = 4;
    localparam RD_WD = 4;         // rd寄存器地址位宽
    localparam DATA_WD = 32;      // 数据位宽
    
    // 合并后的旁路寄存器（按BYPASS_DEPTH倍数扩展）
    reg [RD_WD*BYPASS_DEPTH-1:0]   bypass_rd;        // 4*4=16bit：[15:12], [11:8], [7:4], [3:0]
    reg [DATA_WD*BYPASS_DEPTH-1:0] bypass_data;      // 32*4=128bit：[159:128], ..., [31:0]
    reg [BYPASS_DEPTH-1:0]         bypass_valid;     // 4bit：[3], [2], [1], [0]
    reg [BYPASS_DEPTH-1:0]         bypass_is_load;   // 4bit：[3], [2], [1], [0]

    wire [31: 0] src1;
    wire [31: 0] src2;
    wire [`DU_TO_GU_BUS_WD -1:0] du_to_gu_bus;
    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire [`DU_TO_WU_BUS_WD -1:0] du_to_wu_bus;
    wire [31: 0] pc;
    wire         inst_l;
    wire         inst_s;
    wire         is_fence_i;
    wire [31: 0] imm;
    wire [ 3: 0] rd;
    wire [ 3: 0] rs1;
    wire [ 3: 0] rs2;
    wire [31: 0] src1_r;
    wire [31: 0] src2_r;
    wire         gpr_we;
    wire [16: 0] alu_op;
    wire         src1_is_pc;
    wire         src2_is_imm;
    wire         is_pc_jump;
    wire         double_cal;
    wire         ebreak;
    wire         inst_not_realize;
    wire         ecall_en;
    wire         mret_en;
    wire [31: 0] csr_data;
    wire         csrrs_op;
    wire         csrrw_op;
    assign {du_to_gu_bus,
            du_to_lu_bus,
            du_to_wu_bus,
            pc,
            inst_l,
            inst_s,
            is_fence_i,
            imm,
            rd,
            rs1,
            rs2,
            src1_r,
            src2_r, 
            gpr_we,
            alu_op,
            src1_is_pc,
            src2_is_imm,
            is_pc_jump,
            double_cal,
            ebreak,
            inst_not_realize,
            ecall_en,
            mret_en,
            csr_data,
            csrrs_op,
            csrrw_op
           } = du_to_eu_bus;

    reg src1_wait;
    reg src2_wait;
    reg [31:0] bypass_src1;
    reg [31:0] bypass_src2;
    integer i;
    always @(*) begin
        bypass_src1 = src1_r;
        src1_wait = 1'b0;
        if (bypass_valid[3] && (bypass_rd[RD_WD*3 +: RD_WD] == rs1) && (rs1 != 4'd0)) begin
            bypass_src1 = bypass_data[DATA_WD*3 +: DATA_WD];
            src1_wait = bypass_is_load[3];
        end else if (bypass_valid[2] && (bypass_rd[RD_WD*2 +: RD_WD] == rs1) && (rs1 != 4'd0)) begin
            bypass_src1 = bypass_data[DATA_WD*2 +: DATA_WD];
            src1_wait = bypass_is_load[2];
        end else if (bypass_valid[1] && (bypass_rd[RD_WD*1 +: RD_WD] == rs1) && (rs1 != 4'd0)) begin
            bypass_src1 = bypass_data[DATA_WD*1 +: DATA_WD];
            src1_wait = bypass_is_load[1];
        end else if (bypass_valid[0] && (bypass_rd[RD_WD*0 +: RD_WD] == rs1) && (rs1 != 4'd0)) begin
            bypass_src1 = bypass_data[DATA_WD*0 +: DATA_WD];
            src1_wait = bypass_is_load[0];
        end
    end

    always @(*) begin
        bypass_src2 = src2_r;
        src2_wait = 1'b0;
        if (bypass_valid[3] && (bypass_rd[RD_WD*3 +: RD_WD] == rs2) && (rs2 != 4'd0)) begin
            bypass_src2 = bypass_data[DATA_WD*3 +: DATA_WD];
            src2_wait = bypass_is_load[3];
        end else if (bypass_valid[2] && (bypass_rd[RD_WD*2 +: RD_WD] == rs2) && (rs2 != 4'd0)) begin
            bypass_src2 = bypass_data[DATA_WD*2 +: DATA_WD];
            src2_wait = bypass_is_load[2];
        end else if (bypass_valid[1] && (bypass_rd[RD_WD*1 +: RD_WD] == rs2) && (rs2 != 4'd0)) begin
            bypass_src2 = bypass_data[DATA_WD*1 +: DATA_WD];
            src2_wait = bypass_is_load[1];
        end else if (bypass_valid[0] && (bypass_rd[RD_WD*0 +: RD_WD] == rs2) && (rs2 != 4'd0)) begin
            bypass_src2 = bypass_data[DATA_WD*0 +: DATA_WD];
            src2_wait = bypass_is_load[0];
        end
    end

    assign src1 = bypass_src1;
    assign src2 = bypass_src2;
    assign exu_ready = lsu_ready && !src1_wait && !src2_wait;

    wire [31: 0] dnpc_r;
    wire [31: 0] result;
    wire [31: 0] alu_src1;
    wire [31: 0] alu_src2;
    wire [31: 0] alu_src3;
    wire [31: 0] alu_src4;
    wire [31: 0] alu_result1;
    wire [31: 0] alu_result2;
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
    assign dnpc_r = (ecall_en | mret_en) ? csr_data :
                    is_pc_jump           ? (alu_result2 == 32'b1) ? alu_result1 : 32'b0
                                         : 32'b0;

    assign result    = is_pc_jump ? pc + 32'h4 : alu_result1;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            bypass_rd        <= {RD_WD*BYPASS_DEPTH{1'b0}};
            bypass_data      <= {DATA_WD*BYPASS_DEPTH{1'b0}};
            bypass_valid     <= {BYPASS_DEPTH{1'b0}};
            bypass_is_load   <= {BYPASS_DEPTH{1'b0}};
        end else begin
            // 处理加载指令的数据回填（保持逻辑不变）
            if (lsu_ready) begin
                for (int i = 0; i < BYPASS_DEPTH; i++) begin
                    if (bypass_valid[i] && bypass_is_load[i]) begin
                        bypass_data[DATA_WD*i +: DATA_WD] <= rdata_processed;
                        bypass_is_load[i] <= 1'b0;
                    end
                end
            end

            // 旁路寄存器移位更新（用移位替代for循环）
            if (exu_ready && idu_valid && !exu_dnpc_valid) begin
                // 整体左移一个位置（丢弃最深项，保留[BYPASS_DEPTH-2:0] → [BYPASS_DEPTH-1:1]）
                bypass_rd      <= {bypass_rd[RD_WD*(BYPASS_DEPTH-1)-1:0], {RD_WD{1'b0}}};
                bypass_data    <= {bypass_data[DATA_WD*(BYPASS_DEPTH-1)-1:0], {DATA_WD{1'b0}}};
                bypass_valid   <= {bypass_valid[BYPASS_DEPTH-2:0], 1'b0};
                bypass_is_load <= {bypass_is_load[BYPASS_DEPTH-2:0], 1'b0};

                // 写入新数据到第0项（最低位）
                if (gpr_we) begin
                    bypass_rd[RD_WD*0 +: RD_WD]      <= rd;
                    bypass_data[DATA_WD*0 +: DATA_WD] <= inst_l ? 32'b0 : (csrrs_op | csrrw_op) ? csr_data : result;
                    bypass_valid[0]                  <= 1'b1;
                    bypass_is_load[0]                <= inst_l;
                end
            end
        end
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            exu_valid <= 0;
            eu_to_lu_bus <= `EU_TO_LU_BUS_WD'b0;
            eu_to_ic_bus <= `EU_TO_IC_BUS_WD'b0;
            exu_dnpc_valid <=1'b0;
            exu_dnpc <= 32'b0;
        end else begin
            if(exu_ready) begin
                if(dnpc_r != 32'b0 && exu_dnpc_valid == 1'b0) begin
                    exu_dnpc_valid <= idu_valid & (dnpc_r != pc + 32'h4);
                    exu_dnpc <= dnpc_r;
                end else if (pc_updata) begin
                    exu_dnpc_valid <=1'b0;
                    exu_dnpc <= 32'b0;
                end
                exu_valid <= 1'b0;
                eu_to_ic_bus <= 'b0;
                eu_to_lu_bus <= 'b0;
                if (idu_valid) begin
                    exu_valid <= exu_dnpc_valid ? 1'b0 : 1'b1;
                    eu_to_lu_bus <= {
                        du_to_gu_bus,
                        du_to_lu_bus,
                        du_to_wu_bus,  
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
       if(~exu_dnpc_valid & idu_valid & (ebreak | inst_not_realize)) begin hit({32{inst_not_realize}}); end
    end
`endif
endmodule
