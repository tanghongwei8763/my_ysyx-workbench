`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

module ysyx_25020037_exu (
    input  wire         clk,
    input  wire         rst,
    input  wire         inst_l,
    input  wire         inst_s,
    input  wire         idu_valid,
    input  wire         lsu_ready,
    output reg          exu_valid,
    output reg          exu_ready,
    input  wire [31: 0] pc,
    input  wire [`GU_TO_EU_BUS_WD -1:0] gu_to_eu_bus,
    input  wire [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus,
    output reg  [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus,
    output reg  [`EU_TO_IC_BUS_WD -1:0] eu_to_ic_bus,

    output reg  [31: 0] dnpc
);
`ifdef VERILATOR
    import "DPI-C" function void hit(input int inst_not_realize);
`endif
    localparam IDLE  = 1'b0;
    localparam BUSY  = 1'b1;

    reg          state, next_state;
    wire [31: 0] snpc;

    reg  [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus_r;
    reg  [`GU_TO_EU_BUS_WD -1:0] gu_to_eu_bus_r;

    wire         is_fence_i;
    wire [31: 0] imm;
    wire [16: 0] alu_op;
    wire         src1_is_pc;
    wire         src2_is_imm;
    wire         is_pc_jump;
    wire         double_cal;
    wire         ebreak;
    wire         inst_not_realize;
    wire         ecall_en;
    wire         mret_en;
    wire         csrrs_op;
    wire         csrrw_op;
    assign {is_fence_i,
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
           } = du_to_eu_bus_r;

    wire [31: 0] src1;
    wire [31: 0] src2;
    wire [31: 0] mtvec;
    wire [31: 0] mepc;
    assign {src1,
            src2,
            mtvec,
            mepc
           } = gu_to_eu_bus_r;
    wire [31: 0] dnpc_r;
    wire [31: 0] result;
    wire [31: 0] alu_src1;
    wire [31: 0] alu_src2;
    wire [31: 0] alu_src3;
    wire [31: 0] alu_src4;
    wire [31: 0] alu_result1;
    wire [31: 0] alu_result2;

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

    assign snpc   = pc + 32'h4;
    assign dnpc_r = ecall_en    ? mtvec :
                    mret_en     ? mepc  :
                    is_pc_jump  ? (alu_result2 == 32'b1) ? alu_result1 : snpc
                                : snpc;

    assign result    = is_pc_jump ? pc + 32'h4 : alu_result1;

    assign snpc   = pc + 32'h4;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            exu_valid <= 0;
            exu_ready <= 1'b1;
            eu_to_lu_bus <= `EU_TO_LU_BUS_WD'b0;
            eu_to_ic_bus <= `EU_TO_IC_BUS_WD'b0;
            dnpc <= 32'b0;
        end else begin
            state <= next_state;
            
            case (state)
                IDLE: begin
                    if (idu_valid & exu_ready) begin
                        gu_to_eu_bus_r <= gu_to_eu_bus;
                        du_to_eu_bus_r <= du_to_eu_bus;
                        exu_ready <= 1'b0;
                    end
                    exu_valid <= 1'b0;
                    eu_to_ic_bus <= 'b0;
                end
                BUSY: begin
                    if (lsu_ready) begin
                        dnpc <= dnpc_r;
                        eu_to_lu_bus <= {           
                            result,
                            src2
                        };
                        exu_valid <= 1'b1;
                        exu_ready <= 1'b1;
                    end
                    eu_to_ic_bus <= is_fence_i;
                end
            endcase
        end
    end

    always @(*) begin
        case (state)
            IDLE: next_state = (idu_valid & exu_ready) ? BUSY : IDLE;
            BUSY: next_state = (exu_valid & lsu_ready) ? IDLE : BUSY;
            default: next_state = IDLE;
        endcase
    end
`ifdef VERILATOR
    always @(*) begin
       if(ebreak | inst_not_realize) begin hit({32{inst_not_realize}}); end
    end
`endif
endmodule
