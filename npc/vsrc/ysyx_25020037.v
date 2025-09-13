// Merged Verilog file with PC reset value 0x30000000

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_config.vh
`define FU_TO_DU_BUS_WD 62
`define DU_TO_EU_BUS_WD 110
`define EU_TO_LU_BUS_WD 82
`define LU_TO_WU_BUS_WD 75
`define WU_TO_GU_BUS_WD 74
`define GU_TO_EU_BUS_WD 32*3

`define DU_TO_LU_BUS_WD 2
`define EU_TO_GU_BUS_WD 3
`define EU_TO_IC_BUS_WD 1

`define RS_DATA 22
`ifdef RESET_VAL
`define PC_RESET_VAL 30'h20000000
`else
`define PC_RESET_VAL 30'h0c000000
`endif
// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_alu.v
module ysyx_25020037_alu(
  input  wire        double_cal,
  input  wire [16:0] alu_op,
  input  wire [31:0] alu_src1,
  input  wire [31:0] alu_src2,
  input  wire [31:0] alu_src3,
  input  wire [31:0] alu_src4,
  output wire [31:0] alu_result1,
  output wire        alu_result2

);

wire         op_add;
wire         op_sub;
wire         op_slt;
wire         op_sltu;
wire         op_and;
wire         op_or;
wire         op_xor;
wire         op_sll;
wire         op_srl;
wire         op_sra;
wire         op_lui;

wire         op_bne;
wire         op_beq;
wire         op_bge;
wire         op_bgeu;
wire         op_blt;
wire         op_bltu;

wire [31: 0] add_sub_result;
wire [31: 0] slt_result;
wire [31: 0] sltu_result;
wire [31: 0] and_result;
wire [31: 0] or_result;
wire [31: 0] xor_result;
wire [31: 0] lui_result;
wire [31: 0] sll_result;
wire [63: 0] sr64_result;
wire [31: 0] sr_result;
wire [31: 0] aupic_result;
wire         beq_result;
wire         blt_result;
wire         bltu_result;
wire         bge_result;
wire         bgeu_result;
wire         bne_result;

wire [31: 0] adder_a;
wire [31: 0] adder_b;
wire [31: 0] adder_c;
wire [31: 0] adder_d;
wire         adder_cin;
wire         adder_cin1;
wire [31: 0] adder_result;
wire [31: 0] adder_result1;
wire         adder_cout;
wire         adder_cout1;

assign op_add  = alu_op[ 0];
assign op_sub  = alu_op[ 1];
assign op_slt  = alu_op[ 2];
assign op_sltu = alu_op[ 3];
assign op_and  = alu_op[ 4];
assign op_or   = alu_op[ 5];
assign op_xor  = alu_op[ 6];
assign op_sll  = alu_op[ 7];
assign op_srl  = alu_op[ 8];
assign op_sra  = alu_op[ 9];
assign op_lui  = alu_op[10];

assign op_bne  = alu_op[11];
assign op_beq  = alu_op[12];
assign op_bge  = alu_op[13];
assign op_bgeu = alu_op[14];
assign op_blt  = alu_op[15];
assign op_bltu = alu_op[16];




assign adder_a   = alu_src1;
assign adder_b   = (op_sub | op_slt | op_sltu) ? ~alu_src2 : alu_src2;
assign adder_cin = (op_sub | op_slt | op_sltu) ? 1'b1      : 1'b0;
assign {adder_cout, adder_result} = adder_a + adder_b + {{32{1'b0}}, adder_cin};

assign adder_c    = alu_src3;
assign adder_d    = ~alu_src4;
assign {adder_cout1, adder_result1} = adder_c + adder_d + 33'b1;

assign add_sub_result = adder_result;

assign slt_result[31:1] = 31'b0;
assign slt_result[0]    = (alu_src1[31] & ~alu_src2[31])
                        | ((alu_src1[31] ~^ alu_src2[31]) & adder_result[31]);

assign blt_result    = (alu_src3[31] & ~alu_src4[31])
                     | ((alu_src3[31] ~^ alu_src4[31]) & adder_result1[31]);
assign bge_result    = ~blt_result;

assign sltu_result[31:1] = 31'b0;
assign sltu_result[0]    = ~adder_cout;

assign bltu_result    = ~adder_cout1;
assign bgeu_result    = ~bltu_result;

assign and_result = alu_src1 & alu_src2;
assign or_result  = alu_src1 | alu_src2;
assign xor_result = alu_src1 ^ alu_src2;
assign lui_result = alu_src2;


assign sll_result = alu_src1 << alu_src2[4:0];

assign sr64_result = {{32{op_sra & alu_src1[31]}}, alu_src1[31:0]} >> alu_src2[4:0];

assign sr_result   = sr64_result[31:0];

assign beq_result    = (alu_src3 == alu_src4);
assign bne_result    = ~beq_result;

assign alu_result1 = ({32{op_add|op_sub|double_cal}} & add_sub_result)
                   | ({32{op_slt       }} & slt_result)
                   | ({32{op_sltu      }} & sltu_result)
                   | ({32{op_and       }} & and_result)
                   | ({32{op_or        }} & or_result)
                   | ({32{op_xor       }} & xor_result)
                   | ({32{op_lui       }} & lui_result)
                   | ({32{op_sll       }} & sll_result)
                   | ({32{op_srl|op_sra}} & sr_result);

assign alu_result2 = ~double_cal ? 1'b1 : 
                      op_beq     ? beq_result  :
                      op_blt     ? blt_result  :
                      op_bltu    ? bltu_result :
                      op_bge     ? bge_result  :
                      op_bgeu    ? bgeu_result :
                      op_bne     ? bne_result  :
                      1'b0; 

endmodule

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_arbiter.v
module ysyx_25020037_arbiter (
    input  wire         clk,
    input  wire         rst,

    output reg          ifu_arready,
    input  wire         ifu_arvalid,
    input  wire [31: 0] ifu_araddr,
    input  wire [ 3: 0] ifu_arid,
    input  wire [ 7: 0] ifu_arlen,
    input  wire [ 2: 0] ifu_arsize,
    input  wire [ 1: 0] ifu_arburst,
    input  wire         ifu_rready,
    output reg          ifu_rvalid,
    output reg  [ 1: 0] ifu_rresp,
    output reg  [31: 0] ifu_rdata,
    output reg          ifu_rlast,
    output reg  [ 3: 0] ifu_rid,

    output reg          lsu_awready,
    input  wire         lsu_awvalid,
    input  wire [31: 0] lsu_awaddr,
    input  wire [ 3: 0] lsu_awid,
    input  wire [ 7: 0] lsu_awlen,
    input  wire [ 2: 0] lsu_awsize,
    input  wire [ 1: 0] lsu_awburst,
    output reg          lsu_wready,
    input  wire         lsu_wvalid,
    input  wire [31: 0] lsu_wdata,
    input  wire [ 3: 0] lsu_wstrb,
    input  wire         lsu_wlast,
    input  wire         lsu_bready,
    output reg          lsu_bvalid,
    output reg  [ 1: 0] lsu_bresp,
    output reg  [ 3: 0] lsu_bid,
    output reg          lsu_arready,
    input  wire         lsu_arvalid,
    input  wire [31: 0] lsu_araddr,
    input  wire [ 3: 0] lsu_arid,
    input  wire [ 7: 0] lsu_arlen,
    input  wire [ 2: 0] lsu_arsize,
    input  wire [ 1: 0] lsu_arburst,
    input  wire         lsu_rready,
    output reg          lsu_rvalid,
    output reg  [ 1: 0] lsu_rresp,
    output reg  [31: 0] lsu_rdata,
    output reg          lsu_rlast,
    output reg  [ 3: 0] lsu_rid,

    input  wire         io_master_awready,
    output reg          io_master_awvalid,
    output reg  [31: 0] io_master_awaddr,
    output reg  [ 3: 0] io_master_awid,
    output reg  [ 7: 0] io_master_awlen,
    output reg  [ 2: 0] io_master_awsize,
    output reg  [ 1: 0] io_master_awburst,
    input  wire         io_master_wready,
    output reg          io_master_wvalid,
    output reg  [31: 0] io_master_wdata,
    output reg  [ 3: 0] io_master_wstrb,
    output reg          io_master_wlast,
    output reg          io_master_bready,
    input  wire         io_master_bvalid,
    input  wire [ 1: 0] io_master_bresp,
    input  wire [ 3: 0] io_master_bid,
    input  wire         io_master_arready,
    output reg          io_master_arvalid,
    output reg [31: 0]  io_master_araddr,
    output reg [ 3: 0]  io_master_arid,
    output reg [ 7: 0]  io_master_arlen,
    output reg [ 2: 0]  io_master_arsize,
    output reg [ 1: 0]  io_master_arburst,
    output reg          io_master_rready,
    input  wire         io_master_rvalid,
    input  wire [ 1: 0] io_master_rresp,
    input  wire [31: 0] io_master_rdata,
    input  wire         io_master_rlast,
    input  wire [ 3: 0] io_master_rid,

    input  wire         clint_arready,
    output reg          clint_arvalid,
    output reg  [31: 0] clint_araddr,
    output reg  [ 3: 0] clint_arid,
    output reg  [ 7: 0] clint_arlen,
    output reg  [ 2: 0] clint_arsize,
    output reg  [ 1: 0] clint_arburst,
    output reg          clint_rready,
    input  wire         clint_rvalid,
    input  wire [ 1: 0] clint_rresp,
    input  wire [31: 0] clint_rdata,
    input  wire         clint_rlast,
    input  wire [ 3: 0] clint_rid
);

localparam CLINT_BASE      = 16'h0200; // 0200_0000-0200_ffff

localparam IDLE        = 2'b00;
localparam IFU_ACCESS  = 2'b01;
localparam LSU_ACCESS  = 2'b10;

reg       is_clint_addr;
reg [1:0] current_master, next_master;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_master <= IDLE;
    end else begin
        current_master <= next_master;
        case (current_master)
            IDLE: begin
                is_clint_addr <= (lsu_arvalid & ((lsu_araddr[31:16] == CLINT_BASE)));
            end
            default: begin is_clint_addr <= is_clint_addr; end
        endcase
    end
end

always @(*) begin
    case (current_master)
        IDLE: next_master = (lsu_arvalid || lsu_awvalid) ? LSU_ACCESS  :
                            (ifu_arvalid) ? IFU_ACCESS : IDLE;
        IFU_ACCESS : next_master = ifu_rlast ? IDLE : IFU_ACCESS;
        LSU_ACCESS : next_master = ((lsu_rlast || (io_master_bvalid & io_master_bready)) |
                                    (clint_rvalid & clint_rready)) ? IDLE : LSU_ACCESS;
        default: next_master = IDLE;
    endcase
end

always @(*) begin
    ifu_arready = 1'b0;
    ifu_rvalid  = 1'b0;
    ifu_rresp   = 2'b00;
    ifu_rdata   = 32'b0;
    ifu_rlast   = 1'b0;
    ifu_rid     = 4'b0;

    lsu_arready = 1'b0;
    lsu_awready = 1'b0;
    lsu_wready  = 1'b0;
    lsu_bvalid  = 1'b0;
    lsu_bresp   = 2'b00;
    lsu_bid     = 4'b0;
    lsu_rvalid  = 1'b0;
    lsu_rresp   = 2'b00;
    lsu_rdata   = 32'b0;
    lsu_rlast   = 1'b0;
    lsu_rid     = 4'b0;
    
    io_master_arvalid = 1'b0;
    io_master_araddr  = 32'b0;
    io_master_arid    = 4'b0;
    io_master_arlen   = 8'b0;
    io_master_arsize  = 3'b0;
    io_master_arburst = 2'b0;
    io_master_awvalid = 1'b0;
    io_master_awaddr  = 32'b0;
    io_master_awid    = 4'b0;
    io_master_awlen   = 8'b0;
    io_master_awsize  = 3'b0;
    io_master_awburst = 2'b0;
    io_master_wvalid  = 1'b0;
    io_master_wdata   = 32'b0;
    io_master_wstrb   = 4'b0;
    io_master_wlast   = 1'b0;
    io_master_bready  = 1'b0;
    io_master_rready  = 1'b0;
    
    clint_arvalid = 1'b0;
    clint_araddr  = 32'b0;
    clint_arid    = 4'b0;
    clint_arlen   = 8'b0;
    clint_arsize  = 3'b0;
    clint_arburst = 2'b0;
    clint_rready  = 1'b0;
    
    case (current_master)
        IFU_ACCESS: begin
            io_master_arvalid = ifu_arvalid;
            io_master_araddr  = ifu_araddr;
            io_master_arid    = ifu_arid;
            io_master_arlen   = ifu_arlen;
            io_master_arsize  = ifu_arsize;
            io_master_arburst = ifu_arburst;
            io_master_rready  = ifu_rready;
            
            ifu_arready     = io_master_arready;
            ifu_rdata       = io_master_rdata;
            ifu_rresp       = io_master_rresp;
            ifu_rlast       = io_master_rlast;
            ifu_rvalid      = io_master_rvalid;
            ifu_rid         = io_master_rid;
        end
        LSU_ACCESS: begin
            if (is_clint_addr) begin
                clint_arvalid   = lsu_arvalid;
                clint_araddr    = lsu_araddr;
                clint_arid      = lsu_arid;
                clint_arlen     = lsu_arlen;
                clint_arsize    = lsu_arsize;
                clint_arburst   = lsu_arburst;
                clint_rready    = lsu_rready;
                
                lsu_arready     = clint_arready;
                lsu_rdata       = clint_rdata;
                lsu_rresp       = clint_rresp;
                lsu_rlast       = clint_rlast;
                lsu_rvalid      = clint_rvalid;
                lsu_rid         = clint_rid;
            end else begin
                io_master_arvalid = lsu_arvalid;
                io_master_araddr  = lsu_araddr;
                io_master_arid    = lsu_arid;
                io_master_arlen   = lsu_arlen;
                io_master_arsize  = lsu_arsize;
                io_master_arburst = lsu_arburst;
                io_master_rready  = lsu_rready;
                io_master_awvalid = lsu_awvalid;
                io_master_awaddr  = lsu_awaddr;
                io_master_awid    = lsu_awid;
                io_master_awlen   = lsu_awlen;
                io_master_awsize  = lsu_awsize;
                io_master_awburst = lsu_awburst;
                io_master_wvalid  = lsu_wvalid;
                io_master_wdata   = lsu_wdata;
                io_master_wstrb   = lsu_wstrb;
                io_master_wlast   = lsu_wlast;
                io_master_bready  = lsu_bready;
                
                lsu_arready     = io_master_arready;
                lsu_rdata       = io_master_rdata;
                lsu_rresp       = io_master_rresp;
                lsu_rlast       = io_master_rlast;
                lsu_rvalid      = io_master_rvalid;
                lsu_rid         = io_master_rid;
                lsu_awready     = io_master_awready;
                lsu_wready      = io_master_wready;
                lsu_bvalid      = io_master_bvalid;
                lsu_bresp       = io_master_bresp;
                lsu_bid         = io_master_bid;
            end
        end
        default: begin end
    endcase
end

endmodule
// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_clint.v
module ysyx_25020037_clint(
    input  wire         clk,
    input  wire         rst,

    output reg          arready,
    input  wire         arvalid,
    input  wire [31: 0] araddr,
    input  wire [ 3: 0] arid,
    input  wire [ 7: 0] arlen,
    input  wire [ 2: 0] arsize,
    input  wire [ 1: 0] arburst,
    input  wire         rready,
    output reg          rvalid,
    output reg  [ 1: 0] rresp,
    output reg  [31: 0] rdata,
    output reg          rlast,
    output reg  [ 3: 0] rid
);

`ifdef VERILATOR
    import "DPI-C" function void difftest_skip_ref();
