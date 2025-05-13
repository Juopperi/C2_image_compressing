// -----------------------------------------------------------------------------
// Testbench : 2‑D 8×8 DCT core (Chen algorithm, 并行实现) – compare against golden vectors
// -----------------------------------------------------------------------------
//   * Reads   chen_2d_dct_input.mem   (row‑major 64 words / block)
//   * Reads   expected_chen_2d_dct_output.mem  (row‑major 64 words / block)
//   * Feeds DUT with all 64 inputs at once using valid/ready handshaking
//   * Collects all 64 outputs at once and checks absolute error ≤ 0.5 LSB (Q16.16)
// -----------------------------------------------------------------------------
`timescale 1ns / 1ps

module tb_dct8x8_chen_2d_parallel;
    // ---------- Parameters ---------------------------------------------------
    parameter DATA_WIDTH = 32;         // Q16.16 words
    parameter FRAC_BITS  = 15;          // Fraction bits
    parameter WORDS_PER_ROW = 8;       // 8 pixels per row
    parameter ROWS_PER_BLK = 8;        // 8 rows per block
    parameter WORDS_PER_BLK = 64;      // 8×8 = 64 words per block
    parameter MAX_BLOCKS = 100;        // must match generator
    parameter ERR_THRESH = 32'h0000_8000; // ±0.5 LSB
    parameter CLK_PERIOD = 10;         // 10ns = 100MHz

    // ---------- Testbench signals --------------------------------------------
    reg                      clk;
    reg                      rst_n;

    // Block-level input interface (all 64 inputs at once)
    reg                      in_valid;
    wire                     in_ready;
    reg  [64*DATA_WIDTH-1:0] in_data;

    // Block-level output interface (all 64 outputs at once)
    wire                     out_valid;
    reg                      out_ready;
    wire [64*DATA_WIDTH-1:0] out_data;

    // ---------- DUT instance -------------------------------------------------
    dct8x8_chen_2d_parallel #(
        .IN_W   (DATA_WIDTH),
        .FRAC   (FRAC_BITS)
    ) dut (
        .clk      (clk),
        .rst_n    (rst_n),
        .in_valid (in_valid),
        .in_ready (in_ready),
        .in_data  (in_data),
        .out_valid(out_valid),
        .out_ready(out_ready),
        .out_data (out_data)
    );

    // ---------- Memories -----------------------------------------------------
    reg [DATA_WIDTH-1:0] input_mem  [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    reg [DATA_WIDTH-1:0] golden_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    reg [DATA_WIDTH-1:0] output_mem [0:WORDS_PER_BLK-1]; // To collect output

    integer blk, i, diff, fout, err_cnt = 0;
    integer testing_block = 0;

    // ---------- Clock generator ----------------------------------------------
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    // ---------- Helper : set input block from memory --------------------------
    task set_input_block(input integer block_num);
        integer base_idx, i;
        begin
            base_idx = block_num * WORDS_PER_BLK;
            
            // Populate the wide input with all 64 values
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                in_data[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[base_idx + i];
            end
        end
    endtask

    // ---------- Helper : save output values ---------------------------------
    task save_output_block;
        integer i;
        begin
            // Save all 64 outputs to output_mem and the output file
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                output_mem[i] = out_data[i*DATA_WIDTH +: DATA_WIDTH];
                $fdisplay(fout, "%08X", output_mem[i]);
            end
        end
    endtask

    // ---------- Helper : check output block against golden reference ---------
    task check_output_block(input integer block_num);
        integer i, d;
        reg [DATA_WIDTH-1:0] exp_value;
        reg [DATA_WIDTH-1:0] got_value;
        begin
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                got_value = output_mem[i];
                exp_value = golden_mem[block_num*WORDS_PER_BLK + i];
                
                d = $signed(got_value) - $signed(exp_value);
                if (d < 0) d = -d;
                
                if (d > ERR_THRESH) begin
                    $display("Mismatch blk %0d idx %0d: got %h exp %h diff %0d", 
                              block_num, i, got_value, exp_value, d >> 16);
                    err_cnt = err_cnt + 1;
                end
            end
        end
    endtask

    // ---------- Stimulus -----------------------------------------------------
    initial begin
        fout = $fopen("actual_chen_2d_parallel_output.mem", "w");
        $display("==== TB 2‑D 8×8 DCT Chen Parallel (64-input/64-output version) ====");

        // Load test vectors
        $readmemh("chen_2d_dct_input.mem",  input_mem);
        $readmemh("expected_chen_2d_dct_output.mem", golden_mem);

        // Initialize signals
        rst_n = 0;
        in_valid = 0;
        out_ready = 1;  // Always ready to accept output initially
        
        // Reset sequence
        #(CLK_PERIOD*3);
        rst_n = 1;
        #(CLK_PERIOD*2);
        
        // Test each block one by one
        for (blk = 0; blk < MAX_BLOCKS; blk = blk + 1) begin
            testing_block = blk;
            
            // Prepare entire input block (all 64 values)
            set_input_block(blk);
            
            // Wait for DUT to be ready
            @(posedge clk);
            while (!in_ready) @(posedge clk);
            
            // Apply input with valid signal
            in_valid = 1;
            
            // Wait for handshake to complete
            @(posedge clk);
            while (in_valid && !in_ready) @(posedge clk);
            in_valid = 0;
            
            // Wait for output valid
            @(posedge clk);
            while (!out_valid) @(posedge clk);
            
            // Save all 64 output values
            save_output_block();
            
            // Acknowledge output
            out_ready = 1;
            @(posedge clk);
            out_ready = 0;
            
            // Check complete block output against reference
            check_output_block(blk);
            
            // Small delay between blocks for readability in waveform
            #(CLK_PERIOD*2);
        end

        // Final results
        if (err_cnt == 0) $display("==== PASS, %0d blocks, 并行实现 ====", MAX_BLOCKS);
        else              $display("==== FAIL, %0d mismatches, 并行实现 ====", err_cnt);

        $fclose(fout);
        #(CLK_PERIOD*10); 
        $finish;
    end

    // ---------- Performance measurement --------------------------------------
    time start_time, end_time, total_processing_time;
    integer cycle_count;
    
    // Start counting when first block is processed
    initial begin
        cycle_count = 0;
        start_time = 0;
        
        wait(in_valid && in_ready); // Wait for first handshake
        start_time = $time;
        
        // Count cycles continuously
        forever begin
            @(posedge clk);
            cycle_count = cycle_count + 1;
        end
    end
    
    // Finish counting after last block is processed
    initial begin
        wait(testing_block == MAX_BLOCKS-1 && out_valid); // Wait for last block
        end_time = $time;
        total_processing_time = end_time - start_time;
        
        // Display performance metrics
        #(CLK_PERIOD*20); // Wait for a while to make sure all checks are done
        $display("\n==== 性能报告 (并行实现) ====");
        $display("总处理时间: %0d ns", total_processing_time);
        $display("处理的块数: %0d", MAX_BLOCKS);
        $display("时钟周期数: %0d", cycle_count);
        $display("每块平均周期: %0.2f", cycle_count*1.0/MAX_BLOCKS);
        $display("=============================\n");
    end

endmodule 