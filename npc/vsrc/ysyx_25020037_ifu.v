
typedef logic [31:0] paddr_t;

module ysyx_25020037_ifu(
    input [31:0] pc,
    output [31:0] s
);
    import "DPI-C" function int pmem_read(paddr_t addr, int len);

    assign s = pmem_read(pc, 4);
endmodule
