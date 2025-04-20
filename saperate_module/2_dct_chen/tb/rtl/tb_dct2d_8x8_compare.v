// -----------------------------------------------------------------------------
// Testbench : 2‑D 8×8 DCT core – compare hardware against multiple references
// -----------------------------------------------------------------------------
//   * Reads   chen_2d_dct_input.mem            (row‑major 64 words / block)
//   * Reads   expected_chen_2d_dct_output.mem        (float-based Chen DCT)
//   * Reads   expected_chen_2d_dct_output_fixed.mem  (fixed-point Chen DCT)
//   * Feeds DUT with packed input and checks output against both references
//   * Reports comparison statistics separately for float vs. HW and fixed vs. HW
// -----------------------------------------------------------------------------
`timescale 1ns / 1ns

module tb_dct2d_8x8_compare;
    // ---------- Parameters ---------------------------------------------------
    parameter DATA_WIDTH  = 32;      // Q16.16 words
    parameter FRAC_BITS   = 16;      // Fraction bits
    parameter CONST_WIDTH = 32;      // Width for constants
    parameter WORDS_PER_BLK = 64;    // 8×8
    parameter MAX_BLOCKS = 100;      // must match generator
    parameter ERR_THRESH = 32'h0000_8000; // ±0.5 LSB

    // ---------- DUT signals --------------------------------------------------
    reg  [DATA_WIDTH*WORDS_PER_BLK-1:0] din_flat;
    wire [DATA_WIDTH*WORDS_PER_BLK-1:0] dout_flat;

    // Instantiate the combinational dct8x8_2d module
    dct8x8_2d #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (FRAC_BITS),
        .CONST_W (CONST_WIDTH)
    ) dut (
        .din_flat(din_flat),
        .dout_flat(dout_flat)
    );

    // ---------- Memories -----------------------------------------------------
    reg [DATA_WIDTH-1:0] input_mem         [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    reg [DATA_WIDTH-1:0] golden_mem_float  [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    reg [DATA_WIDTH-1:0] golden_mem_fixed  [0:MAX_BLOCKS*WORDS_PER_BLK-1];

    // ---------- Statistics ---------------------------------------------------
    integer blk, idx, diff, fout;
    
    // Stats for hardware vs. float reference
    integer err_cnt_float = 0;
    integer err_cnt_float_blocks = 0;
    integer max_diff_float = 0;
    
    // Stats for hardware vs. fixed reference
    integer err_cnt_fixed = 0;
    integer err_cnt_fixed_blocks = 0;
    integer max_diff_fixed = 0;

    // ---------- Helper : pack 64 words into flat vector ----------------------
    function [DATA_WIDTH*WORDS_PER_BLK-1:0] pack_block(input integer base_idx);
        integer i;
        begin
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                pack_block[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[base_idx + i];
            end
        end
    endfunction

    // ---------- Helper : unpack & compare against float reference ------------
    task check_against_float(input integer base_idx, input [DATA_WIDTH*WORDS_PER_BLK-1:0] yvec);
        integer i; integer d;
        reg block_has_error;
        begin
            block_has_error = 0;
            
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                d = $signed(yvec[i*DATA_WIDTH +: DATA_WIDTH]) - $signed(golden_mem_float[base_idx + i]);
                if (d < 0) d = -d;
                
                // Track maximum difference
                if (d > max_diff_float) max_diff_float = d;
                
                if (d > ERR_THRESH) begin
                    $display("Float mismatch blk %0d idx %0d: hw=%h float=%h diff=%0d", 
                             blk, i, yvec[i*DATA_WIDTH +: DATA_WIDTH], 
                             golden_mem_float[base_idx + i], d >> 16);
                    err_cnt_float = err_cnt_float + 1;
                    block_has_error = 1;
                end
                
                // dump actual output to file
                $fdisplay(fout, "%08X", yvec[i*DATA_WIDTH +: DATA_WIDTH]);
            end
            
            if (block_has_error) err_cnt_float_blocks = err_cnt_float_blocks + 1;
        end
    endtask

    // ---------- Helper : unpack & compare against fixed reference ------------
    task check_against_fixed(input integer base_idx, input [DATA_WIDTH*WORDS_PER_BLK-1:0] yvec);
        integer i; integer d;
        reg block_has_error;
        begin
            block_has_error = 0;
            
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                d = $signed(yvec[i*DATA_WIDTH +: DATA_WIDTH]) - $signed(golden_mem_fixed[base_idx + i]);
                if (d < 0) d = -d;
                
                // Track maximum difference
                if (d > max_diff_fixed) max_diff_fixed = d;
                
                if (d > ERR_THRESH) begin
                    $display("Fixed mismatch blk %0d idx %0d: hw=%h fixed=%h diff=%0d", 
                             blk, i, yvec[i*DATA_WIDTH +: DATA_WIDTH], 
                             golden_mem_fixed[base_idx + i], d >> 16);
                    err_cnt_fixed = err_cnt_fixed + 1;
                    block_has_error = 1;
                end
            end
            
            if (block_has_error) err_cnt_fixed_blocks = err_cnt_fixed_blocks + 1;
        end
    endtask

    // ---------- Stimulus -----------------------------------------------------
    initial begin
        fout = $fopen("actual_hw_dct_output.mem", "w");
        $display("==== TB (vector mode) 2‑D 8×8 DCT Combinational (Multi-Reference) ====");

        // Read input data and both reference outputs
        $readmemh("chen_2d_dct_input.mem", input_mem);
        $readmemh("expected_chen_2d_dct_output.mem", golden_mem_float);
        $readmemh("expected_chen_2d_dct_output_fixed.mem", golden_mem_fixed);

        // Test each block one by one
        for (blk = 0; blk < MAX_BLOCKS; blk = blk + 1) begin
            // Pack input block
            din_flat = pack_block(blk*WORDS_PER_BLK);
            
            // Add a small delay to allow combinational logic to settle
            #1;
            
            // Check output against float reference
            check_against_float(blk*WORDS_PER_BLK, dout_flat);
            
            // Check output against fixed reference
            check_against_fixed(blk*WORDS_PER_BLK, dout_flat);
            
            // Small delay between blocks for readability in waveform
            #5;
        end

        // Report overall statistics
        $display("\n==== Hardware vs. Floating-Point Reference ====");
        $display("Mismatched blocks: %0d / %0d", err_cnt_float_blocks, MAX_BLOCKS);
        $display("Mismatched values: %0d / %0d", err_cnt_float, MAX_BLOCKS*WORDS_PER_BLK);
        $display("Maximum difference: 0x%h (%.6f)", max_diff_fixed, $itor(max_diff_float) / $itor(1 << FRAC_BITS));
        
        $display("\n==== Hardware vs. Fixed-Point Reference ====");
        $display("Mismatched blocks: %0d / %0d", err_cnt_fixed_blocks, MAX_BLOCKS);
        $display("Mismatched values: %0d / %0d", err_cnt_fixed, MAX_BLOCKS*WORDS_PER_BLK);
        $display("Maximum difference: 0x%h (%.6f)", max_diff_fixed, $itor(max_diff_fixed) / $itor(1 << FRAC_BITS));
        
        if (err_cnt_float == 0 && err_cnt_fixed == 0) 
            $display("\n==== PASS - Both references match! ====");
        else if (err_cnt_fixed == 0)
            $display("\n==== PARTIAL PASS - Fixed-point reference matches hardware ====");
        else
            $display("\n==== FAIL - Hardware doesn't match either reference ====");

        $fclose(fout);
        #20; $finish;
    end
endmodule 