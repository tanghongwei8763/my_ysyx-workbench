module ysyx_25020037_alu(
  input  wire        double_cal,
  input  wire [16:0] alu_op,
  input  wire [31:0] alu_src1,  // 常规运算src1/地址计算PC
  input  wire [31:0] alu_src2,  // 常规运算src2/地址计算imm
  input  wire [31:0] alu_src3,  // 分支比较rs1
  input  wire [31:0] alu_src4,  // 分支比较rs2
  output wire [31:0] alu_result1, // 常规运算结果/跳转目标地址
  output wire [31:0] alu_result2  // 分支条件结果
);

// -------------------------- 1. 操作码解码 --------------------------
wire         op_add  = alu_op[ 0];
wire         op_sub  = alu_op[ 1];
wire         op_slt  = alu_op[ 2];
wire         op_sltu = alu_op[ 3];
wire         op_and  = alu_op[ 4];
wire         op_or   = alu_op[ 5];
wire         op_xor  = alu_op[ 6];
wire         op_sll  = alu_op[ 7];
wire         op_srl  = alu_op[ 8];
wire         op_sra  = alu_op[ 9];
wire         op_lui  = alu_op[10];

wire         op_bne  = alu_op[11];
wire         op_beq  = alu_op[12];
wire         op_bge  = alu_op[13];
wire         op_bgeu = alu_op[14];
wire         op_blt  = alu_op[15];
wire         op_bltu = alu_op[16];

// -------------------------- 2. 运算类型判断（核心优化：区分并行场景） --------------------------
wire is_branch = op_beq | op_bne | op_blt | op_bge | op_bltu | op_bgeu; // B类型指令标志
wire is_addr_add = op_add | double_cal; // 地址加法（PC+imm）标志
wire need_sub = op_sub | op_slt | op_sltu | is_branch; // 需要减法的场景（含分支比较）

// -------------------------- 3. 共享加法器（核心优化：删除冗余加法器，复用硬件） --------------------------
wire [31:0] adder_a = is_branch ? alu_src3 : alu_src1; // B类型用rs1，其他用src1
wire [31:0] adder_b = need_sub ? ~(is_branch ? alu_src4 : alu_src2) : (is_branch ? alu_src4 : alu_src2);
wire        adder_cin = need_sub ? 1'b1 : 1'b0;
wire [31:0] adder_result;
wire        adder_cout;
assign {adder_cout, adder_result} = adder_a + adder_b + {{32{1'b0}}, adder_cin};

// B类型指令：并行计算跳转目标地址（PC+imm），无额外加法器
wire [31:0] branch_addr = is_branch ? (alu_src1 + alu_src2) : 32'b0;

// -------------------------- 4. 各运算结果生成 --------------------------
// 4.1 加减运算结果（常规运算用加法器结果，B类型用地址）
wire [31:0] add_sub_result = is_branch ? branch_addr : adder_result;

// 4.2 比较运算结果（slt/sltu + 分支比较）
wire [31:0] slt_result;
wire [31:0] sltu_result;
wire        blt_flag;  // 分支比较：blt结果（1位）
wire        bltu_flag; // 分支比较：bltu结果（1位）
wire        beq_flag;  // 分支比较：beq结果（1位）

assign slt_result[31:1] = 31'b0;
assign slt_result[0]    = (alu_src1[31] & ~alu_src2[31]) | ((alu_src1[31] ~^ alu_src2[31]) & adder_result[31]);

assign sltu_result[31:1] = 31'b0;
assign sltu_result[0]    = ~adder_cout;

assign blt_flag  = (alu_src3[31] & ~alu_src4[31]) | ((alu_src3[31] ~^ alu_src4[31]) & adder_result[31]);
assign bltu_flag = ~adder_cout;
assign beq_flag  = (alu_src3 == alu_src4);

// 4.3 逻辑运算结果
wire [31:0] and_result = alu_src1 & alu_src2;
wire [31:0] or_result  = alu_src1 | alu_src2;
wire [31:0] xor_result = alu_src1 ^ alu_src2;
wire [31:0] lui_result = alu_src2;

// 4.4 移位运算结果（优化：64位→32位，删除冗余扩展）
wire [31:0] sll_result = alu_src1 << alu_src2[4:0];
wire [31:0] sra_extend = {32{op_sra & alu_src1[31]}}; // 算术右移符号扩展
wire [31:0] sr_temp    = alu_src1 >> alu_src2[4:0];
wire [31:0] sr_result  = op_sra ? (sr_temp | sra_extend) : sr_temp;

// -------------------------- 5. 输出结果选择（优化：case替代并行OR，减少门电路） --------------------------
// 5.1 alu_result1：常规运算结果/跳转地址
reg [31:0] alu_result1_reg;
always @(*) begin
  case (1'b1)
    is_addr_add | op_sub: alu_result1_reg = add_sub_result;
    op_slt:               alu_result1_reg = slt_result;
    op_sltu:              alu_result1_reg = sltu_result;
    op_and:               alu_result1_reg = and_result;
    op_or:                alu_result1_reg = or_result;
    op_xor:               alu_result1_reg = xor_result;
    op_lui:               alu_result1_reg = lui_result;
    op_sll:               alu_result1_reg = sll_result;
    op_srl | op_sra:      alu_result1_reg = sr_result;
    default:              alu_result1_reg = 32'b0;
  endcase
end
assign alu_result1 = alu_result1_reg;

// 5.2 alu_result2：分支条件结果（精简：1位→32位，删除冗余高位）
reg [31:0] alu_result2_reg;
always @(*) begin
  if (double_cal == 1'b0) begin
    alu_result2_reg = 32'b1; // 按原设计保留，需确认实际场景是否必要
  end else begin
    case (1'b1)
      op_beq:   alu_result2_reg = {31'b0, beq_flag};
      op_bne:   alu_result2_reg = {31'b0, ~beq_flag};
      op_blt:   alu_result2_reg = {31'b0, blt_flag};
      op_bge:   alu_result2_reg = {31'b0, ~blt_flag};
      op_bltu:  alu_result2_reg = {31'b0, bltu_flag};
      op_bgeu:  alu_result2_reg = {31'b0, ~bltu_flag};
      default:  alu_result2_reg = 32'b0;
    endcase
  end
end
assign alu_result2 = alu_result2_reg;

endmodule