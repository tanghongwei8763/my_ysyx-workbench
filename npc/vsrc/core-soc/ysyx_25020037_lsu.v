`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"
module ysyx_25020037_lsu (
    input  wire          clk,
    input  wire          rst,
    input  wire          exu_valid,
    input  wire          wbu_ready,
    output reg           lsu_ready,
    output reg           lsu_valid,
    input  wire [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus,
    input  wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus,
    output reg  [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus,
    output reg          access_fault,

    input  wire         awready,
    output reg          awvalid,
    output reg  [31: 0] awaddr,
    output reg  [ 3: 0] awid,
    output reg  [ 7: 0] awlen,
    output reg  [ 2: 0] awsize,
    output reg  [ 1: 0] awburst,
    input  wire         wready,
    output reg          wvalid,
    output reg  [31: 0] wdata,
    output reg  [ 3: 0] wstrb,
    output reg          wlast,
    output reg          bready,
    input  wire         bvalid,
    input  wire [ 1: 0] bresp,
    input  wire [ 3: 0] bid,
    input  wire         arready,
    output reg          arvalid,
    output reg  [31: 0] araddr,
    output reg  [ 3: 0] arid,
    output reg  [ 7: 0] arlen,
    output reg  [ 2: 0] arsize,
    output reg  [ 1: 0] arburst,
    output reg          rready,
    input  wire         rvalid,
    input  wire [ 1: 0] rresp,
    input  wire [31: 0] rdata,
    input  wire         rlast,
    input  wire [ 3: 0] rid
);
    localparam IDLE    = 1'b0;
    localparam BUSY    = 1'b1;
    reg          state, next_state;

    reg  [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus_r;

    localparam AXI_ID       = 4'h0;
    localparam AXI_BURST    = 2'b00;
    localparam AXI_LEN      = 8'h0;

    wire [31:0] addr = eu_to_lu_bus[63:32];
    wire [1:0]  addr_off = addr[1:0];
    wire [31:0] aligned_wdata = eu_to_lu_bus[31:0] << (addr_off << 3);

    always @(*) begin
        case (state)
            IDLE: next_state = (lsu_ready & exu_valid) ? BUSY : IDLE;        
            BUSY: next_state = (lsu_valid & wbu_ready) ? IDLE : BUSY;    
            default: next_state = IDLE;
        endcase
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            lsu_ready <= 1'b1;
            lsu_valid <= 1'b0;
            access_fault <= 1'b0;
            lu_to_wu_bus <= 'b0;
            awvalid <= 1'b0;
            awaddr <= 32'h0;
            awid <= AXI_ID;
            awlen <= AXI_LEN;
            awsize <= 3'h2;
            awburst <= AXI_BURST;
            wvalid <= 1'b0;
            wdata <= 32'h0;
            wstrb <= 4'h0;
            wlast <= 1'b1;
            bready <= 1'b0;
            arvalid <= 1'b0;
            araddr <= 32'h0;
            arid <= AXI_ID;
            arlen <= AXI_LEN;
            arsize <= 3'h2;
            arburst <= AXI_BURST;
            rready <= 1'b0;
            eu_to_lu_bus_r <= 'b0;
        end else begin
            state <= next_state;

            case (state)
                IDLE: begin
                    lsu_valid <= 1'b0;
                    bready <= 1'b0;
                    rready <= 1'b0;
                    awvalid <= 1'b0;
                    wvalid <= 1'b0;
                    arvalid <= 1'b0;
                    if (lsu_ready & exu_valid) begin
                        lsu_ready <= 1'b0;
                        if (du_to_lu_bus[1]) begin
                            araddr  <= addr;
                            arvalid <= 1'b1;
                        end else if (du_to_lu_bus[0]) begin
                            awvalid <= 1'b1;
                            awaddr  <= addr;
                            wdata   <= aligned_wdata;
                            case (du_to_lu_bus[ 4: 2])
                                3'b001: begin wstrb <= (4'b0001 << addr_off); end
                                3'b010: begin wstrb <= (4'b0011 << addr_off); end
                                3'b100: begin wstrb <= (4'b1111 << addr_off); end
                                default: wstrb <= 4'b0000;
                            endcase
                        end
                    end
                end
                BUSY: begin
                    if (du_to_lu_bus[1]) begin
                        if (arvalid && arready) begin
                            arvalid <= 1'b0;
                            rready <= 1'b1;
                        end
                        if (rvalid && rready) begin
                            lu_to_wu_bus <= {eu_to_lu_bus[63:32], rdata};
                            rready <= 1'b0;
                            lsu_valid <= 1'b1;
                            lsu_ready <= 1'b1;
                            access_fault <= (rresp != 2'b00);  
                        end
                    end else if (du_to_lu_bus[0]) begin 
                        if (awready & awvalid) begin
                            wvalid <= 1'b1;
                            awvalid <= 1'b0;
                        end                           
                        if (wvalid & wready) begin
                            wvalid  <= 1'b0;
                            bready  <= 1'b1;
                        end
                        if (bvalid & bready) begin
                            bready <= 1'b0;
                            lsu_valid <= 1'b1;
                            lsu_ready <= 1'b1;
                            access_fault <= (bresp != 2'b00); 
                        end
                    end else begin
                        lu_to_wu_bus <= {eu_to_lu_bus[63:32], eu_to_lu_bus[63:32]};
                        lsu_valid <= 1'b1;
                        lsu_ready <= 1'b1;
                    end
                end
            endcase
        end
    end

endmodule
