`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

module ysyx_25020037 (
    input   wire         clock,
    input   wire         reset,
    input   wire         io_interrupt,

    input   wire         io_master_awready,
    output  wire         io_master_awvalid,
    output  wire [31: 0] io_master_awaddr,
    output  wire [ 3: 0] io_master_awid, 
    output  wire [ 7: 0] io_master_awlen,  
    output  wire [ 2: 0] io_master_awsize,
    output  wire [ 1: 0] io_master_awburst,
    input   wire         io_master_wready,
    output  wire         io_master_wvalid, 
    output  wire [31: 0] io_master_wdata, 
    output  wire [ 3: 0] io_master_wstrb,  
    output  wire         io_master_wlast,  
    output  wire         io_master_bready, 
    input   wire         io_master_bvalid, 
    input   wire [ 1: 0] io_master_bresp, 
    input   wire [ 3: 0] io_master_bid,  
    input   wire         io_master_arready,
    output  wire         io_master_arvalid,
    output  wire [31: 0] io_master_araddr,
    output  wire [ 3: 0] io_master_arid, 
    output  wire [ 7: 0] io_master_arlen,  
    output  wire [ 2: 0] io_master_arsize, 
    output  wire [ 1: 0] io_master_arburst,
    output  wire         io_master_rready,
    input   wire         io_master_rvalid, 
    input   wire [ 1: 0] io_master_rresp, 
    input   wire [31: 0] io_master_rdata,  
    input   wire         io_master_rlast,  
    input   wire [ 3: 0] io_master_rid,

    output  wire         io_slave_awready,
    input   wire         io_slave_awvalid,
    input   wire [31: 0] io_slave_awaddr,
    input   wire [ 3: 0] io_slave_awid, 
    input   wire [ 7: 0] io_slave_awlen,  
    input   wire [ 2: 0] io_slave_awsize, 
    input   wire [ 1: 0] io_slave_awburst,
    output  wire         io_slave_wready,
    input   wire         io_slave_wvalid, 
    input   wire [31: 0] io_slave_wdata, 
    input   wire [ 3: 0] io_slave_wstrb,  
    input   wire         io_slave_wlast,  
    input   wire         io_slave_bready, 
    output  wire         io_slave_bvalid, 
    output  wire [ 1: 0] io_slave_bresp, 
    output  wire [ 3: 0] io_slave_bid,  
    output  wire         io_slave_arready,
    input   wire         io_slave_arvalid,
    input   wire [31: 0] io_slave_araddr,
    input   wire [ 3: 0] io_slave_arid, 
    input   wire [ 7: 0] io_slave_arlen,  
    input   wire [ 2: 0] io_slave_arsize, 
    input   wire [ 1: 0] io_slave_arburst,
    input   wire         io_slave_rready,
    output  wire         io_slave_rvalid, 
    output  wire [ 1: 0] io_slave_rresp, 
    output  wire [31: 0] io_slave_rdata,  
    output  wire         io_slave_rlast,  
    output  wire [ 3: 0] io_slave_rid  
);

    assign io_slave_awready = 1'b0;
    assign io_slave_wready  = 1'b0;
    assign io_slave_bvalid  = 1'b0;
    assign io_slave_bresp   = 2'b0;
    assign io_slave_bid     = 4'b0;
    assign io_slave_arready = 1'b0;
    assign io_slave_rvalid  = 1'b0;
    assign io_slave_rresp   = 2'b0;
    assign io_slave_rdata   = 32'b0;
    assign io_slave_rlast   = 1'b0;
    assign io_slave_rid     = 4'b0;

    parameter MSTATUS   = 12'h300;
    parameter MTVEC     = 12'h305;
    parameter MEPC      = 12'h341;
    parameter MCAUSE    = 12'h342;
    parameter MVENDORID = 12'hF11;
    parameter MARCHID   = 12'hF12;

    //parameter CONFIG_FTRACE = 1'b0;
    //import "DPI-C" function void call_func(input int pc, input int dnpc);
    //import "DPI-C" function void ret_func(input int pc);
    //wire         ftrace_jal;
    //wire         ftrace_jalr;
`ifdef VERILATOR
    import "DPI-C" function void performance_counter(input int valid, input int type_);
    always @(posedge clock) begin
       performance_counter({27'b0, ifu_valid, idu_valid, exu_valid, lsu_valid, wbu_valid}, 32'b0);
    end
`endif
    wire [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus;
    wire [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus;
    wire [`DU_TO_GU_BUS_WD -1:0] du_to_gu_bus;
    wire [`GU_TO_EU_BUS_WD -1:0] gu_to_eu_bus;
    wire [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus;
    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire [`DU_TO_WU_BUS_WD -1:0] du_to_wu_bus;
    wire [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus;

    wire [31: 0] pc;
    wire [31: 0] inst;
    wire [31: 0] dnpc;
    wire [31: 0] mtvec;
    wire [31: 0] mepc;
    wire [31: 0] mstatus;
    wire [31: 0] mcause;
    wire [31: 0] mvendorid;
    wire [31: 0] marchid;

    wire         ifu_valid;
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

    wire         ifu_arready;
    wire         ifu_arvalid;
    wire [31:0]  ifu_araddr;
    wire [3:0]   ifu_arid;
    wire [7:0]   ifu_arlen;
    wire [2:0]   ifu_arsize;
    wire [1:0]   ifu_arburst;
    wire         ifu_rready;
    wire         ifu_rvalid;
    wire [1:0]   ifu_rresp;
    wire [31:0]  ifu_rdata;
    wire         ifu_rlast;
    wire [3:0]   ifu_rid;

    wire         lsu_awready;
    wire         lsu_awvalid;
    wire [31:0]  lsu_awaddr;
    wire [3:0]   lsu_awid;
    wire [7:0]   lsu_awlen;
    wire [2:0]   lsu_awsize;
    wire [1:0]   lsu_awburst;
    wire         lsu_wready;
    wire         lsu_wvalid;
    wire [31:0]  lsu_wdata;
    wire [3:0]   lsu_wstrb;
    wire         lsu_wlast;
    wire         lsu_bready;
    wire         lsu_bvalid;
    wire [1:0]   lsu_bresp;
    wire [3:0]   lsu_bid;
    wire         lsu_arready;
    wire         lsu_arvalid;
    wire [31:0]  lsu_araddr;
    wire [3:0]   lsu_arid;
    wire [7:0]   lsu_arlen;
    wire [2:0]   lsu_arsize;
    wire [1:0]   lsu_arburst;
    wire         lsu_rready;
    wire         lsu_rvalid;
    wire [1:0]   lsu_rresp;
    wire [31:0]  lsu_rdata;
    wire         lsu_rlast;
    wire [3:0]   lsu_rid;

    wire         clint_arready;
    wire         clint_arvalid;
    wire [31:0]  clint_araddr;
    wire [3:0]   clint_arid;
    wire [7:0]   clint_arlen;
    wire [2:0]   clint_arsize;
    wire [1:0]   clint_arburst;
    wire         clint_rready;
    wire         clint_rvalid;
    wire [1:0]   clint_rresp;
    wire [31:0]  clint_rdata;
    wire         clint_rlast;
    wire [3:0]   clint_rid;

    wire         ifu_access_fault;
    wire         lsu_access_fault;

    wire [31: 0] icache_data;
    wire         icache_hit;      
    wire         icache_ready;    
    wire         icache_mem_req;  
    wire         icache_req;      
    wire         icache_mem_ready;

    wire [31: 0] csr_wgpr_data;
    wire [31: 0] csr_wcsr_data;
    wire         inst_s;
    wire         inst_l;
    wire         gpr_we;
    assign csr_wgpr_data    = ({32{du_to_eu_bus[38:27] == MTVEC    }} & mtvec)
                            | ({32{du_to_eu_bus[38:27] == MEPC     }} & mepc)
                            | ({32{du_to_eu_bus[38:27] == MSTATUS  }} & mstatus)
                            | ({32{du_to_eu_bus[38:27] == MCAUSE   }} & mcause)
                            | ({32{du_to_eu_bus[38:27] == MVENDORID}} & mvendorid)
                            | ({32{du_to_eu_bus[38:27] == MARCHID  }} & marchid);
    assign csr_wcsr_data    = ({32{du_to_eu_bus[0]}} & gu_to_eu_bus[127: 96])
                            | ({32{du_to_eu_bus[1]}} & (gu_to_eu_bus[127: 96] | csr_wgpr_data));

    ysyx_25020037_Reg #(32, 32'h30000000) PC (
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
        .mcause           (mcause          ),
        .mvendorid        (mvendorid       ),
        .marchid          (marchid         )  
    );          
    
    ysyx_25020037_ifu ifu_cpu(
        .clk         (clock            ),
        .rst         (reset            ),
        .pc          (pc               ),
        .idu_ready   (idu_ready        ),
        .ifu_valid   (ifu_valid        ),
        .inst        (inst             ),
        .access_fault(ifu_access_fault ),
        .arready     (ifu_arready      ),
        .arvalid     (ifu_arvalid      ),
        .araddr      (ifu_araddr       ),
        .arid        (ifu_arid         ),
        .arlen       (ifu_arlen        ),
        .arsize      (ifu_arsize       ),
        .arburst     (ifu_arburst      ),
        .rready      (ifu_rready       ),
        .rvalid      (ifu_rvalid       ),
        .rresp       (ifu_rresp        ),
        .rdata       (ifu_rdata        ),
        .rlast       (ifu_rlast        ),
        .rid         (ifu_rid          ),
        .icache_data (icache_data      ),
        .icache_hit  (icache_hit       ),
        .icache_ready(icache_ready     ),
        .mem_req     (icache_mem_req   ),
        .icache_req  (icache_req       ),
        .mem_ready   (icache_mem_ready )
        );

    ysyx_25020037_icache #(
        .ADDR_WIDTH    (32),
        .DATA_WIDTH    (32),
        .CACHE_BLOCKS  (16),
        .BLOCK_SIZE    (4 )
    ) u_icache (
        .clk           (clock           ),
        .rst           (reset           ),
        .cpu_addr      (pc              ),
        .cpu_req       (icache_req      ),
        .cpu_data      (icache_data     ),
        .cpu_hit       (icache_hit      ),
        .cpu_ready     (icache_ready    ),
        .mem_req       (icache_mem_req  ),
        .mem_data      (ifu_rdata       ),
        .mem_ready     (icache_mem_ready)
    );

    ysyx_25020037_idu idu_cpu(
        .clk         (clock       ),
        .rst         (reset       ),
        .pc          (pc          ),
        .inst        (inst        ),
        .ifu_valid   (ifu_valid   ),
        .exu_ready   (exu_ready   ),
        .idu_valid   (idu_valid   ),
        .idu_ready   (idu_ready   ),
        .inst_s      (inst_s      ),
        .inst_l      (inst_l      ),
        .gpr_we      (gpr_we      ),
        .du_to_eu_bus(du_to_eu_bus),
        .du_to_gu_bus(du_to_gu_bus),
        .du_to_lu_bus(du_to_lu_bus),
        .du_to_wu_bus(du_to_wu_bus)
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
        .access_fault(lsu_access_fault),
        .awready     (lsu_awready ),
        .awvalid     (lsu_awvalid ),
        .awaddr      (lsu_awaddr  ),
        .awid        (lsu_awid    ),
        .awlen       (lsu_awlen   ),
        .awsize      (lsu_awsize  ),
        .awburst     (lsu_awburst ),
        .wready      (lsu_wready  ),
        .wvalid      (lsu_wvalid  ),
        .wdata       (lsu_wdata   ),
        .wstrb       (lsu_wstrb   ),
        .wlast       (lsu_wlast   ),
        .bready      (lsu_bready  ),
        .bvalid      (lsu_bvalid  ),
        .bresp       (lsu_bresp   ),
        .bid         (lsu_bid     ),
        .arready     (lsu_arready ),
        .arvalid     (lsu_arvalid ),
        .araddr      (lsu_araddr  ),
        .arid        (lsu_arid    ),
        .arlen       (lsu_arlen   ),
        .arsize      (lsu_arsize  ),
        .arburst     (lsu_arburst ),
        .rready      (lsu_rready  ),
        .rvalid      (lsu_rvalid  ),
        .rresp       (lsu_rresp   ),
        .rdata       (lsu_rdata   ),
        .rlast       (lsu_rlast   ),
        .rid         (lsu_rid     )
    );

