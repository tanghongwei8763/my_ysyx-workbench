module ysyx_25020037_lsu (
    input  wire         clk,
    input  wire         rst,
    input  wire [31: 0] rlsu_addr,
    input  wire [31: 0] rlsu_len,
    input  wire [31: 0] wlsu_addr,
    input  wire [31: 0] wlsu_len,
    input  wire [31: 0] wlsu_data,
    input  wire         rlsu_we,
    input  wire         wlsu_we,
    output reg  [31: 0] rlsu_data
);
    import "DPI-C" function int pmem_read(input int addr, input int len, input int trace_on);
    import "DPI-C" function void pmem_write(input int addr, input int len, int data, input int trace_on);


    always @(posedge clk) begin
        if(~rst & wlsu_we) begin
            pmem_write(wlsu_addr, wlsu_len, wlsu_data, {32{wlsu_we}});
        end
    end

    assign rlsu_data = (~rst & rlsu_we) ? {$unsigned(pmem_read(rlsu_addr, rlsu_len, {32{rlsu_we}}))} : 32'b0;

endmodule
