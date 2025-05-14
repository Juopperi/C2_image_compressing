`timescale 1ns/1ps
// ==========================================================================
//  Testbench – dct8x8_2d_pipe_block_ts  (NUM_MUL = 8, 行4clk 核)
// ==========================================================================
module tb_dct2d_8x8_pipe_ts;

    // ----------------------------------------------------------------------
    // Parameters
    // ----------------------------------------------------------------------
    localparam int DATA_WIDTH      = 32;   
    localparam int FRAC_BITS       = 8;
    localparam int CONST_WIDTH     = 10;

    localparam int WORDS_PER_BLK   = 64;   // 8×8
    localparam int MAX_BLOCKS      = 4;    // demo 4 blocks
    localparam int ERR_THRESH      = 32'h0000_8000; // ±0.5 LSB
    localparam int CLK_PERIOD      = 10;   // 100 MHz

    // ----------------------------------------------------------------------
    // Clock / reset
    // ----------------------------------------------------------------------
    logic clk = 0; always #(CLK_PERIOD/2) clk = ~clk;
    logic rst_n;

    // ----------------------------------------------------------------------
    // DUT interface
    // ----------------------------------------------------------------------
    logic in_valid;
    logic [DATA_WIDTH*WORDS_PER_BLK-1:0] in_block;
    logic in_ready;

    logic out_valid;
    logic [DATA_WIDTH*WORDS_PER_BLK-1:0] out_block;
    logic out_ready;

    // ----------------------------------------------------------------------
    // DUT
    // ----------------------------------------------------------------------
    dct8x8_2d_pipe_block_ts #(
        .IN_W    (DATA_WIDTH),
        .FRAC    (FRAC_BITS),
        .CONST_W (CONST_WIDTH)
    ) dut (
        .clk       (clk),
        .rst_n     (rst_n),
        .in_valid  (in_valid),
        .in_block  (in_block),
        .in_ready  (in_ready),
        .out_valid (out_valid),
        .out_block (out_block),
        .out_ready (out_ready)
    );

    // ----------------------------------------------------------------------
    // Memories
    // ----------------------------------------------------------------------
    logic [DATA_WIDTH-1:0] input_mem  [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    logic [DATA_WIDTH-1:0] golden_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];
    logic [DATA_WIDTH-1:0] output_mem [0:MAX_BLOCKS*WORDS_PER_BLK-1];

    // ----------------------------------------------------------------------
    // Helpers
    // ----------------------------------------------------------------------
    function automatic logic [DATA_WIDTH*WORDS_PER_BLK-1:0] pack_block(int blk);
        logic [DATA_WIDTH*WORDS_PER_BLK-1:0] tmp;
        for (int i = 0; i < WORDS_PER_BLK; i++)
            tmp[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[blk*WORDS_PER_BLK + i];
        return tmp;
    endfunction

    task automatic check_block(int blk);
        longint diff;
        for (int i=0;i<WORDS_PER_BLK;i++) begin
            int idx = blk*WORDS_PER_BLK + i;
            output_mem[idx] = out_block[i*DATA_WIDTH +: DATA_WIDTH];

            diff = $signed(output_mem[idx]) - $signed(golden_mem[idx]);
            if(diff<0) diff = -diff;

            if(diff > ERR_THRESH) begin
                $display("[%0t] **ERR blk=%0d idx=%0d  got=%h exp=%h |diff|=%0d",
                         $time, blk, i, output_mem[idx], golden_mem[idx], diff);
                err_cnt++;
            end
            $fdisplay(fout,"%08X", output_mem[idx]);
        end
    endtask

    // ----------------------------------------------------------------------
    // Stimulus – send blocks
    // ----------------------------------------------------------------------
    int blk_in;
    initial begin
        in_valid = 0; in_block = '0; blk_in = 0;
        @(posedge rst_n);   // 等复位结束
        @(posedge clk);     // 对齐时钟

        while (blk_in < MAX_BLOCKS) begin
            // 等待 core 空闲
            if (in_ready) begin
                in_block <= pack_block(blk_in);
                in_valid <= 1'b1;                       // 把 valid 拉高
            end

            @(posedge clk);                            // 下一拍观察 ready
            if (in_valid && in_ready) begin           // hand‑shake 成功
                in_valid <= 1'b0;                     // 拉低 valid
                blk_in++;
                $display("[%0t] --> sent block %0d", $time, blk_in-1);
            end
        end
    end

    // ----------------------------------------------------------------------
    // Receiver & checker
    // ----------------------------------------------------------------------
    int blk_out = 0;
    int err_cnt = 0;
    int fout;

    // 拉低 out_ready 做随机 back‑pressure
    always_ff @(posedge clk or negedge rst_n)
        if(!rst_n)        out_ready <= 0;
        else if($time > 200) // 给流水线 20 拍暖机
            out_ready <= ($urandom_range(0,9) < 8);   // 80 % 准备好
        else              out_ready <= 1;

    always_ff @(posedge clk) begin
        if(out_valid && out_ready) begin
            check_block(blk_out);
            $display("[%0t] <-- got block %0d", $time, blk_out);
            blk_out++;
            if(blk_out == MAX_BLOCKS) begin
                // 仿真结束报告
                #1;
                $display("========================================");
                if (err_cnt==0) $display("PASS – all %0d blocks matched", MAX_BLOCKS);
                else            $display("FAIL – %0d mismatches", err_cnt);
                $display("========================================");
                $fclose(fout);
                #(CLK_PERIOD*20);
                $finish;
            end
        end
    end

    // ----------------------------------------------------------------------
    // Test‑vector loading + reset
    // ----------------------------------------------------------------------
    initial begin
        fout = $fopen("actual_chen_2d_dct_pipe_output.mem","w");
        $display("==== TB 2‑D 8×8 DCT (ts core) ====");

        $readmemh("chen_2d_dct_input.mem",    input_mem);
        $readmemh("expected_chen_2d_dct_output.mem", golden_mem);

        rst_n = 0;
        repeat(5) @(posedge clk);
        rst_n = 1;
    end

    // ----------------------------------------------------------------------
    // Wave dump
    // ----------------------------------------------------------------------
    initial begin
        $dumpfile("dct8x8_2d_pipe_ts.vcd");
        $dumpvars(0,tb_dct2d_8x8_pipe_ts);
    end
endmodule
