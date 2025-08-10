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

localparam CLINT_BASE      = 32'h02000000;

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
                is_clint_addr <= (lsu_arvalid & ((lsu_araddr == CLINT_BASE) |
                                                (lsu_araddr == CLINT_BASE + 4)));
            end
            default: begin end
        endcase
    end
end

always @(*) begin
    case (current_master)
        IDLE: next_master = (lsu_arvalid || lsu_awvalid) ? LSU_ACCESS  :
                            (ifu_arvalid) ? IFU_ACCESS : IDLE;
        IFU_ACCESS : next_master = (io_master_rvalid & io_master_rready) ? IDLE : IFU_ACCESS;
        LSU_ACCESS : next_master = (((io_master_rvalid & io_master_rready) || (io_master_bvalid & io_master_bready)) |
                                    (clint_rvalid & clint_rready)) ? IDLE : LSU_ACCESS;
        default: next_master = IDLE;
    endcase
end

always @(*) begin
    ifu_arready     = 1'b0;
    ifu_rvalid      = 1'b0;
    lsu_arready     = 1'b0;
    lsu_awready     = 1'b0;
    lsu_wready      = 1'b0;
    lsu_bvalid      = 1'b0;
    lsu_rvalid      = 1'b0;
    
    io_master_arvalid = 1'b0;
    io_master_awvalid = 1'b0;
    io_master_wvalid  = 1'b0;
    io_master_rready  = 1'b0;
    io_master_bready  = 1'b0;
    
    clint_arvalid   = 1'b0;
    clint_rready    = 1'b0;
    
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