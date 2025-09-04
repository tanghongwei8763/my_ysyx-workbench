module sim_top();
    // 时钟和复位信号
    reg clk;
    reg rst_n;
    
    // 初始化时钟和复位
    initial begin
        clk = 1'b0;
        forever #10 clk = ~clk; // 50MHz时钟
    end
    
    initial begin
        rst_n = 1'b0;
        #100 rst_n = 1'b1; // 100ns后释放复位
    end
    
    // 实例化CPU顶层
    ysyx_25020037 u_cpu (
        .clk(clk),
        .rst_n(rst_n)
        // 根据实际CPU接口补充其他信号
    );
    
    // 行为建模的SRAM
    reg [31:0] sram [0:1024*1024-1]; // 4MB SRAM
    
    // 初始化SRAM
    initial begin
        $readmemh("$(IVERILOG_DIR)/mem_init.hex", sram);
    end
    
    // AXI接口连接（行为建模）
    always @(posedge clk) begin
        // 处理读操作
        if (u_cpu.axi_arvalid && u_cpu.axi_arready) begin
            u_cpu.axi_rdata <= sram[u_cpu.axi_araddr[31:2]];
            u_cpu.axi_rvalid <= 1'b1;
        end else begin
            u_cpu.axi_rvalid <= 1'b0;
        end
        
        // 处理写操作
        if (u_cpu.axi_awvalid && u_cpu.axi_awready) begin
            sram[u_cpu.axi_awaddr[31:2]] <= u_cpu.axi_wdata;
            u_cpu.axi_bvalid <= 1'b1;
        end else begin
            u_cpu.axi_bvalid <= 1'b0;
        end
        
        // 简化的ready信号处理
        u_cpu.axi_arready <= 1'b1;
        u_cpu.axi_awready <= 1'b1;
        u_cpu.axi_wready <= 1'b1;
    end
    
    // 仿真结束条件
    initial begin
        // 运行1ms后自动结束仿真
        #1000000;
        $finish;
    end
    
    // 波形记录（改为FST格式）
    initial begin
        $dumpfile("$(IVERILOG_DIR)/waveform.fst"); // FST格式文件
        $dumpvars(0, sim_top);
        $dumpflags(0x01); // 启用FST压缩
    end
endmodule
