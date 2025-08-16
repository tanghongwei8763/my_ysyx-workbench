`include "/home/tanghongwei/ysyx-workbench/npc/vsrc/include/ysyx_25020037_config.vh"
module ysyx_25020037_lsu #(
    parameter BLOCK_SIZE = 4  // 与IFU保持一致的块大小参数
) (
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

    // AXI写地址通道
    input  wire         awready,
    output reg          awvalid,
    output reg  [31: 0] awaddr,
    output reg  [ 3: 0] awid,
    output reg  [ 7: 0] awlen,
    output reg  [ 2: 0] awsize,
    output reg  [ 1: 0] awburst,
    // AXI写数据通道
    input  wire         wready,
    output reg          wvalid,
    output reg  [31: 0] wdata,
    output reg  [ 3: 0] wstrb,
    output reg          wlast,
    // AXI写响应通道
    output reg          bready,
    input  wire         bvalid,
    input  wire [ 1: 0] bresp,
    input  wire [ 3: 0] bid,
    // AXI读地址通道
    input  wire         arready,
    output reg          arvalid,
    output reg  [31: 0] araddr,
    output reg  [ 3: 0] arid,
    output reg  [ 7: 0] arlen,
    output reg  [ 2: 0] arsize,
    output reg  [ 1: 0] arburst,
    // AXI读数据通道
    output reg          rready,
    input  wire         rvalid,
    input  wire [ 1: 0] rresp,
    input  wire [31: 0] rdata,
    input  wire         rlast,
    input  wire [ 3: 0] rid
);
    // 存储器地址范围定义（与IFU保持一致）
    localparam SDRAM_BASE = 32'hA0000000;
    localparam SDRAM_END  = 32'hBFFFFFFF;

    // 块传输相关参数计算
    localparam OFFSET_WIDTH = $clog2(BLOCK_SIZE);
    localparam TRANSFER_COUNT = BLOCK_SIZE / 4;  // 每个块的32位字数量
    
    // 状态机定义
    localparam IDLE    = 2'b00;  // 空闲状态
    localparam CHECK   = 2'b01;  // 检查操作类型状态
    localparam READ    = 2'b10;  // 读操作状态
    localparam WRITE   = 2'b11;  // 写操作状态

    // AXI协议相关常量
    localparam AXI_ID       = 4'h1;  // 与IFU区分的ID
    localparam AXI_BURST_INCR = 2'b01;  // 增量突发
    localparam AXI_BURST_FIXED = 2'b00; // 固定突发
    localparam AXI_SIZE_BYTE  = 3'h0;   // 字节传输
    localparam AXI_SIZE_HALF  = 3'h1;   // 半字传输
    localparam AXI_SIZE_WORD  = 3'h2;   // 字传输

    // 内部寄存器定义
    reg  [ 1:0] state, next_state;
    reg  [31:0] current_addr;        // 当前操作地址
    reg  [31:0] block_base_addr;     // 块对齐地址
    reg  [ 7:0] burst_cnt;           // 突发传输计数器
    reg         is_sdram;            // 是否操作SDRAM
    reg         is_read;             // 是否读操作
    reg         is_write;            // 是否写操作
    reg  [ 2:0] data_size;           // 数据大小（0:字节,1:半字,2:字）
    
    // 辅助信号
    wire [31:0] aligned_addr = {current_addr[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
    wire        addr_valid = (current_addr >= SDRAM_BASE) && (current_addr <= SDRAM_END);

    // 状态机跳转逻辑
    always @(*) begin
        case (state)
            IDLE:  begin 
                next_state = (exu_valid && lsu_ready) ? CHECK : IDLE;
            end
            CHECK: begin
                if (is_read) begin
                    next_state = READ;
                end else if (is_write) begin
                    next_state = WRITE;
                end else begin
                    next_state = IDLE;  // 无效操作直接返回
                end
            end
            READ:  begin
                // 读操作完成条件：收到最后一个数据且写回模块准备好
                next_state = (rvalid && rlast && rready && wbu_ready) ? IDLE : READ;
            end
            WRITE: begin
                // 写操作完成条件：收到写响应且写回模块准备好
                next_state = (bvalid && bready && wbu_ready) ? IDLE : WRITE;
            end
            default: next_state = IDLE;
        endcase
    end

    // 内部信号赋值
    always @(*) begin
        current_addr = eu_to_lu_bus[63:32];
        is_sdram = (current_addr >= SDRAM_BASE) && (current_addr <= SDRAM_END);
        is_read = du_to_lu_bus[1];
        is_write = du_to_lu_bus[0];
        data_size = du_to_lu_bus[4:2];
        block_base_addr = aligned_addr;
    end

    // 主时序逻辑
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            // 状态初始化
            state <= IDLE;
            lsu_ready <= 1'b1;
            lsu_valid <= 1'b0;
            access_fault <= 1'b0;
            lu_to_wu_bus <= 'b0;
            
            // AXI写地址通道初始化
            awvalid <= 1'b0;
            awaddr <= 32'h0;
            awid <= AXI_ID;
            awlen <= 8'h0;
            awsize <= AXI_SIZE_WORD;
            awburst <= AXI_BURST_FIXED;
            
            // AXI写数据通道初始化
            wvalid <= 1'b0;
            wdata <= 32'h0;
            wstrb <= 4'h0;
            wlast <= 1'b1;
            
            // AXI写响应通道初始化
            bready <= 1'b0;
            
            // AXI读地址通道初始化
            arvalid <= 1'b0;
            araddr <= 32'h0;
            arid <= AXI_ID;
            arlen <= 8'h0;
            arsize <= AXI_SIZE_WORD;
            arburst <= AXI_BURST_FIXED;
            
            // AXI读数据通道初始化
            rready <= 1'b0;
            
            // 内部寄存器初始化
            burst_cnt <= 8'h0;
        end else begin
            state <= next_state;
            
            case (state)
                IDLE: begin
                    // 空闲状态：准备接收新操作
                    lsu_ready <= 1'b1;
                    lsu_valid <= 1'b0;
                    access_fault <= 1'b0;
                    burst_cnt <= 8'h0;
                    
                    // 清除所有AXI通道信号
                    awvalid <= 1'b0;
                    wvalid <= 1'b0;
                    bready <= 1'b0;
                    arvalid <= 1'b0;
                    rready <= 1'b0;
                end
                
                CHECK: begin
                    // 检查操作类型并初始化对应通道
                    lsu_ready <= 1'b0;
                    
                    if (is_read) begin
                        // 初始化读地址通道
                        araddr <= block_base_addr;
                        arvalid <= 1'b1;
                        arid <= AXI_ID;
                        arsize <= data_size;  // 根据数据大小设置传输粒度
                        
                        // SDRAM支持块传输，其他存储器单字传输
                        if (is_sdram) begin
                            arlen <= TRANSFER_COUNT - 1;
                            arburst <= AXI_BURST_INCR;
                        end else begin
                            arlen <= 8'h0;
                            arburst <= AXI_BURST_FIXED;
                        end
                        rready <= 1'b1;  // 准备接收读数据
                    end
                    
                    if (is_write) begin
                        // 初始化写地址通道
                        awaddr <= block_base_addr;
                        awvalid <= 1'b1;
                        awid <= AXI_ID;
                        awsize <= data_size;  // 根据数据大小设置传输粒度
                        
                        // SDRAM支持块传输，其他存储器单字传输
                        if (is_sdram) begin
                            awlen <= TRANSFER_COUNT - 1;
                            awburst <= AXI_BURST_INCR;
                        end else begin
                            awlen <= 8'h0;
                            awburst <= AXI_BURST_FIXED;
                        end
                        
                        // 初始化写数据通道
                        wvalid <= 1'b1;
                        wlast <= 1'b1;
                        bready <= 1'b1;  // 准备接收写响应
                        
                        // 根据地址偏移和数据大小生成写选通
                        case (data_size)
                            3'b001: wstrb <= 4'b0001 << current_addr[1:0];  // 字节
                            3'b010: wstrb <= 4'b0011 << current_addr[1:0];  // 半字
                            3'b100: wstrb <= 4'b1111 << current_addr[1:0];  // 字
                            default: wstrb <= 4'b0000;
                        endcase
                        
                        // 数据对齐
                        wdata <= eu_to_lu_bus[31:0] << (current_addr[1:0] << 3);
                    end
                end
                
                READ: begin
                    // 读地址通道握手完成后清除有效信号
                    if (arvalid && arready) begin
                        arvalid <= 1'b0;
                    end
                    
                    // 处理读数据
                    if (rvalid && rready) begin
                        burst_cnt <= burst_cnt + 1'b1;
                        
                        // 检查是否有访问错误
                        if (rresp != 2'b00) begin
                            access_fault <= 1'b1;
                        end
                        
                        // 最后一个数据到达时，准备写回
                        if (rlast) begin
                            lu_to_wu_bus <= {current_addr, rdata};
                            lsu_valid <= 1'b1;
                            lsu_ready <= (wbu_ready) ? 1'b1 : 1'b0;
                        end
                    end
                end
                
                WRITE: begin
                    // 写地址和数据通道握手完成后清除有效信号
                    if (awvalid && awready) begin
                        awvalid <= 1'b0;
                    end
                    if (wvalid && wready) begin
                        wvalid <= 1'b0;
                    end
                    
                    // 处理写响应
                    if (bvalid && bready) begin
                        // 检查是否有访问错误
                        access_fault <= (bresp != 2'b00);
                        lsu_valid <= 1'b1;
                        lsu_ready <= (wbu_ready) ? 1'b1 : 1'b0;
                        bready <= 1'b0;
                    end
                end
            endcase
        end
    end

endmodule