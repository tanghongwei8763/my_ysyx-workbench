module ysyx_25020037_clint(
    input  wire         clk,
    input  wire         rst,

    input  wire [31: 0] araddr,
    input  wire         arvalid,
    output reg          arready,
     
    output reg  [31: 0] rdata,
    output reg  [ 1: 0] rresp,
    output reg          rvalid,
    input  wire         rready,
     
    input  wire [31: 0] awaddr,
    input  wire         awvalid,
    output reg          awready,
     
    input  wire [31: 0] wdata,
    input  wire [ 3: 0] wstrb,
    input  wire         wvalid,
    output reg          wready,
    
    output reg  [ 1: 0] bresp,
    output reg          bvalid,
    input  wire         bready
);

    //import "DPI-C" function void difftest_skip_ref();

    reg  [31: 0] mtimel, mtimeh;
    wire [31: 0] clint_offset;
    localparam CLINT_BASE   = 32'h02000000;
    assign  clint_offset = read_addr - CLINT_BASE;

    localparam IDLE         = 1'b0;
    localparam BUSY         = 1'b1;
    reg          state, next_state;
    reg  [31: 0] read_addr, write_addr, write_data;
    reg  [ 3: 0] write_strb;
    reg          is_read_req, is_write_req;
    reg          wvalid_reg;


    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;   
            arready <= 1'b1;
            rdata <= 32'b0;
            rresp <= 2'b00;
            rvalid <= 1'b0;
            awready <= 1'b1;
            wready <= 1'b0;
            bresp <= 2'b00;
            bvalid <= 1'b0;

            mtimel <= 32'h0;
            mtimeh <= 32'h0;
            wvalid_reg <= 1'b0;
            is_read_req <= 1'b0;
            is_write_req <= 1'b0;
        end else begin
            state <= next_state;
            if (mtimel == 32'hFFFFFFFF) begin
                mtimel <= 32'h0;
                mtimeh <= mtimeh + 1;
            end else begin
                mtimel <= mtimel + 1;
            end
            case (state)
                IDLE: begin
                    if (arvalid & arready) begin
                        read_addr <= araddr;
                        arready <= 1'b0;
                        is_read_req <= 1'b1;
                        is_write_req <= 1'b0;
                    end else if (awvalid & awready) begin
                        write_addr <= awaddr;
                        awready <= 1'b0;
                        wready <= 1'b1;
                        is_read_req <= 1'b0;
                        is_write_req <= 1'b1;
                    end else begin
                        is_read_req <= 1'b0;
                        is_write_req <= 1'b0;
                    end
                    rvalid <= 1'b0;
                    bvalid <= 1'b0;
                end
                
                BUSY: begin
                    if (is_read_req) begin
                        arready <= 1'b1;
                        //difftest_skip_ref();
                        rdata <= (clint_offset == 32'h0) ? mtimel :
                                 (clint_offset == 32'h4) ? mtimeh :
                                 32'b0;
                        rvalid <= 1'b1;
                        rresp <= 2'b00;
                    end else if (is_write_req) begin
                        if (wvalid & wready) begin
                            awready <= 1'b1;
                            wready <= 1'b0;
                            write_data <= wdata;
                            wvalid_reg <= wvalid;
                            write_strb <= wstrb;
                        end else if (wvalid_reg) begin
                            wvalid_reg <= 1'b0;
                            //difftest_skip_ref();
                            bvalid <= 1'b1;
                            bresp <= 2'b00;
                        end
                    end
                end
            endcase
        end
    end

    always @(*) begin
        case (state)
            IDLE: next_state = (arvalid | awvalid) ? BUSY : IDLE;      
            BUSY: next_state = ((is_read_req && rready && rvalid) | (is_write_req && bready && bvalid)) ? IDLE : BUSY; 
            default: next_state = IDLE;
        endcase
    end


endmodule