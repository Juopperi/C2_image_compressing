`timescale 1ns / 1ps

module wrapper_tb;

    parameter INT_BITS = 16;
    parameter FRAC_BITS = 16;
    parameter INPUT_BITS = 8;
    parameter NUM_INTEGERS = 64;

    // 使用打包总线代替数组
    reg [NUM_INTEGERS*INPUT_BITS-1:0] integers;
    wire [NUM_INTEGERS*(INT_BITS+FRAC_BITS)-1:0] fixed_array;

    // **变量声明必须在 `initial` 块外**
    integer i;
    integer file;
    integer code;
    reg [INPUT_BITS-1:0] temp_integer; // 用于存储单个整数数据

    // 实例化被测模块
    wrapper #(
        .INT_BITS(INT_BITS),
        .FRAC_BITS(FRAC_BITS),
        .INPUT_BITS(INPUT_BITS),
        .NUM_INTEGERS(NUM_INTEGERS)
    ) uut (
        .integers(integers),
        .fixed_array(fixed_array)
    );

    initial begin
        // 从文件中读取测试数据
        file = $fopen("test_data.txt", "r");
        if (file == 0) begin
            $display("Error: Could not open test_data.txt");
            $finish;
        end

        // 读取数据并存入打包信号
        for (i = 0; i < NUM_INTEGERS; i = i + 1) begin
            code = $fscanf(file, "%d\n", temp_integer);
            if (code != 1) begin
                $display("Error: Could not read integer %0d", i);
                $finish;
            end
            // 按位拼接到 integers 总线
            integers[i*INPUT_BITS +: INPUT_BITS] = temp_integer;
        end
        $fclose(file);

        // 等待一段时间以观察输出
        #10;

        // 打印输出结果
        for (i = 0; i < NUM_INTEGERS; i = i + 1) begin
            $display("Integer: %d, Fixed: %h", 
                integers[i*INPUT_BITS +: INPUT_BITS], 
                fixed_array[i*(INT_BITS+FRAC_BITS) +: (INT_BITS+FRAC_BITS)]
            );
        end

        $finish;
    end

endmodule
