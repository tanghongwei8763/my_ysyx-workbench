`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

module ysyx_25020037 (
    input   wire         clock,
    input   wire         reset
);

    parameter BLOCK_SIZE   = 32'd16;
    parameter CACHE_BLOCKS = 32'd4;

    wire [`FU_TO_DU_BUS_WD -1:0] fu_to_du_bus;
    wire [`DU_TO_EU_BUS_WD -1:0] du_to_eu_bus;
    wire [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus;
    wire [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus;
    wire [`WU_TO_GU_BUS_WD -1:0] wu_to_gu_bus;
    wire [`GU_TO_DU_BUS_WD -1:0] gu_to_du_bus;
    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire [`DU_TO_WU_BUS_WD -1:0] du_to_wu_bus;
    wire [`DU_TO_GU_BUS_WD -1:0] du_to_gu_bus;
    wire [`EU_TO_IC_BUS_WD -1:0] eu_to_ic_bus;

    wire [`RS_DATA-1: 0] rs_data;
    wire [31: 0] exu_dnpc;
    wire         exu_dnpc_valid;
    wire         pc_updata;
    wire [31:0]  rdata_processed;

    wire         ifu_valid;
    wire         idu_valid;
    wire         idu_ready;
    wire         exu_valid;
    wire         exu_ready;
    wire         lsu_valid;
    wire         lsu_ready;
    wire         wbu_ready;
    wire         wbu_valid;

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

    wire         uart_awready;
    wire         uart_awvalid;
    wire [31:0]  uart_awaddr;
    wire [3:0]   uart_awid;
    wire [7:0]   uart_awlen;
    wire [2:0]   uart_awsize;
    wire [1:0]   uart_awburst;
    wire         uart_wready;
    wire         uart_wvalid;
    wire [31:0]  uart_wdata;
    wire [3:0]   uart_wstrb;
    wire         uart_wlast;
    wire         uart_bready;
    wire         uart_bvalid;
    wire [1:0]   uart_bresp;
    wire [3:0]   uart_bid;
    wire         uart_arready;
    wire         uart_arvalid;
    wire [31:0]  uart_araddr;
    wire [3:0]   uart_arid;
    wire [7:0]   uart_arlen;
    wire [2:0]   uart_arsize;
    wire [1:0]   uart_arburst;
    wire         uart_rready;
    wire         uart_rvalid;
    wire [1:0]   uart_rresp;
    wire [31:0]  uart_rdata;
    wire         uart_rlast;
    wire [3:0]   uart_rid;

    wire         sram_awready;
    wire         sram_awvalid;
    wire [31:0]  sram_awaddr;
    wire [3:0]   sram_awid;
    wire [7:0]   sram_awlen;
    wire [2:0]   sram_awsize;
    wire [1:0]   sram_awburst;
    wire         sram_wready;
    wire         sram_wvalid;
    wire [31:0]  sram_wdata;
    wire [3:0]   sram_wstrb;
    wire         sram_wlast;
    wire         sram_bready;
    wire         sram_bvalid;
    wire [1:0]   sram_bresp;
    wire [3:0]   sram_bid;
    wire         sram_arready;
    wire         sram_arvalid;
    wire [31:0]  sram_araddr;
    wire [3:0]   sram_arid;
    wire [7:0]   sram_arlen;
    wire [2:0]   sram_arsize;
    wire [1:0]   sram_arburst;
    wire         sram_rready;
    wire         sram_rvalid;
    wire [1:0]   sram_rresp;
    wire [31:0]  sram_rdata;
    wire         sram_rlast;
    wire [3:0]   sram_rid;

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

    wire [31: 0] icache_addr;
    wire [31: 0] icache_data;
    wire         icache_hit;
    wire         icache_ready;
    wire         icache_mem_req;
    wire [31: 0] icache_mem_addr;
    wire [BLOCK_SIZE*8-1:0] icache_mem_data;
    wire         icache_mem_ready;

    ysyx_25020037_gpr gpr_cpu (
        .idu_valid        (idu_valid       ),
        .wbu_valid        (wbu_valid       ),
        .exu_ready        (exu_ready       ),
        .clk              (clock           ),
        .rst              (reset           ),
        .rs_data          (rs_data         ),
        .wu_to_gu_bus     (wu_to_gu_bus    ),
        .gu_to_du_bus     (gu_to_du_bus    )
    );          
    
    ysyx_25020037_ifu #(
        .BLOCK_SIZE    (BLOCK_SIZE)
    ) ifu_cpu(
        .clk           (clock            ),
        .rst           (reset            ),
        .exu_dnpc_valid(exu_dnpc_valid   ),
        .exu_dnpc      (exu_dnpc         ),
        .pc_updata     (pc_updata        ),
        .idu_ready     (idu_ready        ),
        .ifu_valid     (ifu_valid        ),
        .access_fault  (ifu_access_fault ),
        .fu_to_du_bus  (fu_to_du_bus     ),
        .arready       (ifu_arready      ),
        .arvalid       (ifu_arvalid      ),
        .araddr        (ifu_araddr       ),
        .arid          (ifu_arid         ),
        .arlen         (ifu_arlen        ),
        .arsize        (ifu_arsize       ),
        .arburst       (ifu_arburst      ),
        .rready        (ifu_rready       ),
        .rvalid        (ifu_rvalid       ),
        .rresp         (ifu_rresp        ),
        .rdata         (ifu_rdata        ),
        .rlast         (ifu_rlast        ),
        .rid           (ifu_rid          ),
        .icache_addr   (icache_addr      ),
        .icache_data   (icache_data      ),
        .icache_hit    (icache_hit       ),
        .icache_ready  (icache_ready     ),
        .mem_req       (icache_mem_req   ),
        .mem_addr      (icache_mem_addr  ),
        .mem_data      (icache_mem_data  ),
        .mem_ready     (icache_mem_ready )
        );

    ysyx_25020037_icache #(
        .ADDR_WIDTH    (32),
        .DATA_WIDTH    (32),
        .CACHE_BLOCKS  (CACHE_BLOCKS),
        .BLOCK_SIZE    (BLOCK_SIZE)
    ) u_icache (
        .clk           (clock           ),
        .rst           (reset           ),
        .eu_to_ic_bus  (eu_to_ic_bus    ),
        .cpu_addr      (icache_addr     ),
        .cpu_data      (icache_data     ),
        .cpu_hit       (icache_hit      ),
        .cpu_ready     (icache_ready    ),
        .mem_req       (icache_mem_req  ),
        .mem_addr      (icache_mem_addr ),
        .mem_data      (icache_mem_data ),
        .mem_ready     (icache_mem_ready)
    );

    ysyx_25020037_idu idu_cpu(
        .clk            (clock          ),
        .rst            (reset          ),
        .ifu_valid      (ifu_valid      ),
        .exu_ready      (exu_ready      ),
        .idu_valid      (idu_valid      ),
        .idu_ready      (idu_ready      ),
        .rs_data        (rs_data        ),
        .exu_dnpc_valid (exu_dnpc_valid ),
        .gu_to_du_bus   (gu_to_du_bus   ),
        .fu_to_du_bus   (fu_to_du_bus   ),
        .du_to_eu_bus   (du_to_eu_bus   )
        );


    ysyx_25020037_lsu lsu_cpu(
        .clk            (clock           ),
        .rst            (reset           ),
        .exu_valid      (exu_valid       ),
        .wbu_ready      (wbu_ready       ),
        .lsu_ready      (lsu_ready       ),
        .lsu_valid      (lsu_valid       ),
        .exu_dnpc_valid (exu_dnpc_valid  ),
        .rdata_processed(rdata_processed ),
        .eu_to_lu_bus   (eu_to_lu_bus    ),
        .lu_to_wu_bus   (lu_to_wu_bus    ),
        .access_fault   (lsu_access_fault),
        .awready        (lsu_awready     ),
        .awvalid        (lsu_awvalid     ),
        .awaddr         (lsu_awaddr      ),
        .awid           (lsu_awid        ),
        .awlen          (lsu_awlen       ),
        .awsize         (lsu_awsize      ),
        .awburst        (lsu_awburst     ),
        .wready         (lsu_wready      ),
        .wvalid         (lsu_wvalid      ),
        .wdata          (lsu_wdata       ),
        .wstrb          (lsu_wstrb       ),
        .wlast          (lsu_wlast       ),
        .bready         (lsu_bready      ),
        .bvalid         (lsu_bvalid      ),
        .bresp          (lsu_bresp       ),
        .bid            (lsu_bid         ),
        .arready        (lsu_arready     ),
        .arvalid        (lsu_arvalid     ),
        .araddr         (lsu_araddr      ),
        .arid           (lsu_arid        ),
        .arlen          (lsu_arlen       ),
        .arsize         (lsu_arsize      ),
        .arburst        (lsu_arburst     ),
        .rready         (lsu_rready      ),
        .rvalid         (lsu_rvalid      ),
        .rresp          (lsu_rresp       ),
        .rdata          (lsu_rdata       ),
        .rlast          (lsu_rlast       ),
        .rid            (lsu_rid         )
    );

ysyx_25020037_arbiter u_arbiter(
        .clk            (clock           ),
        .rst            (reset           ),
        .ifu_arready    (ifu_arready     ),
        .ifu_arvalid    (ifu_arvalid     ),
        .ifu_araddr     (ifu_araddr      ),
        .ifu_arid       (ifu_arid        ),
        .ifu_arlen      (ifu_arlen       ),
        .ifu_arsize     (ifu_arsize      ),
        .ifu_arburst    (ifu_arburst     ),
        .ifu_rready     (ifu_rready      ),
        .ifu_rvalid     (ifu_rvalid      ),
        .ifu_rresp      (ifu_rresp       ),
        .ifu_rdata      (ifu_rdata       ),
        .ifu_rlast      (ifu_rlast       ),
        .ifu_rid        (ifu_rid         ),
        .lsu_awready    (lsu_awready     ),
        .lsu_awvalid    (lsu_awvalid     ),
        .lsu_awaddr     (lsu_awaddr      ),
        .lsu_awid       (lsu_awid        ),
        .lsu_awlen      (lsu_awlen       ),
        .lsu_awsize     (lsu_awsize      ),
        .lsu_awburst    (lsu_awburst     ),
        .lsu_wready     (lsu_wready      ),
        .lsu_wvalid     (lsu_wvalid      ),
        .lsu_wdata      (lsu_wdata       ),
        .lsu_wstrb      (lsu_wstrb       ),
        .lsu_wlast      (lsu_wlast       ),
        .lsu_bready     (lsu_bready      ),
        .lsu_bvalid     (lsu_bvalid      ),
        .lsu_bresp      (lsu_bresp       ),
        .lsu_bid        (lsu_bid         ),
        .lsu_arready    (lsu_arready     ),
        .lsu_arvalid    (lsu_arvalid     ),
        .lsu_araddr     (lsu_araddr      ),
        .lsu_arid       (lsu_arid        ),
        .lsu_arlen      (lsu_arlen       ),
        .lsu_arsize     (lsu_arsize      ),
        .lsu_arburst    (lsu_arburst     ),
        .lsu_rready     (lsu_rready      ),
        .lsu_rvalid     (lsu_rvalid      ),
        .lsu_rresp      (lsu_rresp       ),
        .lsu_rdata      (lsu_rdata       ),
        .lsu_rlast      (lsu_rlast       ),
        .lsu_rid        (lsu_rid         ),
        .sram_awready   (sram_awready    ),
        .sram_awvalid   (sram_awvalid    ),
        .sram_awaddr    (sram_awaddr     ),
        .sram_awid      (sram_awid       ),
        .sram_awlen     (sram_awlen      ),
        .sram_awsize    (sram_awsize     ),
        .sram_awburst   (sram_awburst    ),
        .sram_wready    (sram_wready     ),
        .sram_wvalid    (sram_wvalid     ),
        .sram_wdata     (sram_wdata      ),
        .sram_wstrb     (sram_wstrb      ),
        .sram_wlast     (sram_wlast      ),
        .sram_bready    (sram_bready     ),
        .sram_bvalid    (sram_bvalid     ),
        .sram_bresp     (sram_bresp      ),
        .sram_bid       (sram_bid        ),
        .sram_arready   (sram_arready    ),
        .sram_arvalid   (sram_arvalid    ),
        .sram_araddr    (sram_araddr     ),
        .sram_arid      (sram_arid       ),
        .sram_arlen     (sram_arlen      ),
        .sram_arsize    (sram_arsize     ),
        .sram_arburst   (sram_arburst    ),
        .sram_rready    (sram_rready     ),
        .sram_rvalid    (sram_rvalid     ),
        .sram_rresp     (sram_rresp      ),
        .sram_rdata     (sram_rdata      ),
        .sram_rlast     (sram_rlast      ),
        .sram_rid       (sram_rid        ),
        .uart_awready   (uart_awready    ),
        .uart_awvalid   (uart_awvalid    ),
        .uart_awaddr    (uart_awaddr     ),
        .uart_awid      (uart_awid       ),
        .uart_awlen     (uart_awlen      ),
        .uart_awsize    (uart_awsize     ),
        .uart_awburst   (uart_awburst    ),
        .uart_wready    (uart_wready     ),
        .uart_wvalid    (uart_wvalid     ),
        .uart_wdata     (uart_wdata      ),
        .uart_wstrb     (uart_wstrb      ),
        .uart_wlast     (uart_wlast      ),
        .uart_bready    (uart_bready     ),
        .uart_bvalid    (uart_bvalid     ),
        .uart_bresp     (uart_bresp      ),
        .uart_bid       (uart_bid        ),
        .uart_arready   (uart_arready    ),
        .uart_arvalid   (uart_arvalid    ),
        .uart_araddr    (uart_araddr     ),
        .uart_arid      (uart_arid       ),
        .uart_arlen     (uart_arlen      ),
        .uart_arsize    (uart_arsize     ),
        .uart_arburst   (uart_arburst    ),
        .uart_rready    (uart_rready     ),
        .uart_rvalid    (uart_rvalid     ),
        .uart_rresp     (uart_rresp      ),
        .uart_rdata     (uart_rdata      ),
        .uart_rlast     (uart_rlast      ),
        .uart_rid       (uart_rid        ),
        .clint_arready  (clint_arready   ),
        .clint_arvalid  (clint_arvalid   ),
        .clint_araddr   (clint_araddr    ),
        .clint_arid     (clint_arid      ),
        .clint_arlen    (clint_arlen     ),
        .clint_arsize   (clint_arsize    ),
        .clint_arburst  (clint_arburst   ),
        .clint_rready   (clint_rready    ),
        .clint_rvalid   (clint_rvalid    ),
        .clint_rresp    (clint_rresp     ),
        .clint_rdata    (clint_rdata     ),
        .clint_rlast    (clint_rlast     ),
        .clint_rid      (clint_rid       )
);

    ysyx_25020037_sram sram_cpu(
        .clk            (clock           ),
        .rst            (reset           ),
        .awready        (sram_awready    ),
        .awvalid        (sram_awvalid    ),
        .awaddr         (sram_awaddr     ),
        .awid           (sram_awid       ),
        .awlen          (sram_awlen      ),
        .awsize         (sram_awsize     ),
        .awburst        (sram_awburst    ),
        .wready         (sram_wready     ),
        .wvalid         (sram_wvalid     ),
        .wdata          (sram_wdata      ),
        .wstrb          (sram_wstrb      ),
        .wlast          (sram_wlast      ),
        .bready         (sram_bready     ),
        .bvalid         (sram_bvalid     ),
        .bresp          (sram_bresp      ),
        .bid            (sram_bid        ),
        .arready        (sram_arready    ),
        .arvalid        (sram_arvalid    ),
        .araddr         (sram_araddr     ),
        .arid           (sram_arid       ),
        .arlen          (sram_arlen      ),
        .arsize         (sram_arsize     ),
        .arburst        (sram_arburst    ),
        .rready         (sram_rready     ),
        .rvalid         (sram_rvalid     ),
        .rresp          (sram_rresp      ),
        .rdata          (sram_rdata      ),
        .rlast          (sram_rlast      ),
        .rid            (sram_rid        )
    );

    ysyx_25020037_uart uart_cpu(
        .clk            (clock           ),
        .rst            (reset           ),
        .awready        (uart_awready    ),
        .awvalid        (uart_awvalid    ),
        .awaddr         (uart_awaddr     ),
        .awid           (uart_awid       ),
        .awlen          (uart_awlen      ),
        .awsize         (uart_awsize     ),
        .awburst        (uart_awburst    ),
        .wready         (uart_wready     ),
        .wvalid         (uart_wvalid     ),
        .wdata          (uart_wdata      ),
        .wstrb          (uart_wstrb      ),
        .wlast          (uart_wlast      ),
        .bready         (uart_bready     ),
        .bvalid         (uart_bvalid     ),
        .bresp          (uart_bresp      ),
        .bid            (uart_bid        ),
        .arready        (uart_arready    ),
        .arvalid        (uart_arvalid    ),
        .araddr         (uart_araddr     ),
        .arid           (uart_arid       ),
        .arlen          (uart_arlen      ),
        .arsize         (uart_arsize     ),
        .arburst        (uart_arburst    ),
        .rready         (uart_rready     ),
        .rvalid         (uart_rvalid     ),
        .rresp          (uart_rresp      ),
        .rdata          (uart_rdata      ),
        .rlast          (uart_rlast      ),
        .rid            (uart_rid        )
    );


ysyx_25020037_clint u_clint (
        .clk        (clock        ),
        .rst        (reset        ),
        .arready    (clint_arready),
        .arvalid    (clint_arvalid),
        .araddr     (clint_araddr ),
        .arid       (clint_arid   ),
        .arlen      (clint_arlen  ),
        .arsize     (clint_arsize ),
        .arburst    (clint_arburst),
        .rready     (clint_rready ),
        .rvalid     (clint_rvalid ),
        .rresp      (clint_rresp  ),
        .rdata      (clint_rdata  ),
        .rlast      (clint_rlast  ),
        .rid        (clint_rid    )
);

    ysyx_25020037_exu exu_cpu(
        .clk            (clock          ),
        .rst            (reset          ),
        .idu_valid      (idu_valid      ),
        .lsu_ready      (lsu_ready      ),
        .exu_ready      (exu_ready      ),
        .exu_valid      (exu_valid      ),
        .rdata_processed(rdata_processed),
        .du_to_eu_bus   (du_to_eu_bus   ),
        .eu_to_lu_bus   (eu_to_lu_bus   ),
        .eu_to_ic_bus   (eu_to_ic_bus   ),
        .pc_updata      (pc_updata      ),
        .exu_dnpc_valid (exu_dnpc_valid ),
        .exu_dnpc       (exu_dnpc       )
    );

    ysyx_25020037_wbu wbu_cpu(
        .lsu_valid    (lsu_valid    ),
        .wbu_valid    (wbu_valid    ),
        .wbu_ready    (wbu_ready    ),
        .clk          (clock        ),
        .rst          (reset        ),
        .lu_to_wu_bus (lu_to_wu_bus ),
        .wu_to_gu_bus (wu_to_gu_bus )
        );

endmodule