`endif

    reg  [31: 0] mtimel, mtimeh;
    wire [ 3: 0] clint_offset;
    assign  clint_offset = araddr[3:0];

    localparam IDLE         = 1'b0;
    localparam BUSY         = 1'b1;
    reg          state, next_state;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;   
            arready <= 1'b1;
            rvalid <= 1'b0;
            mtimel <= 32'h0;
            mtimeh <= 32'h0;
        end else begin
            state <= next_state;
            if (mtimel == 32'hFFFFFFFF) begin
                mtimel <= 32'h0;
                mtimeh <= mtimeh + 1;
            end else begin
                mtimel <= mtimel + 1;
            end
            case (state)
                IDLE: begin
                    rvalid <= 1'b0;
                    rlast <= 1'b0;
                    if (arvalid & arready) begin
                        arready <= 1'b0;
                    end
                end
                
                BUSY: begin
                    arready <= 1'b1;
`ifdef VERILATOR
                    difftest_skip_ref();
`endif
                    rdata <= (clint_offset == 4'h0) ? mtimel :
                             (clint_offset == 4'h4) ? mtimeh :
                             32'b0;
                    rvalid <= 1'b1;
                    rlast <= 1'b1;
                    rresp <= 2'b00;
                end
            endcase
        end
    end

    always @(*) begin
        case (state)
            IDLE: next_state = (arvalid) ? BUSY : IDLE;      
            BUSY: next_state = (rready & rlast) ? IDLE : BUSY; 
            default: next_state = IDLE;
        endcase
    end

endmodule

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_exu.v
`include "ysyx_25020037_config.vh"

