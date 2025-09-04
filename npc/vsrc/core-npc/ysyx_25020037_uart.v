module ysyx_25020037_uart(
    input  wire         clk,
    input  wire         rst,

    output reg          awready,
    input  wire         awvalid,
    input  wire [31: 0] awaddr,
    input  wire [ 3: 0] awid,
    input  wire [ 7: 0] awlen,
    input  wire [ 2: 0] awsize,
    input  wire [ 1: 0] awburst,
    output reg          wready,
    input  wire         wvalid,
    input  wire [31: 0] wdata,
    input  wire [ 3: 0] wstrb,
    input  wire         wlast,
    input  wire         bready,
    output reg          bvalid,
    output reg  [ 1: 0] bresp,
    output reg  [ 3: 0] bid,
    output reg          arready,
    input  wire         arvalid,
    input  wire [31: 0] araddr,
    input  wire [ 3: 0] arid,
    input  wire [ 7: 0] arlen,
    input  wire [ 2: 0] arsize,
    input  wire [ 1: 0] arburst,
    input  wire         rready,
    output reg          rvalid,
    output reg  [ 1: 0] rresp,
    output reg  [31: 0] rdata,
    output reg          rlast,
    output reg  [ 3: 0] rid
);
    localparam IDLE         = 1'b0;
    localparam BUSY         = 1'b1;
    reg          state, next_state;
    reg  [31: 0] read_addr, write_addr, write_data;
    reg  [ 3: 0] write_strb;
    reg          is_read_req, is_write_req;
    reg          wvalid_reg;
    reg  [ 3: 0] read_id, write_id;
    reg          uart_tx_busy;
    reg  [ 7: 0] uart_rx_data;
    reg          uart_rx_ready;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;   
            arready <= 1'b1;
            rdata <= 32'b0;
            rresp <= 2'b00;
            rvalid <= 1'b0;
            rlast <= 1'b0;
            rid <= 4'h0;
            awready <= 1'b1;
            wready <= 1'b0;
            bresp <= 2'b00;
            bvalid <= 1'b0;
            bid <= 4'h0;
            wvalid_reg <= 1'b0;
            is_read_req <= 1'b0;
            is_write_req <= 1'b0;
            read_addr <= 32'h0;
            write_addr <= 32'h0;
            write_data <= 32'h0;
            write_strb <= 4'h0;
            read_id <= 4'h0;
            write_id <= 4'h0;
            uart_tx_busy <= 1'b0;
            uart_rx_data <= 8'h0;
            uart_rx_ready <= 1'b1;
        end else begin
            state <= next_state;
            
            case (state)
                IDLE: begin
                    rvalid <= 1'b0;
                    bvalid <= 1'b0;
                    rlast <= 1'b0;
                    wvalid_reg <= 1'b0;
                    is_read_req <= 1'b0;
                    is_write_req <= 1'b0;
                    wready <= 1'b0;
                    uart_tx_busy <= 1'b0;

                    if (arvalid & arready) begin
                        read_addr <= araddr;
                        read_id <= arid;
                        arready <= 1'b0;
                        is_read_req <= 1'b1;
                    end else if (awvalid & awready) begin
                        write_addr <= awaddr;
                        write_id <= awid;
                        awready <= 1'b0;
                        wready <= 1'b1;
                        is_write_req <= 1'b1;
                    end
                end
                
                BUSY: begin
                    if (is_read_req) begin
                        arready <= 1'b1;
                        rvalid <= 1'b1;
                        rresp <= 2'b00;
                        rlast <= 1'b1;
                        rid <= read_id;
                        if (read_addr[3:0] == 4'h0) begin
                            rdata <= {31'b0, uart_rx_ready};
                        end else if (read_addr[3:0] == 4'h4) begin
                            rdata <= {24'b0, uart_rx_data};
                            uart_rx_ready <= 1'b0;
                        end else begin
                            rdata <= 32'b0;
                        end
                        if (rvalid & rready) begin
                            rvalid <= 1'b0;
                            rlast <= 1'b0;
                        end
                    end else if (is_write_req) begin
                        if (wvalid & wready) begin
                            awready <= 1'b1;
                            wready <= 1'b0;
                            write_data <= wdata;
                            wvalid_reg <= wvalid;
                            write_strb <= wstrb;
                        end else if (wvalid_reg && !uart_tx_busy) begin
                            wvalid_reg <= 1'b0;
                            uart_tx_busy <= 1'b1;
                            $write("%c", write_data[7:0]);
                            $fflush();
                            bvalid <= 1'b1;
                            bresp <= 2'b00;
                            bid <= write_id;
                        end
                        if (bvalid & bready) begin
                            bvalid <= 1'b0;
                            uart_tx_busy <= 1'b0;
                        end
                    end
                end
            endcase
        end
    end

    always @(*) begin
        case (state)
            IDLE: next_state = (arvalid | awvalid) ? BUSY : IDLE;      
            BUSY: begin
                if ((is_read_req && rvalid && rready) || (is_write_req && bvalid && bready)) begin
                    next_state = IDLE;
                end else begin
                    next_state = BUSY;
                end
            end
            default: next_state = IDLE;
        endcase
    end

endmodule