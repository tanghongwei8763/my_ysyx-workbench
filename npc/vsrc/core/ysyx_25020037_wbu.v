`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_config.vh"

module ysyx_25020037_wbu (
    input  wire         lsu_valid,
    input  wire         inst_l,
    input  wire         inst_s,
    input  wire         gpr_ready,
    output reg          wbu_valid,
    output reg          wbu_ready,
    input  wire         clk,
    input  wire         rst,
    input  wire [`DU_TO_WU_BUS_WD -1:0] du_to_wu_bus,
    input  wire [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus,
    input  wire [31: 0] csr_wgpr_data,
    output reg  [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus
);
    
    localparam IDLE   = 1'b0;
    localparam BUSY   = 1'b1;
    reg state, next_state;

    reg  [`DU_TO_WU_BUS_WD -1:0] du_to_wu_bus_r;
    reg  [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus_r;
    wire [ 2: 0] lw_lh_lb;
    wire         bit_sext;
    wire         half_sext;
    wire         gpr_we;
    wire         rlsu_we;
    wire         csr_w_gpr_we;
    assign {lw_lh_lb,  
            bit_sext, 
            half_sext,
            gpr_we,
            rlsu_we,
            csr_w_gpr_we
           } = du_to_wu_bus_r;
    wire [31: 0] result;
    assign result = inst_l ? (lu_to_wu_bus_r[31: 0] >> ((lu_to_wu_bus_r[63:32] & 32'b11) << 3)) : lu_to_wu_bus_r[31: 0];

    wire [31:0] rdata_processed;

    assign rdata_processed = (lw_lh_lb == 3'b001) ? 
                             (bit_sext ? {{24{result[ 7]}}, result[ 7:0]} 
                                       : {24'b0          , result[ 7:0]} ) :
                             (lw_lh_lb == 3'b010) ? 
                             (half_sext ? {{16{result[15]}}, result[15:0]} 
                                        : {16'b0          , result[15:0]}) :
                             result;

    wire         final_gpr_we;
    wire [31: 0] final_result;
    assign final_result = rst          ? 32'b0 :
                          csr_w_gpr_we ? csr_wgpr_data :
                          rdata_processed;
    assign final_gpr_we = rst ? 1'b0   : gpr_we | rlsu_we;

    always @(*) begin
        case (state)
            IDLE: next_state = (lsu_valid & wbu_ready) ? BUSY : IDLE;
            BUSY: next_state = (wbu_valid & gpr_ready) ? IDLE : BUSY;
            default: next_state = IDLE;
        endcase
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            wbu_valid <= 1'b0;
            wbu_ready <= 1'b1;
            wu_to_gu_bus <= `WU_TO_GU_BUS_WD'b0;
        end else begin
            state <= next_state;

            case (state)
                IDLE: begin
                    if (lsu_valid) begin
                        lu_to_wu_bus_r <= lu_to_wu_bus;
                        du_to_wu_bus_r <= du_to_wu_bus;
                        wbu_ready <= 1'b0;
                    end
                    wbu_valid <= 1'b0;
                end
                BUSY: begin
                    if (gpr_ready) begin
                        wu_to_gu_bus <= {           
                            final_gpr_we,         
                            final_result 
                        };
                        wbu_valid <= 1'b1;
                        wbu_ready <= 1'b1;
                    end
                end
            endcase
        end
    end

endmodule
