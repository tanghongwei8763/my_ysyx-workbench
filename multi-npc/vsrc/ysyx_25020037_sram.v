module ysyx_25020037_sram (
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

    localparam IDLE         = 1'b0;
    localparam BUSY         = 1'b1;
    reg          state, next_state;
    reg  [31: 0] read_addr, write_addr, write_data;
    reg  [ 3: 0] write_strb;
    reg          is_read_req, is_write_req;
    reg          wvalid_reg;

    reg [7:0] lfsr, delay_count, target_delay;
    wire lfsr_tap = lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3];


    import "DPI-C" function int pmem_read(input int addr, input int len, input int trace_on);
    import "DPI-C" function void pmem_write(input int addr, input int len, input int data, input int trace_on);


    always @(posedge clk or posedge rst) begin
        if (rst) begin
            lfsr <= 8'h01;
        end else begin
            if (state == IDLE && (arvalid || (awvalid && wvalid))) begin
                lfsr <= {lfsr[6:0], lfsr_tap};
            end
        end
    end


    function [7:0] calculate_delay;
        input [7:0] lfsr_value;
        begin
            case (lfsr_value[7:6])
                2'b00: calculate_delay = 5;
                2'b01: calculate_delay = 10;
                2'b10: calculate_delay = 20;
                default: calculate_delay = 15;
            endcase
        end
    endfunction


    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            delay_count <= 8'b0;
            target_delay <= 8'b0;       
            arready <= 1'b1;
            rdata <= 32'b0;
            rresp <= 2'b00;
            rvalid <= 1'b0;
            awready <= 1'b1;
            wready <= 1'b0;
            bresp <= 2'b00;
            bvalid <= 1'b0;

            wvalid_reg <= 1'b0;
            is_read_req <= 1'b0;
            is_write_req <= 1'b0;
        end else begin
            state <= next_state;
            
            case (state)
                IDLE: begin
                    if (arvalid & arready) begin
                        read_addr <= araddr;
                        target_delay <= calculate_delay(lfsr);
                        delay_count <= 8'b0;
                        arready <= 1'b0;
                        is_read_req <= 1'b1;
                        is_write_req <= 1'b0;
                    end else if (awvalid & awready) begin
                        write_addr <= awaddr;
                        target_delay <= calculate_delay(lfsr);
                        delay_count <= 8'b0;
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
                        //if (delay_count < target_delay) begin
                        //    delay_count <= delay_count + 1'b1;
                            
                        //    if (delay_count == target_delay - 1) begin
                                rdata <= pmem_read(read_addr, 4, 1);
                                rvalid <= 1'b1;
                                rresp <= 2'b00;
                        //    end
                        //end
                    end else if (is_write_req) begin
                        if (wvalid & wready) begin
                            awready <= 1'b1;
                            wready <= 1'b0;
                            write_data <= wdata;
                            wvalid_reg <= wvalid;
                            write_strb <= wstrb;
                        end
                        //if (delay_count < target_delay) begin
                        //    delay_count <= delay_count + 1'b1;
                            
                            if (/*(delay_count == target_delay - 1) & */wvalid_reg) begin
                                wvalid_reg <= 1'b0;
                                pmem_write(write_addr, {28'b0,write_strb}, write_data, 1);
                                bvalid <= 1'b1;
                                bresp <= 2'b00;
                            end
                        //end
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
