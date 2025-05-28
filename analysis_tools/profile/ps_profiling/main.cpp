/******************************************************************************
 * Copyright (c) 2013 - 2022 Xilinx, Inc.
 * Copyright (c) 2022 Advanced Micro Devices, Inc.
 * SPDX-License-Identifier: MIT
 ******************************************************************************/

#include "xparameters.h"
#include "xsdps.h"
#include "xil_printf.h"
#include "xil_cache.h"
#include "xplatform_info.h"
#include "xilffs.h"
#include "xil_io.h"
#include "ff.h"
#include "xtime_l.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ
#define XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ    666666687
#endif

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define STBIW_JPEG_PERF_MONITOR 1
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#define INPUT_PNG_FILE_NAME  "0:/INPUT.png"
#define OUTPUT_JPG_FILE_NAME "0:/OUTPUT0.jpg"
#define LOG_FILE_NAME        "0:/PROFILE.TXT"

static FATFS fatfs;
static FIL fil, log_fil;
typedef struct {
    XTime t_start, t_open, t_read, t_decode, t_encode_start, t_encode_end, t_end;
    XTime t_dct_start, t_dct_end;
    XTime t_quantize_start, t_quantize_end;
    XTime t_huffman_start, t_huffman_end;
    XTime t_rle_start, t_rle_end;
    XTime t_write_start, t_write_end;

    XTime t_dct_overall_start, t_dct_overall_end;
    XTime t_quantize_overall_start, t_quantize_overall_end;
    XTime t_huffman_overall_start, t_huffman_overall_end;
    XTime t_rle_overall_start, t_rle_overall_end;

    int dct_count, quantize_count, huffman_count, rle_count;

    // ✅ 新增部分
    XTime t_dct_total_cycle;
    XTime t_quantize_total_cycle;
    XTime t_huffman_total_cycle;
    XTime t_rle_total_cycle;
} ProfilingData;

static ProfilingData prof;

static int write_func_internal(void *context, void *data, int size) {
    FIL *fp = (FIL *)context;
    UINT bw;
    FRESULT res = f_write(fp, data, size, &bw);
    return (res == FR_OK && bw == (UINT)size) ? 1 : 0;
}

static void write_callback_wrapper(void *context, void *data, int size) {
    if (!write_func_internal(context, data, size)) {
        xil_printf("WARNING: FatFs write failed inside callback!\r\n");
    }
}

int InitializeSD(void) {
    return f_mount(&fatfs, "0:/", 0) == FR_OK ? XST_SUCCESS : XST_FAILURE;
}

int OpenLogFile(const char* filename) {
    return f_open(&log_fil, filename, FA_CREATE_ALWAYS | FA_WRITE) == FR_OK ? XST_SUCCESS : XST_FAILURE;
}

int WriteToLog(const char* msg) {
    UINT written;
    return f_write(&log_fil, msg, strlen(msg), &written) == FR_OK ? XST_SUCCESS : XST_FAILURE;
}

void CloseLogFile(void) {
    f_close(&log_fil);
}

// 假设 prof 结构中已新增以下字段（单位：XTime）
// XTime t_dct_total_cycle, t_quantize_total_cycle, t_huffman_total_cycle, t_rle_total_cycle;

void stbiw_jpeg_dct_begin() {
    if (prof.dct_count == 0)
        XTime_GetTime(&prof.t_dct_overall_start);
    prof.dct_count++;
    XTime_GetTime(&prof.t_dct_start);
}

void stbiw_jpeg_dct_end() {
    XTime_GetTime(&prof.t_dct_end);
    prof.t_dct_total_cycle += (prof.t_dct_end - prof.t_dct_start);
}

void stbiw_jpeg_quantize_begin() {
    if (prof.quantize_count == 0) {
        if (prof.t_dct_overall_end == 0)
            XTime_GetTime(&prof.t_dct_overall_end);
        XTime_GetTime(&prof.t_quantize_overall_start);
    }
    prof.quantize_count++;
    XTime_GetTime(&prof.t_quantize_start);
}

void stbiw_jpeg_quantize_end() {
    XTime_GetTime(&prof.t_quantize_end);
    prof.t_quantize_total_cycle += (prof.t_quantize_end - prof.t_quantize_start);
}

void stbiw_jpeg_huffman_begin() {
    if (prof.huffman_count == 0) {
        if (prof.t_quantize_overall_end == 0)
            XTime_GetTime(&prof.t_quantize_overall_end);
        XTime_GetTime(&prof.t_huffman_overall_start);
    }
    prof.huffman_count++;
    XTime_GetTime(&prof.t_huffman_start);
}

void stbiw_jpeg_huffman_end() {
    XTime_GetTime(&prof.t_huffman_end);
    prof.t_huffman_total_cycle += (prof.t_huffman_end - prof.t_huffman_start);
}

void stbiw_jpeg_rle_begin() {
    if (prof.rle_count == 0) {
        if (prof.t_huffman_overall_end == 0)
            XTime_GetTime(&prof.t_huffman_overall_end);
        XTime_GetTime(&prof.t_rle_overall_start);
    }
    prof.rle_count++;
    XTime_GetTime(&prof.t_rle_start);
}

void stbiw_jpeg_rle_end() {
    XTime_GetTime(&prof.t_rle_end);
    prof.t_rle_total_cycle += (prof.t_rle_end - prof.t_rle_start);
    XTime_GetTime(&prof.t_rle_overall_end);
}

// 不需要分块计时的整体 write 函数保留原样
void stbiw_jpeg_write_begin() { XTime_GetTime(&prof.t_write_start); }
void stbiw_jpeg_write_end() { XTime_GetTime(&prof.t_write_end); }

