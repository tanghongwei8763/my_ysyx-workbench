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

    input  wire         sram_awready,
    output reg          sram_awvalid,
    output reg  [31: 0] sram_awaddr,
    output reg  [ 3: 0] sram_awid,
    output reg  [ 7: 0] sram_awlen,
    output reg  [ 2: 0] sram_awsize,
    output reg  [ 1: 0] sram_awburst,
    input  wire         sram_wready,
    output reg          sram_wvalid,
    output reg  [31: 0] sram_wdata,
    output reg  [ 3: 0] sram_wstrb,
    output reg          sram_wlast,
    output reg          sram_bready,
    input  wire         sram_bvalid,
    input  wire [ 1: 0] sram_bresp,
    input  wire [ 3: 0] sram_bid,
    input  wire         sram_arready,
    output reg          sram_arvalid,
    output reg [31: 0]  sram_araddr,
    output reg [ 3: 0]  sram_arid,
    output reg [ 7: 0]  sram_arlen,
    output reg [ 2: 0]  sram_arsize,
    output reg [ 1: 0]  sram_arburst,
    output reg          sram_rready,
    input  wire         sram_rvalid,
    input  wire [ 1: 0] sram_rresp,
    input  wire [31: 0] sram_rdata,
    input  wire         sram_rlast,
    input  wire [ 3: 0] sram_rid,

    input  wire         uart_awready,
    output reg          uart_awvalid,
    output reg  [31: 0] uart_awaddr,
    output reg  [ 3: 0] uart_awid,
    output reg  [ 7: 0] uart_awlen,
    output reg  [ 2: 0] uart_awsize,
    output reg  [ 1: 0] uart_awburst,
    input  wire         uart_wready,
    output reg          uart_wvalid,
    output reg  [31: 0] uart_wdata,
    output reg  [ 3: 0] uart_wstrb,
    output reg          uart_wlast,
    output reg          uart_bready,
    input  wire         uart_bvalid,
    input  wire [ 1: 0] uart_bresp,
    input  wire [ 3: 0] uart_bid,
    input  wire         uart_arready,
    output reg          uart_arvalid,
    output reg [31: 0]  uart_araddr,
    output reg [ 3: 0]  uart_arid,
    output reg [ 7: 0]  uart_arlen,
    output reg [ 2: 0]  uart_arsize,
    output reg [ 1: 0]  uart_arburst,
    output reg          uart_rready,
    input  wire         uart_rvalid,
    input  wire [ 1: 0] uart_rresp,
    input  wire [31: 0] uart_rdata,
    input  wire         uart_rlast,
    input  wire [ 3: 0] uart_rid,

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

localparam SRAM_BASE_START = 32'h80000000;
localparam SRAM_BASE_END   = 32'h8fffffff;
localparam UART_BASE       = 32'ha00003f8;
localparam CLINT_BASE      = 32'ha0000048;

localparam IDLE        = 2'b00;
localparam IFU_ACCESS  = 2'b01;
localparam LSU_ACCESS  = 2'b10;

reg       is_clint_addr;
reg       is_uart_addr;
reg       is_sram_addr;
reg [1:0] current_master, next_master;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_master <= IDLE;
        is_sram_addr   <= 1'b0;
        is_uart_addr   <= 1'b0;
        is_clint_addr  <= 1'b0;
    end else begin
        current_master <= next_master;
        case (current_master)
            IDLE: begin
                is_clint_addr <= (lsu_arvalid & ((lsu_araddr == CLINT_BASE) |
                                                (lsu_araddr == CLINT_BASE + 4)));
                is_uart_addr  <= (lsu_arvalid & (lsu_araddr == UART_BASE)) |
                                 (lsu_awvalid & (lsu_awaddr == UART_BASE));
                is_sram_addr  <= (lsu_arvalid & ((lsu_araddr >= SRAM_BASE_START) & (lsu_araddr <= SRAM_BASE_END))) |
                                 (lsu_awvalid & ((lsu_awaddr >= SRAM_BASE_START) & (lsu_awaddr <= SRAM_BASE_END)));
            end
            default: begin end
        endcase
    end
end

