module ysyx_25020037_ifu(
    input  wire         rst,
    input  wire [31: 0] pc,
    output wire [31: 0] inst
);
    import "DPI-C" function int pmem_read(input int addr, input int len);

    assign inst = rst ? 32'b0 : {$unsigned(pmem_read(pc, 32'h4))};
endmodule
