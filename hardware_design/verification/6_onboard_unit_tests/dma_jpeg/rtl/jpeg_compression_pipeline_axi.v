module jpeg_compression_pipeline_axi #(
    parameter DATA_WIDTH = 32,
    parameter INPUT_WIDTH = 8,
    parameter DATA_DEPTH = 8,
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH,  // 64 pixels (8x8 block)
    parameter ADDR_WIDTH = 8                          // 256字节地址空间，足够寻址所有寄存器
) (
    input wire clk,
    input wire reset_n,
    
    // AXI-Lite接口 (简化版，仅保留必要信号)
    // 写地址通道
    input wire [ADDR_WIDTH-1:0] s_axi_awaddr,
    input wire s_axi_awvalid,
    output reg s_axi_awready,
    
    // 写数据通道
    input wire [DATA_WIDTH-1:0] s_axi_wdata,
    input wire s_axi_wvalid,
    output reg s_axi_wready,
    
    // 写响应通道
    output reg s_axi_bvalid,
    input wire s_axi_bready,
    
    // 读地址通道
    input wire [ADDR_WIDTH-1:0] s_axi_araddr,
    input wire s_axi_arvalid,
    output reg s_axi_arready,
    
    // 读数据通道
    output reg [DATA_WIDTH-1:0] s_axi_rdata,
    output reg s_axi_rvalid,
    input wire s_axi_rready,
    
    // 中断信号
    output reg irq
);

    // 寄存器地址映射
    localparam CTRL_REG_ADDR        = 8'h00;    // 控制寄存器
    localparam STATUS_REG_ADDR      = 8'h04;    // 状态寄存器
    localparam RGB_DATA_ADDR        = 8'h10;    // RGB输入数据起始地址(8'h10-8'h1F)
    localparam Y_DATA_ADDR          = 8'h20;    // Y输出数据起始地址(8'h20-8'h5F)
    localparam CB_DATA_ADDR         = 8'h60;    // Cb输出数据起始地址(8'h60-8'h9F)
    localparam CR_DATA_ADDR         = 8'hA0;    // Cr输出数据起始地址(8'hA0-8'hDF)
    
    // 控制寄存器位定义
    localparam CTRL_START_BIT       = 0;        // 开始处理
    localparam CTRL_IRQ_EN_BIT      = 1;        // 中断使能
    localparam CTRL_RESET_BIT       = 2;        // 软复位
    
    // 状态寄存器位定义
    localparam STATUS_BUSY_BIT      = 0;        // 正在处理
    localparam STATUS_DONE_BIT      = 1;        // 处理完成
    localparam STATUS_ERROR_BIT     = 2;        // 错误标志
    
    // 内部状态
    reg [DATA_WIDTH-1:0] ctrl_reg;              // 控制寄存器
    reg [DATA_WIDTH-1:0] status_reg;            // 状态寄存器
    
    // 写地址和数据寄存器
    reg [ADDR_WIDTH-1:0] write_addr;
    reg [DATA_WIDTH-1:0] write_data;
    
    // 读地址寄存器
    reg [ADDR_WIDTH-1:0] read_addr;
    
    // 处理状态
    localparam S_IDLE      = 2'd0;              // 空闲状态
    localparam S_PROCESSING = 2'd1;             // 处理中
    localparam S_DONE      = 2'd2;              // 处理完成
    
    reg [1:0] state;
    
    // RGB数据缓冲区
    reg [INPUT_WIDTH-1:0] r_buffer [0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] g_buffer [0:PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] b_buffer [0:PIXEL_COUNT-1];
    
    // 输入到JPEG pipeline的扁平化缓冲区
    wire [INPUT_WIDTH*PIXEL_COUNT-1:0] r_buffer_flat;
    wire [INPUT_WIDTH*PIXEL_COUNT-1:0] g_buffer_flat;
    wire [INPUT_WIDTH*PIXEL_COUNT-1:0] b_buffer_flat;
    
    // 压缩后的ZigZag数据
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag_buffer;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag_buffer;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag_buffer;
    
    // 输出数据缓冲区
    reg [DATA_WIDTH-1:0] y_zigzag_data [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_zigzag_data [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_zigzag_data [0:PIXEL_COUNT-1];
    
    // 辅助变量
    integer i, j;
    reg [7:0] data_index; // 用于访问RGB和YCbCr数据
    
    // 将2D数组转换为扁平wire，用于连接到JPEG pipeline
    generate
        genvar g;
        for (g = 0; g < PIXEL_COUNT; g = g + 1) begin: gen_flat_buffer
            genvar b;
            for (b = 0; b < INPUT_WIDTH; b = b + 1) begin: gen_bit_connection
                assign r_buffer_flat[INPUT_WIDTH*g+b] = r_buffer[g][b];
                assign g_buffer_flat[INPUT_WIDTH*g+b] = g_buffer[g][b];
                assign b_buffer_flat[INPUT_WIDTH*g+b] = b_buffer[g][b];
            end
        end
    endgenerate
    
    // 实例化JPEG压缩模块
    jpeg_compression_pipeline_only_y #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH),
        .PIXEL_COUNT(PIXEL_COUNT)
    ) pipeline_inst (
        .clk(clk),
        .reset_n(reset_n),
        .r_all(r_buffer_flat),
        .g_all(g_buffer_flat),
        .b_all(b_buffer_flat),
        .y_zigzag(y_zigzag_buffer),
        .cb_zigzag(cb_zigzag_buffer),
        .cr_zigzag(cr_zigzag_buffer)
    );
    
    // 解包zigzag数据到各个元素 - 需要在每个时钟上更新
    always @(posedge clk) begin
        if (state == S_PROCESSING) begin
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                for (j = 0; j < DATA_WIDTH; j = j + 1) begin
                    y_zigzag_data[i][j] <= y_zigzag_buffer[DATA_WIDTH*i+j];
                    cb_zigzag_data[i][j] <= cb_zigzag_buffer[DATA_WIDTH*i+j];
                    cr_zigzag_data[i][j] <= cr_zigzag_buffer[DATA_WIDTH*i+j];
                end
            end
        end
    end
    
    // AXI写地址通道处理
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            s_axi_awready <= 1'b0;
            write_addr <= {ADDR_WIDTH{1'b0}};
        end else begin
            if (s_axi_awvalid && !s_axi_awready) begin
                write_addr <= s_axi_awaddr;
                s_axi_awready <= 1'b1;
            end else begin
                s_axi_awready <= 1'b0;
            end
        end
    end
    
    // AXI写数据通道处理
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            s_axi_wready <= 1'b0;
            write_data <= {DATA_WIDTH{1'b0}};
        end else begin
            if (s_axi_wvalid && !s_axi_wready) begin
                write_data <= s_axi_wdata;
                s_axi_wready <= 1'b1;
            end else begin
                s_axi_wready <= 1'b0;
            end
        end
    end
    
    // AXI写响应通道处理
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            s_axi_bvalid <= 1'b0;
        end else begin
            if (s_axi_awready && s_axi_wready && !s_axi_bvalid) begin
                s_axi_bvalid <= 1'b1;
            end else if (s_axi_bvalid && s_axi_bready) begin
                s_axi_bvalid <= 1'b0;
            end
        end
    end
    
    // AXI读地址通道处理
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            s_axi_arready <= 1'b0;
            read_addr <= {ADDR_WIDTH{1'b0}};
        end else begin
            if (s_axi_arvalid && !s_axi_arready) begin
                read_addr <= s_axi_araddr;
                s_axi_arready <= 1'b1;
            end else begin
                s_axi_arready <= 1'b0;
            end
        end
    end
    
    // AXI读数据通道处理
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            s_axi_rvalid <= 1'b0;
            s_axi_rdata <= {DATA_WIDTH{1'b0}};
        end else begin
            if (s_axi_arready && !s_axi_rvalid) begin
                s_axi_rvalid <= 1'b1;
                
                // 根据读地址返回对应数据
                case (read_addr)
                    CTRL_REG_ADDR: s_axi_rdata <= ctrl_reg;
                    STATUS_REG_ADDR: s_axi_rdata <= status_reg;
                    
                    // Y数据区域
                    default: begin
                        if (read_addr >= Y_DATA_ADDR && read_addr < Y_DATA_ADDR + PIXEL_COUNT*4)
                            s_axi_rdata <= y_zigzag_data[(read_addr - Y_DATA_ADDR) >> 2];
                        else if (read_addr >= CB_DATA_ADDR && read_addr < CB_DATA_ADDR + PIXEL_COUNT*4)
                            s_axi_rdata <= cb_zigzag_data[(read_addr - CB_DATA_ADDR) >> 2];
                        else if (read_addr >= CR_DATA_ADDR && read_addr < CR_DATA_ADDR + PIXEL_COUNT*4)
                            s_axi_rdata <= cr_zigzag_data[(read_addr - CR_DATA_ADDR) >> 2];
                        else
                            s_axi_rdata <= 32'h00000000;
                    end
                endcase
            end else if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end
    
    // 写操作处理
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            ctrl_reg <= {DATA_WIDTH{1'b0}};
            status_reg <= {DATA_WIDTH{1'b0}};
            irq <= 1'b0;
            data_index <= 8'd0;
            state <= S_IDLE;
            
            // 初始化缓冲区
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                r_buffer[i] <= 0;
                g_buffer[i] <= 0;
                b_buffer[i] <= 0;
            end
        end else begin
            // 清除中断（脉冲式）
            if (irq) irq <= 1'b0;
            
            // 处理写操作
            if (s_axi_awready && s_axi_wready) begin
                if (write_addr == CTRL_REG_ADDR) begin
                    ctrl_reg <= write_data;
                    
                    // 检查开始位
                    if (write_data[CTRL_START_BIT] && state == S_IDLE) begin
                        state <= S_PROCESSING;
                        status_reg[STATUS_BUSY_BIT] <= 1'b1;
                        status_reg[STATUS_DONE_BIT] <= 1'b0;
                    end
                    
                    // 检查复位位
                    if (write_data[CTRL_RESET_BIT]) begin
                        state <= S_IDLE;
                        status_reg <= 0;
                        data_index <= 0;
                    end
                end
                else if (write_addr >= RGB_DATA_ADDR && write_addr < RGB_DATA_ADDR + 16 && state == S_IDLE) begin
                    // 写入RGB数据区
                    data_index = (write_addr - RGB_DATA_ADDR) >> 2;
                    // 每个寄存器写入保存一个像素的RGB数据
                    r_buffer[data_index] <= write_data[7:0];
                    g_buffer[data_index] <= write_data[15:8];
                    b_buffer[data_index] <= write_data[23:16];
                end
            end
            
            // 状态机处理
            case (state)
                S_IDLE: begin
                    // 空闲状态
                    status_reg[STATUS_BUSY_BIT] <= 1'b0;
                end
                
                S_PROCESSING: begin
                    // 等待几个周期让JPEG处理完成
                    if (status_reg[STATUS_BUSY_BIT]) begin
                        state <= S_DONE;
                    end
                end
                
                S_DONE: begin
                    // 处理完成
                    status_reg[STATUS_BUSY_BIT] <= 1'b0;
                    status_reg[STATUS_DONE_BIT] <= 1'b1;
                    
                    // 如果中断使能，触发中断
                    if (ctrl_reg[CTRL_IRQ_EN_BIT]) begin
                        irq <= 1'b1;
                    end
                    
                    // 回到空闲状态
                    state <= S_IDLE;
                end
                
                default: state <= S_IDLE;
            endcase
        end
    end
    
endmodule 