`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"

module ysyx_25020037_icache #(
    parameter ADDR_WIDTH    = 32,
    parameter DATA_WIDTH    = 32,
    parameter CACHE_BLOCKS  = 16,
    parameter BLOCK_SIZE    = 16,
    parameter OFFSET_WIDTH  = $clog2(BLOCK_SIZE),
    parameter INDEX_WIDTH   = $clog2(CACHE_BLOCKS),
    parameter TAG_WIDTH     = ADDR_WIDTH - INDEX_WIDTH - OFFSET_WIDTH
) (
    input                           clk,
    input                           rst,

    input  wire [`EU_TO_IC_BUS_WD -1:0] eu_to_ic_bus,

    input  wire [ADDR_WIDTH-1:0] cpu_addr,
    input  wire                  cpu_req,
    output reg  [DATA_WIDTH-1:0] cpu_data,
    output reg                   cpu_hit,
    output reg                   cpu_ready,
    
    output reg                   mem_req,
    output reg  [ADDR_WIDTH-1:0] mem_addr,
    input  wire [BLOCK_SIZE*8-1:0] mem_data,
    input  wire                  mem_ready
);
wire is_fence_i = eu_to_ic_bus;
wire cache_hit;

wire [OFFSET_WIDTH-1:0]   offset;
wire [ INDEX_WIDTH-1:0]   index;
wire [   TAG_WIDTH-1:0]   tag;

assign offset = cpu_addr[OFFSET_WIDTH-1 : 0];
assign index  = cpu_addr[OFFSET_WIDTH + INDEX_WIDTH - 1 : OFFSET_WIDTH];
assign tag    = cpu_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + INDEX_WIDTH];

assign mem_addr = {cpu_addr[ADDR_WIDTH-1 : OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};

reg [   TAG_WIDTH-1:0]  tag_array  [CACHE_BLOCKS-1:0];
reg [BLOCK_SIZE*8-1:0]  data_array [CACHE_BLOCKS-1:0];
reg [CACHE_BLOCKS-1:0]  valid_array;

localparam IDLE      = 2'b00;
localparam COMPARE   = 2'b01;
localparam REFILL    = 2'b10;
localparam FENCE_I   = 2'b11;

reg [1:0] current_state, next_state;

always @(*) begin
    case (current_state)
        IDLE: begin next_state = is_fence_i ? FENCE_I : 
                                 cpu_req    ? COMPARE : IDLE;  end
        COMPARE: begin next_state = cache_hit ? IDLE : REFILL; end
        REFILL : begin next_state = mem_ready ? IDLE : REFILL; end
        FENCE_I: begin next_state = IDLE; end
        default: next_state = IDLE;
    endcase
end

    assign cache_hit = (current_state == COMPARE) && valid_array[index] && (tag_array[index] == tag);

always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_state <= IDLE;
        cpu_data  <= 'b0;
        cpu_hit <= 1'b0;
        cpu_ready <= 1'b0;
    end else begin
        current_state <= next_state;
        cpu_hit <= 1'b0;

        case (current_state)
            COMPARE: begin
                if (cache_hit) begin
                    cpu_data  <= data_array[index][offset*8 +: DATA_WIDTH];
                    cpu_hit <= 1'b1;
                    cpu_ready <= 1'b1;
                end else begin
                    cpu_data  <= 'b0;
                    cpu_hit <= 1'b0;
                    cpu_ready <= 1'b0;
                end
            end
            REFILL: begin
                if (mem_ready) begin
                    cpu_data  <= mem_data[offset*8 +: DATA_WIDTH];
                    cpu_ready <= 1'b1;
                end else begin
                    cpu_data  <= 'b0;
                    cpu_ready <= 1'b0;
                end
            end
            FENCE_I: begin
                cpu_data  <= 'b0;
                cpu_ready <= 1'b1;
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
            COMPARE: mem_req <= !cache_hit;
            REFILL:  mem_req <= !mem_ready;
            default: mem_req <= 1'b0;
        endcase
    end
end

always @(posedge clk or posedge rst) begin
    if (rst) begin
        valid_array <= 'b0;
    end else if (current_state == FENCE_I) begin
        valid_array <= 'b0;
    end else if (current_state == REFILL && mem_ready) begin
        tag_array[index]    <= tag;
        data_array[index]   <= mem_data;
        valid_array[index]  <= 1'b1;
    end
end

endmodule
