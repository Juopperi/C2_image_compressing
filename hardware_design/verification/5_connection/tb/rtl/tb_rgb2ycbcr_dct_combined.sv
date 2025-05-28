// -----------------------------------------------------------------------------
// Testbench : RGB to YCbCr + 2D DCT Combined Module
// -----------------------------------------------------------------------------
//   * Reads RGB input data from memory files in directory
//   * Feeds DUT with 64 RGB pixels at once using valid/ready handshaking
//   * Collects DCT outputs for Y, Cb, Cr components and compares against golden vectors
// -----------------------------------------------------------------------------
`timescale 1ns / 1ps

module tb_rgb2ycbcr_dct_combined;
    // ---------- Parameters ---------------------------------------------------
    parameter DATA_WIDTH = 32;         // Q16.16 words
    // parameter FRAC_BITS  = 8;          // Fraction bits
    parameter FRAC_BITS  = 15;          // Fraction bits
    parameter INPUT_WIDTH = 8;         // RGB input width
    parameter WORDS_PER_ROW = 8;       // 8 pixels per row
    parameter ROWS_PER_BLK = 8;        // 8 rows per block
    parameter WORDS_PER_BLK = 64;      // 8×8 = 64 words per block
    parameter MAX_BLOCKS = 100;        // Number of test blocks (adjusted to match input files)
    parameter ERR_THRESH = 32'h0000_8000; // ±0.5 LSB
    parameter CLK_PERIOD = 10;         // 10ns = 100MHz
    parameter OUTPUT_DELAY_CYCLES = 500; // 可调节：采样输出前等待的时钟周期数

    // ---------- Testbench signals --------------------------------------------
    reg                      clk;
    reg                      rst_n;

    // Block-level input interface (RGB, 64 pixels)
    reg                      in_valid;
    wire                     in_ready;
    reg       [8*64-1:0]     r_all;
    reg       [8*64-1:0]     g_all;
    reg       [8*64-1:0]     b_all;

    // Block-level output interface (DCT components)
    wire                     out_valid;
    reg                      out_ready;
    wire [64*DATA_WIDTH-1:0] dct_y_out;
    wire [64*DATA_WIDTH-1:0] dct_cb_out;
    wire [64*DATA_WIDTH-1:0] dct_cr_out;

    // ---------- DUT instance -------------------------------------------------
    rgb2ycbcr_dct_combined #(
        .FIXED_POINT_LENGTH(DATA_WIDTH),
        .FRAC_BITS(FRAC_BITS),
        .INPUT_WIDTH(INPUT_WIDTH)
    ) dut (
        .clk       (clk),
        .rst_n     (rst_n),
        .in_valid  (in_valid),
        .in_ready  (in_ready),
        .r_all     (r_all),
        .g_all     (g_all),
        .b_all     (b_all),
        .out_valid (out_valid),
        .out_ready (out_ready),
        .dct_y_out (dct_y_out),
        .dct_cb_out(dct_cb_out),
        .dct_cr_out(dct_cr_out)
    );

    // ---------- Memories -----------------------------------------------------
    reg [INPUT_WIDTH-1:0] r_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    reg [INPUT_WIDTH-1:0] g_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    reg [INPUT_WIDTH-1:0] b_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    
    // Golden reference values
    reg [DATA_WIDTH-1:0] golden_y_dct_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    reg [DATA_WIDTH-1:0] golden_cb_dct_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    reg [DATA_WIDTH-1:0] golden_cr_dct_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    
    // Output collection memories
    reg [DATA_WIDTH-1:0] output_y_mem [0:WORDS_PER_BLK-1];
    reg [DATA_WIDTH-1:0] output_cb_mem [0:WORDS_PER_BLK-1];
    reg [DATA_WIDTH-1:0] output_cr_mem [0:WORDS_PER_BLK-1];

    integer blk, i, diff;
    integer testing_block = 0;
    
    // File handles
    integer fout_y, fout_cb, fout_cr;
    integer diff_out_y, diff_out_cb, diff_out_cr;
    
    // Error counters
    integer err_cnt_y = 0, err_cnt_cb = 0, err_cnt_cr = 0;
    integer total_err_cnt = 0;

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
            
            // Populate the RGB inputs with all 64 values
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                r_all[i*INPUT_WIDTH +: INPUT_WIDTH] = r_mem[base_idx + i];
                g_all[i*INPUT_WIDTH +: INPUT_WIDTH] = g_mem[base_idx + i];
                b_all[i*INPUT_WIDTH +: INPUT_WIDTH] = b_mem[base_idx + i];
            end
        end
    endtask

    // ---------- Helper : save output values ---------------------------------
    task save_output_block;
        integer i;
        begin
            // Save all 64 DCT outputs to output memories and output files
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                // Y component
                output_y_mem[i] = dct_y_out[i*DATA_WIDTH +: DATA_WIDTH];
                $fdisplay(fout_y, "%08X", output_y_mem[i]);
                
                // Cb component
                output_cb_mem[i] = dct_cb_out[i*DATA_WIDTH +: DATA_WIDTH];
                $fdisplay(fout_cb, "%08X", output_cb_mem[i]);
                
                // Cr component
                output_cr_mem[i] = dct_cr_out[i*DATA_WIDTH +: DATA_WIDTH];
                $fdisplay(fout_cr, "%08X", output_cr_mem[i]);
            end
        end
    endtask

    // ---------- Helper : check component output against golden reference ---------
    task check_component_block(
        input integer block_num,
        input string component_name,
        input integer diff_out_file,
        input reg [DATA_WIDTH-1:0] output_mem[0:WORDS_PER_BLK-1],
        input reg [DATA_WIDTH-1:0] golden_mem[0:MAX_BLOCKS*WORDS_PER_BLK-1],
        output integer err_cnt
    );
        integer i, d;
        reg [DATA_WIDTH-1:0] exp_value;
        reg [DATA_WIDTH-1:0] got_value;
        reg signed [31:0] signed_diff;
        real rel_error_pct;
        begin
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                got_value = output_mem[i];
                exp_value = golden_mem[block_num*WORDS_PER_BLK + i];
                
                // Calculate signed difference
                signed_diff = $signed(got_value) - $signed(exp_value);
                d = (signed_diff < 0) ? -signed_diff : signed_diff;
                
                // Calculate relative error percentage with check for division by zero
                if ($signed(exp_value) == 0) begin
                    // If expected value is zero, use absolute error instead of relative
                    rel_error_pct = (signed_diff == 0) ? 0.0 : 100.0;
                end else begin
                    // Avoid potential NaN by using proper typecasting
                    real exp_value_real;
                    exp_value_real = $signed(exp_value);
                    // rel_error_pct = (signed_diff * 100.0) / exp_value_real;
                end
                
                // Log all values to diff file with relative error
                // $fdisplay(diff_out_file, "Block %0d Idx %0d: Got=%h Exp=%h Diff=%0d (%.6f%%)", 
                //           block_num, i, got_value, exp_value, signed_diff, rel_error_pct);
                
                if (d > ERR_THRESH) begin
                    $display("Mismatch %s blk %0d idx %0d: got %h exp %h diff %0d", 
                              component_name, block_num, i, got_value, exp_value, d >> 16);
                    err_cnt = err_cnt + 1;
                end
            end
        end
    endtask

    // ---------- Helper : check all components ---------
    task check_all_components(input integer block_num);
        begin
            // Check Y component
            check_component_block(block_num, "Y", diff_out_y, output_y_mem, golden_y_dct_mem, err_cnt_y);
            
            // Check Cb component
            check_component_block(block_num, "Cb", diff_out_cb, output_cb_mem, golden_cb_dct_mem, err_cnt_cb);
            
            // Check Cr component
            check_component_block(block_num, "Cr", diff_out_cr, output_cr_mem, golden_cr_dct_mem, err_cnt_cr);
            
            // Update total error count
            total_err_cnt = err_cnt_y + err_cnt_cb + err_cnt_cr;
        end
    endtask

    // ---------- Stimulus -----------------------------------------------------
    initial begin
        // Open output files
        fout_y = $fopen("actual_Y.mem", "w");
        fout_cb = $fopen("actual_Cb.mem", "w");
        fout_cr = $fopen("actual_Cr.mem", "w");
        
        // Open diff files
        diff_out_y = $fopen("Y_diff.txt", "w");
        diff_out_cb = $fopen("Cb_diff.txt", "w");
        diff_out_cr = $fopen("Cr_diff.txt", "w");
        
        $display("==== TB RGB2YCbCr + 2D DCT Combined Module ====");

        // Load input test vectors
        $readmemh("input_R.mem", r_mem);
        $readmemh("input_G.mem", g_mem);
        $readmemh("input_B.mem", b_mem);
        
        // Load golden DCT output vectors
        $readmemh("expected_Y.mem", golden_y_dct_mem);
        $readmemh("expected_Cb.mem", golden_cb_dct_mem);
        $readmemh("expected_Cr.mem", golden_cr_dct_mem);
        $display("Loaded golden DCT values from expected_Y/Cb/Cr.mem");

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
            
            // Prepare entire input block (all 64 RGB values)
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
            
            // 固定延迟替代 while (!out_valid)
            repeat (OUTPUT_DELAY_CYCLES) @(posedge clk);
            if (out_valid) begin
                save_output_block();
            end else begin
                $display("❌ Warning: out_valid = 0 after %0d cycles at blk %0d", OUTPUT_DELAY_CYCLES, blk);
                save_output_block();
            end
            
            // Acknowledge output
            out_ready = 1;
            @(posedge clk);
            out_ready = 0;
            
            // Compare with golden model
            $display("Checking block %0d against golden model...", blk);
            check_all_components(blk);
            
            // Small delay between blocks for readability in waveform
            #(CLK_PERIOD*2);
        end

        // Final results
        $display("==== Completed processing %0d blocks ====", MAX_BLOCKS);
        $display("Y component: %0d mismatches", err_cnt_y);
        $display("Cb component: %0d mismatches", err_cnt_cb);
        $display("Cr component: %0d mismatches", err_cnt_cr);
        $display("Total mismatches: %0d", total_err_cnt);
        
        if (total_err_cnt > 0) begin
            $display("TEST FAILED: %0d total mismatches detected", total_err_cnt);
        end else begin
            $display("TEST PASSED: All values match within tolerance");
        end

        // Close all output files
        $fclose(fout_y);
        $fclose(fout_cb);
        $fclose(fout_cr);
        $fclose(diff_out_y);
        $fclose(diff_out_cb);
        $fclose(diff_out_cr);
        
        $display("Saved outputs to 'actual_Y/Cb/Cr.mem', differences to 'Y/Cb/Cr_diff.txt'");
        
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
        $display("\n==== Performance Report ====");
        $display("Total processing time: %0d ns", total_processing_time);
        $display("Blocks processed: %0d", MAX_BLOCKS);
        $display("Clock cycles: %0d", cycle_count);
        $display("Average cycles per block: %0.2f", cycle_count*1.0/MAX_BLOCKS);
        $display("=============================\n");
    end

endmodule 