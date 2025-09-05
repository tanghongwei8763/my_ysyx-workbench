module sim_top();
    reg clk;
    reg rst_n;


    `ifndef MEM_INIT_PATH
        `define MEM_INIT_PATH "./mem_init.hex"
    `endif
    `ifndef WAVE
        `define WAVE 0
    `endif
    `ifndef WAVEFORM_PATH
        `define WAVEFORM_PATH "waveform.fst"
    `endif
    `ifndef SIM_DURATION
        `define SIM_DURATION 1000000
    `endif


    initial begin
        clk = 1'b0;
        forever #10 clk = ~clk;
    end


    initial begin
        rst_n = 1'b0;
        #100 rst_n = 1'b1;
        
    end


    ysyx_25020037 u_cpu (
        .clock(clk),
        .reset(~rst_n)
    );


    initial begin
        $display("[SIM] Simulation started. Duration: %d ns", `SIM_DURATION);
        #`SIM_DURATION;
        $display("[SIM] Simulation completed (reached fixed duration).");
        $finish;
    end

    initial begin
        `ifdef WAVE
            `if WAVE
                $display("[SIM] Waveform enabled. Saving to: %s", `WAVEFORM_PATH);
                $dumpfile(`WAVEFORM_PATH);
                $dumpvars(0, sim_top);
                $dumpflags(0x01);
            `else
                $display("[SIM] Waveform disabled (WAVE=0).");
            `endif
        `else
            $display("[SIM] Waveform disabled by default. Add WAVE=1 to enable.");
        `endif
    end

endmodule