`define FU_TO_DU_BUS_WD 62
`define DU_TO_EU_BUS_WD 110
`define EU_TO_LU_BUS_WD 114
`define LU_TO_WU_BUS_WD 75
`define WU_TO_GU_BUS_WD 74
`define GU_TO_EU_BUS_WD 32*3

`define DU_TO_LU_BUS_WD 2
`define EU_TO_GU_BUS_WD 3
`define EU_TO_IC_BUS_WD 1

`define RS_DATA 22
`ifdef RESET_VAL
`define PC_RESET_VAL 30'h20000000
`else
`define PC_RESET_VAL 30'h0C000000
`endif