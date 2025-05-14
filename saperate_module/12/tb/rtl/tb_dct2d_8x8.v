// -----------------------------------------------------------------------------
// Testbench : 2‑D 8×8 DCT core (combinational) – compare against golden vectors
// -----------------------------------------------------------------------------
//   * Reads   chen_2d_dct_input.mem   (row‑major 64 words / block)
//   * Reads   expected_chen_2d_dct_output.mem  (row‑major 64 words / block)
//   * Feeds DUT with packed input and checks output immediately
//   * Collects output and checks absolute error ≤ 0.5 LSB (Q16.16)
//   * Pure combinational module: no need for handshaking or clock-based sampling
// -----------------------------------------------------------------------------
`timescale 1ns / 1ns

module tb_dct2d_8x8;
    // ---------- Parameters ---------------------------------------------------
    parameter DATA_WIDTH  = 32;      // Q16.16 words
    parameter FRAC_BITS   = 14;      // Fraction bits
    parameter CONST_WIDTH = 16;      // Width for constants
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
    reg [DATA_WIDTH-1:0] input_mem  [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    reg [DATA_WIDTH-1:0] golden_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];

    integer blk, idx, diff, fout, err_cnt = 0;

    // ---------- Helper : pack 64 words into flat vector ----------------------
    function [DATA_WIDTH*WORDS_PER_BLK-1:0] pack_block(input integer base_idx);
        integer i;
        begin
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                pack_block[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[base_idx + i];
            end
        end
    endfunction

    // ---------- Helper : unpack & compare ------------------------------------
    task unpack_and_check(input integer base_idx, input [DATA_WIDTH*WORDS_PER_BLK-1:0] yvec);
        integer i; integer d;
        begin
            for (i = 0; i < WORDS_PER_BLK; i = i + 1) begin
                d = $signed(yvec[i*DATA_WIDTH +: DATA_WIDTH]) - $signed(golden_mem[base_idx + i]);
                if (d < 0) d = -d;
                if (d > ERR_THRESH) begin
                    $display("Mismatch blk %0d idx %0d: got %h exp %h diff %0d", blk, i,
                             yvec[i*DATA_WIDTH +: DATA_WIDTH], golden_mem[base_idx + i], d >> 16);
                    err_cnt = err_cnt + 1;
                end
                // dump actual output
                $fdisplay(fout, "%08X", yvec[i*DATA_WIDTH +: DATA_WIDTH]);
            end
        end
    endtask

    // ---------- Stimulus -----------------------------------------------------
    initial begin
        fout = $fopen("actual_chen_2d_dct_output.mem", "w");
        $display("==== TB (vector mode) 2‑D 8×8 DCT Combinational ====");

        $readmemh("chen_2d_dct_input.mem",  input_mem);
        $readmemh("expected_chen_2d_dct_output.mem", golden_mem);

        // Test each block one by one
        for (blk = 0; blk < MAX_BLOCKS; blk = blk + 1) begin
            // Pack input block
            din_flat = pack_block(blk*WORDS_PER_BLK);
            
            // Add a small delay to allow combinational logic to settle
            #1;
            
            // Check output immediately (no need to wait for valid signal)
            unpack_and_check(blk*WORDS_PER_BLK, dout_flat);
            
            // Small delay between blocks for readability in waveform
            #5;
        end

        if (err_cnt == 0) $display("==== PASS, %0d blocks ====", MAX_BLOCKS);
        else              $display("==== FAIL, %0d mismatches ====", err_cnt);

        $fclose(fout);
        #20; $finish;
    end
endmodule