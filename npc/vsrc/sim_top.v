module sim_top();
    reg clk;
    reg rst_n;
    reg ebreak_end;  // 来自CPU的结束信号，拉高时终止仿真


    // 宏定义：默认路径与配置（可通过Makefile传入参数覆盖）
    `ifndef MEM_INIT_PATH
        `define MEM_INIT_PATH "./mem_init.hex"
    `endif
    `ifndef WAVE
        `define WAVE 0  // 0=关闭波形，1=开启波形
    `endif
    `ifndef WAVEFORM_PATH
        `define WAVEFORM_PATH "waveform.fst"
    `endif


    // 1. 时钟生成：50MHz（周期20ns，高电平10ns，低电平10ns）
    initial begin
        clk = 1'b0;
        forever #10 clk = ~clk;  // 时钟翻转周期10ns，对应50MHz
    end


    // 2. 复位信号生成：低电平复位，复位100ns后释放
    initial begin
        rst_n = 1'b0;  // 初始复位状态（假设CPU是低电平复位）
        #100 rst_n = 1'b1;  // 100ns后释放复位，CPU开始运行
    end


    // 3. 例化CPU顶层模块（ysyx_25020037）
    ysyx_25020037 u_cpu (
        .ebreak_end(ebreak_end),  // 输出：CPU执行完后拉高
        .clock(clk),              // 输入：系统时钟
        .reset(~rst_n)            // 输入：复位信号（若CPU是高电平复位，此处无需取反）
    );


    // 4. 核心逻辑：仅当ebreak_end拉高时结束仿真
    initial begin
        // 打印仿真启动信息
        $display("[SIM] Simulation started. Waiting for ebreak_end...");
        
        // 等待ebreak_end信号拉高（阻塞等待，直到条件满足）
        wait(ebreak_end == 1'b1);
        
        // 收到结束信号后，打印信息并终止仿真
        $display("[SIM] ebreak_end detected! Simulation completed successfully.");
        $finish;  // 终止仿真进程
    end


    // 5. 波形生成控制（根据WAVE宏决定是否生成波形文件）
    initial begin
`ifdef WAVE
        if (`WAVE == 1) begin
            $display("[SIM] Waveform enabled. Saving to: %s", `WAVEFORM_PATH);
            $dumpfile(`WAVEFORM_PATH);  // 指定波形文件路径
            $dumpvars(0, sim_top);     // 抓取整个sim_top模块的所有信号（0表示顶层）
        end else begin
            $display("[SIM] Waveform disabled (set WAVE=1 to enable).");
        end
`else
        $display("[SIM] Waveform disabled by default (add WAVE=1 in Makefile to enable).");
`endif
    end

endmodule