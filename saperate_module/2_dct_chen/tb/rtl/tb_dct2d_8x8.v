// -----------------------------------------------------------------------------
// Testbench : 2‑D 8×8 DCT core (streaming) – compare against golden vectors
// -----------------------------------------------------------------------------
//   * Reads   chen_2d_dct_input.mem   (row‑major 64 words / block)
//   * Reads   chen_2d_dct_golden.mem  (row‑major 64 words / block)
//   * Stimulates DUT with one word / clk using valid handshake
//   * Collects output stream and checks absolute error ≤ 0.5 LSB (Q16.16)
//   * No sophisticated FSM – counters + tasks only
// -----------------------------------------------------------------------------
`timescale 1ns / 1ns

module tb_dct2d_8x8;
    // ---------- Parameters ---------------------------------------------------
    parameter DATA_WIDTH  = 32;      // Q16.16 words
    parameter WORDS_PER_BLK = 64;    // 8×8
    parameter MAX_BLOCKS = 100;      // must match generator
    parameter ERR_THRESH = 32'h0000_8000; // ±0.5 LSB

    // ---------- DUT signals --------------------------------------------------
    reg  clk = 0; always #5 clk = ~clk;   // 100 MHz
    reg  rst = 1;

    reg  start;
    reg  [DATA_WIDTH*WORDS_PER_BLK-1:0] x_packed;
    wire valid_out;
    wire [DATA_WIDTH*WORDS_PER_BLK-1:0] y_packed;

    dct2d_8x8_chen #(
        .DATA_W (DATA_WIDTH),
        .COEF_W (32),
        .OUT_W  (DATA_WIDTH)
    ) dut (
        .clk(clk), .rst(rst), .start(start), .x(x_packed),
        .valid_out(valid_out), .y(y_packed)
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
        $display("==== TB (vector mode) 2‑D 8×8 DCT ====");

        $readmemh("chen_2d_dct_input.mem",  input_mem);
        $readmemh("expected_chen_2d_dct_output.mem", golden_mem);

        repeat(3) @(posedge clk);
        rst <= 0; start <= 0; x_packed <= '0;

        for (blk = 0; blk < MAX_BLOCKS; blk = blk + 1) begin
            // drive packed input ------------------------------------------------
            @(posedge clk);
            x_packed <= pack_block(blk*WORDS_PER_BLK);
            start    <= 1'b1;
            @(posedge clk);
            start    <= 1'b0;
            // x_packed <= '0;

            // wait for valid_out -----------------------------------------------
            repeat(6) @(posedge clk); // known 6‑clk latency
            wait(valid_out);
            unpack_and_check(blk*WORDS_PER_BLK, y_packed);
        end

        if (err_cnt == 0) $display("==== PASS, %0d blocks ====", MAX_BLOCKS);
        else              $display("==== FAIL, %0d mismatches ====", err_cnt);

        $fclose(fout);
        #20; $finish;
    end
endmodule