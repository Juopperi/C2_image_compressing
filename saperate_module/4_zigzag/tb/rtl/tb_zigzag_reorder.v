`timescale 1ns / 1ps

module tb_zigzag_reorder;

    parameter DATA_WIDTH  = 32;
    parameter DATA_DEPTH  = 8;
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH;  // 64
    parameter MAX_SAMPLES = 1000;

    localparam TOTAL_BITS = DATA_WIDTH * PIXEL_COUNT;

    reg clk;
    reg [TOTAL_BITS-1:0] input_matrix;
    wire [TOTAL_BITS-1:0] zigzag_out;

    // DUT
    zigzag_reorder dut (
        .clk(clk),
        .input_matrix(input_matrix),
        .zigzag_out(zigzag_out)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk;

    // Memory
    reg [DATA_WIDTH-1:0] input_mem   [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] golden_mem  [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] output_frame[0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] all_outputs [0:MAX_SAMPLES*PIXEL_COUNT-1];

    integer g, i, diff, mismatch_count;

    initial begin
        $display("==== TB: Zigzag Reorder with File Output ====");

        $readmemh("zigzag_input.mem", input_mem);
        $readmemh("expected_zigzag_output.mem", golden_mem);

        #20;

        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Group %0d ----", g);

            // 打包一组数据
            for (i = 0; i < PIXEL_COUNT; i = i + 1)
                input_matrix[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[g*PIXEL_COUNT + i];

            #10;  // 等一个时钟周期以稳定输出

            for (i = 0; i < PIXEL_COUNT; i = i + 1)
                output_frame[i] = zigzag_out[i*DATA_WIDTH +: DATA_WIDTH];

            // 验证输出并写入 all_outputs
            mismatch_count = 0;
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                all_outputs[g*PIXEL_COUNT + i] = output_frame[i];

                if (output_frame[i] !== golden_mem[g*PIXEL_COUNT + i]) begin
                    $display("Mismatch at [%0d]: Got %h, Expected %h", i, output_frame[i], golden_mem[g*PIXEL_COUNT + i]);
                    mismatch_count = mismatch_count + 1;
                end
            end

            if (mismatch_count == 0)
                $display("Group %0d passed.", g);
            else
                $display("Group %0d failed: %0d mismatches", g, mismatch_count);

            $display("-----------------------------");
            #20;
        end

        // 写出总输出
        $writememh("actual_zigzag_output.mem", all_outputs);

        $display("==== All Groups Completed ====");
        #100;
        $finish;
    end

endmodule
