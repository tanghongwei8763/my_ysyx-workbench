module ysyx_25020037_axi_arbiter (
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
    output reg          sram_bready
);

localparam IDLE    = 2'b00;
localparam IFU_ACCESS = 2'b01;
localparam LSU_ACCESS = 2'b10;

reg [1:0] current_master, next_master;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_master <= IDLE;
    end else begin
        current_master <= next_master;
    end
end

always @(*) begin
    case (current_master)
        IDLE: next_master = (lsu_arvalid || lsu_awvalid) ? LSU_ACCESS  :
                            (ifu_arvalid) ? IFU_ACCESS : IDLE;
        IFU_ACCESS: next_master = (sram_rvalid && sram_rready) ? IDLE : IFU_ACCESS;
        LSU_ACCESS: next_master = ((sram_rvalid && sram_rready) || (sram_bvalid && sram_bready)) ? IDLE : LSU_ACCESS;
        default: next_master = IDLE;
    endcase
end

always @(*) begin
    case (current_master)
        IFU_ACCESS: begin
            sram_araddr = ifu_araddr;
            sram_arvalid = ifu_arvalid;
            ifu_arready = sram_arready;
            lsu_arready = 1'b0;
        end
        LSU_ACCESS: begin
            sram_araddr = lsu_araddr;
            sram_arvalid = lsu_arvalid;
            lsu_arready = sram_arready;
            ifu_arready = 1'b0;
        end
        default: begin
            sram_araddr = 32'h0;
            sram_arvalid = 1'b0;
            ifu_arready = 1'b0;
            lsu_arready = 1'b0;
        end
    endcase
end

always @(*) begin
    if (current_master == LSU_ACCESS) begin
        sram_awaddr = lsu_awaddr;
        sram_awvalid = lsu_awvalid;
        lsu_awready = sram_awready;
    end else begin
        sram_awaddr = 32'h0;
        sram_awvalid = 1'b0;
        lsu_awready = 1'b0;
    end
end

always @(*) begin
    if (current_master == LSU_ACCESS) begin
        sram_wdata = lsu_wdata;
        sram_wstrb = lsu_wstrb;
        sram_wvalid = lsu_wvalid;
        lsu_wready = sram_wready;
    end else begin
        sram_wdata = 32'h0;
        sram_wstrb = 4'h0;
        sram_wvalid = 1'b0;
        lsu_wready = 1'b0;
    end
end

always @(*) begin
    sram_rready = 1'b0;
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
            lsu_rdata = sram_rdata;
            lsu_rvalid = sram_rvalid;
            lsu_rresp = sram_rresp;
            sram_rready = lsu_rready;
        end
        IDLE:begin end
        default: begin end
    endcase
end

always @(*) begin
    sram_bready = 1'b0;
    lsu_bresp = 2'b00;
    lsu_bvalid = 1'b0;

    if (current_master == LSU_ACCESS) begin
        lsu_bresp = sram_bresp;
        lsu_bvalid = sram_bvalid;
        sram_bready = lsu_bready;
    end
end

endmodule