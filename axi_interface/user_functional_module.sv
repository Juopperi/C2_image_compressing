`define CONFIG_PROCESS_DONE     8'h89 // if the config area is done, set this to 1, it is set by the user_functional_module

/*
ToDo:
    1. How to process the read and write logic relation with axi_self_test module
    2. When we should get into the done state
*/

module user_functional_module(
    input wire          clk,       // 时钟
    input wire          rst_n,     // 复位信号，低电平有效
    input wire          start,     // 启动信号
    
    // 输入数据接口
    output reg [7:0]    data_in_addr, // 输入数据地址
    input wire [31:0]   data_in,      // 输入数据
    
    // 输出数据接口
    output reg [7:0]    data_out_addr, // 输出数据地址
    output reg [31:0]   data_out       // 输出数据
);


reg [31:0] data_in_array [0:63];
reg [31:0] data_out_array [0:63];

assign data_out = data_out_array[data_out_addr];


reg process_done, save_done, load_done;

typedef enum reg [3:0] {
    IDLE,
    LOAD_DATA,
    PROCESS_DATA,
    SAVE_DATA,
    DONE
} state_t;

state_t state, next_state;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state <= IDLE;
    end
    else begin
        state <= next_state;
    end
end

always @(*) begin
    case (state)
        IDLE: begin
            if (start) begin
                next_state <= LOAD_DATA;
            end
            else begin
                next_state <= IDLE;
            end
        end
        LOAD_DATA: begin
            if (load_done) begin
                next_state <= PROCESS_DATA;
            end
            else begin
                next_state <= LOAD_DATA;
            end
        end
        PROCESS_DATA: begin
            if (process_done) begin
                next_state <= SAVE_DATA;
            end
            else begin
                next_state <= PROCESS_DATA;
            end
        end
        SAVE_DATA: begin
            if (save_done) begin
                next_state <= DONE;
            end
            else begin
                next_state <= SAVE_DATA;
            end
        end
        DONE: begin
            next_state <= IDLE;
        end
        default: begin
            next_state <= IDLE;
        end
    endcase
end

// Load data from axi_self_test, one by one, process index in another process
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        integer i;
        for (i = 0; i < 64; i = i + 1) begin
            data_in_array[i] <= 0;
        end
    end
    else begin
        if (state == LOAD_DATA) begin
            data_in_array[data_in_addr] <= data_in;
        end
    end
end

// Increase index
always @(posedge clk or negedge rst_n) begin
    if (state == PROCESS_DATA) begin
        data_in_addr <= data_in_addr + 1;
        if (data_in_addr == 63) begin
            load_done <= 1;
        end
    end
    else begin
        data_in_addr <= 0;
        load_done <= 0;
    end
end

// Process data
always @(posedge clk or negedge rst_n) begin
    if (state == PROCESS_DATA) begin
        integer i;
        for (i = 0; i < 64; i = i + 1) begin
            data_out_array[i] <= ~data_in_array[i];
        end
        process_done <= 1;
    end
    else begin
        process_done <= 0;
    end
end

// Save data
always @(posedge clk or negedge rst_n) begin
    if (state == SAVE_DATA) begin
        data_out_array[data_out_addr] <= data_out;
    end
end

// Increase index
always @(posedge clk or negedge rst_n) begin
    if (state == SAVE_DATA) begin
        data_out_addr <= data_out_addr + 1;
        if (data_out_addr == 63) begin
            save_done <= 1;
        end
    end
    else if (state == DONE) begin
        data_out_addr <= `CONFIG_PROCESS_DONE;
        save_done <= 1;
    end
    else begin
        data_out_addr <= 0;
        save_done <= 0;
    end
end


endmodule