always @(*) begin
    case (current_master)
        IDLE: next_master = (lsu_arvalid || lsu_awvalid) ? LSU_ACCESS  :
                            (ifu_arvalid) ? IFU_ACCESS : IDLE;
        IFU_ACCESS : next_master = ifu_rlast ? IDLE : IFU_ACCESS;
        LSU_ACCESS : next_master =  (lsu_rlast | 
                                    (sram_bvalid & sram_bready) |
                                    (uart_bvalid & uart_bready) |
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
    
    sram_arvalid = 1'b0;
    sram_araddr  = 32'b0;
    sram_arid    = 4'b0;
    sram_arlen   = 8'b0;
    sram_arsize  = 3'b0;
    sram_arburst = 2'b0;
    sram_awvalid = 1'b0;
    sram_awaddr  = 32'b0;
    sram_awid    = 4'b0;
    sram_awlen   = 8'b0;
    sram_awsize  = 3'b0;
    sram_awburst = 2'b0;
    sram_wvalid  = 1'b0;
    sram_wdata   = 32'b0;
    sram_wstrb   = 4'b0;
    sram_wlast   = 1'b0;
    sram_bready  = 1'b0;
    sram_rready  = 1'b0;
    
    uart_arvalid = 1'b0;
    uart_araddr  = 32'b0;
    uart_arid    = 4'b0;
    uart_arlen   = 8'b0;
    uart_arsize  = 3'b0;
    uart_arburst = 2'b0;
    uart_awvalid = 1'b0;
    uart_awaddr  = 32'b0;
    uart_awid    = 4'b0;
    uart_awlen   = 8'b0;
    uart_awsize  = 3'b0;
    uart_awburst = 2'b0;
    uart_wvalid  = 1'b0;
    uart_wdata   = 32'b0;
    uart_wstrb   = 4'b0;
    uart_wlast   = 1'b0;
    uart_bready  = 1'b0;
    uart_rready  = 1'b0;

    clint_arvalid = 1'b0;
    clint_araddr  = 32'b0;
    clint_arid    = 4'b0;
    clint_arlen   = 8'b0;
    clint_arsize  = 3'b0;
    clint_arburst = 2'b0;
    clint_rready  = 1'b0;
    
    case (current_master)
        IFU_ACCESS: begin
            sram_arvalid = ifu_arvalid;
            sram_araddr  = ifu_araddr;
            sram_arid    = ifu_arid;
            sram_arlen   = ifu_arlen;
            sram_arsize  = ifu_arsize;
            sram_arburst = ifu_arburst;
            sram_rready  = ifu_rready;
            
            ifu_arready     = sram_arready;
            ifu_rdata       = sram_rdata;
            ifu_rresp       = sram_rresp;
            ifu_rlast       = sram_rlast;
            ifu_rvalid      = sram_rvalid;
            ifu_rid         = sram_rid;
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
            end else if (is_uart_addr) begin
                uart_arvalid = lsu_arvalid;
                uart_araddr  = lsu_araddr;
                uart_arid    = lsu_arid;
                uart_arlen   = lsu_arlen;
                uart_arsize  = lsu_arsize;
                uart_arburst = lsu_arburst;
                uart_rready  = lsu_rready;
                uart_awvalid = lsu_awvalid;
                uart_awaddr  = lsu_awaddr;
                uart_awid    = lsu_awid;
                uart_awlen   = lsu_awlen;
                uart_awsize  = lsu_awsize;
                uart_awburst = lsu_awburst;
                uart_wvalid  = lsu_wvalid;
                uart_wdata   = lsu_wdata;
                uart_wstrb   = lsu_wstrb;
                uart_wlast   = lsu_wlast;
                uart_bready  = lsu_bready;
                
                lsu_arready     = uart_arready;
                lsu_rdata       = uart_rdata;
                lsu_rresp       = uart_rresp;
                lsu_rlast       = uart_rlast;
                lsu_rvalid      = uart_rvalid;
                lsu_rid         = uart_rid;
                lsu_awready     = uart_awready;
                lsu_wready      = uart_wready;
                lsu_bvalid      = uart_bvalid;
                lsu_bresp       = uart_bresp;
                lsu_bid         = uart_bid;
            end else if (is_sram_addr) begin
                sram_arvalid = lsu_arvalid;
                sram_araddr  = lsu_araddr;
                sram_arid    = lsu_arid;
                sram_arlen   = lsu_arlen;
                sram_arsize  = lsu_arsize;
                sram_arburst = lsu_arburst;
                sram_rready  = lsu_rready;
                sram_awvalid = lsu_awvalid;
                sram_awaddr  = lsu_awaddr;
                sram_awid    = lsu_awid;
                sram_awlen   = lsu_awlen;
                sram_awsize  = lsu_awsize;
                sram_awburst = lsu_awburst;
                sram_wvalid  = lsu_wvalid;
                sram_wdata   = lsu_wdata;
                sram_wstrb   = lsu_wstrb;
                sram_wlast   = lsu_wlast;
                sram_bready  = lsu_bready;
                
                lsu_arready     = sram_arready;
                lsu_rdata       = sram_rdata;
                lsu_rresp       = sram_rresp;
                lsu_rlast       = sram_rlast;
                lsu_rvalid      = sram_rvalid;
                lsu_rid         = sram_rid;
                lsu_awready     = sram_awready;
                lsu_wready      = sram_wready;
                lsu_bvalid      = sram_bvalid;
                lsu_bresp       = sram_bresp;
                lsu_bid         = sram_bid;
            end
        end
        default: begin end
    endcase
end

endmodule