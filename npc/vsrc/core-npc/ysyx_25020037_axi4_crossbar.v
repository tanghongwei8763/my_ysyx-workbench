module ysyx_25020037_axi_crossbar (
    input  wire         clk,
    input  wire         rst,

    input  wire [31:0]  ifu_araddr,
    input  wire         ifu_arvalid,
    output reg          ifu_arready,
    output reg  [31:0]  ifu_rdata,
    output reg  [1:0]   ifu_rresp,
    output reg          ifu_rvalid,
    input  wire         ifu_rready,

    input  wire [31:0]  lsu_araddr,
    input  wire         lsu_arvalid,
    output reg          lsu_arready,
    input  wire [31:0]  lsu_awaddr,
    input  wire         lsu_awvalid,
    output reg          lsu_awready,
    input  wire [31:0]  lsu_wdata,
    input  wire [3:0]   lsu_wstrb,
    input  wire         lsu_wvalid,
    output reg          lsu_wready,
    output reg  [1:0]   lsu_bresp,
    output reg          lsu_bvalid,
    input  wire         lsu_bready,
    output reg  [31:0]  lsu_rdata,
    output reg  [1:0]   lsu_rresp,
    output reg          lsu_rvalid,
    input  wire         lsu_rready,

    output reg  [31:0]  sram_araddr,
    output reg          sram_arvalid,
    input  wire         sram_arready,
    output reg  [31:0]  sram_awaddr,
    output reg          sram_awvalid,
    input  wire         sram_awready,
    output reg  [31:0]  sram_wdata,
    output reg  [3:0]   sram_wstrb,
    output reg          sram_wvalid,
    input  wire         sram_wready,
    input  wire [31:0]  sram_rdata,
    input  wire [1:0]   sram_rresp,
    input  wire         sram_rvalid,
    output reg          sram_rready,
    input  wire [1:0]   sram_bresp,
    input  wire         sram_bvalid,
    output reg          sram_bready,

    output reg  [31:0]  uart_araddr,
    output reg          uart_arvalid,
    input  wire         uart_arready,
    output reg  [31:0]  uart_awaddr,
    output reg          uart_awvalid,
    input  wire         uart_awready,
    output reg  [31:0]  uart_wdata,
    output reg  [3:0]   uart_wstrb,
    output reg          uart_wvalid,
    input  wire         uart_wready,
    input  wire [31:0]  uart_rdata,
    input  wire [1:0]   uart_rresp,
    input  wire         uart_rvalid,
    output reg          uart_rready,
    input  wire [1:0]   uart_bresp,
    input  wire         uart_bvalid,
    output reg          uart_bready,

    output reg  [31:0]  clint_araddr,
    output reg          clint_arvalid,
    input  wire         clint_arready,
    input  wire [31:0]  clint_rdata,
    input  wire [1:0]   clint_rresp,
    input  wire         clint_rvalid,
    output reg          clint_rready
);

localparam SRAM_BASE_START = 32'h80000000;
localparam SRAM_BASE_END   = 32'h8fffffff;
localparam UART_BASE       = 32'h10000000;
localparam CLINT_BASE      = 32'h02000000;

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
        IFU_ACCESS : next_master = (sram_rvalid & sram_rready) ? IDLE : IFU_ACCESS;
        LSU_ACCESS : next_master = (((sram_rvalid & sram_rready) || (sram_bvalid & sram_bready)) |
                                    ((uart_rvalid & uart_rready) || (uart_bvalid & uart_bready)) |
                                    (clint_rvalid & clint_rready)) ? IDLE : LSU_ACCESS;
        default: next_master = IDLE;
    endcase
end

