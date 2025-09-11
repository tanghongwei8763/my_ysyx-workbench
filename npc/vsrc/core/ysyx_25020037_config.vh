`define FU_TO_DU_BUS_WD 64
`define DU_TO_EU_BUS_WD 208
`define EU_TO_LU_BUS_WD 179
`define LU_TO_WU_BUS_WD 172
`define WU_TO_GU_BUS_WD 106
`define GU_TO_DU_BUS_WD 32*3

`define DU_TO_LU_BUS_WD 2
`define EU_TO_WU_BUS_WD 1
`define EU_TO_GU_BUS_WD 3
`define EU_TO_IC_BUS_WD 1

`define RS_DATA 22
`ifdef RESET_VAL
`define PC_RESET_VAL 32'h80000000
`else
`define PC_RESET_VAL 32'h30000000
`endif