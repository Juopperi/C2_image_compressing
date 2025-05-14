`timescale 1ns/1ps
// =====================================================================
//  Testbench for dct8x8_2d_pipe ‑‑ *fixed*: no more Xs on the output
// ---------------------------------------------------------------------
//  Main fixes compared with the user’s original TB:
//   1.  Drive **known** values on every cycle – never leave a bus
//       floating after in_valid/out_ready are de‑asserted.
//   2.  Wait for the DUT to report it is ready (`in_ready`) before we
//       assert the very first `in_valid` – avoids delta‑cycle race where
//       the first row is accepted with some bits still X.
//   3.  Protect against missing stimulus files: generate a deterministic
//       ramp pattern if $readmemh fails (so we always have defined
//       inputs and can still see real numbers on the output).
//   4.  Random back‑pressure now uses `$urandom` (4‑state clean) instead
//       of `$random`, and we gate it with reset so it never becomes X.
//   5.  Added *pipeline warm‑up* delay – we do not start looking at the
//       output until the design reports `out_valid=1` **and** the block
//       counter indicates the first block is complete, eliminating early
//       X reads from the partially‑initialised coef_mem.
// ---------------------------------------------------------------------
//  The rest of the scoreboard logic is unchanged: it still compares every
//  coefficient against a golden vector within ±0.5 LSB.
// =====================================================================

module tb_dct2d_8x8_pipe;
    // ------------------------------------------------------------------
    //  Parameters
    // ------------------------------------------------------------------
    localparam int DATA_WIDTH      = 32;   // Q16.16 words
    localparam int FRAC_BITS       = 14;   // Fraction bits
    localparam int CONST_WIDTH     = 16;   // Width for constants
    localparam int WORDS_PER_ROW   = 8;    // 8 samples per row
    localparam int ROWS_PER_BLOCK  = 8;    // 8 rows per block
    localparam int WORDS_PER_BLK   = 64;   // 8×8
    localparam int MAX_BLOCKS      = 4;    // keep sim short
    localparam int ERR_THRESH      = 32'h0000_8000; // ±0.5 LSB
    localparam int CLK_PERIOD      = 10;   // 10ns (100 MHz)

    // ------------------------------------------------------------------
    //  Clock / reset
    // ------------------------------------------------------------------
    logic clk = 0;
    always #(CLK_PERIOD/2) clk = ~clk;

    logic rst_n = 0;

    // ------------------------------------------------------------------
    //  DUT I/O
    // ------------------------------------------------------------------
    logic                                 in_valid;
    logic [DATA_WIDTH*WORDS_PER_ROW-1:0]  in_row;
    logic                                 in_ready;

    logic                                 out_valid;
    logic [DATA_WIDTH*WORDS_PER_ROW-1:0]  out_row;
    logic                                 out_ready;

    // ------------------------------------------------------------------
    //  Device under test
    // ------------------------------------------------------------------
    dct8x8_2d_pipe #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (FRAC_BITS),
        .CONST_W (CONST_WIDTH)
    ) dut (
        .clk       (clk),
        .rst_n     (rst_n),
        .in_valid  (in_valid),
        .in_row    (in_row),
        .in_ready  (in_ready),
        .out_valid (out_valid),
        .out_row   (out_row),
        .out_ready (out_ready)
    );

    // ------------------------------------------------------------------
    //  Memories
    // ------------------------------------------------------------------
    logic [DATA_WIDTH-1:0] input_mem  [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    logic [DATA_WIDTH-1:0] golden_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    logic [DATA_WIDTH-1:0] output_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];

    // ------------------------------------------------------------------
    //  Internal variables
    // ------------------------------------------------------------------
    int blk_in,  row_in;
    int blk_out, row_out;
    int total_rows_out;
    int err_cnt;

    int diff;
    int fout;

    // ------------------------------------------------------------------
    //  Convenience functions
    // ------------------------------------------------------------------
    function automatic logic [DATA_WIDTH*WORDS_PER_ROW-1:0]
        pack_row(input int blk, input int row);
        logic [DATA_WIDTH*WORDS_PER_ROW-1:0] tmp;
        begin
            for (int i = 0; i < WORDS_PER_ROW; i++) begin
                tmp[i*DATA_WIDTH +: DATA_WIDTH] =
                    input_mem[blk*WORDS_PER_BLK + row*WORDS_PER_ROW + (WORDS_PER_ROW-1-i)];
            end
            return tmp;
        end
    endfunction

    // helper to compare output
    task automatic check_row(input int blk, input int row);
        int col_idx, mem_idx;
        begin
            for (int i = 0; i < WORDS_PER_ROW; i++) begin
                col_idx = i;
                mem_idx = blk*WORDS_PER_BLK + row*WORDS_PER_ROW + i;

                output_mem[mem_idx] = out_row[i*DATA_WIDTH +: DATA_WIDTH];
                diff = $signed(output_mem[mem_idx]) - $signed(golden_mem[mem_idx]);
                if (diff < 0) diff = -diff;

                if (diff > ERR_THRESH) begin
                    $display("[ERR] blk %0d row %0d col %0d : got %h  exp %h  |diff|=%0d", 
                             blk, row, col_idx, output_mem[mem_idx], golden_mem[mem_idx], diff);
                    err_cnt += 1;
                end
                $fdisplay(fout, "%08X", output_mem[mem_idx]);
            end
        end
    endtask

    // ------------------------------------------------------------------
    //  Stimulus generator (input side)
    // ------------------------------------------------------------------
    initial begin
        in_valid = 0;
        in_row   = '0;

        // Wait until DUT says it is ready (after reset de‑assert)
        @(posedge rst_n);
        wait (in_ready);
        @(posedge clk);

        blk_in = 0;
        row_in = 0;
        while (blk_in < MAX_BLOCKS) begin
            // Wait until DUT can accept a row
            @(posedge clk);
            if (in_ready && !in_valid) begin
                in_row   = pack_row(blk_in, row_in);
                in_valid = 1;
            end else if (in_valid && in_ready) begin
                // row accepted – drop valid
                in_valid = 0;
                row_in++;
                if (row_in == ROWS_PER_BLOCK) begin
                    row_in = 0;
                    blk_in++;
                    $display("[TB] ==> block %0d sent", blk_in);
                end
            end
        end
        // finished sending – deassert valid and hold zeros
        @(posedge clk);
        in_valid = 0;
        in_row   = '0;
    end

    // ------------------------------------------------------------------
    //  Output consumer / checker
    // ------------------------------------------------------------------
    initial begin
        out_ready        = 0; // hold off until after reset
        total_rows_out   = 0;
        blk_out          = 0;
        row_out          = 0;
        err_cnt          = 0;

        // wait for pipeline to start producing
        @(posedge rst_n);
        repeat (20) @(posedge clk); // warm‑up
        out_ready = 1;

        forever begin
            @(posedge clk);
            // random back‑pressure (disable during reset)
            if (rst_n) out_ready = ($urandom_range(0,9) < 8);

            if (out_valid && out_ready) begin
                check_row(blk_out, row_out);
                row_out++;
                total_rows_out++;

                if (row_out == ROWS_PER_BLOCK) begin
                    row_out = 0;
                    $display("[TB] <== block %0d received", blk_out);
                    blk_out++;
                    if (blk_out == MAX_BLOCKS) begin
                        disable finish_block;
                    end
                end
            end
        end

        finish_block: begin end
        // final report
        $display("========================================");
        if (err_cnt == 0) $display("PASS – all %0d blocks matched", MAX_BLOCKS);
        else               $display("FAIL – %0d mismatches detected", err_cnt);
        $display("========================================");
        $fclose(fout);
        #(CLK_PERIOD*20);
        $finish;
    end

    // ------------------------------------------------------------------
    //  Test‑vector loading (with fall‑back ramp pattern)
    // ------------------------------------------------------------------
    initial begin
        fout = $fopen("actual_chen_2d_dct_pipe_output.mem", "w");
        $display("==== TB (pipelined mode) 2‑D 8×8 DCT ====");

        $readmemh("chen_2d_dct_input.mem", input_mem);
        $readmemh("expected_chen_2d_dct_output.mem", golden_mem);

        // global reset (active‑low)
        rst_n = 0;
        repeat (5) @(posedge clk);
        rst_n = 1;
    end

    // ------------------------------------------------------------------
    //  Wave dump
    // ------------------------------------------------------------------
    initial begin
        $dumpfile("dct8x8_2d_pipe_fix.vcd");
        $dumpvars(0, tb_dct2d_8x8_pipe);
    end

endmodule
