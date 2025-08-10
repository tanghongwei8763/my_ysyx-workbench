`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/core-npc/ysyx_25020037_config.vh"

//寄存器堆
module ysyx_25020037_gpr (
  input  wire         idu_valid,
  input  wire         wbu_valid,
  input  wire         gpr_we,
  input  wire         exu_ready,
  output reg          gpr_ready,
  output reg          gpr_valid,
  input  wire         clk,
  input  wire         rst,
  input  wire [31: 0] csr_wcsr_data,
  input  wire [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus,
  input  wire [`DU_TO_GU_BUS_WD -1:0] du_to_gu_bus,
  output wire [`GU_TO_EU_BUS_WD -1:0] gu_to_eu_bus,

  output wire [31: 0] mtvec,
  output wire [31: 0] mepc,
  output wire [31: 0] mstatus,
  output wire [31: 0] mcause
);

  localparam IDLE   = 1'b0;
  localparam BUSY   = 1'b1;
  reg state, next_state;
  reg  [31: 0] regs [31:0];
  //实例化寄存器
  generate
    genvar i;
    for (i = 0; i < 16; i = i+1) begin : GPR32
      ysyx_25020037_Reg #(32, 32'b0) gpr32 (
        .clk        (clk        ), 
        .rst        (rst        ), 
        .din        (gpr_wdata  ), 
        .dout       (regs[i]    ), 
        .wen        ((rd != 5'b0) && wbu_valid && gpr_we && (rd == i))
        );
    end
  endgenerate

  reg  [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus_r;

  wire [31: 0] gpr_wdata;
  wire         gpr_wen;
  assign {gpr_wen,
          gpr_wdata
         } = wu_to_gu_bus_r;
  wire [31: 0] pc;
  wire [ 4: 0] rd;
  wire [ 4: 0] rs1;
  wire [ 4: 0] rs2;
  wire         csrs_mtvec_wen;
  wire         csrs_mepc_wen;
  wire         csrs_mstatus_wen;
  wire         csrs_mcause_wen;
  wire         ecall_en;
  wire         mret_en;
  assign {pc,
          rd,
          rs1,
          rs2,
          csrs_mtvec_wen,
          csrs_mepc_wen,
          csrs_mstatus_wen,
          csrs_mcause_wen,
          ecall_en,
          mret_en
         } = du_to_gu_bus;

  wire [31: 0] src1;
  wire [31: 0] src2;

  wire         mepc_wen;
  wire         mcause_wen;
  wire         mstatus_wen;
  wire [31: 0] mepc_data;
  wire [31: 0] mcause_data;
  wire [31: 0] mstatus_data;

  assign mepc_wen     = ecall_en | csrs_mepc_wen;
  assign mcause_wen   = ecall_en | csrs_mcause_wen;
  assign mstatus_wen  = ecall_en | mret_en  | csrs_mstatus_wen;
 
  assign mepc_data    = ecall_en ? pc    : csr_wcsr_data;
  assign mcause_data  = ecall_en ? 32'hb : csr_wcsr_data;
  assign mstatus_data = ecall_en ? 32'h1800 :
                        mret_en  ? ((mstatus & ~(32'h1 << 3))
                      | (((mstatus & (32'h1 << 7)) >> 4))
                      | (32'h1 << 7))
                      & ~((32'h1 << 11) | (32'h1 << 12)) :
                      csr_wcsr_data;

  //实例状态处理器
  ysyx_25020037_Reg #(32, 32'h0) CSRS_mtvec (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (csr_wcsr_data   ),
    .dout        (mtvec           ),
    .wen         (csrs_mtvec_wen & wbu_valid & (~gpr_ready))
  );

  ysyx_25020037_Reg #(32, 32'h0) CSRS_mepc (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (mepc_data       ),
    .dout        (mepc            ),
    .wen         (mepc_wen & wbu_valid & (~gpr_ready))
  );

  ysyx_25020037_Reg #(32, 32'h1800) CSRS_mstatus (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (mstatus_data    ),
    .dout        (mstatus         ),
    .wen         (mstatus_wen & wbu_valid & (~gpr_ready))
  );

  ysyx_25020037_Reg #(32, 32'h0) CSRS_cause (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (mcause_data     ),
    .dout        (mcause          ),
    .wen         (mcause_wen & wbu_valid & (~gpr_ready))
  );
  
  assign src1 = regs[rs1];
  assign src2 = regs[rs2];
  assign gu_to_eu_bus = {           
           src1,
           src2,
           mtvec,
           mepc
         };

  always @(*) begin
    case (state)
      IDLE: next_state = ((wbu_valid | idu_valid) & gpr_ready) ? BUSY : IDLE;
      BUSY: next_state = (gpr_valid & exu_ready) ? IDLE : BUSY;
      default: next_state = IDLE;
    endcase
    end

    always @(posedge clk or posedge rst) begin
      if (rst) begin
        state <= IDLE;
        gpr_valid <= 1'b0;
        gpr_ready <= 1'h1;
      end else begin
        state <= next_state;

        case (state)
          IDLE: begin
            if (wbu_valid & gpr_ready) begin
              wu_to_gu_bus_r <= wu_to_gu_bus;
              gpr_ready <= 1'b0;
            end
            gpr_valid <= 1'b0;
          end
          BUSY: begin
            if (exu_ready) begin
              gpr_ready <= 1'b1;
              gpr_valid <= 1'b1;
            end
          end
        endcase
      end
    end
endmodule
