module ysyx_25020037_icache #(
    parameter ADDR_WIDTH    = 32,
    parameter DATA_WIDTH    = 32,
    parameter CACHE_BLOCKS  = 16,
    parameter BLOCK_SIZE    = 4,
    parameter TAG_WIDTH     = ADDR_WIDTH - $clog2(CACHE_BLOCKS) - $clog2(BLOCK_SIZE)
) (
    input                           clk,
    input                           rst,
    
    input  wire [ADDR_WIDTH-1:0] cpu_addr,
    input  wire                  cpu_req,
    output reg  [DATA_WIDTH-1:0] cpu_data,
    output reg                   cpu_hit,
    output reg                   cpu_ready,
    
    output reg                   mem_req,
    input  wire [DATA_WIDTH-1:0] mem_data,
    input  wire                  mem_ready
);

localparam INDEX_WIDTH  = $clog2(CACHE_BLOCKS);
localparam OFFSET_WIDTH = $clog2(BLOCK_SIZE);

wire [   TAG_WIDTH-1:0]   tag;
wire [ INDEX_WIDTH-1:0]   index;
wire [OFFSET_WIDTH-1:0]   offset;

assign tag    = cpu_addr[ADDR_WIDTH-1 : INDEX_WIDTH + OFFSET_WIDTH];
assign index  = cpu_addr[INDEX_WIDTH + OFFSET_WIDTH - 1 : OFFSET_WIDTH];
assign offset = cpu_addr[OFFSET_WIDTH-1 : 0];

reg [   TAG_WIDTH-1:0]    tag_array  [CACHE_BLOCKS-1:0];
reg [  DATA_WIDTH-1:0]    data_array [CACHE_BLOCKS-1:0];
reg [CACHE_BLOCKS-1:0]    valid_array;
reg                       cache_hit;
localparam IDLE      = 2'b00;
localparam COMPARE   = 2'b01;
localparam REFILL    = 2'b10;

reg [1:0] current_state, next_state;

always @(*) begin
    case (current_state)
        IDLE: begin next_state = cpu_req ? COMPARE : IDLE; end
        COMPARE: begin next_state = cache_hit ? IDLE : REFILL; end
        REFILL: begin next_state = mem_ready ? IDLE : REFILL; end
        default: next_state = IDLE;
    endcase
end

always @(*) begin
    if ((current_state == COMPARE) && valid_array[index] && (tag_array[index] == tag)) begin
        cache_hit = 1'b1;
    end else begin
        cache_hit = 1'b0;
    end
end

always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_state <= IDLE;
        cpu_data  <= 'b0;
        cpu_ready <= 1'b0;
        cpu_hit <= 1'b0;
    end else begin
        current_state <= next_state;

        if ((current_state == COMPARE) && valid_array[index] && (tag_array[index] == tag)) begin
            cpu_hit <= 1'b1;
        end else begin cpu_hit <= 1'b0; end

        case (current_state)
            COMPARE: begin
                if (cache_hit) begin
                    cpu_data  <= data_array[index];
                    cpu_ready <= 1'b1;
                end else begin
                    cpu_data  <= 'b0;
                    cpu_ready <= 1'b0;
                end
            end
            REFILL: begin
                if (mem_ready) begin
                    cpu_data  <= mem_data;
                    cpu_ready <= 1'b1;
                end else begin
                    cpu_data  <= 'b0;
                    cpu_ready <= 1'b0;
                end
            end
            default: begin
                cpu_data  <= 'b0;
                cpu_ready <= 1'b0;
            end
        endcase
    end
end

always @(posedge clk or posedge rst) begin
    if (rst) begin
        mem_req  <= 1'b0;
    end else begin
        case (current_state)
            COMPARE: begin
                if (!cache_hit) begin
                    mem_req  <= 1'b1;
                end else begin
                    mem_req  <= 1'b0;
                end
            end
            REFILL: begin
                if (mem_ready) begin
                    mem_req  <= 1'b0;
                end
            end
            default: begin
                mem_req  <= 1'b0;
            end
        endcase
    end
end

always @(posedge clk or posedge rst) begin
    if (rst) begin
        valid_array <= 'b0;
    end else if (current_state == REFILL && mem_ready) begin
        tag_array[index]    <= tag;
        data_array[index]   <= mem_data;
        valid_array[index]  <= 1'b1;
    end
end

endmodule
