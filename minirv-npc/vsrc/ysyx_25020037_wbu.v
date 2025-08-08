module ysyx_25020037_wbu (
    input  wire         rst,
    input  wire         gpr_we,
    input  wire         rlsu_we,
    input  wire [31: 0] result,
    input  wire [31: 0] rlsu_data,
    output wire         final_gpr_we,
    output wire [31: 0] final_result
);
    
    assign final_result = rst          ? 32'b0 :
                          rlsu_we      ? rlsu_data :
                          result;
    assign final_gpr_we = rst ? 1'b0   : gpr_we;

endmodule
