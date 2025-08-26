`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

//寄存器堆
module ysyx_25020037_gpr (
  input  wire         idu_valid,
  input  wire         wbu_valid,
  input  wire         exu_ready,
  output reg          gpr_ready,
  output reg          gpr_valid,
  input  wire         clk,
  input  wire         rst,
  input  wire [`RS_DATA-1: 0] rs_data,
  output wire [`GU_TO_DU_BUS_WD -1:0] gu_to_du_bus,
  input  wire [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus
);

  parameter MSTATUS   = 12'h300;
  parameter MTVEC     = 12'h305;
  parameter MEPC      = 12'h341;
  parameter MCAUSE    = 12'h342;
  parameter MVENDORID = 12'hF11;
  parameter MARCHID   = 12'hF12;

  localparam IDLE   = 1'b0;
  localparam BUSY   = 1'b1;
  reg state, next_state;
  reg  [31: 0] pc_reg;
  reg  [31: 0] inst_reg;
  reg  [31: 0] regs [16:0];
  reg  [31: 0] mtvec;
  reg  [31: 0] mepc;
  reg  [31: 0] mstatus;
  reg  [31: 0] mcause;
  reg  [31: 0] mvendorid;
  reg  [31: 0] marchid;
  //实例化寄存器
  generate
    genvar i;
    for (i = 0; i < 16; i = i+1) begin : GPR32
      ysyx_25020037_Reg #(32, 32'b0) gpr16 (
        .clk        (clk        ), 
        .rst        (rst        ), 
        .din        (gpr_wdata  ), 
        .dout       (regs[i]    ), 
        .wen        ((rd != 5'b0) && wbu_valid && gpr_wen && (rd == i))
        );
    end
  endgenerate

  wire [`DU_TO_GU_BUS_WD -1:0] du_to_gu_bus;
  wire [31: 0] csr_wcsr_data;
  wire [31: 0] gpr_wdata;
  wire         gpr_wen;
  assign {du_to_gu_bus,
          csr_wcsr_data,
          gpr_wen,
          gpr_wdata
         } = wu_to_gu_bus;
  wire [11: 0] imm;
  wire [ 4: 0] rs1;
  wire [ 4: 0] rs2;
  assign {imm,
          rs1,
          rs2
         } = rs_data;
  wire [31: 0] pc;
  wire [31: 0] inst;
  wire [ 4: 0] rd;
  wire         csrs_mtvec_wen;
  wire         csrs_mepc_wen;
  wire         csrs_mstatus_wen;
  wire         csrs_mcause_wen;
  wire         csrs_mvendorid_wen;
  wire         csrs_marchid_wen;
  wire         ecall_en;
  wire         mret_en;
  assign {pc,
          inst,
          rd,
          csrs_mtvec_wen,
          csrs_mepc_wen,
          csrs_mstatus_wen,
          csrs_mcause_wen,
          csrs_mvendorid_wen,
          csrs_marchid_wen,
          ecall_en,
          mret_en
         } = du_to_gu_bus;
  ysyx_25020037_Reg #(32, 32'h0) u_pc_reg (
    .clk         (clk              ),
    .rst         (rst              ),
    .din         (pc               ),
    .dout        (pc_reg           ),
    .wen         (wbu_valid        )
  );
  ysyx_25020037_Reg #(32, 32'h0) u_inst_reg (
    .clk         (clk              ),
    .rst         (rst              ),
    .din         (inst             ),
    .dout        (inst_reg         ),
    .wen         (wbu_valid        )
  );
  wire [31: 0] src1;
  wire [31: 0] src2;
  wire [31: 0] csr_data; 
  assign csr_data    = ({32{imm == MTVEC    }} & mtvec)
                     | ({32{imm == MEPC     }} & mepc)
                     | ({32{imm == MSTATUS  }} & mstatus)
                     | ({32{imm == MCAUSE   }} & mcause)
                     | ({32{imm == MVENDORID}} & mvendorid)
                     | ({32{imm == MARCHID  }} & marchid);
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

  //实例CSR处理器
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

  ysyx_25020037_Reg #(32, 32'h0) CSRS_mcause (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (mcause_data     ),
    .dout        (mcause          ),
    .wen         (mcause_wen & wbu_valid & (~gpr_ready))
  );

  ysyx_25020037_Reg #(32, 32'h79737978) CSRS_mvendorid (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (csr_wcsr_data   ),
    .dout        (mvendorid       ),
    .wen         (1'b0            )
  );

  ysyx_25020037_Reg #(32, 32'h017DC685) CSRS_marchid (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (csr_wcsr_data   ),
    .dout        (marchid         ),
    .wen         (1'b0            )
  );
  
  assign src1 = regs[rs1];
  assign src2 = regs[rs2];
  assign gu_to_du_bus = {           
           src1,
           src2,
           csr_data
         };

endmodule
