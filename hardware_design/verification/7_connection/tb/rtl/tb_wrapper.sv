`timescale 1ns / 1ps

module tb_wrapper;
    // Parameters
    parameter PIXEL_COUNT = 64;  // 8x8 block
    parameter MAX_SAMPLES = 1000; // Number of test samples
    parameter WAIT_CYCLES = 1000000; // Max wait cycles for completion

    // Signals for wrapper
    reg clk;
    reg rst_n;
    reg start;
    reg [511:0] R, G, B;
    wire [1023:0] Y_out;
    wire finished;

    // Test data
    reg [7:0] r_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [7:0] g_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [7:0] b_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [15:0] y_out_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];

    // Instantiate wrapper
    wrapper wrapper_inst (
        .clk(clk),
        .rst_n(rst_n),
        .start(start),
        .R(R),
        .G(G),
        .B(B),
        .Y_out(Y_out),
        .finished(finished)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk;

    integer g, i, cycle_count;
    
    // Task to load data for a single 8x8 block
    task load_rgb_block;
        input integer group;
        begin
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                R[i*8 +: 8] = r_mem[group*PIXEL_COUNT + i];
                G[i*8 +: 8] = g_mem[group*PIXEL_COUNT + i];
                B[i*8 +: 8] = b_mem[group*PIXEL_COUNT + i];
            end
        end
    endtask
    
    // Task to save output data
    task save_output_block;
        input integer group;
        begin
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                y_out_mem[group*PIXEL_COUNT + i] = Y_out[i*16 +: 16];
            end
        end
    endtask

    // Main test sequence
    initial begin
        $display("==== Testbench for Wrapper Module ====");
        
        // Read test data from files
        $readmemh("input_R.mem", r_mem);
        $readmemh("input_G.mem", g_mem);
        $readmemh("input_B.mem", b_mem);
        
        // Initialize signals
        rst_n = 0;
        start = 0;
        R = 0;
        G = 0;
        B = 0;
        
        // Reset sequence
        #100;
        rst_n = 1;
        #100;
        
        // Process each sample
        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Processing Group %0d ----", g);
            
            // Load RGB data for this block
            load_rgb_block(g);
            
            // Start processing
            start = 1;
            @(posedge clk);
            start = 0;
            
            // Wait for processing to complete
            cycle_count = 0;
            while (!finished && cycle_count < WAIT_CYCLES) begin
                @(posedge clk);
                cycle_count = cycle_count + 1;
            end
            
            if (cycle_count >= WAIT_CYCLES) begin
                $display("WARNING: Timeout waiting for finished signal in group %0d", g);
            end else begin
                $display("Group %0d processing completed in %0d cycles", g, cycle_count);
            end
            
            // Save output data
            save_output_block(g);
            
            // Wait a few cycles before starting next group
            repeat(10) @(posedge clk);
        end
        
        // Write output data to file
        $writememh("actual_y_output.mem", y_out_mem);
        
        $display("==== All %0d Groups Completed ====", MAX_SAMPLES);
        #100;
        $finish;
    end
    
    // Optional waveform dumping
    initial begin
        // $dumpfile("tb_wrapper.vcd");
        // $dumpvars(0, tb_wrapper);
    end
endmodule 