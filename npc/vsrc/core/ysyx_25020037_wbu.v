`include "ysyx_25020037_config.vh"

module ysyx_25020037_wbu (
    input  wire         clk,
    input  wire         rst,
    input  wire [`RS_DATA-1: 0] rs_data,
    output wire [`WU_TO_EU_BUS_WD -1:0] wu_to_eu_bus,
    input  wire [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus
);
    wire [ 3: 0] rd;
    wire [`EU_TO_WU_BUS_WD -1:0] eu_to_wu_bus;
    wire         gpr_we;
    wire [31: 0] csr_wcsr_data;  
    wire [31: 0] gpr_wdata;
    assign {rd,
            eu_to_wu_bus,
            gpr_we,
            csr_wcsr_data,
            gpr_wdata
           } = lu_to_wu_bus;
    reg  [31: 0] regs [15:0];
    reg  [31: 0] mtvec;
    reg  [31: 0] mepc;
    wire [31: 0] mstatus   = 32'h1800;
    wire [31: 0] mcause    = 32'hb;
    wire [31: 0] mvendorid = 32'h79737978;
    wire [31: 0] marchid   = 32'h017DC685;

    wire   c_mtvec;
    wire   c_mepc;
    // wire   c_mstatus;
    wire   c_mcause;
    wire   c_mvendorid;
    wire   c_marchid;
    wire [ 3: 0] rs1;
    wire [ 3: 0] rs2;
    assign {c_mtvec, c_mepc, c_mcause, c_mvendorid, c_marchid, rs1, rs2} = rs_data;

    wire         csrs_mtvec_wen;
    wire         csrs_mepc_wen;
    assign {csrs_mtvec_wen,
            csrs_mepc_wen
           } = eu_to_wu_bus;
    wire [31: 0] src1;
    wire [31: 0] src2;
    wire [31: 0] csr_data; 
    assign csr_data = ({32{c_mtvec    }} & mtvec)
                    | ({32{c_mepc     }} & mepc)
                    // | ({32{c_mstatus  }} & mstatus)
                    | ({32{c_mcause   }} & mcause)
                    | ({32{c_mvendorid}} & mvendorid)
                    | ({32{c_marchid  }} & marchid);
    
    always @(posedge clk or posedge rst) begin
      if(rst) begin
        regs[0] <= 32'b0;
      end else begin
        if ((rd != 4'b0) && gpr_we) begin
          regs[rd] <= gpr_wdata;
        end
        if (csrs_mtvec_wen) begin
          mtvec <= csr_wcsr_data;
        end
        if (csrs_mepc_wen) begin
          mepc <= csr_wcsr_data;
        end
      end
    end
    
    assign src1 = regs[rs1];
    assign src2 = regs[rs2];
    assign wu_to_eu_bus = {           
             src1,
             src2,
             csr_data
           };

endmodule
