`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/core-npc/ysyx_25020037_config.vh"

module ysyx_25020037 (
    input   wire         clock,
    input   wire         reset,
    input   wire         io_interrupt
);

    parameter MSTATUS = 32'h300;
    parameter MTVEC   = 32'h305;
    parameter MEPC    = 32'h341;
    parameter MCAUSE  = 32'h342;
`ifdef VERILATOR
    parameter CONFIG_FTRACE = 1'b0;
    import "DPI-C" function void call_func(input int pc, input int dnpc);
    import "DPI-C" function void ret_func(input int pc);
    wire         ftrace_jal;
    wire         ftrace_jalr;
`endif VERILATOR
    wire [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus;
    wire [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus;
    wire [`DU_TO_GU_BUS_WD -1:0] du_to_gu_bus;
    wire [`GU_TO_EU_BUS_WD -1:0] gu_to_eu_bus;
    wire [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus;
    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire [`DU_TO_WU_BUS_WD -1:0] du_to_wu_bus;
    wire [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus;
    wire [`EU_TO_WU_BUS_WD -1:0] eu_to_wu_bus;

    wire [31: 0] pc;
    wire [31: 0] inst;
    wire [31: 0] dnpc;
    wire [31: 0] mtvec;
    wire [31: 0] mepc;
    wire [31: 0] mstatus;
    wire [31: 0] mcause;

    wire [31: 0] ifu_araddr;
    wire         ifu_arvalid;
    wire         ifu_arready;
    wire [31: 0] ifu_rdata;
    wire [ 1: 0] ifu_rresp;   
    wire         ifu_rvalid;   
    wire         ifu_rready;

    wire         idu_valid;
    wire         idu_ready;
    wire         exu_valid;
    wire         exu_ready;
    wire         lsu_valid;
    wire         lsu_ready;
    wire         wbu_ready;
    wire         wbu_valid;
    wire         gpr_valid;
    wire         gpr_ready;

    wire [31: 0] lsu_araddr;  
    wire         lsu_arvalid;  
    wire         lsu_arready; 
    wire [31: 0] lsu_awaddr; 
    wire         lsu_awvalid;  
    wire         lsu_awready; 
    wire [31: 0] lsu_wdata; 
    wire [ 3: 0] lsu_wstrb;   
    wire         lsu_wvalid;   
    wire         lsu_wready;  
    wire [ 1: 0] lsu_bresp;  
    wire         lsu_bvalid;   
    wire         lsu_bready;  
    wire [31: 0] lsu_rdata;  
    wire [ 1: 0] lsu_rresp;   
    wire         lsu_rvalid;   
    wire         lsu_rready;

    wire [31: 0] sram_araddr;  
    wire         sram_arvalid; 
    wire         sram_arready;
    wire [31: 0] sram_awaddr;
    wire         sram_awvalid; 
    wire         sram_awready;
    wire [31: 0] sram_wdata;
    wire [ 3: 0] sram_wstrb;  
    wire         sram_wvalid;  
    wire         sram_wready; 
    wire [31: 0] sram_rdata; 
    wire [ 1: 0] sram_rresp;  
    wire         sram_rvalid;  
    wire         sram_rready; 
    wire [ 1: 0] sram_bresp; 
    wire         sram_bvalid;  
    wire         sram_bready; 

    wire [31: 0] uart_araddr;  
    wire         uart_arvalid; 
    wire         uart_arready;
    wire [31: 0] uart_awaddr;
    wire         uart_awvalid; 
    wire         uart_awready;
    wire [31: 0] uart_wdata;
    wire [ 3: 0] uart_wstrb;  
    wire         uart_wvalid;  
    wire         uart_wready; 
    wire [31: 0] uart_rdata; 
    wire [ 1: 0] uart_rresp;  
    wire         uart_rvalid;  
    wire         uart_rready; 
    wire [ 1: 0] uart_bresp; 
    wire         uart_bvalid;  
    wire         uart_bready; 

    wire [31: 0] clint_araddr;  
    wire         clint_arvalid; 
    wire         clint_arready;
    wire [31: 0] clint_rdata; 
    wire [ 1: 0] clint_rresp;  
    wire         clint_rvalid;  
    wire         clint_rready;

    wire [31: 0] csr_wgpr_data;
    wire [31: 0] csr_wcsr_data;
    wire         inst_s;
    wire         inst_l;
    wire         gpr_we;
    assign csr_wgpr_data    = ({32{du_to_eu_bus[58:27] == MTVEC  }} & mtvec)
                            | ({32{du_to_eu_bus[58:27] == MEPC   }} & mepc)
                            | ({32{du_to_eu_bus[58:27] == MSTATUS}} & mstatus)
                            | ({32{du_to_eu_bus[58:27] == MCAUSE }} & mcause);
    assign csr_wcsr_data    = ({32{du_to_eu_bus[0]}} & gu_to_eu_bus[127: 96])
                            | ({32{du_to_eu_bus[1]}} & (gu_to_eu_bus[127: 96] | csr_wgpr_data));

    ysyx_25020037_Reg #(32, 32'h80000000) PC (
        .clk         (clock    ),
        .rst         (reset    ),
        .din         (dnpc     ),
        .dout        (pc       ),
        .wen         (wbu_valid)
    );

    ysyx_25020037_gpr gpr_cpu (
        .idu_valid        (idu_valid       ),
        .wbu_valid        (wbu_valid       ),
        .gpr_we           (gpr_we          ),
        .exu_ready        (exu_ready       ),
        .gpr_ready        (gpr_ready       ),
        .gpr_valid        (gpr_valid       ),
        .clk              (clock           ),
        .rst              (reset           ),
        .csr_wcsr_data    (csr_wcsr_data   ),
        .wu_to_gu_bus     (wu_to_gu_bus    ),
        .du_to_gu_bus     (du_to_gu_bus    ),
        .gu_to_eu_bus     (gu_to_eu_bus    ),
        .mtvec            (mtvec           ),
        .mepc             (mepc            ),
        .mstatus          (mstatus         ),
        .mcause           (mcause          )  
    );          
    
    ysyx_25020037_ifu ifu_cpu(
        .clk        (clock        ),
        .rst        (reset        ),
        .pc         (pc           ),
        .idu_ready  (idu_ready    ),
        .inst       (inst         ),
        .araddr     (ifu_araddr   ),
        .arvalid    (ifu_arvalid  ),
        .arready    (ifu_arready  ),

        .rdata      (ifu_rdata    ),
        .rresp      (ifu_rresp    ),
        .rvalid     (ifu_rvalid   ),
        .rready     (ifu_rready   )
        );

    ysyx_25020037_idu idu_cpu(
        .clk         (clock       ),
        .rst         (reset       ),
        .pc          (pc          ),
        .inst        (ifu_rdata   ),
        .ifu_rvalid  (ifu_rvalid  ),
        .exu_ready   (exu_ready   ),
        .idu_valid   (idu_valid   ),
        .idu_ready   (idu_ready   ),
        .inst_s      (inst_s      ),
        .inst_l      (inst_l      ),
        .gpr_we      (gpr_we      ),
        .du_to_eu_bus(du_to_eu_bus),
        .du_to_gu_bus(du_to_gu_bus),
        .du_to_lu_bus(du_to_lu_bus),
        .du_to_wu_bus(du_to_wu_bus),
        .ftrace_jal  (ftrace_jal  ),
        .ftrace_jalr (ftrace_jalr )
        );


    ysyx_25020037_lsu lsu_cpu(
        .clk         (clock       ),
        .rst         (reset       ),
        .exu_valid   (exu_valid   ),
        .wbu_ready   (wbu_ready   ),
        .lsu_ready   (lsu_ready   ),
        .lsu_valid   (lsu_valid   ),
        .eu_to_lu_bus(eu_to_lu_bus),
        .du_to_lu_bus(du_to_lu_bus),
        .lu_to_wu_bus(lu_to_wu_bus),
        .araddr      (lsu_araddr  ),
        .arvalid     (lsu_arvalid ),
        .arready     (lsu_arready ),
        .awaddr      (lsu_awaddr  ),
        .awvalid     (lsu_awvalid ),
        .awready     (lsu_awready ),
        .wdata       (lsu_wdata   ),
        .wstrb       (lsu_wstrb   ),
        .wvalid      (lsu_wvalid  ),
        .wready      (lsu_wready  ),
        .bresp       (lsu_bresp   ),
        .bvalid      (lsu_bvalid  ),
        .bready      (lsu_bready  ),
        .rdata       (lsu_rdata   ),
        .rresp       (lsu_rresp   ),
        .rvalid      (lsu_rvalid  ),
        .rready      (lsu_rready  )
    );

ysyx_25020037_axi_crossbar u_axi_crossbar(
        .clk                (clock        ),
        .rst                (reset        ),

        .ifu_araddr         (ifu_araddr   ),
        .ifu_arvalid        (ifu_arvalid  ),
        .ifu_arready        (ifu_arready  ),
        .ifu_rdata          (ifu_rdata    ),
        .ifu_rresp          (ifu_rresp    ),
        .ifu_rvalid         (ifu_rvalid   ),
        .ifu_rready         (ifu_rready   ),
        .lsu_araddr         (lsu_araddr   ),
        .lsu_arvalid        (lsu_arvalid  ),
        .lsu_arready        (lsu_arready  ),
        .lsu_awaddr         (lsu_awaddr   ),
        .lsu_awvalid        (lsu_awvalid  ),
        .lsu_awready        (lsu_awready  ),
        .lsu_wdata          (lsu_wdata    ),
        .lsu_wstrb          (lsu_wstrb    ),
        .lsu_wvalid         (lsu_wvalid   ),
        .lsu_wready         (lsu_wready   ),
        .lsu_bresp          (lsu_bresp    ),
        .lsu_bvalid         (lsu_bvalid   ),
        .lsu_bready         (lsu_bready   ),
        .lsu_rdata          (lsu_rdata    ),
        .lsu_rresp          (lsu_rresp    ),
        .lsu_rvalid         (lsu_rvalid   ),
        .lsu_rready         (lsu_rready   ),
        .sram_araddr        (sram_araddr  ),
        .sram_arvalid       (sram_arvalid ),
        .sram_arready       (sram_arready ),
        .sram_awaddr        (sram_awaddr  ),
        .sram_awvalid       (sram_awvalid ),
        .sram_awready       (sram_awready ),
        .sram_wdata         (sram_wdata   ),
        .sram_wstrb         (sram_wstrb   ),
        .sram_wvalid        (sram_wvalid  ),
        .sram_wready        (sram_wready  ),
        .sram_rdata         (sram_rdata   ),
        .sram_rresp         (sram_rresp   ),
        .sram_rvalid        (sram_rvalid  ),
        .sram_rready        (sram_rready  ),
        .sram_bresp         (sram_bresp   ),
        .sram_bvalid        (sram_bvalid  ),
        .sram_bready        (sram_bready  ),
        .uart_araddr        (uart_araddr  ),
        .uart_arvalid       (uart_arvalid ),
        .uart_arready       (uart_arready ),
        .uart_awaddr        (uart_awaddr  ),
        .uart_awvalid       (uart_awvalid ),
        .uart_awready       (uart_awready ),
        .uart_wdata         (uart_wdata   ),
        .uart_wstrb         (uart_wstrb   ),
        .uart_wvalid        (uart_wvalid  ),
        .uart_wready        (uart_wready  ),
        .uart_rdata         (uart_rdata   ),
        .uart_rresp         (uart_rresp   ),
        .uart_rvalid        (uart_rvalid  ),
        .uart_rready        (uart_rready  ),
        .uart_bresp         (uart_bresp   ),
        .uart_bvalid        (uart_bvalid  ),
        .uart_bready        (uart_bready  ),
        .clint_araddr       (clint_araddr ),
        .clint_arvalid      (clint_arvalid),
        .clint_arready      (clint_arready),
        .clint_rdata        (clint_rdata  ),
        .clint_rresp        (clint_rresp  ),
        .clint_rvalid       (clint_rvalid ),
        .clint_rready       (clint_rready )
);

ysyx_25020037_sram u_sram (
        .clk        (clock        ),
        .rst        (reset        ),
        .araddr     (sram_araddr  ),
        .arvalid    (sram_arvalid ),
        .arready    (sram_arready ),
        .rdata      (sram_rdata   ),
        .rresp      (sram_rresp   ),
        .rvalid     (sram_rvalid  ),
        .rready     (sram_rready  ),
        .awaddr     (sram_awaddr  ),
        .awvalid    (sram_awvalid ),
        .awready    (sram_awready ),
        .wdata      (sram_wdata   ),
        .wstrb      (sram_wstrb   ),
        .wvalid     (sram_wvalid  ),
        .wready     (sram_wready  ),
        .bresp      (sram_bresp   ),
        .bvalid     (sram_bvalid  ),
        .bready     (sram_bready  )
);

ysyx_25020037_uart u_uart (
        .clk        (clock        ),
        .rst        (reset        ),
        .araddr     (uart_araddr  ),
        .arvalid    (uart_arvalid ),
        .arready    (uart_arready ),
        .rdata      (uart_rdata   ),
        .rresp      (uart_rresp   ),
        .rvalid     (uart_rvalid  ),
        .rready     (uart_rready  ),
        .awaddr     (uart_awaddr  ),
        .awvalid    (uart_awvalid ),
        .awready    (uart_awready ),
        .wdata      (uart_wdata   ),
        .wstrb      (uart_wstrb   ),
        .wvalid     (uart_wvalid  ),
        .wready     (uart_wready  ),
        .bresp      (uart_bresp   ),
        .bvalid     (uart_bvalid  ),
        .bready     (uart_bready  )
);

ysyx_25020037_clint u_clint (
        .clk        (clock        ),
        .rst        (reset        ),
        .araddr     (clint_araddr ),
        .arvalid    (clint_arvalid),
        .arready    (clint_arready),
        .rdata      (clint_rdata  ),
        .rresp      (clint_rresp  ),
        .rvalid     (clint_rvalid ),
        .rready     (clint_rready ),
        .awaddr     (32'b0        ),
        .awvalid    (1'b0         ),
        .awready    (             ),
        .wdata      (32'b0        ),
        .wstrb      (4'b0         ),
        .wvalid     (1'b0         ),
        .wready     (             ),
        .bresp      (             ),
        .bvalid     (             ),
        .bready     (1'b0         )
);

    ysyx_25020037_exu exu_cpu(
        .clk         (clock       ),
        .rst         (reset       ),
        .inst_s      (inst_s      ),
        .inst_l      (inst_l      ),
        .idu_valid   (idu_valid   ),
        .lsu_ready   (lsu_ready   ),
        .exu_ready   (exu_ready   ),
        .exu_valid   (exu_valid   ),
        .pc          (pc          ),
        .gu_to_eu_bus(gu_to_eu_bus),
        .du_to_eu_bus(du_to_eu_bus),
        .eu_to_lu_bus(eu_to_lu_bus),
        .dnpc        (dnpc        )
    );

    ysyx_25020037_wbu wbu_cpu(
        .lsu_valid    (lsu_valid    ),
        .inst_s       (inst_s       ),
        .inst_l       (inst_l       ),
        .gpr_ready    (gpr_ready    ),
        .wbu_valid    (wbu_valid    ),
        .wbu_ready    (wbu_ready    ),
        .clk          (clock        ),
        .rst          (reset        ),
        .du_to_wu_bus (du_to_wu_bus ),
        .eu_to_wu_bus (eu_to_wu_bus ),
        .lu_to_wu_bus (lu_to_wu_bus ),
        .csr_wgpr_data(csr_wgpr_data),
        .wu_to_gu_bus (wu_to_gu_bus )
        );
`ifdef VERILATOR
    always @(posedge clock) begin
       if(CONFIG_FTRACE) begin
           if(ftrace_jalr) begin
               if(rd == 5'h1) begin call_func(pc, dnpc); end
               else if(rd == 5'h0 && src1 == regs[1]) begin ret_func(pc); end
           end
           if(ftrace_jal) begin
               if(rd == 5'h1) begin call_func(pc, dnpc); end
           end
       end
    end
`endif VERILATOR
endmodule
