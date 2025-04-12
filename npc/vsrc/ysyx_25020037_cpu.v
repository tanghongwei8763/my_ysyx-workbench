module ysyx_25020037_cpu (
    input               clk,
    input               rst,
    output  wire [31: 0] inst,
    output  wire [31: 0] pc,
    output  reg  [31: 0] regs [31:0]
);


    wire [ 4: 0] rs1;
    wire [ 4: 0] rs2;
    wire { 4: 0} rd;
    wire [31: 0] src1;
    wire [31: 0] src2;
    wire [31: 0] alu_src1;
    wire [31: 0] alu_src2;
    wire [31: 0] alu_result;
    wire [31: 0] imm;
    wire [10: 0] alu_op;
    wire         gpr_we;
    wire         rmem_we;
    wire         wmem_we;

    wire         src1_is_pc;
    wire         src2_is_imm;

    wire         exec_is_end;

    wire [31: 0] final_result;
    
    
    wire [31: 0] dnpc;

    reg rst_delay;
    always @(posedge clk) begin
        rst_delay <= ~rst;
    end

    ysyx_25020037_Reg #(32, 32'h80000000) PC (
        .clk(clk),
        .rst(rst),
        .din(dnpc),
        .dout(pc),
        .wen_gpr(rst_delay)
    );

    ysyx_25020037_gpr gpr_cpu (
        .clk         (clk         ),
        .rst         (rst         ),
        .wdata       (final_result),
        .rs1         (rs1         ),
        .rs2         (rs2         ),
        .src1        (src1        ),
        .src2        (src2        ),
        .regs        (regs        ),
        .waddr       (rd          ),
        .we          (gpr_we      )
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
        .rmem_we     (rmem_we    ),
        .wmem_we     (wmem_we    ),
        .src1_is_pc  (src1_is_pc ),
        .src2_is_imm (src2_is_imm),
        .exec_is_end (exec_is_end)
        );

    ysyx_25020037_wbu wbu_cpu(
        .rst(rst),
        .result(result),
        .rdata_lsu(rdata_lsu),
        .TYPE_type(TYPE_type),
        .wdata_gpr(wdata_gpr),
        .wen_gpr(wen_gpr)
        );

    parameter TYPE_S = 3'b010;
    reg [31:0] wdata_lsu, waddr_lsu, raddr_lsu, rdata_lsu, rlen_lsu, wlen_lsu;
    reg wen_lsu, ren_lsu;
    assign wen_lsu = (TYPE_type == TYPE_S);
    assign ren_lsu = 1'b0;

    assign wdata_lsu = src2;
    assign waddr_lsu = src1 + imm;
    assign raddr_lsu = src1 + imm;

    ysyx_25020037_lsu lsu_cpu(
        .clk(clk),
        .rst(rst),
        .wdata_lsu(wdata_lsu),
        .waddr_lsu(waddr_lsu),
        .raddr_lsu(raddr_lsu),
        .rdata_lsu(rdata_lsu),
        .rlen_lsu(rlen_lsu),
        .wlen_lsu(wlen_lsu),
        .wen_lsu(wen_lsu),
        .ren_lsu(ren_lsu)
    );

    ysyx_25020037_exu exu_cpu(
        .rst            (rst         ),
        .src1           (src1        ),
        .src2           (src2        ),
        .imm            (imm         ),
        .pc             (pc          ),
        .alu_op         (alu_op      ),
        .exec_is_end    (exec_is_end ),
        .dnpc           (dnpc        ),
        .result         (final_result)
    );

endmodule
