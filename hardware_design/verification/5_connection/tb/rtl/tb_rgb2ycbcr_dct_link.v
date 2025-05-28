// -----------------------------------------------------------------------------
// Testbench : RGB to YCbCr to DCT Link Module - compare against golden vectors
// -----------------------------------------------------------------------------
//   * Reads input_R.mem, input_G.mem, input_B.mem for RGB input data
//   * Reads expected_y_dct_output.mem, expected_cb_dct_output.mem, expected_cr_dct_output.mem
//   * Feeds DUT with RGB data using valid/ready handshaking
//   * Collects DCT outputs and compares against expected results
//   * Checks absolute error ≤ 0.5 LSB (Q16.16)
// -----------------------------------------------------------------------------
`timescale 1ns / 1ps

module tb_rgb2ycbcr_dct_link;
    // ---------- Parameters ---------------------------------------------------
    parameter RGB_WIDTH = 8;           // 8-bit per RGB channel
    parameter DATA_WIDTH = 32;         // Q16.16 words for YCbCr/DCT
    parameter FRAC_BITS = 8;           // Fraction bits
    parameter BLOCK_SIZE = 64;         // 8×8 = 64 words per block
    parameter MAX_BLOCKS = 100;        // Maximum number of blocks to process
    parameter ERR_THRESH = 32'h0000_8000; // ±0.5 LSB for comparison
    parameter CLK_PERIOD = 10;         // 10ns = 100MHz

    // ---------- Testbench signals --------------------------------------------
    reg                      clk;
    reg                      rst_n;

    // Input interface (RGB data)
    reg                      in_valid;
    wire                     in_ready;
    reg  [BLOCK_SIZE*RGB_WIDTH-1:0] in_r;
    reg  [BLOCK_SIZE*RGB_WIDTH-1:0] in_g;
    reg  [BLOCK_SIZE*RGB_WIDTH-1:0] in_b;

    // Output interface (DCT coefficients)
    wire                     out_valid;
    reg                      out_ready;
    wire [BLOCK_SIZE*DATA_WIDTH-1:0] out_y_dct;
    wire [BLOCK_SIZE*DATA_WIDTH-1:0] out_cb_dct;
    wire [BLOCK_SIZE*DATA_WIDTH-1:0] out_cr_dct;

    // ---------- DUT instance -------------------------------------------------
    rgb2ycbcr_dct_link #(
        .DATA_WIDTH(DATA_WIDTH),
        .FRAC_BITS(FRAC_BITS),
        .RGB_WIDTH(RGB_WIDTH),
        .BLOCK_SIZE(BLOCK_SIZE)
    ) dut (
        .clk       (clk),
        .rst_n     (rst_n),
        .in_valid  (in_valid),
        .in_ready  (in_ready),
        .in_r      (in_r),
        .in_g      (in_g),
        .in_b      (in_b),
        .out_valid (out_valid),
        .out_ready (out_ready),
        .out_y_dct (out_y_dct),
        .out_cb_dct(out_cb_dct),
        .out_cr_dct(out_cr_dct)
    );

    // ---------- Memories -----------------------------------------------------
    // Input memories
    reg [RGB_WIDTH-1:0] r_mem [0:MAX_BLOCKS*BLOCK_SIZE-1];
    reg [RGB_WIDTH-1:0] g_mem [0:MAX_BLOCKS*BLOCK_SIZE-1];
    reg [RGB_WIDTH-1:0] b_mem [0:MAX_BLOCKS*BLOCK_SIZE-1];
    
    // Expected output memories (golden references)
    reg [DATA_WIDTH-1:0] y_golden_mem [0:MAX_BLOCKS*BLOCK_SIZE-1];
    reg [DATA_WIDTH-1:0] cb_golden_mem [0:MAX_BLOCKS*BLOCK_SIZE-1];
    reg [DATA_WIDTH-1:0] cr_golden_mem [0:MAX_BLOCKS*BLOCK_SIZE-1];
    
    // Actual output memories (for comparison)
    reg [DATA_WIDTH-1:0] y_output_mem [0:BLOCK_SIZE-1];
    reg [DATA_WIDTH-1:0] cb_output_mem [0:BLOCK_SIZE-1];
    reg [DATA_WIDTH-1:0] cr_output_mem [0:BLOCK_SIZE-1];

    integer blk, i, diff;
    integer fout_y, fout_cb, fout_cr;
    integer y_err_cnt = 0, cb_err_cnt = 0, cr_err_cnt = 0;
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
            base_idx = block_num * BLOCK_SIZE;
            
            // Populate the RGB input arrays
            for (i = 0; i < BLOCK_SIZE; i = i + 1) begin
                in_r[i*RGB_WIDTH +: RGB_WIDTH] = r_mem[base_idx + i];
                in_g[i*RGB_WIDTH +: RGB_WIDTH] = g_mem[base_idx + i];
                in_b[i*RGB_WIDTH +: RGB_WIDTH] = b_mem[base_idx + i];
            end
        end
    endtask

    // ---------- Helper : save output values ---------------------------------
    task save_output_block;
        integer i;
        begin
            // Save all 64 output values for each component
            for (i = 0; i < BLOCK_SIZE; i = i + 1) begin
                y_output_mem[i] = out_y_dct[i*DATA_WIDTH +: DATA_WIDTH];
                cb_output_mem[i] = out_cb_dct[i*DATA_WIDTH +: DATA_WIDTH];
                cr_output_mem[i] = out_cr_dct[i*DATA_WIDTH +: DATA_WIDTH];
                
                $fdisplay(fout_y, "%08X", y_output_mem[i]);
                $fdisplay(fout_cb, "%08X", cb_output_mem[i]);
                $fdisplay(fout_cr, "%08X", cr_output_mem[i]);
            end
        end
    endtask

    // ---------- Helper : check output block against golden reference ---------
    task check_output_block(input integer block_num);
        integer i, d;
        reg [DATA_WIDTH-1:0] exp_value, got_value;
        begin
            // Check Y component
            for (i = 0; i < BLOCK_SIZE; i = i + 1) begin
                got_value = y_output_mem[i];
                exp_value = y_golden_mem[block_num*BLOCK_SIZE + i];
                
                d = $signed(got_value) - $signed(exp_value);
                if (d < 0) d = -d;
                
                if (d > ERR_THRESH) begin
                    $display("Y Mismatch blk %0d idx %0d: got %h exp %h diff %0d", 
                              block_num, i, got_value, exp_value, d >> 16);
                    y_err_cnt = y_err_cnt + 1;
                end
            end
            
            // Check Cb component
            for (i = 0; i < BLOCK_SIZE; i = i + 1) begin
                got_value = cb_output_mem[i];
                exp_value = cb_golden_mem[block_num*BLOCK_SIZE + i];
                
                d = $signed(got_value) - $signed(exp_value);
                if (d < 0) d = -d;
                
                if (d > ERR_THRESH) begin
                    $display("Cb Mismatch blk %0d idx %0d: got %h exp %h diff %0d", 
                              block_num, i, got_value, exp_value, d >> 16);
                    cb_err_cnt = cb_err_cnt + 1;
                end
            end
            
            // Check Cr component
            for (i = 0; i < BLOCK_SIZE; i = i + 1) begin
                got_value = cr_output_mem[i];
                exp_value = cr_golden_mem[block_num*BLOCK_SIZE + i];
                
                d = $signed(got_value) - $signed(exp_value);
                if (d < 0) d = -d;
                
                if (d > ERR_THRESH) begin
                    $display("Cr Mismatch blk %0d idx %0d: got %h exp %h diff %0d", 
                              block_num, i, got_value, exp_value, d >> 16);
                    cr_err_cnt = cr_err_cnt + 1;
                end
            end
        end
    endtask

    // ---------- Stimulus -----------------------------------------------------
    initial begin
        // Open output files
        fout_y = $fopen("actual_y_dct_output.mem", "w");
        fout_cb = $fopen("actual_cb_dct_output.mem", "w");
        fout_cr = $fopen("actual_cr_dct_output.mem", "w");
        
        $display("==== TB RGB to YCbCr to DCT Link ====");

        // Load input data from memory files
        $readmemh("input_R.mem", r_mem);
        $readmemh("input_G.mem", g_mem);
        $readmemh("input_B.mem", b_mem);
        
        // Load expected output data (golden references)
        $readmemh("expected_y_dct_output.mem", y_golden_mem);
        $readmemh("expected_cb_dct_output.mem", cb_golden_mem);
        $readmemh("expected_cr_dct_output.mem", cr_golden_mem);
        
        // Initialize signals
        rst_n = 0;
        in_valid = 0;
        out_ready = 1;  // Always ready to accept output initially
        
        // Reset sequence
        #(CLK_PERIOD*3);
        rst_n = 1;
        #(CLK_PERIOD*2);
        
        // Process each block one by one
        for (blk = 0; blk < MAX_BLOCKS; blk = blk + 1) begin
            testing_block = blk;
            
            // Prepare RGB input block
            set_input_block(blk);
            
            // Check if all values in this block are zero
            // This is a simple check to see if we've reached the end of input data
            if (blk > 0) begin
                integer zero_count;
                zero_count = 0;
                for (i = 0; i < BLOCK_SIZE; i = i + 1) begin
                    if (r_mem[blk*BLOCK_SIZE + i] == 0 &&
                        g_mem[blk*BLOCK_SIZE + i] == 0 &&
                        b_mem[blk*BLOCK_SIZE + i] == 0) begin
                        zero_count = zero_count + 1;
                    end
                end
                if (zero_count == BLOCK_SIZE) begin
                    $display("Detected end of input data at block %0d", blk);
                    break;
                end
            end
            
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
            
            // Save output values
            save_output_block();
            
            // Acknowledge output
            out_ready = 1;
            @(posedge clk);
            out_ready = 0;
            
            // Check output against expected values
            check_output_block(blk);
            
            // Small delay between blocks for readability in waveform
            #(CLK_PERIOD*2);
        end

        // Final results
        $display("==== Test Results Summary ====");
        if (y_err_cnt == 0) 
            $display("Y component: PASS");
        else              
            $display("Y component: FAIL, %0d mismatches", y_err_cnt);
            
        if (cb_err_cnt == 0) 
            $display("Cb component: PASS");
        else              
            $display("Cb component: FAIL, %0d mismatches", cb_err_cnt);
            
        if (cr_err_cnt == 0) 
            $display("Cr component: PASS");
        else              
            $display("Cr component: FAIL, %0d mismatches", cr_err_cnt);
            
        if (y_err_cnt == 0 && cb_err_cnt == 0 && cr_err_cnt == 0)
            $display("==== ALL TESTS PASSED, %0d blocks ====", testing_block);
        else
            $display("==== TEST FAILED ====");

        $fclose(fout_y);
        $fclose(fout_cb);
        $fclose(fout_cr);
        #(CLK_PERIOD*10); 
        $finish;
    end

    // ---------- Monitor ------------------------------------------------------
    initial begin
        $monitor("Time=%0t, Block=%0d, State: in_valid=%0b, in_ready=%0b, out_valid=%0b, out_ready=%0b",
                 $time, testing_block, in_valid, in_ready, out_valid, out_ready);
    end

endmodule
