module dct_8muladd #
(
    parameter DATA_WIDTH = 32,      // 每个数据项宽度（如：16位数据 + 16位系数）
    parameter DATA_DEPTH = 8        // 数据深度，8个输入
)
(
    input   wire clk,
    input   wire reset_n,
    input   wire [DATA_WIDTH*DATA_DEPTH-1:0] data_in,
    input   wire [DATA_WIDTH*DATA_DEPTH-1:0] coeff,     // DCT 系数
    output  reg  [DATA_WIDTH-1:0] data_out
);

    integer i;
    reg signed [DATA_WIDTH-1:0] data_array   [0:DATA_DEPTH-1];
    reg signed [DATA_WIDTH-1:0] coeff_array  [0:DATA_DEPTH-1];
    reg signed [2*DATA_WIDTH-1:0] mult_result[0:DATA_DEPTH-1];
    reg signed [2*DATA_WIDTH-1:0] sum;

    // 拆分输入向量为数组形式
    always @(*) begin
        for (i = 0; i < DATA_DEPTH; i = i + 1) begin
            data_array[i]  = data_in[i*DATA_WIDTH +: DATA_WIDTH];
            coeff_array[i] = coeff[i*DATA_WIDTH +: DATA_WIDTH];
        end
    end

    // 执行乘法 
    // ToDo 使用定点数乘法器实现
    always @(*) begin
        for (i = 0; i < DATA_DEPTH; i = i + 1) begin
            mult_result[i] = data_array[i] * coeff_array[i];
        end
    end

    // 求和和输出
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            data_out <= 0;
        end else begin
            sum = 0;
            for (i = 0; i < DATA_DEPTH; i = i + 1) begin
                sum = sum + mult_result[i];
            end
            // 可选：取高位做截断（假设前16位为小数部分）
            data_out <= sum[2*DATA_WIDTH-1 -: DATA_WIDTH];  // 简单截断
        end
    end

endmodule