//寄存器堆
module ysyx_25020037_gpr (
  input  wire         clk,
  input  wire         rst,
  input  wire [31: 0] pc,
  input  wire [31: 0] gpr_wdata,
  input  wire [ 4: 0] rs1,
  input  wire [ 4: 0] rs2,
  output reg  [31: 0] src1,
  output reg  [31: 0] src2,
  output reg  [31: 0] regs [31:0],

  input  wire [ 4: 0] gpr_waddr,
  input  wire         gpr_wen,

  input  wire [31: 0] csr_wcsr_data,
  input  wire         csrs_mtvec_wen,
  input  wire         csrs_mepc_wen,
  input  wire         csrs_mstatus_wen,
  input  wire         csrs_mcause_wen,
  input  wire         ecall_en,
  input  wire         mret_en,

  output wire [31: 0] mtvec,
  output wire [31: 0] mepc,
  output wire [31: 0] mstatus,
  output wire [31: 0] mcause
);

  //实例化寄存器
  generate
    genvar i;
    for (i = 0; i < 32; i = i+1) begin : GPR32
      ysyx_25020037_Reg #(32, 32'b0) gpr32 (
        .clk        (clk        ), 
        .rst        (rst        ), 
        .din        (gpr_wdata  ), 
        .dout       (regs[i]    ), 
        .wen        ((gpr_waddr != 5'b0) && gpr_wen && (gpr_waddr == i))
        );
    end
  endgenerate

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
    .wen         (csrs_mtvec_wen  )
  );

  ysyx_25020037_Reg #(32, 32'h0) CSRS_mepc (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (mepc_data       ),
    .dout        (mepc            ),
    .wen         (mepc_wen        )
  );

  ysyx_25020037_Reg #(32, 32'h1800) CSRS_mstatus (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (mstatus_data    ),
    .dout        (mstatus         ),
    .wen         (mstatus_wen     )
  );

  ysyx_25020037_Reg #(32, 32'h0) CSRS_cause (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (mcause_data     ),
    .dout        (mcause          ),
    .wen         (mcause_wen      )
  );
  
  assign src1 = regs[rs1];
  assign src2 = regs[rs2];
endmodule
