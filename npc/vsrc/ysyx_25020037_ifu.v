
typedef bit [31:0] word_t;

module ysyx_25020037_ifu(
    input [31:0] pc,
    output [31:0] s
);
    import "DPI-C" function word_t pmem_read(input logic [31:0] addr, input int len);

    initial begin
        $display("ifu_pc=%h", pc);
    end
    assign s = pmem_read(pc, 4);
endmodule
