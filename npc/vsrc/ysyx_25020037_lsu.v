module ysyx_25020037_lsu (
    input clk,
    input rst,
    input [31:0] wdata_lsu,
    input [31:0] waddr_lsu,
    input [31:0] raddr_lsu,
    input [31:0] wlen_lsu,
    input [31:0] rlen_lsu,
    input ren_lsu,
    input wen_lsu,
    output reg [31:0] rdata_lsu
);
    import "DPI-C" function int pmem_read(input int addr, input int len);
    import "DPI-C" function void pmem_write(input int addr, input int len, int data);

    always @(posedge clk) begin
        if(~rst & wen_lsu) begin
            pmem_write(waddr_lsu, wlen_lsu, wdata_lsu);
        end
    end

    always @(*) begin
        if(~rst & ren_lsu)
            rdata_lsu = {$unsigned(pmem_read(raddr_lsu, rlen_lsu))};
        else
            rdata_lsu = 32'b0;
    end

endmodule