module ysyx_25020037_exu (
    input  wire         clk,
    input  wire         rst,
    input  wire         idu_valid,
    input  wire         lsu_ready,
    output reg          exu_valid,
    output wire         exu_ready,
    output wire [`RS_DATA-1: 0] rs_data,
    input  wire [31: 0] rdata_processed,
    input  wire [`GU_TO_EU_BUS_WD -1:0] gu_to_eu_bus,
    input  wire [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus,
    output reg  [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus,
    output reg  [`EU_TO_IC_BUS_WD -1:0] eu_to_ic_bus,
    input  wire         pc_updata,
    output reg          exu_dnpc_valid,
    output reg  [29: 0] exu_dnpc
);
`ifdef VERILATOR
    import "DPI-C" function void hit(input int inst_not_realize);
`endif

    parameter MSTATUS   = 12'h300;
    parameter MTVEC     = 12'h305;
    parameter MEPC      = 12'h341;
    parameter MVENDORID = 12'hF11;
    parameter MARCHID   = 12'hF12;

    localparam BYPASS_DEPTH = 4;
    reg [ 3:0] bypass_rd[     BYPASS_DEPTH-1:0];
    reg [31:0] bypass_data[   BYPASS_DEPTH-1:0];
    reg        bypass_is_load[BYPASS_DEPTH-1:0];

    assign rs_data = {ecall_en, mret_en, imm[11:0], rs1, rs2};

    wire [31: 0] src1_r;
    wire [31: 0] src2_r;
    wire [31: 0] csr_data;
    assign {src1_r,
            src2_r,
            csr_data
           } = gu_to_eu_bus;

    wire [31: 0] src1;
    wire [31: 0] src2;
    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire [29: 0] pc;
    wire [ 1: 0] lw_lh_lb;
    wire [ 1: 0] sw_sh_sb;
    wire         is_fence_i;
    wire [31: 0] imm;
    wire [ 3: 0] rd;
    wire [ 3: 0] rs1;
    wire [ 3: 0] rs2;
    wire         is_write;
    wire         is_read;
    wire         gpr_we;
    wire [16: 0] alu_op;
    wire         src1_is_pc;
    wire         src2_is_imm;
    wire         is_pc_jump;
    wire         double_cal;
    wire         ebreak;
    wire         ecall_en;
    wire         mret_en;
    wire         csrrs_op;
    wire         csrrw_op;
    assign {du_to_lu_bus,
            pc,
            lw_lh_lb,
            sw_sh_sb,
            is_fence_i,
            imm,
            rd,
            rs1,
            rs2,
            is_write,
            is_read,
            gpr_we,
            alu_op,
            src1_is_pc,
            src2_is_imm,
            is_pc_jump,
            double_cal,
            ebreak,
            ecall_en,
            mret_en,
            csrrs_op,
            csrrw_op
           } = du_to_eu_bus;

    wire   csr_w_gpr_we;
    wire   csrs_mtvec_wen;
    wire   csrs_mepc_wen;
    wire   csrs_mstatus_wen;

    assign csr_w_gpr_we = csrrs_op | csrrw_op;
    assign csrs_mtvec_wen     = (imm[11:0] == MTVEC) & csr_w_gpr_we;
    assign csrs_mepc_wen      = (imm[11:0] == MEPC) & csr_w_gpr_we;
    assign csrs_mstatus_wen   = (imm[11:0] == MSTATUS) & csr_w_gpr_we;

    wire [`EU_TO_GU_BUS_WD -1:0] eu_to_gu_bus;
    assign eu_to_gu_bus = {
        //pc,
        //rd[3:0],
        csrs_mtvec_wen,
        csrs_mepc_wen,
        csrs_mstatus_wen
        //inst_ecall,
        //inst_mret       
    };
    reg src1_wait;
    reg src2_wait;
    reg [31:0] bypass_src1;
    reg [31:0] bypass_src2;
    integer i;
    always @(*) begin
        bypass_src1 = src1_r;
        src1_wait = 1'b0;
        for (i = BYPASS_DEPTH - 1; i >= 0; i = i - 1) begin
            if ((bypass_rd[i] == rs1) & (rs1 != 4'd0)) begin
                bypass_src1 = bypass_data[i];
                if (bypass_is_load[i]) begin
                    src1_wait = 1'b1;
                end
            end
        end
    end

    always @(*) begin
        bypass_src2 = src2_r;
        src2_wait = 1'b0;
        for (i = BYPASS_DEPTH - 1; i >= 0; i = i - 1) begin
            if ((bypass_rd[i] == rs2) & (rs2 != 4'd0)) begin
                bypass_src2 = bypass_data[i];
                if (bypass_is_load[i]) begin
                    src2_wait = 1'b1;
                end
            end
        end
    end

    assign src1 = bypass_src1;
    assign src2 = bypass_src2;
    assign exu_ready = lsu_ready & !src1_wait & !src2_wait;

    wire [29: 0] dnpc_r;
    wire [31: 0] result;
    wire [31: 0] alu_src1;
    wire [31: 0] alu_src2;
    wire [31: 0] alu_src3;
    wire [31: 0] alu_src4;
    wire [31: 0] alu_result1;
    wire         alu_result2;
    wire [31: 0] csr_wcsr_data;
    wire [31: 0] data_channel;

    assign alu_src1 = src1_is_pc  ? {pc,2'b0}  : src1;
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
                            | ({32{csrrs_op}} & (src1 | csr_data))
                            | ({32{ecall_en}} & {pc,2'b0});
    assign dnpc_r           = ({30{ecall_en   | mret_en    }} & csr_data[31:2])
                            | ({30{is_pc_jump & alu_result2}} & alu_result1[31:2]);

    assign result    = is_pc_jump   ? {pc, 2'b0} + 32'h4 : 
                       csr_w_gpr_we ? csr_data           :
                       alu_result1;

    assign data_channel = is_write ? src2 : csr_wcsr_data;

    always @(posedge clk) begin
        if (lsu_ready) begin
            for (i = 0; i < BYPASS_DEPTH; i = i + 1) begin
                if (bypass_is_load[i]) begin
                    bypass_data[i]    = rdata_processed;
                    bypass_is_load[i] = 1'b0;
                end
            end
        end
        if (exu_ready && idu_valid && !exu_dnpc_valid) begin
            for (i = BYPASS_DEPTH - 1; i > 0; i = i - 1) begin
                bypass_rd[i]       <= bypass_rd[i - 1];
                bypass_data[i]     <= bypass_data[i - 1];
                bypass_is_load[i]  <= bypass_is_load[i - 1];
            end
            bypass_rd[0]       <= gpr_we ? rd      : bypass_rd[0];
            bypass_data[0]     <= gpr_we ? result  : bypass_data[0];
            bypass_is_load[0]  <= gpr_we ? is_read : bypass_is_load[0];
        end
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            exu_dnpc_valid <=1'b0;
            eu_to_lu_bus <= 'b0;
        end else begin
            if(exu_ready) begin
                if(dnpc_r != 30'b0 && ~exu_dnpc_valid) begin
                    exu_dnpc_valid <= idu_valid & (dnpc_r != pc + 30'h1);
                    exu_dnpc <= dnpc_r;
                end else if (pc_updata) begin
                    exu_dnpc_valid <=1'b0;
                end
                exu_valid <= 1'b0;
                eu_to_ic_bus <= 'b0;
                eu_to_lu_bus <= 'b0;
                if (idu_valid) begin
                    exu_valid <= exu_dnpc_valid ? 1'b0 : 1'b1;
                    eu_to_lu_bus <= {
                        rd,
                        ecall_en,
                        mret_en,
                        eu_to_gu_bus,
                        lw_lh_lb,
                        sw_sh_sb,
                        is_write,
                        is_read,
                        du_to_lu_bus,
                        gpr_we,
                        data_channel,
                        result
                    };
                    eu_to_ic_bus <= is_fence_i;
                end
            end
        end
    end

`ifdef VERILATOR
    always @(*) begin
       if(~exu_dnpc_valid & idu_valid & ebreak) begin hit(32'b0); end
    end
`endif
endmodule

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_gpr.v
`include "ysyx_25020037_config.vh"

//寄存器堆
module ysyx_25020037_gpr (
  input  wire         wbu_valid,
  input  wire         exu_ready,
  input  wire         clk,
  input  wire         rst,
  input  wire [`RS_DATA-1: 0] rs_data,
  output wire [`GU_TO_EU_BUS_WD -1:0] gu_to_eu_bus,
  input  wire [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus
);

  parameter MSTATUS   = 12'h300;
  parameter MTVEC     = 12'h305;
  parameter MEPC      = 12'h341;
  parameter MCAUSE    = 12'h342;
  parameter MVENDORID = 12'hF11;
  parameter MARCHID   = 12'hF12;

  wire [ 3: 0] rd;
  wire         ecall_en;
  wire         mret_en;
  wire [`EU_TO_GU_BUS_WD -1:0] eu_to_gu_bus;
  wire [31: 0] csr_wcsr_data;
  wire [31: 0] gpr_wdata;
  wire         gpr_wen;
  reg  [31: 0] regs [15:0];
  reg  [31: 0] mtvec;
  reg  [31: 0] mepc;
  reg  [31: 0] mstatus;
  wire [31: 0] mcause    = 32'hb;
  wire [31: 0] mvendorid = 32'h79737978;
  wire [31: 0] marchid   = 32'h017DC685;
  //实例化寄存器
  generate
    genvar i;
    for (i = 0; i < 16; i = i+1) begin : GPR16
      ysyx_25020037_Reg #(32, 32'b0) gpr16 (
        .clk        (clk        ), 
        .rst        (rst        ), 
        .din        (gpr_wdata  ), 
        .dout       (regs[i]    ), 
        .wen        ((rd != 4'b0) & wbu_valid & gpr_wen & (rd == i))
        );
    end
  endgenerate

  assign {rd,
          ecall_en,
          mret_en,
          eu_to_gu_bus,
          csr_wcsr_data,
          gpr_wen,
          gpr_wdata
         } = wu_to_gu_bus;
  wire         inst_ecall;
  wire         inst_mret;
  wire [11: 0] imm;
  wire [ 3: 0] rs1;
  wire [ 3: 0] rs2;
  assign {inst_ecall,
          inst_mret,
          imm,
          rs1,
          rs2
         } = rs_data;
  wire         csrs_mtvec_wen;
  wire         csrs_mepc_wen;
  wire         csrs_mstatus_wen;
  assign {csrs_mtvec_wen,
          csrs_mepc_wen,
          csrs_mstatus_wen
         } = eu_to_gu_bus;
  wire [31: 0] src1;
  wire [31: 0] src2;
  wire [31: 0] csr_data; 
  assign csr_data        = ({32{imm == MTVEC || inst_ecall}} & mtvec)
                         | ({32{imm == MEPC  || inst_mret }} & mepc)
                         | ({32{imm == MSTATUS  }} & mstatus)
                         | ({32{imm == MCAUSE   }} & mcause)
                         | ({32{imm == MVENDORID}} & mvendorid)
                         | ({32{imm == MARCHID  }} & marchid);
  wire         mepc_wen;
  wire         mstatus_wen;
  wire [31: 0] mstatus_data;

  assign mepc_wen     = ecall_en | csrs_mepc_wen;
  assign mstatus_wen  = ecall_en | mret_en  | csrs_mstatus_wen;
 
  assign mstatus_data = ecall_en ? 32'h1800  :
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
    .wen         (csrs_mtvec_wen & wbu_valid)
  );

  ysyx_25020037_Reg #(32, 32'h0) CSRS_mepc (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (csr_wcsr_data   ),
    .dout        (mepc            ),
    .wen         (mepc_wen & wbu_valid)
  );

  ysyx_25020037_Reg #(32, 32'h1800) CSRS_mstatus (
    .clk         (clk             ),
    .rst         (rst             ),
    .din         (mstatus_data    ),
    .dout        (mstatus         ),
    .wen         (mstatus_wen & wbu_valid)
  );
  
  assign src1 = regs[rs1];
  assign src2 = regs[rs2];
  assign gu_to_eu_bus = {           
           src1,
           src2,
           csr_data
         };

endmodule

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_icache.v
`include "ysyx_25020037_config.vh"

module ysyx_25020037_icache #(
    parameter ADDR_WIDTH    = 32,
    parameter DATA_WIDTH    = 32,
    parameter CACHE_BLOCKS  = 16,
    parameter BLOCK_SIZE    = 16,
    parameter OFFSET_WIDTH  = $clog2(BLOCK_SIZE),
    parameter INDEX_WIDTH   = $clog2(CACHE_BLOCKS),
    parameter TAG_WIDTH     = ADDR_WIDTH - INDEX_WIDTH - OFFSET_WIDTH
) (
    input                           clk,
    input                           rst,

    input  wire [`EU_TO_IC_BUS_WD -1:0] eu_to_ic_bus,

    input  wire [ADDR_WIDTH-1:0] cpu_addr,
    output wire [DATA_WIDTH-1:0] cpu_data,
    output wire                  cpu_hit,
    output wire                  cpu_ready,
    
    output wire                  mem_req,
    output wire [ADDR_WIDTH-1:0] mem_addr,
    input  wire [BLOCK_SIZE*8-1:0] mem_data,
    input  wire                  mem_ready
);
wire is_fence_i = eu_to_ic_bus;

wire [OFFSET_WIDTH-1:0]   offset;
wire [ INDEX_WIDTH-1:0]   index;
wire [   TAG_WIDTH-1:0]   tag;

assign offset = cpu_addr[OFFSET_WIDTH-1 : 0];
assign index  = cpu_addr[OFFSET_WIDTH + INDEX_WIDTH - 1 : OFFSET_WIDTH];
assign tag    = cpu_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + INDEX_WIDTH];

assign mem_addr = {cpu_addr[ADDR_WIDTH-1 : OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};

reg [   TAG_WIDTH-1:0]  tag_array  [CACHE_BLOCKS-1:0];
reg [BLOCK_SIZE*8-1:0]  data_array [CACHE_BLOCKS-1:0];
reg [CACHE_BLOCKS-1:0]  valid_array;

assign cpu_hit   = valid_array[index] && (tag_array[index] == tag);
assign cpu_data  = data_array[index][offset*8 +: DATA_WIDTH];
assign cpu_ready = (cpu_hit | mem_ready);
assign mem_req   = ~cpu_hit;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        valid_array <= 'b0;
    end else if (is_fence_i) begin
        valid_array <= 'b0;
    end else if (mem_ready) begin
        tag_array[index]    <= tag;
        data_array[index]   <= mem_data;
        valid_array[index]  <= 1'b1;
    end
end

endmodule

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_idu.v
`include "ysyx_25020037_config.vh"

module ysyx_25020037_idu (
    input  wire         clk,
    input  wire         rst,
    input  wire         ifu_valid,
    input  wire         exu_ready,
    output reg          idu_valid,
    output wire         idu_ready,
    input  wire         exu_dnpc_valid,
    input  wire [`FU_TO_DU_BUS_WD -1:0] fu_to_du_bus,
    output reg  [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus
);
`ifdef VERILATOR
    import "DPI-C" function void performance_counter(input int valid, input int type_, input int cache_hit);
    always @(posedge clk) begin
       if(idu_valid & ~rst) begin performance_counter(32'b0, {25'b0, TYPE_R,TYPE_I,TYPE_S,TYPE_B,TYPE_U,TYPE_J,TYPE_N}, 32'b0);end
    end
`endif

    wire [29: 0] pc;
    wire [31: 0] inst;
    assign {pc,
            inst
           } = fu_to_du_bus;

    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire  gpr_we;
    assign du_to_lu_bus = {
        //lw_lh_lb,   
        //sw_sh_sb,
        inst_lb,        
        inst_lh
    };

    wire [ 4: 0] rs1;
    wire [ 4: 0] rs2;
    wire [ 4: 0] rd;
    wire [31: 0] imm;
    wire [16: 0] alu_op;
    wire         rlsu_we;
    wire         wlsu_we;
    wire [ 1: 0] lw_lh_lb;
    wire [ 1: 0] sw_sh_sb;
    wire         src1_is_pc;
    wire         src2_is_imm;
    wire         is_pc_jump;
    wire         double_cal;

    wire [ 6:0] opcode_31_25;
    wire [ 5:0] opcode_31_26;
    wire [ 2:0] opcode_14_12;
    wire [ 6:0] opcode_06_00;
    wire [31:0] immI;
    wire [31:0] immS;
    wire [31:0] immB;
    wire [31:0] immU;
    wire [31:0] immJ;

    wire        inst_add;
    wire        inst_and;
    wire        inst_or;
    wire        inst_ori;
    wire        inst_xor;
    wire        inst_xori;
    wire        inst_sub;
    wire        inst_slt;
    wire        inst_sltu;
    wire        inst_addi;
    wire        inst_andi;
    wire        inst_jarl;
    wire        inst_lb;
    wire        inst_lbu;
    wire        inst_lh;
    wire        inst_lhu;
    wire        inst_lw;
    wire        inst_sll;
    wire        inst_slli;
    wire        inst_sltiu;//seqz
    wire        inst_sra;
    wire        inst_srai;
    wire        inst_srl;
    wire        inst_srli;
    wire        inst_csrrw;
    wire        inst_csrrs;
    wire        inst_ecall;
    wire        inst_mret;
    wire        inst_sb;
    wire        inst_sh;
    wire        inst_sw;
    wire        inst_beq;
    wire        inst_bne;
    wire        inst_bge;
    wire        inst_bgeu;
    wire        inst_blt;
    wire        inst_bltu;
    wire        inst_auipc;
    wire        inst_lui;
    wire        inst_jal;
    wire        inst_fence_i;
    wire        inst_ebreak;
    wire        inst_waiting;

    wire        TYPE_R;
    wire        TYPE_I;
    wire        TYPE_S;
    wire        TYPE_B;
    wire        TYPE_U;
    wire        TYPE_J;
    wire        TYPE_N;

    assign opcode_31_25  = inst[31:25];
    assign opcode_31_26  = inst[31:26];
    assign opcode_14_12  = inst[14:12];
    assign opcode_06_00  = inst[ 6: 0];

    assign rs1     = inst[19:15];
    assign rs2     = inst[24:20];
    assign rd      = inst[11: 7];

    assign immI  = {{20{inst[31]}}, inst[31:20]};
    assign immS  = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign immB  = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
    assign immU  = {inst[31:12], 12'b0};
    assign immJ  = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};

    assign inst_add       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h0) & (opcode_31_25 == 7'h00);
    assign inst_and       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h7) & (opcode_31_25 == 7'h00);
    assign inst_or        = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h6) & (opcode_31_25 == 7'h00);
    assign inst_xor       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h4) & (opcode_31_25 == 7'h00);
    assign inst_sll       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h1) & (opcode_31_25 == 7'h00);
    assign inst_sub       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h0) & (opcode_31_25 == 7'h20);
    assign inst_slt       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h2) & (opcode_31_25 == 7'h00);
    assign inst_sltu      = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h3) & (opcode_31_25 == 7'h00);
    assign inst_addi      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h0);
    assign inst_andi      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h7);
    assign inst_jarl      = (opcode_06_00 == 7'h67) & (opcode_14_12 == 3'h0);
    assign inst_lb        = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h0);
    assign inst_lbu       = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h4);
    assign inst_lh        = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h1);
    assign inst_lhu       = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h5);
    assign inst_lw        = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h2);
    assign inst_sltiu     = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h3);
    assign inst_slli      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h1) & (opcode_31_26 == 6'h00);
    assign inst_sra       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h5) & (opcode_31_26 == 6'h10);
    assign inst_srai      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h5) & (opcode_31_26 == 6'h10);
    assign inst_srl       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h5) & (opcode_31_26 == 6'h00);
    assign inst_srli      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h5) & (opcode_31_26 == 6'h00);
    assign inst_ori       = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h6);
    assign inst_xori      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h4);
    assign inst_csrrw     = (opcode_06_00 == 7'h73) & (opcode_14_12 == 3'h1);
    assign inst_csrrs     = (opcode_06_00 == 7'h73) & (opcode_14_12 == 3'h2);
    assign inst_sb        = (opcode_06_00 == 7'h23) & (opcode_14_12 == 3'h0);
    assign inst_sh        = (opcode_06_00 == 7'h23) & (opcode_14_12 == 3'h1);
    assign inst_sw        = (opcode_06_00 == 7'h23) & (opcode_14_12 == 3'h2);
    assign inst_beq       = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h0);
    assign inst_bne       = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h1);
    assign inst_bge       = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h5);
    assign inst_bgeu      = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h7);
    assign inst_blt       = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h4);
    assign inst_bltu      = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h6);
    assign inst_auipc     = (opcode_06_00 == 7'h17);
    assign inst_lui       = (opcode_06_00 == 7'h37);
    assign inst_jal       = (opcode_06_00 == 7'h6f);
    assign inst_fence_i   = (opcode_06_00 == 7'h0f) & (rd == 5'h00) & (opcode_14_12 == 3'h1) & (rs1 == 5'h00) & (rs2 == 5'h00) & (opcode_31_25 == 7'h00);
    assign inst_mret      = (opcode_06_00 == 7'h73) & (rd == 5'h00) & (opcode_14_12 == 3'h0) & (rs1 == 5'h00) & (rs2 == 5'h02) & (opcode_31_25 == 7'h18);
    assign inst_ecall     = (opcode_06_00 == 7'h73) & (rd == 5'h00) & (opcode_14_12 == 3'h0) & (rs1 == 5'h00) & (rs2 == 5'h00) & (opcode_31_25 == 7'h00);
    assign inst_ebreak    = (opcode_06_00 == 7'h73) & (rd == 5'h00) & (opcode_14_12 == 3'h0) & (rs1 == 5'h00) & (rs2 == 5'h01) & (opcode_31_25 == 7'h00);
    assign inst_waiting   = (opcode_06_00 == 7'h00) & (rd == 5'h00) & (opcode_14_12 == 3'h0) & (rs1 == 5'h00) & (rs2 == 5'h00) & (opcode_31_25 == 7'h00);

    assign alu_op[ 0] = inst_add  | inst_addi | inst_auipc | inst_jal | inst_sb  |
                        inst_jarl | inst_lw   | inst_lbu   | inst_lh  | inst_lhu |
                        inst_sw   | inst_sh   | inst_lb;
    assign alu_op[ 1] = inst_sub;
    assign alu_op[ 2] = inst_slt;
    assign alu_op[ 3] = inst_sltu | inst_sltiu;
    assign alu_op[ 4] = inst_and  | inst_andi;
    assign alu_op[ 5] = inst_or   | inst_ori;
    assign alu_op[ 6] = inst_xor  | inst_xori;
    assign alu_op[ 7] = inst_slli | inst_sll;
    assign alu_op[ 8] = inst_srli | inst_srl;
    assign alu_op[ 9] = inst_srai | inst_sra;
    assign alu_op[10] = inst_lui;

    assign alu_op[11] = inst_bne;
    assign alu_op[12] = inst_beq;
    assign alu_op[13] = inst_bge;
    assign alu_op[14] = inst_bgeu;
    assign alu_op[15] = inst_blt;
    assign alu_op[16] = inst_bltu;

    assign TYPE_R = inst_add    | inst_and  | inst_sub   | inst_or   | inst_xor  | 
                    inst_sra    | inst_srl  | inst_slt   | inst_sltu | inst_sll;
    assign TYPE_I = inst_addi   | inst_jarl | inst_sltiu | inst_srai | inst_andi | 
                    inst_xori   | inst_srli | inst_slli  | inst_ori  | inst_csrrw|
                    inst_csrrs  | rlsu_we   | inst_fence_i;
    assign TYPE_S = inst_sw     | inst_sh   | inst_sb;
    assign TYPE_B = inst_bne    | inst_beq  | inst_bge | inst_bgeu  | inst_blt  | inst_bltu;
    assign TYPE_U = inst_auipc  | inst_lui;
    assign TYPE_J = inst_jal;
    assign TYPE_N = inst_ebreak | inst_waiting;

    assign imm = ({32{TYPE_I}} & immI)
               | ({32{TYPE_S}} & immS)
               | ({32{TYPE_B}} & immB)
               | ({32{TYPE_U}} & immU)
               | ({32{TYPE_J}} & immJ);

    assign gpr_we = TYPE_R    | rlsu_we   |
                    inst_addi | inst_jarl | inst_sltiu| inst_srai  | inst_andi | 
                    inst_xori | inst_srli | inst_slli | inst_ori   | inst_csrrw|
                    inst_csrrs| inst_jal  | inst_auipc| inst_lui   ;
    assign sw_sh_sb = {inst_sw, inst_sh};
    assign lw_lh_lb = {inst_lw, (inst_lh | inst_lhu)};
    assign wlsu_we = TYPE_S;
    assign rlsu_we = inst_lw | inst_lh | inst_lhu | inst_lb | inst_lbu;

    assign src1_is_pc    = inst_jal | inst_auipc | TYPE_B;
    assign src2_is_imm   = TYPE_I     |
                           TYPE_S     |
                           inst_lui   |
                           inst_auipc |
                           TYPE_J     |
                           TYPE_B     |   //B型指令使用参数类型都一致
                           inst_jarl  ;

                      
    assign is_pc_jump   = inst_jal | inst_jarl | TYPE_B | inst_ecall | inst_mret;
    assign double_cal   = TYPE_B;

    assign idu_ready = exu_ready;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            du_to_eu_bus <= 'b0;
        end else begin
            if (exu_ready) begin
                idu_valid <= 1'b0;
                du_to_eu_bus <= 'b0;
                if (ifu_valid) begin
                    idu_valid <= ~exu_dnpc_valid;
                    du_to_eu_bus <= {
                        du_to_lu_bus,
                        pc,
                        lw_lh_lb,
                        sw_sh_sb,
                        inst_fence_i,         
                        imm,
                        rd[3:0],
                        rs1[3:0],
                        rs2[3:0],
                        wlsu_we,
                        rlsu_we,
                        gpr_we,  
                        alu_op,             
                        src1_is_pc,      
                        src2_is_imm,     
                        is_pc_jump,      
                        double_cal,      
                        inst_ebreak,
                        inst_ecall,
                        inst_mret,
                        inst_csrrs,
                        inst_csrrw
                    };
                end
            end
        end
    end

endmodule

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_ifu.v
`include "ysyx_25020037_config.vh"

module ysyx_25020037_ifu #(
    parameter BLOCK_SIZE = 4
) (
    input  wire         clk,
    input  wire         rst,
    input  wire         exu_dnpc_valid,
    input  wire [29: 0] exu_dnpc,
    output wire         pc_updata,
    input  wire         idu_ready,
    output reg          ifu_valid,
    output reg  [`FU_TO_DU_BUS_WD-1: 0] fu_to_du_bus,
    output reg          access_fault,

    input  wire         arready,
    output reg          arvalid,
    output reg  [31: 0] araddr,
    output reg  [ 3: 0] arid,
    output reg  [ 7: 0] arlen,
    output reg  [ 2: 0] arsize,
    output reg  [ 1: 0] arburst,
    output reg          rready,
    input  wire         rvalid,
    input  wire [ 1: 0] rresp,
    input  wire [31: 0] rdata,
    input  wire         rlast,
    input  wire [ 3: 0] rid,

    output wire [31: 0] icache_addr,
    input  wire [31: 0] icache_data,
    input  wire         icache_hit,
    input  wire         icache_ready,
    input  wire         mem_req,
    input  wire [31: 0] mem_addr,
    output reg  [BLOCK_SIZE*8-1:0] mem_data,
    output reg          mem_ready
);
    localparam SDRAM_BASE = 4'hA; // A000_0000-BFFF_FFFF
    localparam SDRAM_END  = 4'hB; 

    localparam OFFSET_WIDTH = $clog2(BLOCK_SIZE);
    localparam TRANSFER_COUNT = BLOCK_SIZE / 4;
    localparam IDLE    = 1'b0;
    localparam BUSY    = 1'b1;
    
    reg         state, next_state;
    wire [31:0] pc;
    wire [31:0] inst = fu_to_du_bus[31:0];
    wire [29:0] snpc = pc[31:2] + 30'h1;
    wire [29:0] dnpc = exu_dnpc_valid ? exu_dnpc : snpc;
    wire [31:0] block_base_addr = {pc[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
    wire        is_sdram = (block_base_addr[31:28] == SDRAM_BASE) | (block_base_addr[31:28] == SDRAM_END);
    reg  [1:0]  burst_cnt;

    ysyx_25020037_Reg #(30, `PC_RESET_VAL) PC (
        .clk         (clk      ),
        .rst         (rst      ),
        .din         (dnpc     ),
        .dout        (pc[31:2] ),
        .wen         (pc_updata)
    );
    assign      pc_updata = (next_state == IDLE) & idu_ready;

    always @(*) begin
        case (state)
            IDLE:  begin next_state = (idu_ready) ? (icache_hit) ? IDLE : BUSY : IDLE; end
            BUSY:  begin next_state = (icache_hit & idu_ready) ? IDLE : BUSY; end
            default: next_state = IDLE;
        endcase
    end

    assign icache_addr = {pc[31:2],2'b0};
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            burst_cnt <= 2'd0;
            fu_to_du_bus <= 'b0;
            mem_ready <= 1'b0;
        end else begin
            state <= next_state;
            case (state)
                IDLE: begin
                    if (idu_ready) begin
                        ifu_valid <= 1'b0;
                        fu_to_du_bus <= 'b0;
                        if (icache_hit) begin
                            fu_to_du_bus <= {pc[31:2], icache_data};
                            ifu_valid <= exu_dnpc_valid ? 1'b0 : 1'b1;
                        end else if (mem_req) begin
                            araddr <= block_base_addr;
                            arvalid <= 1'b1;
                            arid <= 4'h0;
                            arsize <= 3'h2;
                            if (is_sdram) begin
                                arlen <= 8'h3;  // 8'(TRANSFER_COUNT - 1);
                                arburst <= 2'h1;
                            end else begin
                                arlen <= 8'h0;
                                arburst <= 2'h0;
                            end
                        end
                    end
                end
                BUSY: begin
                    if (arvalid && arready) begin
                        arvalid <= 1'b0;
                        rready <= 1'b1;
                    end
                    if (rvalid && rready) begin
                        access_fault <= (rresp != 2'b00);
                        mem_data[burst_cnt*32 +: 32] <= rdata;
                        burst_cnt <= burst_cnt + 2'b1;
                        if (is_sdram) begin
                            if (rlast) begin
                                mem_ready <= 1'b1;
                                rready <= 1'b0;
                                burst_cnt <= 2'd0;
                            end
                        end else begin
                            if ({{30{1'b0}}, burst_cnt} == (TRANSFER_COUNT - 1)) begin
                                mem_ready <= 1'b1;
                                rready <= 1'b0;
                                burst_cnt <= 2'd0;
                            end else begin
                                araddr <= block_base_addr + ({{30{1'b0}}, burst_cnt} + 32'd1) * 32'd4;
                                arvalid <= 1'b1;
                            end
                        end
                    end
                    ifu_valid <= 1'b0;
                    fu_to_du_bus <= 'b0;
                    if(icache_hit & idu_ready) begin
                        mem_ready <= 1'b0;
                        mem_data <= 'b0;
                        fu_to_du_bus <= {pc[31:2], icache_data};
                        ifu_valid <= exu_dnpc_valid ? 1'b0 : 1'b1;
                    end
                end
                default: begin end
            endcase
        end
    end

endmodule

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_lsu.v
`include "ysyx_25020037_config.vh"
module ysyx_25020037_lsu (
    input  wire         clk,
    input  wire         rst,
    input  wire         exu_valid,
    input  wire         wbu_ready,
    output wire         lsu_ready,
    output reg          lsu_valid,
    input  wire         exu_dnpc_valid,
    output wire [31: 0] rdata_processed,
    input  wire [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus,
    output reg  [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus,
    output reg          access_fault,

    input  wire         awready,
    output reg          awvalid,
    output reg  [31: 0] awaddr,
    output reg  [ 3: 0] awid,
    output reg  [ 7: 0] awlen,
    output reg  [ 2: 0] awsize,
    output reg  [ 1: 0] awburst,
    input  wire         wready,
    output reg          wvalid,
    output reg  [31: 0] wdata,
    output reg  [ 3: 0] wstrb,
    output reg          wlast,
    output reg          bready,
    input  wire         bvalid,
    input  wire [ 1: 0] bresp,
    input  wire [ 3: 0] bid,
    input  wire         arready,
    output reg          arvalid,
    output reg  [31: 0] araddr,
    output reg  [ 3: 0] arid,
    output reg  [ 7: 0] arlen,
    output reg  [ 2: 0] arsize,
    output reg  [ 1: 0] arburst,
    output reg          rready,
    input  wire         rvalid,
    input  wire [ 1: 0] rresp,
    input  wire [31: 0] rdata,
    input  wire         rlast,
    input  wire [ 3: 0] rid
);
    localparam IDLE    = 1'b0;
    localparam BUSY    = 1'b1;
    reg        state, next_state;

    localparam SDRAM_BASE = 4'hA; // A000_0000-BFFF_FFFF
    localparam SDRAM_END  = 4'hB; 

    localparam AXI_LEN_SINGLE = 8'h0;
    reg         exu_dnpc_valid_r;
    wire [ 3:0] rd;
    wire        ecall_en;
    wire        mret_en;
    wire [`EU_TO_GU_BUS_WD -1:0] eu_to_gu_bus;
    wire [ 1:0] data_rop;
    wire [ 1:0] data_wop;
    wire        is_write;
    wire        is_read;
    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire        gpr_we;
    wire [31:0] addr;
    wire [31:0] data_channel;
    wire [31:0] addr_off = addr & 32'b11;
    wire [31:0] aligned_wdata = data_channel << (addr_off << 3);
    assign {rd,
            ecall_en,
            mret_en,
            eu_to_gu_bus,
            data_rop,
            data_wop,
            is_write,
            is_read,
            du_to_lu_bus,
            gpr_we,
            data_channel,     
            addr
           } = eu_to_lu_bus;

    wire        bit_sext;
    wire        half_sext;
    assign {bit_sext,
            half_sext
           } = du_to_lu_bus;

    wire is_sdram = (addr[31:28] == SDRAM_BASE) | (addr[31:28] == SDRAM_END);

    always @(*) begin
        case (state)
            IDLE: begin next_state = (exu_valid & (is_write | is_read)) ? BUSY : IDLE; end
            BUSY: begin next_state = (lsu_valid | (bvalid & wlast) | (rvalid & rlast)) ? IDLE : BUSY; end
            default: next_state = IDLE;
        endcase
    end

    wire [31: 0] lsu_rdata;
    assign lsu_rdata = rdata >> (addr_off << 3);
    assign rdata_processed = (data_rop == 2'b00) ? 
                             (bit_sext ? {{24{lsu_rdata[ 7]}}, lsu_rdata[ 7:0]} 
                                       : {24'b0          , lsu_rdata[ 7:0]} ) :
                             (data_rop == 2'b01) ? 
                             (half_sext ? {{16{lsu_rdata[15]}}, lsu_rdata[15:0]} 
                                        : {16'b0          , lsu_rdata[15:0]}) :
                             lsu_rdata;

    assign lsu_ready = ((bvalid & wlast) | (rvalid & rlast) | exu_dnpc_valid_r) ? 1'b1 : ~(is_write | is_read);
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            awvalid <= 1'b0;
            arvalid <= 1'b0;
        end else begin
            state <= next_state;
            exu_dnpc_valid_r <= exu_dnpc_valid;
            case (state)
                IDLE: begin
                    lsu_valid <= 1'b0;
                    lu_to_wu_bus <= 'b0;
                    if (exu_valid) begin
                        if (is_read) begin
                            araddr  <= addr;
                            arvalid <= 1'b1;
                            arid <= 4'h0;
                            arlen <= AXI_LEN_SINGLE;
                            arsize <= {1'b0, data_rop};
                            arburst <= {1'b0, is_sdram};
                        end else if (is_write) begin
                            awvalid <= 1'b1;
                            wvalid <= 1'b1;
                            awaddr  <= addr;
                            wdata   <= aligned_wdata;
                            awid <= 4'h0;
                            awlen <= AXI_LEN_SINGLE;
                            awsize <= {1'b0, data_wop};
                            awburst <= {1'b0, is_sdram};
                            wlast <= 1'b1;
                            case (data_wop)
                                2'b00: wstrb <= (4'b0001 << addr_off);
                                2'b01: wstrb <= (4'b0011 << addr_off);
                                2'b10: wstrb <= (4'b1111 << addr_off);
                                default: wstrb <= 4'b0000;
                            endcase
                        end else begin
                            lsu_valid <= 1'b1;
                            lu_to_wu_bus <= {
                                rd,
                                ecall_en,
                                mret_en,
                                eu_to_gu_bus,
                                gpr_we,
                                is_read,
                                data_channel,
                                addr
                            };
                        end
                    end
                end
                BUSY: begin
                    lsu_valid <= 1'b0;
                    lu_to_wu_bus <= 'b0;
                    if (is_read) begin
                        if (arvalid && arready) begin
                            arvalid <= 1'b0;
                            rready <= 1'b1;
                        end
                        if (rvalid && rready) begin
                            lu_to_wu_bus <= {
                                rd,
                                ecall_en,
                                mret_en,
                                eu_to_gu_bus,
                                gpr_we,
                                is_read,
                                data_channel,
                                rdata_processed
                                };
                            lsu_valid <= 1'b1;
                            access_fault <= (rresp != 2'b00);
                            rready <= 1'b0;
                        end
                    end else if (is_write) begin 
                        if (awvalid && awready && wvalid && wready) begin
                            awvalid <= 1'b0;
                            wvalid <= 1'b0;
                            bready <= 1'b1;
                        end
                        if (bvalid && bready) begin
                            lsu_valid <= 1'b1;
                            access_fault <= (bresp != 2'b00);
                            bready <= 1'b0;
                        end
                    end
                end
            endcase
        end
    end

endmodule

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_Reg.v
// 触发器模板
module ysyx_25020037_Reg #(parameter WIDTH = 1, parameter RESET_VAL = 0) (
  input  wire             clk,
  input  wire             rst,
  input  wire [WIDTH-1:0] din,
  output reg  [WIDTH-1:0] dout,
  input  wire             wen
);

  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
  
endmodule

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037.v
`include "ysyx_25020037_config.vh"

module ysyx_25020037 (
    input   wire         clock,
    input   wire         reset,
    input   wire         io_interrupt,

    input   wire         io_master_awready,
    output  wire         io_master_awvalid,
    output  wire [31: 0] io_master_awaddr,
    output  wire [ 3: 0] io_master_awid, 
    output  wire [ 7: 0] io_master_awlen,  
    output  wire [ 2: 0] io_master_awsize,
    output  wire [ 1: 0] io_master_awburst,
    input   wire         io_master_wready,
    output  wire         io_master_wvalid, 
    output  wire [31: 0] io_master_wdata, 
    output  wire [ 3: 0] io_master_wstrb,  
    output  wire         io_master_wlast,  
    output  wire         io_master_bready, 
    input   wire         io_master_bvalid, 
    input   wire [ 1: 0] io_master_bresp, 
    input   wire [ 3: 0] io_master_bid,  
    input   wire         io_master_arready,
    output  wire         io_master_arvalid,
    output  wire [31: 0] io_master_araddr,
    output  wire [ 3: 0] io_master_arid, 
    output  wire [ 7: 0] io_master_arlen,  
    output  wire [ 2: 0] io_master_arsize, 
    output  wire [ 1: 0] io_master_arburst,
    output  wire         io_master_rready,
    input   wire         io_master_rvalid, 
    input   wire [ 1: 0] io_master_rresp, 
    input   wire [31: 0] io_master_rdata,  
    input   wire         io_master_rlast,  
    input   wire [ 3: 0] io_master_rid,

    output  wire         io_slave_awready,
    input   wire         io_slave_awvalid,
    input   wire [31: 0] io_slave_awaddr,
    input   wire [ 3: 0] io_slave_awid, 
    input   wire [ 7: 0] io_slave_awlen,  
    input   wire [ 2: 0] io_slave_awsize, 
    input   wire [ 1: 0] io_slave_awburst,
    output  wire         io_slave_wready,
    input   wire         io_slave_wvalid, 
    input   wire [31: 0] io_slave_wdata, 
    input   wire [ 3: 0] io_slave_wstrb,  
    input   wire         io_slave_wlast,  
    input   wire         io_slave_bready, 
    output  wire         io_slave_bvalid, 
    output  wire [ 1: 0] io_slave_bresp, 
    output  wire [ 3: 0] io_slave_bid,  
    output  wire         io_slave_arready,
    input   wire         io_slave_arvalid,
    input   wire [31: 0] io_slave_araddr,
    input   wire [ 3: 0] io_slave_arid, 
    input   wire [ 7: 0] io_slave_arlen,  
    input   wire [ 2: 0] io_slave_arsize, 
    input   wire [ 1: 0] io_slave_arburst,
    input   wire         io_slave_rready,
    output  wire         io_slave_rvalid, 
    output  wire [ 1: 0] io_slave_rresp, 
    output  wire [31: 0] io_slave_rdata,  
    output  wire         io_slave_rlast,  
    output  wire [ 3: 0] io_slave_rid  
);

    assign io_slave_awready = 1'b0;
    assign io_slave_wready  = 1'b0;
    assign io_slave_bvalid  = 1'b0;
    assign io_slave_bresp   = 2'b0;
    assign io_slave_bid     = 4'b0;
    assign io_slave_arready = 1'b0;
    assign io_slave_rvalid  = 1'b0;
    assign io_slave_rresp   = 2'b0;
    assign io_slave_rdata   = 32'b0;
    assign io_slave_rlast   = 1'b0;
    assign io_slave_rid     = 4'b0;

    parameter BLOCK_SIZE   = 32'd16;
    parameter CACHE_BLOCKS = 32'd4;

`ifdef VERILATOR
    import "DPI-C" function void performance_counter(input int valid, input int type_, input int cache_hit);
    always @(posedge clock) begin
       performance_counter({27'b0, ifu_valid, idu_valid, exu_valid, lsu_valid, wbu_valid}, 32'b0, {31'b0, icache_hit});
    end
`endif
    wire [`FU_TO_DU_BUS_WD -1:0] fu_to_du_bus;
    wire [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus;
    wire [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus;
    wire [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus;
    wire [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus;
    wire [`GU_TO_EU_BUS_WD -1:0] gu_to_eu_bus;
    wire [`EU_TO_IC_BUS_WD -1:0] eu_to_ic_bus;

    wire [`RS_DATA-1: 0] rs_data;
    wire [29: 0] exu_dnpc;
    wire         exu_dnpc_valid;
    wire         pc_updata;
    wire [31:0]  rdata_processed;

    wire         ifu_valid;
    wire         idu_valid;
    wire         idu_ready;
    wire         exu_valid;
    wire         exu_ready;
    wire         lsu_valid;
    wire         lsu_ready;
    wire         wbu_ready;
    wire         wbu_valid;

    wire         ifu_arready;
    wire         ifu_arvalid;
    wire [31:0]  ifu_araddr;
    wire [3:0]   ifu_arid;
    wire [7:0]   ifu_arlen;
    wire [2:0]   ifu_arsize;
    wire [1:0]   ifu_arburst;
    wire         ifu_rready;
    wire         ifu_rvalid;
    wire [1:0]   ifu_rresp;
    wire [31:0]  ifu_rdata;
    wire         ifu_rlast;
    wire [3:0]   ifu_rid;

    wire         lsu_awready;
    wire         lsu_awvalid;
    wire [31:0]  lsu_awaddr;
    wire [3:0]   lsu_awid;
    wire [7:0]   lsu_awlen;
    wire [2:0]   lsu_awsize;
    wire [1:0]   lsu_awburst;
    wire         lsu_wready;
    wire         lsu_wvalid;
    wire [31:0]  lsu_wdata;
    wire [3:0]   lsu_wstrb;
    wire         lsu_wlast;
    wire         lsu_bready;
    wire         lsu_bvalid;
    wire [1:0]   lsu_bresp;
    wire [3:0]   lsu_bid;
    wire         lsu_arready;
    wire         lsu_arvalid;
    wire [31:0]  lsu_araddr;
    wire [3:0]   lsu_arid;
    wire [7:0]   lsu_arlen;
    wire [2:0]   lsu_arsize;
    wire [1:0]   lsu_arburst;
    wire         lsu_rready;
    wire         lsu_rvalid;
    wire [1:0]   lsu_rresp;
    wire [31:0]  lsu_rdata;
    wire         lsu_rlast;
    wire [3:0]   lsu_rid;

    wire         clint_arready;
    wire         clint_arvalid;
    wire [31:0]  clint_araddr;
    wire [3:0]   clint_arid;
    wire [7:0]   clint_arlen;
    wire [2:0]   clint_arsize;
    wire [1:0]   clint_arburst;
    wire         clint_rready;
    wire         clint_rvalid;
    wire [1:0]   clint_rresp;
    wire [31:0]  clint_rdata;
    wire         clint_rlast;
    wire [3:0]   clint_rid;

    wire         ifu_access_fault;
    wire         lsu_access_fault;

    wire [31: 0] icache_addr;
    wire [31: 0] icache_data;
    wire         icache_hit;
    wire         icache_ready;
    wire         icache_mem_req;
    wire [31: 0] icache_mem_addr;
    wire [BLOCK_SIZE*8-1:0] icache_mem_data;
    wire         icache_mem_ready;

    ysyx_25020037_gpr gpr_cpu (
        .wbu_valid        (wbu_valid       ),
        .exu_ready        (exu_ready       ),
        .clk              (clock           ),
        .rst              (reset           ),
        .rs_data          (rs_data         ),
        .wu_to_gu_bus     (wu_to_gu_bus    ),
        .gu_to_eu_bus     (gu_to_eu_bus    )
    );          
    
    ysyx_25020037_ifu #(
        .BLOCK_SIZE    (BLOCK_SIZE)
    ) ifu_cpu(
        .clk           (clock            ),
        .rst           (reset            ),
        .exu_dnpc_valid(exu_dnpc_valid   ),
        .exu_dnpc      (exu_dnpc         ),
        .pc_updata     (pc_updata        ),
        .idu_ready     (idu_ready        ),
        .ifu_valid     (ifu_valid        ),
        .access_fault  (ifu_access_fault ),
        .fu_to_du_bus  (fu_to_du_bus     ),
        .arready       (ifu_arready      ),
        .arvalid       (ifu_arvalid      ),
        .araddr        (ifu_araddr       ),
        .arid          (ifu_arid         ),
        .arlen         (ifu_arlen        ),
        .arsize        (ifu_arsize       ),
        .arburst       (ifu_arburst      ),
        .rready        (ifu_rready       ),
        .rvalid        (ifu_rvalid       ),
        .rresp         (ifu_rresp        ),
        .rdata         (ifu_rdata        ),
        .rlast         (ifu_rlast        ),
        .rid           (ifu_rid          ),
        .icache_addr   (icache_addr      ),
        .icache_data   (icache_data      ),
        .icache_hit    (icache_hit       ),
        .icache_ready  (icache_ready     ),
        .mem_req       (icache_mem_req   ),
        .mem_addr      (icache_mem_addr  ),
        .mem_data      (icache_mem_data  ),
        .mem_ready     (icache_mem_ready )
        );

    ysyx_25020037_icache #(
        .ADDR_WIDTH    (32),
        .DATA_WIDTH    (32),
        .CACHE_BLOCKS  (CACHE_BLOCKS),
        .BLOCK_SIZE    (BLOCK_SIZE)
    ) u_icache (
        .clk           (clock           ),
        .rst           (reset           ),
        .eu_to_ic_bus  (eu_to_ic_bus    ),
        .cpu_addr      (icache_addr     ),
        .cpu_data      (icache_data     ),
        .cpu_hit       (icache_hit      ),
        .cpu_ready     (icache_ready    ),
        .mem_req       (icache_mem_req  ),
        .mem_addr      (icache_mem_addr ),
        .mem_data      (icache_mem_data ),
        .mem_ready     (icache_mem_ready)
    );

    ysyx_25020037_idu idu_cpu(
        .clk            (clock          ),
        .rst            (reset          ),
        .ifu_valid      (ifu_valid      ),
        .exu_ready      (exu_ready      ),
        .idu_valid      (idu_valid      ),
        .idu_ready      (idu_ready      ),
        .exu_dnpc_valid (exu_dnpc_valid ),
        .fu_to_du_bus   (fu_to_du_bus   ),
        .du_to_eu_bus   (du_to_eu_bus   )
        );


    ysyx_25020037_lsu lsu_cpu(
        .clk            (clock           ),
        .rst            (reset           ),
        .exu_valid      (exu_valid       ),
        .wbu_ready      (wbu_ready       ),
        .lsu_ready      (lsu_ready       ),
        .lsu_valid      (lsu_valid       ),
        .exu_dnpc_valid (exu_dnpc_valid  ),
        .rdata_processed(rdata_processed ),
        .eu_to_lu_bus   (eu_to_lu_bus    ),
        .lu_to_wu_bus   (lu_to_wu_bus    ),
        .access_fault   (lsu_access_fault),
        .awready        (lsu_awready     ),
        .awvalid        (lsu_awvalid     ),
        .awaddr         (lsu_awaddr      ),
        .awid           (lsu_awid        ),
        .awlen          (lsu_awlen       ),
        .awsize         (lsu_awsize      ),
        .awburst        (lsu_awburst     ),
        .wready         (lsu_wready      ),
        .wvalid         (lsu_wvalid      ),
        .wdata          (lsu_wdata       ),
        .wstrb          (lsu_wstrb       ),
        .wlast          (lsu_wlast       ),
        .bready         (lsu_bready      ),
        .bvalid         (lsu_bvalid      ),
        .bresp          (lsu_bresp       ),
        .bid            (lsu_bid         ),
        .arready        (lsu_arready     ),
        .arvalid        (lsu_arvalid     ),
        .araddr         (lsu_araddr      ),
        .arid           (lsu_arid        ),
        .arlen          (lsu_arlen       ),
        .arsize         (lsu_arsize      ),
        .arburst        (lsu_arburst     ),
        .rready         (lsu_rready      ),
        .rvalid         (lsu_rvalid      ),
        .rresp          (lsu_rresp       ),
        .rdata          (lsu_rdata       ),
        .rlast          (lsu_rlast       ),
        .rid            (lsu_rid         )
    );

ysyx_25020037_arbiter u_arbiter(
        .clk                    (clock            ),
        .rst                    (reset            ),
        .ifu_arready            (ifu_arready      ),
        .ifu_arvalid            (ifu_arvalid      ),
        .ifu_araddr             (ifu_araddr       ),
        .ifu_arid               (ifu_arid         ),
        .ifu_arlen              (ifu_arlen        ),
        .ifu_arsize             (ifu_arsize       ),
        .ifu_arburst            (ifu_arburst      ),
        .ifu_rready             (ifu_rready       ),
        .ifu_rvalid             (ifu_rvalid       ),
        .ifu_rresp              (ifu_rresp        ),
        .ifu_rdata              (ifu_rdata        ),
        .ifu_rlast              (ifu_rlast        ),
        .ifu_rid                (ifu_rid          ),
        .lsu_awready            (lsu_awready      ),
        .lsu_awvalid            (lsu_awvalid      ),
        .lsu_awaddr             (lsu_awaddr       ),
        .lsu_awid               (lsu_awid         ),
        .lsu_awlen              (lsu_awlen        ),
        .lsu_awsize             (lsu_awsize       ),
        .lsu_awburst            (lsu_awburst      ),
        .lsu_wready             (lsu_wready       ),
        .lsu_wvalid             (lsu_wvalid       ),
        .lsu_wdata              (lsu_wdata        ),
        .lsu_wstrb              (lsu_wstrb        ),
        .lsu_wlast              (lsu_wlast        ),
        .lsu_bready             (lsu_bready       ),
        .lsu_bvalid             (lsu_bvalid       ),
        .lsu_bresp              (lsu_bresp        ),
        .lsu_bid                (lsu_bid          ),
        .lsu_arready            (lsu_arready      ),
        .lsu_arvalid            (lsu_arvalid      ),
        .lsu_araddr             (lsu_araddr       ),
        .lsu_arid               (lsu_arid         ),
        .lsu_arlen              (lsu_arlen        ),
        .lsu_arsize             (lsu_arsize       ),
        .lsu_arburst            (lsu_arburst      ),
        .lsu_rready             (lsu_rready       ),
        .lsu_rvalid             (lsu_rvalid       ),
        .lsu_rresp              (lsu_rresp        ),
        .lsu_rdata              (lsu_rdata        ),
        .lsu_rlast              (lsu_rlast        ),
        .lsu_rid                (lsu_rid          ),
        .io_master_awready      (io_master_awready),
        .io_master_awvalid      (io_master_awvalid),
        .io_master_awaddr       (io_master_awaddr ),
        .io_master_awid         (io_master_awid   ),
        .io_master_awlen        (io_master_awlen  ),
        .io_master_awsize       (io_master_awsize ),
        .io_master_awburst      (io_master_awburst),
        .io_master_wready       (io_master_wready ),
        .io_master_wvalid       (io_master_wvalid ),
        .io_master_wdata        (io_master_wdata  ),
        .io_master_wstrb        (io_master_wstrb  ),
        .io_master_wlast        (io_master_wlast  ),
        .io_master_bready       (io_master_bready ),
        .io_master_bvalid       (io_master_bvalid ),
        .io_master_bresp        (io_master_bresp  ),
        .io_master_bid          (io_master_bid    ),
        .io_master_arready      (io_master_arready),
        .io_master_arvalid      (io_master_arvalid),
        .io_master_araddr       (io_master_araddr ),
        .io_master_arid         (io_master_arid   ),
        .io_master_arlen        (io_master_arlen  ),
        .io_master_arsize       (io_master_arsize ),
        .io_master_arburst      (io_master_arburst),
        .io_master_rready       (io_master_rready ),
        .io_master_rvalid       (io_master_rvalid ),
        .io_master_rresp        (io_master_rresp  ),
        .io_master_rdata        (io_master_rdata  ),
        .io_master_rlast        (io_master_rlast  ),
        .io_master_rid          (io_master_rid    ),
        .clint_arready          (clint_arready    ),
        .clint_arvalid          (clint_arvalid    ),
        .clint_araddr           (clint_araddr     ),
        .clint_arid             (clint_arid       ),
        .clint_arlen            (clint_arlen      ),
        .clint_arsize           (clint_arsize     ),
        .clint_arburst          (clint_arburst    ),
        .clint_rready           (clint_rready     ),
        .clint_rvalid           (clint_rvalid     ),
        .clint_rresp            (clint_rresp      ),
        .clint_rdata            (clint_rdata      ),
        .clint_rlast            (clint_rlast      ),
        .clint_rid              (clint_rid        )
);

ysyx_25020037_clint u_clint (
        .clk        (clock        ),
        .rst        (reset        ),
        .arready    (clint_arready),
        .arvalid    (clint_arvalid),
        .araddr     (clint_araddr ),
        .arid       (clint_arid   ),
        .arlen      (clint_arlen  ),
        .arsize     (clint_arsize ),
        .arburst    (clint_arburst),
        .rready     (clint_rready ),
        .rvalid     (clint_rvalid ),
        .rresp      (clint_rresp  ),
        .rdata      (clint_rdata  ),
        .rlast      (clint_rlast  ),
        .rid        (clint_rid    )
);

    ysyx_25020037_exu exu_cpu(
        .clk            (clock          ),
        .rst            (reset          ),
        .idu_valid      (idu_valid      ),
        .lsu_ready      (lsu_ready      ),
        .exu_ready      (exu_ready      ),
        .exu_valid      (exu_valid      ),
        .rs_data        (rs_data        ),
        .rdata_processed(rdata_processed),
        .gu_to_eu_bus   (gu_to_eu_bus   ),
        .du_to_eu_bus   (du_to_eu_bus   ),
        .eu_to_lu_bus   (eu_to_lu_bus   ),
        .eu_to_ic_bus   (eu_to_ic_bus   ),
        .pc_updata      (pc_updata      ),
        .exu_dnpc_valid (exu_dnpc_valid ),
        .exu_dnpc       (exu_dnpc       )
    );

    ysyx_25020037_wbu wbu_cpu(
        .lsu_valid    (lsu_valid    ),
        .wbu_valid    (wbu_valid    ),
        .clk          (clock        ),
        .rst          (reset        ),
        .lu_to_wu_bus (lu_to_wu_bus ),
        .wu_to_gu_bus (wu_to_gu_bus )
        );

endmodule

// Included from /home/tanghongwei/ysyx-workbench/npc/vsrc/core/ysyx_25020037_wbu.v
`include "ysyx_25020037_config.vh"

module ysyx_25020037_wbu (
    input  wire         lsu_valid,
    output reg          wbu_valid,
    input  wire         clk,
    input  wire         rst,
    input  wire [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus,
    output reg  [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus
);
    wire [ 3: 0] rd;
    wire         ecall_en;
    wire         mret_en;
    wire [`EU_TO_GU_BUS_WD -1:0] eu_to_gu_bus;
    wire         gpr_we;
    wire         rlsu_we;
    wire [31: 0] csr_wcsr_data;
    wire [31: 0] rdata_processed;
    assign {rd,
            ecall_en,
            mret_en,
            eu_to_gu_bus,
            gpr_we,
            rlsu_we,
            csr_wcsr_data,
            rdata_processed
           } = lu_to_wu_bus;

    wire         final_gpr_we = ~rst & (gpr_we | rlsu_we);
    wire [31: 0] final_result = ~{32{rst}} & rdata_processed;

    always @(posedge clk) begin
        wbu_valid <= 1'b0;
        wu_to_gu_bus <= 'b0;
        if (lsu_valid) begin
            wbu_valid <= 1'b1;
            wu_to_gu_bus <= {
                rd,
                ecall_en,
                mret_en,
                eu_to_gu_bus,
                csr_wcsr_data,     
                final_gpr_we,         
                final_result 
            };
        end
    end

endmodule

