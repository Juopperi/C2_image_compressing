`timescale 1ns / 1ps

module tb_dct_2d_8x8;

    parameter DATA_WIDTH = 32;
    parameter DATA_DEPTH = 8;
    localparam TOTAL_BITS = DATA_WIDTH * DATA_DEPTH * DATA_DEPTH;

    reg clk;
    reg reset_n;
    reg [TOTAL_BITS-1:0] data_in_matrix;
    wire [TOTAL_BITS-1:0] data_out_matrix;

    // Instantiate DUT
    dct_2d_8x8 #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .data_in_matrix(data_in_matrix),
        .data_out_matrix(data_out_matrix)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk; // 100MHz

    // Input data memory
    reg [DATA_WIDTH-1:0] input_mem [0:63];
    reg [DATA_WIDTH-1:0] golden_mem [0:63];
    reg [DATA_WIDTH-1:0] out_mem [0:63];


    integer i;

    // Flatten memory for input
    initial begin
        $readmemh("input_matrix.mem", input_mem);
        $readmemh("final_dct_result.mem", golden_mem);

        // Flatten input_mem into data_in_matrix
        for (i = 0; i < 64; i = i + 1) begin
            data_in_matrix[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[i];
        end

        // Reset
        reset_n = 0;
        #20;
        reset_n = 1;

        // Wait for DCT to compute (组合逻辑或轻流水至少等待1~2个周期)
        #100;

        #1000


        // Dump result to file
        $display("==== DCT Output ====");
        
        for (i = 0; i < 64; i = i + 1) begin
            out_mem[i] = data_out_matrix[i*DATA_WIDTH +: DATA_WIDTH];
        end

        $writememh("dct_out_dump.txt", out_mem);


        // Compare with golden output
        $display("==== Comparing with golden ====");
        for (i = 0; i < 64; i = i + 1) begin
            if (data_out_matrix[i*DATA_WIDTH +: DATA_WIDTH] !== golden_mem[i]) begin
                $display("Mismatch at [%0d]: Got %h, Expected %h",
                         i, data_out_matrix[i*DATA_WIDTH +: DATA_WIDTH], golden_mem[i]);
            end else begin
                $display("Match at [%0d]: %h", i, data_out_matrix[i*DATA_WIDTH +: DATA_WIDTH]);
            end
        end

        #100000000

        $finish;
    end

endmodule
