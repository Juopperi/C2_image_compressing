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
    input wire [7:0]    data_out_addr, // 输出数据地址
    output reg [31:0]   data_out,       // 输出数据
    output wire [3:0]   state_out       // 输出状态
);


reg [31:0] data_in_array [0:63];
reg [31:0] data_out_array [0:63];

reg last_start;

always @(posedge clk or negedge rst_n) begin : record_start_process
    if (!rst_n) begin
        last_start <= 0;
    end
    else begin
        last_start <= start;
    end
end


assign data_out = data_out_array[data_out_addr];


reg process_done, save_done, load_done;

typedef enum reg [3:0] {
    IDLE,
    LOAD_DATA,
    PROCESS_DATA,
    SAVE_DATA,
    DONE
} state_t_user_functional_module;

state_t_user_functional_module state, next_state;

assign state_out = state;

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
            if (start && !last_start) begin
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
            if (last_start) begin
                next_state <= DONE;
            end
            else begin
                next_state <= IDLE;
            end
        end
        default: begin
            next_state <= IDLE;
        end
    endcase
end

// Load data from axi_self_test, one by one, process index in another process
// @note: this process is not sensitive to the state, it is always running
always @(posedge clk or negedge rst_n) begin : load_data_process
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
always @(posedge clk or negedge rst_n) begin : increase_index_process
    if (state == LOAD_DATA) begin
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
        if (data_out_addr == 64) begin
            save_done <= 1;
        end
    end
    else if (state == DONE) begin
        save_done <= 1;
    end
    else begin
        save_done <= 0;
    end
end


endmodule


module inverter(
    input wire [31:0] data_in,
    output wire [31:0] data_out
);

assign data_out = ~data_in;

endmodule