void stbiw_jpeg_block_processed() { }

void print_time(const char *label, XTime start, XTime end) {
    if (start == 0 || end == 0) {
        xil_printf("%s: [未计时]\r\n", label);
        return;
    }
    
    u64 ticks = end - start;
    u64 us = (ticks * 1000) / (XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ);
    u64 ms = (us / 1000);
    u64 rem_us = (us % 1000);
    xil_printf("%s: %lu ms (%lu us)\r\n", label, ms, rem_us);
}

void WriteProfilingData(void) {
    xil_printf("\r\n==== PNG to JPG Profiling ====\r\n");
    print_time("Total time", prof.t_start, prof.t_end);
    print_time("  Open PNG", prof.t_start, prof.t_open);
    print_time("  Read PNG", prof.t_open, prof.t_read);
    print_time("  Decode PNG", prof.t_read, prof.t_decode);
    print_time("  Encode JPEG", prof.t_encode_start, prof.t_encode_end);

    xil_printf("  DCT块处理次数: %d\r\n", prof.dct_count);
    xil_printf("  量化处理次数: %d\r\n", prof.quantize_count);
    xil_printf("  Huffman编码次数: %d\r\n", prof.huffman_count);
    xil_printf("  RLE编码次数: %d\r\n", prof.rle_count);

    if (prof.t_encode_start != 0 && prof.t_encode_end != 0) {
        print_time("    DCT整体变换", prof.t_dct_overall_start, prof.t_dct_overall_end);
        print_time("    单个DCT块处理", prof.t_dct_start, prof.t_dct_end);
        print_time("    量化整体过程", prof.t_quantize_overall_start, prof.t_quantize_overall_end);
        print_time("    单个量化块处理", prof.t_quantize_start, prof.t_quantize_end);
        print_time("    Huffman整体编码", prof.t_huffman_overall_start, prof.t_huffman_overall_end);
        print_time("    单个Huffman块编码", prof.t_huffman_start, prof.t_huffman_end);
        print_time("    RLE整体编码", prof.t_rle_overall_start, prof.t_rle_overall_end);
        print_time("    单个RLE块编码", prof.t_rle_start, prof.t_rle_end);
        print_time("    写入文件", prof.t_write_start, prof.t_write_end);
    }

    print_time("  Final Flush", prof.t_encode_end, prof.t_end);
}

int ConvertPNGtoJPG(const char* PngFileName, const char* JpgFileName) {
    FRESULT Res;
    UINT BytesRead;
    long fileSize;
    int width, height, channels;

    memset(&prof, 0, sizeof(ProfilingData));
    
    XTime_GetTime(&prof.t_start);
    Res = f_open(&fil, PngFileName, FA_READ);
    if (Res != FR_OK) {
        xil_printf("ERROR: Cannot open PNG file.\r\n");
        return XST_FAILURE;
    }
    XTime_GetTime(&prof.t_open);

    fileSize = f_size(&fil);
    unsigned char* pngData = (unsigned char*)malloc(fileSize);
    if (!pngData) return XST_FAILURE;

    Res = f_read(&fil, pngData, fileSize, &BytesRead);
    f_close(&fil);
    XTime_GetTime(&prof.t_read);

    if (Res != FR_OK || BytesRead != (UINT)fileSize) {
        free(pngData);
        xil_printf("ERROR: Read failed.\r\n");
        return XST_FAILURE;
    }

    unsigned char* imageData = stbi_load_from_memory(pngData, fileSize, &width, &height, &channels, 0);
    free(pngData);
    XTime_GetTime(&prof.t_decode);
    if (!imageData) return XST_FAILURE;

    Res = f_open(&fil, JpgFileName, FA_CREATE_ALWAYS | FA_WRITE);
    if (Res != FR_OK) return XST_FAILURE;

    XTime_GetTime(&prof.t_encode_start);
    int ok = stbi_write_jpg_to_func(write_callback_wrapper, &fil, width, height, channels, imageData, 90);
    XTime_GetTime(&prof.t_encode_end);
    f_close(&fil);
    stbi_image_free(imageData);

    return ok ? XST_SUCCESS : XST_FAILURE;
}

int main(void) {
    XTime t1, t2;
    XTime_GetTime(&t1);
    XTime_GetTime(&t2);
    xil_printf("Delta: %llu cycles\r\n", t2 - t1);  // 正常应为几十到几百周期

    XTime_GetTime(&t1);

    int Status;
    xil_printf("==== SD + STB Image Conversion Example Start ====\r\n");

    if (InitializeSD() != XST_SUCCESS) {
        xil_printf("ERROR: SD Initialization failed!\r\n");
        return XST_FAILURE;
    }
    xil_printf("SD Init Success.\r\n");

    if (OpenLogFile(LOG_FILE_NAME) != XST_SUCCESS) {
        xil_printf("WARNING: Cannot open log file.\r\n");
    }

    xil_printf("Converting [%s] to [%s]...\r\n", INPUT_PNG_FILE_NAME, OUTPUT_JPG_FILE_NAME);
    Status = ConvertPNGtoJPG(INPUT_PNG_FILE_NAME, OUTPUT_JPG_FILE_NAME);
    XTime_GetTime(&prof.t_end);

    if (Status == XST_SUCCESS) {
        xil_printf("Conversion successful.\r\n");
    } else {
        xil_printf("Conversion failed.\r\n");
    }

    WriteProfilingData();
    CloseLogFile();
    xil_printf("==== Example Finished ====\r\n");

    XTime_GetTime(&t2);
    xil_printf("Delta: %llu cycles\r\n", t2 - t1);  // 正常应为几十到几百周期

    return Status;
}