ysyx_25020037_arbiter u_arbiter(
        .clk                    (clock            ),
        .rst                    (reset            ),
        .ifu_arready            (ifu_arready      ),
        .ifu_arvalid            (ifu_arvalid      ),
        .ifu_araddr             (ifu_araddr       ),
        .ifu_arid               (ifu_arid         ),
        .ifu_arlen              (ifu_arlen        ),
        .ifu_arsize             (ifu_arsize       ),
        .ifu_arburst            (ifu_arburst      ),
        .ifu_rready             (ifu_rready       ),
        .ifu_rvalid             (ifu_rvalid       ),
        .ifu_rresp              (ifu_rresp        ),
        .ifu_rdata              (ifu_rdata        ),
        .ifu_rlast              (ifu_rlast        ),
        .ifu_rid                (ifu_rid          ),
        .lsu_awready            (lsu_awready      ),
        .lsu_awvalid            (lsu_awvalid      ),
        .lsu_awaddr             (lsu_awaddr       ),
        .lsu_awid               (lsu_awid         ),
        .lsu_awlen              (lsu_awlen        ),
        .lsu_awsize             (lsu_awsize       ),
        .lsu_awburst            (lsu_awburst      ),
        .lsu_wready             (lsu_wready       ),
        .lsu_wvalid             (lsu_wvalid       ),
        .lsu_wdata              (lsu_wdata        ),
        .lsu_wstrb              (lsu_wstrb        ),
        .lsu_wlast              (lsu_wlast        ),
        .lsu_bready             (lsu_bready       ),
        .lsu_bvalid             (lsu_bvalid       ),
        .lsu_bresp              (lsu_bresp        ),
        .lsu_bid                (lsu_bid          ),
        .lsu_arready            (lsu_arready      ),
        .lsu_arvalid            (lsu_arvalid      ),
        .lsu_araddr             (lsu_araddr       ),
        .lsu_arid               (lsu_arid         ),
        .lsu_arlen              (lsu_arlen        ),
        .lsu_arsize             (lsu_arsize       ),
        .lsu_arburst            (lsu_arburst      ),
        .lsu_rready             (lsu_rready       ),
        .lsu_rvalid             (lsu_rvalid       ),
        .lsu_rresp              (lsu_rresp        ),
        .lsu_rdata              (lsu_rdata        ),
        .lsu_rlast              (lsu_rlast        ),
        .lsu_rid                (lsu_rid          ),
        .io_master_awready      (io_master_awready),
        .io_master_awvalid      (io_master_awvalid),
        .io_master_awaddr       (io_master_awaddr ),
        .io_master_awid         (io_master_awid   ),
        .io_master_awlen        (io_master_awlen  ),
        .io_master_awsize       (io_master_awsize ),
        .io_master_awburst      (io_master_awburst),
        .io_master_wready       (io_master_wready ),
        .io_master_wvalid       (io_master_wvalid ),
        .io_master_wdata        (io_master_wdata  ),
        .io_master_wstrb        (io_master_wstrb  ),
        .io_master_wlast        (io_master_wlast  ),
        .io_master_bready       (io_master_bready ),
        .io_master_bvalid       (io_master_bvalid ),
        .io_master_bresp        (io_master_bresp  ),
        .io_master_bid          (io_master_bid    ),
        .io_master_arready      (io_master_arready),
        .io_master_arvalid      (io_master_arvalid),
        .io_master_araddr       (io_master_araddr ),
        .io_master_arid         (io_master_arid   ),
        .io_master_arlen        (io_master_arlen  ),
        .io_master_arsize       (io_master_arsize ),
        .io_master_arburst      (io_master_arburst),
        .io_master_rready       (io_master_rready ),
        .io_master_rvalid       (io_master_rvalid ),
        .io_master_rresp        (io_master_rresp  ),
        .io_master_rdata        (io_master_rdata  ),
        .io_master_rlast        (io_master_rlast  ),
        .io_master_rid          (io_master_rid    ),
        .clint_arready          (clint_arready    ),
        .clint_arvalid          (clint_arvalid    ),
        .clint_araddr           (clint_araddr     ),
        .clint_arid             (clint_arid       ),
        .clint_arlen            (clint_arlen      ),
        .clint_arsize           (clint_arsize     ),
        .clint_arburst          (clint_arburst    ),
        .clint_rready           (clint_rready     ),
        .clint_rvalid           (clint_rvalid     ),
        .clint_rresp            (clint_rresp      ),
        .clint_rdata            (clint_rdata      ),
        .clint_rlast            (clint_rlast      ),
        .clint_rid              (clint_rid        )
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
        .lu_to_wu_bus (lu_to_wu_bus ),
        .csr_wgpr_data(csr_wgpr_data),
        .wu_to_gu_bus (wu_to_gu_bus )
        );

    //always @(posedge clock) begin
    //    if(CONFIG_FTRACE) begin
    //        if(ftrace_jalr) begin
    //            if(rd == 5'h1) begin call_func(pc, dnpc); end
    //            else if(rd == 5'h0 && src1 == regs[1]) begin ret_func(pc); end
    //        end
    //        if(ftrace_jal) begin
    //            if(rd == 5'h1) begin call_func(pc, dnpc); end
    //        end
    //    end
    //end

endmodule
