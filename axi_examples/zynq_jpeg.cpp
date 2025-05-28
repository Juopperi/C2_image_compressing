#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xil_io.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "sleep.h"

// JPEG压缩处理器基地址
#define JPEG_BASE     0x43C00000  // 使用适合您系统的基地址

// 寄存器地址映射
#define REG_CTRL      (JPEG_BASE + 0x00)  // 控制寄存器
#define REG_STATUS    (JPEG_BASE + 0x04)  // 状态寄存器

// RGB数据区域 - 每个像素3个分量，共64个像素
#define RGB_BASE      (JPEG_BASE + 0x40)  // RGB数据区域起始地址

// 压缩输出区域
#define Y_BASE        (JPEG_BASE + 0x240) // Y分量输出区域
#define CB_BASE       (JPEG_BASE + 0x2C0) // Cb分量输出区域
#define CR_BASE       (JPEG_BASE + 0x340) // Cr分量输出区域

// 状态寄存器位定义
#define STATUS_PROCESSING   0x01  // 处理中标志位
#define STATUS_DONE         0x02  // 处理完成标志位

// 定义8x8 RGB块的结构
typedef struct {
    unsigned char r[64];
    unsigned char g[64];
    unsigned char b[64];
} RgbBlock;

// 定义JPEG压缩输出的结构
typedef struct {
    int y[64];
    int cb[64];
    int cr[64];
} JpegOutput;

// 函数声明
void send_rgb_block(RgbBlock *block);
void read_jpeg_output(JpegOutput *output);
void process_block();
void print_results(JpegOutput *jpeg_data);

int main(void) {
    xil_printf("Starting JPEG Compression Test\r\n");
    
    // 创建测试RGB数据块 - 简单的渐变图案
    RgbBlock rgb_block;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int idx = i*8 + j;
            rgb_block.r[idx] = (i * 32) % 256;     // 红色渐变
            rgb_block.g[idx] = (j * 32) % 256;     // 绿色渐变
            rgb_block.b[idx] = ((i+j) * 16) % 256; // 蓝色渐变
        }
    }
    
    // 输出测试图案
    xil_printf("Input RGB Block (8x8):\r\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int idx = i*8 + j;
            xil_printf("(%3d,%3d,%3d) ", 
                     rgb_block.r[idx], 
                     rgb_block.g[idx], 
                     rgb_block.b[idx]);
        }
        xil_printf("\r\n");
    }
    
    // 将RGB数据发送到JPEG压缩模块
    send_rgb_block(&rgb_block);
    
    // 触发处理过程
    process_block();
    
    // 读取压缩结果
    JpegOutput jpeg_result;
    read_jpeg_output(&jpeg_result);
    
    // 打印结果
    print_results(&jpeg_result);
    
    xil_printf("JPEG Compression Test Complete\r\n");
    return 0;
}

// 将RGB数据块发送到JPEG处理器
void send_rgb_block(RgbBlock *block) {
    int offset = 0;
    
    xil_printf("Sending RGB data to JPEG processor...\r\n");
    
    // 为了简化，我们按顺序写入所有R分量，然后是G分量，最后是B分量
    for (int i = 0; i < 64; i++) {
        // 构建一个32位值，但只使用低8位
        Xil_Out32(RGB_BASE + (offset * 4), block->r[i]);
        offset++;
        Xil_Out32(RGB_BASE + (offset * 4), block->g[i]);
        offset++;
        Xil_Out32(RGB_BASE + (offset * 4), block->b[i]);
        offset++;
    }
}

// 读取JPEG压缩输出
void read_jpeg_output(JpegOutput *output) {
    xil_printf("Reading JPEG compression results...\r\n");
    
    // 读取Y分量
    for (int i = 0; i < 64; i++) {
        output->y[i] = Xil_In32(Y_BASE + (i * 4));
    }
    
    // 读取Cb分量
    for (int i = 0; i < 64; i++) {
        output->cb[i] = Xil_In32(CB_BASE + (i * 4));
    }
    
    // 读取Cr分量
    for (int i = 0; i < 64; i++) {
        output->cr[i] = Xil_In32(CR_BASE + (i * 4));
    }
}

// 处理RGB数据块并等待完成
void process_block() {
    unsigned int status;
    
    xil_printf("Starting JPEG compression process...\r\n");
    
    // 设置控制寄存器以启动处理
    Xil_Out32(REG_CTRL, 0x01);
    
    // 等待处理完成
    do {
        status = Xil_In32(REG_STATUS);
        // 给硬件一些时间处理
        usleep(100);
    } while (!(status & STATUS_DONE));
    
    xil_printf("JPEG compression completed\r\n");
}

// 打印JPEG输出的前几个值
void print_results(JpegOutput *jpeg_data) {
    xil_printf("JPEG Compression Results (First 16 values of each component):\r\n");
    
    xil_printf("Y Component:\r\n");
    for (int i = 0; i < 16; i++) {
        xil_printf("%8d ", jpeg_data->y[i]);
        if ((i + 1) % 4 == 0) xil_printf("\r\n");
    }
    
    xil_printf("Cb Component:\r\n");
    for (int i = 0; i < 16; i++) {
        xil_printf("%8d ", jpeg_data->cb[i]);
        if ((i + 1) % 4 == 0) xil_printf("\r\n");
    }
    
    xil_printf("Cr Component:\r\n");
    for (int i = 0; i < 16; i++) {
        xil_printf("%8d ", jpeg_data->cr[i]);
        if ((i + 1) % 4 == 0) xil_printf("\r\n");
    }
}