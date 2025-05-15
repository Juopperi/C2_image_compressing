module rgb2ycbcr_dct #(
    parameter int INPUT_WIDTH = 8,           // RGB input width
    parameter int FIXED_POINT_LENGTH = 32,   // YCbCr fixed point length
    parameter int CONST_W = 16,              // DCT constant width
    parameter int PIXEL_COUNT = 64,          // 8x8 block (64 pixels)
    parameter int CORE_COUNT = 8             // RGB2YCbCr core count
)(
    input  logic                                    clk,
    input  logic                                    rst_n,     // Active low reset
    
    // RGB input interface
    input  logic                                    in_valid,  // Input valid signal
    output logic                                    in_ready,  // Ready to accept input
    input  logic [INPUT_WIDTH*PIXEL_COUNT-1:0]      r_all,     // Red pixels
    input  logic [INPUT_WIDTH*PIXEL_COUNT-1:0]      g_all,     // Green pixels
    input  logic [INPUT_WIDTH*PIXEL_COUNT-1:0]      b_all,     // Blue pixels
    
    // Component select for DCT (which component to process)
    input  logic [1:0]                              component_sel, // 0: Y, 1: Cb, 2: Cr
    
    // 量化输出接口 (修改后的输出接口，位宽从32位变为16位)
    output logic                                    out_valid, // Output valid signal
    input  logic                                    out_ready, // Downstream ready
    output logic signed [16*PIXEL_COUNT-1:0]        out_data   // Quantized coefficients
);

    // Internal signals for YCbCr output
    logic [FIXED_POINT_LENGTH*PIXEL_COUNT-1:0] y_all;
    logic [FIXED_POINT_LENGTH*PIXEL_COUNT-1:0] cb_all;
    logic [FIXED_POINT_LENGTH*PIXEL_COUNT-1:0] cr_all;
    logic                                      ycbcr_done;
    
    // RGB2YCbCr conversion start signal
    logic                                      start_conversion;
    
    // RGB2YCbCr to DCT data transfer signals
    logic                                      dct_in_valid;
    logic                                      dct_in_ready;
    logic signed [64*FIXED_POINT_LENGTH-1:0]   dct_in_data;
    
    // DCT to Quantization data transfer signals
    logic                                      dct_out_valid;
    logic                                      dct_out_ready;
    logic signed [64*FIXED_POINT_LENGTH-1:0]   dct_out_data;
    
    // Quantization control signals
    logic                                      quant_start;
    logic                                      quant_done_luma;
    logic                                      quant_done_chroma;
    logic                                      quant_done;
    
    // 量化器输出信号
    logic signed [16*PIXEL_COUNT-1:0]          q_result_luma;
    logic signed [16*PIXEL_COUNT-1:0]          q_result_chroma;
    
    // Control state machine
    typedef enum logic [2:0] {
        IDLE,           // Waiting for input
        CONVERTING,     // RGB to YCbCr conversion in progress
        DCT_PROCESSING, // DCT processing in progress
        QUANTIZING,     // Quantization in progress
        DONE            // Processing complete
    } state_t;
    
    state_t current_state, next_state;
    
    // State machine sequential logic
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            current_state <= IDLE;
        else
            current_state <= next_state;
    end
    
    // State machine combinational logic
    always_comb begin
        next_state = current_state;
        
        case (current_state)
            IDLE: begin
                if (in_valid)
                    next_state = CONVERTING;
            end
            
            CONVERTING: begin
                if (ycbcr_done)
                    next_state = DCT_PROCESSING;
            end
            
            DCT_PROCESSING: begin
                if (dct_out_valid)
                    next_state = QUANTIZING;
            end
            
            QUANTIZING: begin
                if (quant_done)
                    next_state = DONE;
            end
            
            DONE: begin
                if (out_ready)
                    next_state = IDLE;
            end
            
            default: next_state = IDLE;
        endcase
    end
    
    // Control signals
    assign in_ready = (current_state == IDLE);
    assign start_conversion = (current_state == IDLE) && in_valid;
    assign quant_start = (current_state == DCT_PROCESSING) && dct_out_valid;
    assign dct_out_ready = (current_state == DCT_PROCESSING);
    assign out_valid = (current_state == DONE);
    
    // Select which YCbCr component to send to DCT
    always_comb begin
        case (component_sel)
            2'b00:   dct_in_data = y_all;  // Y component
            2'b01:   dct_in_data = cb_all; // Cb component
            2'b10:   dct_in_data = cr_all; // Cr component
            default: dct_in_data = y_all;  // Default to Y
        endcase
    end
    
    // 根据component_sel选择量化器输出
    always_comb begin
        if (component_sel == 2'b00) begin
            // Y component - 使用亮度量化器输出
            out_data = q_result_luma;
            quant_done = quant_done_luma;
        end else begin
            // Cb/Cr component - 使用色度量化器输出
            out_data = q_result_chroma;
            quant_done = quant_done_chroma;
        end
    end
    
    // Set DCT input valid when YCbCr conversion is done
    assign dct_in_valid = (current_state == CONVERTING) && ycbcr_done;
    
    // Instantiate RGB to YCbCr converter
    rgb2ycbcr_container #(
        .fixed_point_length(FIXED_POINT_LENGTH),
        .input_width(INPUT_WIDTH),
        .PIXEL_COUNT(PIXEL_COUNT),
        .CORE_COUNT(CORE_COUNT)
    ) rgb2ycbcr_inst (
        .clk(clk),
        .rst(~rst_n),              // Convert active-low to active-high
        .start(start_conversion),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .y_all(y_all),
        .cb_all(cb_all),
        .cr_all(cr_all),
        .done(ycbcr_done)
    );
    
    // Instantiate DCT module
    dct8x8_chen_2d #(
        .IN_W(FIXED_POINT_LENGTH),
        .CONST_W(CONST_W)
    ) dct_inst (
        .clk(clk),
        .rst_n(rst_n),
        .in_valid(dct_in_valid),
        .in_ready(dct_in_ready),
        .in_data(dct_in_data),
        .out_valid(dct_out_valid),
        .out_ready(dct_out_ready),
        .out_data(dct_out_data)
    );

    // 实例化亮度量化器（Y通道）
    quantize_array #(
        .USE_LUMA(1)  // 使用亮度量化表
    ) quant_luma_inst (
        .clk(clk),
        .rst_n(rst_n),
        .start(quant_start),
        .pixels(dct_out_data),
        .q_result(q_result_luma),
        .done(quant_done_luma)
    );
    
    // 实例化色度量化器（Cb/Cr通道）
    quantize_array #(
        .USE_LUMA(0)  // 使用色度量化表
    ) quant_chroma_inst (
        .clk(clk),
        .rst_n(rst_n),
        .start(quant_start),
        .pixels(dct_out_data),
        .q_result(q_result_chroma),
        .done(quant_done_chroma)
    );

endmodule