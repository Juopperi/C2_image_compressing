module dct_1d #
(
    parameter DATA_WIDTH = 32,      // 每个数据项宽度（16位数据 + 16位系数）
    parameter DATA_DEPTH = 8        // 数据深度，8个输入
)
(
    input   wire clk,
    input   wire reset_n,
    input   wire [DATA_WIDTH*DATA_DEPTH-1:0] data_in,
    input   wire [DATA_WIDTH*DATA_DEPTH-1:0] coeff,     // DCT 系数
    output  reg  [DATA_WIDTH*DATA_DEPTH-1:0] data_out
);

    integer i;
    reg signed [DATA_WIDTH-1:0] data_array   [0:DATA_DEPTH-1];
    reg signed [DATA_WIDTH-1:0] coeff_array  [0:DATA_DEPTH-1];
    reg signed [2*DATA_WIDTH-1:0] mult_result[0:DATA_DEPTH-1];

    always @(*) begin
        // 拆分输入向量为数组形式
        for (i = 0; i < DATA_DEPTH; i = i + 1) begin
            data_array[i]  = data_in[i*DATA_WIDTH +: DATA_WIDTH];
            coeff_array[i] = coeff[i*DATA_WIDTH +: DATA_WIDTH];
        end
    end

    always @(*) begin
        // 执行乘法
        for (i = 0; i < DATA_DEPTH; i = i + 1) begin
            mult_result[i] = data_array[i] * coeff_array[i];
        end
    end

    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            data_out <= 0;
        end else begin
            // 打包输出
            for (i = 0; i < DATA_DEPTH; i = i + 1) begin
                data_out[i*DATA_WIDTH +: DATA_WIDTH] <= mult_result[i][DATA_WIDTH-1:0]; // 截断为 DATA_WIDTH 位
            end
        end
    end

endmodule