always @(*) begin
    sram_arvalid = 1'b0;
    uart_arvalid = 1'b0;
    clint_arvalid = 1'b0;
    ifu_arready = 1'b0;
    lsu_arready = 1'b0;
    
    case (current_master)
        IFU_ACCESS: begin
            sram_araddr = ifu_araddr;
            sram_arvalid = ifu_arvalid;
            ifu_arready = sram_arready;
        end
        LSU_ACCESS: begin
            if (is_sram_addr) begin
                sram_araddr = lsu_araddr;
                sram_arvalid = lsu_arvalid;
                lsu_arready = sram_arready;
            end else if (is_uart_addr) begin
                uart_araddr = lsu_araddr;
                uart_arvalid = lsu_arvalid;
                lsu_arready = uart_arready;
            end else if (is_clint_addr) begin
                clint_araddr = lsu_araddr;
                clint_arvalid = lsu_arvalid;
                lsu_arready = clint_arready;
            end
        end
        default: begin end
    endcase
end

always @(*) begin
    sram_awvalid = 1'b0;
    uart_awvalid = 1'b0;
    lsu_awready = 1'b0;
    sram_awaddr = 32'h0;
    uart_awaddr = 32'h0;

    if (current_master == LSU_ACCESS && is_sram_addr) begin
        sram_awaddr = lsu_awaddr;
        sram_awvalid = lsu_awvalid;
        lsu_awready = sram_awready;
    end else if (current_master == LSU_ACCESS && is_uart_addr) begin
        uart_awaddr = lsu_awaddr;
        uart_awvalid = lsu_awvalid;
        lsu_awready = uart_awready;
    end
end

always @(*) begin
    sram_wvalid = 1'b0;
    uart_wvalid = 1'b0;
    lsu_wready = 1'b0;
    sram_wdata = 32'b0;
    sram_wstrb = 4'b0;
    uart_wdata = 32'b0;
    uart_wstrb = 4'b0;

    if (current_master == LSU_ACCESS && is_sram_addr) begin
        sram_wdata = lsu_wdata;
        sram_wstrb = lsu_wstrb;
        sram_wvalid = lsu_wvalid;
        lsu_wready = sram_wready;
    end else if (current_master == LSU_ACCESS && is_uart_addr) begin
        uart_wdata = lsu_wdata;
        uart_wstrb = lsu_wstrb;
        uart_wvalid = lsu_wvalid;
        lsu_wready = uart_wready;
    end
end

always @(*) begin
    sram_rready = 1'b0;
    uart_rready = 1'b0;
    clint_rready = 1'b0;
    ifu_rdata = 32'h0;
    ifu_rvalid = 1'b0;
    ifu_rresp = 2'b00;
    lsu_rdata = 32'h0;
    lsu_rvalid = 1'b0;
    lsu_rresp = 2'b00;

    case (current_master)
        IFU_ACCESS: begin
            ifu_rdata = sram_rdata;
            ifu_rvalid = sram_rvalid;
            ifu_rresp = sram_rresp;
            sram_rready = ifu_rready;
        end
        LSU_ACCESS: begin
            if (is_sram_addr) begin
                lsu_rdata = sram_rdata;
                lsu_rvalid = sram_rvalid;
                lsu_rresp = sram_rresp;
                sram_rready = lsu_rready;
            end else if (is_uart_addr) begin
                lsu_rdata = uart_rdata;
                lsu_rvalid = uart_rvalid;
                lsu_rresp = uart_rresp;
                uart_rready = lsu_rready;
            end else if (is_clint_addr) begin
                lsu_rdata = clint_rdata;
                lsu_rvalid = clint_rvalid;
                lsu_rresp = clint_rresp;
                clint_rready = lsu_rready;
            end
        end
        IDLE:begin end
        default: begin end
    endcase
end

always @(*) begin
    sram_bready = 1'b0;
    uart_bready = 1'b0;
    lsu_bresp = 2'b00;
    lsu_bvalid = 1'b0;

    if (current_master == LSU_ACCESS && is_sram_addr) begin
        lsu_bresp = sram_bresp;
        lsu_bvalid = sram_bvalid;
        sram_bready = lsu_bready;
    end else if (current_master == LSU_ACCESS && is_uart_addr) begin
        lsu_bresp = uart_bresp;
        lsu_bvalid = uart_bvalid;
        uart_bready = lsu_bready;
    end
end

endmodule