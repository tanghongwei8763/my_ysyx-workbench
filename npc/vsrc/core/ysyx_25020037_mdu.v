`include "ysyx_25020037_config.vh"

module ysyx_25020037_mdu (
    input  wire         clk,
    input  wire         rst,
    input  wire         lsu_ready,
    input  wire         mdu_en,
    input  wire [7:0]   mdu_op,
    input  wire [31:0]  mdu_src1,
    input  wire [31:0]  mdu_src2,
    output wire         mdu_ready,
    output reg  [31:0]  mdu_result
);

wire         op_mul;
wire         op_mulh;
wire         op_mulhsu;
wire         op_mulhu;
wire         op_div;
wire         op_divu;
wire         op_rem;
wire         op_remu;
wire         mul_en;
wire         div_en;

assign op_mul    = mdu_op[0];
assign op_mulh   = mdu_op[1];
assign op_mulhsu = mdu_op[2];
assign op_mulhu  = mdu_op[3];
assign op_div    = mdu_op[4];
assign op_divu   = mdu_op[5];
assign op_rem    = mdu_op[6];
assign op_remu   = mdu_op[7];
assign mul_en    = op_mul | op_mulh | op_mulhsu | op_mulhu;
assign div_en    = op_div | op_divu | op_rem    | op_remu;

wire [31:0] mul_diver_a;
wire [31:0] mul_diver_b;
wire        src1_sign;
wire        src2_sign;
wire        div_zero_flag;
reg         muling;
reg         diving;
reg         mdu_done;
reg  [ 5:0] cnt_n;
reg  [63:0] result;

assign src1_sign     = mdu_src1[31];
assign src2_sign     = mdu_src2[31];
assign mul_diver_a   = ((op_div | op_rem | op_mulh | op_mulhsu) & src1_sign) ? (~mdu_src1 + 1'b1) : mdu_src1;
assign mul_diver_b   = ((op_div | op_rem | op_mulh) & src2_sign) ? (~mdu_src2 + 1'b1) : mdu_src2;
assign div_zero_flag = (mdu_src2 == 32'd0);

wire [31: 0] mul_result;
wire [31: 0] mulh_result;
wire [31: 0] mulhsu_result;
wire [31: 0] mulhu_result;
wire [31: 0] div_result;
wire [31: 0] divu_result;
wire [31: 0] rem_result;
wire [31: 0] remu_result;
wire [31: 0] switch_result;
wire [63: 0] signed_result = ~result + 1'b1;
assign mul_result    = result[31:0];
assign mulh_result   = (src1_sign ^ src2_sign) ? signed_result[63:32] : result[63:32];
assign mulhsu_result = src1_sign ? signed_result[63:32] : result[63:32];
assign mulhu_result  = result[63:32];
assign div_result    = div_zero_flag ? 32'hffffffff : (src1_sign ^ src2_sign) ? ~result[31:0] + 1 : result[31:0];
assign divu_result   = div_zero_flag ? 32'hffffffff : result[31:0];
assign rem_result    = div_zero_flag ? mul_diver_a : src1_sign ? ~result[63:32] + 1 : result[63:32];
assign remu_result   = div_zero_flag ? mul_diver_a : result[63:32];

assign mdu_ready     = mdu_done ? 1'b1 : ~mdu_en;
assign switch_result = ({32{op_mul   }} & mul_result   )
                     | ({32{op_mulh  }} & mulh_result  )
                     | ({32{op_mulhsu}} & mulhsu_result)
                     | ({32{op_mulhu }} & mulhu_result )
                     | ({32{op_div   }} & div_result   )
                     | ({32{op_divu  }} & divu_result  )
                     | ({32{op_rem   }} & rem_result   )
                     | ({32{op_remu  }} & remu_result  );

wire [32:0] add_result = {1'b0, result[63:32]} + {1'b0, mul_diver_b};
wire [32:0] sub_result = result[63:31] - {1'b0, mul_diver_b};

always @(posedge clk or posedge rst) begin
    if (rst) begin
        cnt_n    <= 6'd0;
        mdu_done <= 1'b0;
    end else begin
        mdu_done <= 1'b0;
        if (~mdu_done & mul_en & lsu_ready & cnt_n == 6'd0) begin
            result <= {32'b0, mul_diver_a};
            cnt_n  <= cnt_n + 6'b1;
            muling <= 1'b1;
        end else if (muling & cnt_n <= 6'd33) begin
            if (result[0] == 1'b1) begin
                result <= {add_result, result[31:1]};
            end else begin
                result <= {1'b0, result[63:1]};
            end
            cnt_n <= cnt_n + 6'b1;
            
            if (cnt_n == 6'd33) begin
                muling <= 1'b0;
                result <= 'b0;
                mdu_done <= 1'b1;
                mdu_result <= switch_result;
                cnt_n <= 6'd0;
            end
        end
        if (~mdu_done & div_en & lsu_ready & cnt_n == 6'd0) begin
            result <= {32'b0, mul_diver_a};
            cnt_n  <= cnt_n + 6'b1;
            diving <= 1'b1;
        end else if (diving & cnt_n <= 6'd33) begin // 除法迭代33次（比乘法多1次符号位处理）
            if (result[62:31] >= mul_diver_b) begin
                result <= {sub_result[31:0], result[30:0], 1'b1};
            end else begin
                result <= {result[62:0], 1'b0};
            end
            cnt_n <= cnt_n + 6'b1;

            if (cnt_n == 6'd33) begin 
                diving <= 1'b0;
                result <= 'b0;
                mdu_done <= 1'b1;
                mdu_result <= switch_result;
                cnt_n <= 6'd0;
            end
        end
    end
end

endmodule