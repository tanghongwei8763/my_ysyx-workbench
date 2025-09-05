module ysyx_25020037_sram (
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
    reg  [ 3: 0] read_id, write_id;
    wire [31: 0] addr_off = awaddr & 32'b11;  // 你原有的地址偏移信号


    // -------------------------- 模式1：iverilog 仿真（__ICARUS__ 宏定义） --------------------------
    `ifdef __ICARUS__
        // 1.1 iverilog 专用：4MB SRAM 行为建模
        localparam SRAM_DEPTH = 1024 * 1024;  // 4MB = 1M个32位数据
        reg [31:0] sram_array [0:SRAM_DEPTH-1];  // SRAM 存储数组
        wire [29:0] sram_idx_r = araddr[31:2];   // 读地址对齐（32位→按4字节分）
        wire [29:0] sram_idx_w = awaddr[31:2];   // 写地址对齐
        wire [1:0]  byte_off   = awaddr[1:0];    // 字节偏移（适配非对齐写）

        // 1.2 SRAM 初始化：从 .hex 加载指令/数据（iverilog 专用）
        `ifndef MEM_INIT_PATH
            `define MEM_INIT_PATH "./mem_init.hex"  // 默认路径（可被 Makefile 覆盖）
        `endif
        initial begin
            integer i;
            // 先初始化全0（避免不定值 x）
            for (i = 0; i < SRAM_DEPTH; i = i + 1) begin
                sram_array[i] = 32'h00000000;
            end
            // 从 .hex 镜像加载指令和数据
            $display("[SRAM][iverilog] Initializing from: %s", `MEM_INIT_PATH);
            $readmemh(`MEM_INIT_PATH, sram_array);
            // 可选：验证初始化（打印首地址）
            $display("[SRAM][iverilog] Init check: addr 0x00000000 = 0x%08x", sram_array[0]);
        end

        // 1.3 完整访存逻辑（iverilog 专用，合并握手与数据处理）
        // 状态机转移（完全保留你的原有逻辑）
        always @(*) begin
            case (state)
                IDLE: next_state = (arvalid | awvalid) ? BUSY : IDLE;      
                BUSY: next_state = ((is_read_req && rlast && rvalid) | (is_write_req && bready && bvalid)) ? IDLE : BUSY; 
                default: next_state = IDLE;
            endcase
        end

        // 时序逻辑（合并握手与数据处理，仅替换访存核心）
        always @(posedge clk or posedge rst) begin
            if (rst) begin
                // 完全保留你的复位初始化逻辑
                state <= IDLE;    
                arready <= 1'b1;
                rvalid <= 1'b0;
                rresp <= 2'b00;
                rdata <= 32'h0;
                rlast <= 1'b0;
                rid <= 4'h0;
                awready <= 1'b0;
                wready <= 1'b0;
                bvalid <= 1'b0;
                bresp <= 2'b00;
                bid <= 4'h0;
                is_read_req <= 1'b0;
                is_write_req <= 1'b0;
                read_addr <= 32'h0;
                write_addr <= 32'h0;
                write_data <= 32'h0;
                write_strb <= 4'h0;
                read_id <= 4'h0;
                write_id <= 4'h0;
            end else begin
                state <= next_state;
                case (state)
                    IDLE: begin
                        // 完全保留你的 IDLE 状态逻辑
                        rvalid <= 1'b0;
                        bvalid <= 1'b0;
                        rlast <= 1'b0;
                        is_read_req <= 1'b0;
                        is_write_req <= 1'b0;
                        wready <= 1'b0;
                        
                        if (arvalid) begin
                            read_addr <= araddr;
                            read_id <= arid;
                            arready <= 1'b1;
                            is_read_req <= 1'b1;
                        end else if (awvalid & wvalid) begin
                            write_addr <= awaddr;
                            write_id <= awid;
                            awready <= 1'b1;
                            wready <= 1'b1;
                            is_write_req <= 1'b1;
                            write_data <= wdata;  // 新增：锁存写数据（iverilog 需手动保存）
                            write_strb <= wstrb;  // 新增：锁存写使能（iverilog 需手动保存）
                        end
                    end
                    BUSY: begin
                        // 完全保留你的 BUSY 状态握手逻辑，仅替换访存核心
                        if (is_read_req) begin
                            // iverilog 读逻辑：从 SRAM 数组取数（替换原 DPI-C pmem_read）
                            rvalid <= 1'b1;
                            rresp <= 2'b00;
                            rdata <= sram_array[sram_idx_r] << (byte_off << 3);  // 字节偏移对齐
                            rlast <= 1'b1;
                            rid <= read_id;
                            
                            if (rvalid & rready) begin
                                rvalid <= 1'b0;
                                rlast <= 1'b0;
                            end
                        end 
                        else if (is_write_req) begin
                            // iverilog 写逻辑：按字节使能写入 SRAM 数组（替换原 DPI-C pmem_write）
                            if (wvalid & wready) begin
                                wready <= 1'b0;
                                // 按 wstrb 逐字节写入（支持非对齐写）
                                if (write_strb[0]) sram_array[sram_idx_w][7:0]   <= write_data[7:0];
                                if (write_strb[1]) sram_array[sram_idx_w][15:8]  <= write_data[15:8];
                                if (write_strb[2]) sram_array[sram_idx_w][23:16] <= write_data[23:16];
                                if (write_strb[3]) sram_array[sram_idx_w][31:24] <= write_data[31:24];
                                
                                bvalid <= 1'b1;
                                bresp <= 2'b00;
                                bid <= write_id;
                            end
                            if (bvalid & bready) begin
                                awready <= 1'b0;
                                bvalid <= 1'b0;
                            end
                        end
                    end
                endcase
            end
        end


    // -------------------------- 模式2：非 iverilog （保留你的所有原有逻辑） --------------------------
    `else
        // 完全保留你的 DPI-C 调用和原有访存逻辑，未做任何修改
        import "DPI-C" function int pmem_read(input int addr, input int len, input int trace_on);
        import "DPI-C" function void pmem_write(input int addr, input int len, input int data, input int trace_on);

        // 状态机转移（你的原有逻辑）
        always @(*) begin
            case (state)
                IDLE: next_state = (arvalid | awvalid) ? BUSY : IDLE;      
                BUSY: next_state = ((is_read_req && rlast && rvalid) | (is_write_req && bready && bvalid)) ? IDLE : BUSY; 
                default: next_state = IDLE;
            endcase
        end

        // 时序逻辑（你的原有逻辑，包括 DPI-C 调用）
        always @(posedge clk or posedge rst) begin
            if (rst) begin
                state <= IDLE;    
                arready <= 1'b1;
                rvalid <= 1'b0;
                rresp <= 2'b00;
                rdata <= 32'h0;
                rlast <= 1'b0;
                rid <= 4'h0;
                awready <= 1'b0;
                wready <= 1'b0;
                bvalid <= 1'b0;
                bresp <= 2'b00;
                bid <= 4'h0;
                is_read_req <= 1'b0;
                is_write_req <= 1'b0;
                read_addr <= 32'h0;
                write_addr <= 32'h0;
                write_data <= 32'h0;
                write_strb <= 4'h0;
                read_id <= 4'h0;
                write_id <= 4'h0;
            end else begin
                state <= next_state;
                case (state)
                    IDLE: begin
                        rvalid <= 1'b0;
                        bvalid <= 1'b0;
                        rlast <= 1'b0;
                        is_read_req <= 1'b0;
                        is_write_req <= 1'b0;
                        wready <= 1'b0;
                        if (arvalid) begin
                            read_addr <= araddr;
                            read_id <= arid;
                            arready <= 1'b1;
                            is_read_req <= 1'b1;
                        end else if (awvalid & wvalid) begin
                            write_addr <= awaddr;
                            write_id <= awid;
                            awready <= 1'b1;
                            wready <= 1'b1;
                            is_write_req <= 1'b1;
                        end
                    end
                    BUSY: begin
                        if (is_read_req) begin
                            rvalid <= 1'b1;
                            rresp <= 2'b00;
                            rdata <= pmem_read(read_addr, 4, 1) << ((read_addr & 32'b11) << 3);
                            rlast <= 1'b1;
                            rid <= read_id;
                            if (rvalid & rready) begin
                                rvalid <= 1'b0;
                                rlast <= 1'b0;
                            end
                        end 
                        else if (is_write_req) begin
                            if (wvalid & wready) begin
                                wready <= 1'b0;
                                pmem_write(write_addr, {28'h0, wstrb >> addr_off}, wdata >> (addr_off << 3), 1);
                                bvalid <= 1'b1;
                                bresp <= 2'b00;
                                bid <= write_id;
                            end
                            if (bvalid & bready) begin
                                awready <= 1'b0;
                                bvalid <= 1'b0;
                            end
                        end
                    end
                endcase
            end
        end
    `endif

endmodule