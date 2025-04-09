#include "xparameters.h"
#include "xsdps.h"
#include "xil_printf.h"
#include "xil_cache.h"
#include "xplatform_info.h"
#include "xilffs.h"
#include "xil_io.h"
#include "ff.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <string>
#include <ctype.h>  // 添加 for tolower()

#include "profiler.h"
#include "platform.h"

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define STBIW_JPEG_PERF_MONITOR 1
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#define INPUT_DIR   "0:/input"
#define OUTPUT_DIR  "0:/output"
#define LOG_FILE    "0:/profile.txt"

static FATFS fatfs;
static FIL fil, log_fil;
static DIR dir;
static FILINFO fno;
static char input_path[128];
static char output_path[128];

int height_global;
int width_global;
int channels_global;


// 使用非静态全局变量
Profiler profiler_instance;
Profiler* global_profiler = &profiler_instance;

static int write_func_internal(void *context, void *data, int size) {
    FIL *fp = (FIL *)context;
    UINT bw;
    FRESULT res = f_write(fp, data, size, &bw);
    return (res == FR_OK && bw == (UINT)size) ? 1 : 0;
}

static void write_callback_wrapper(void *context, void *data, int size) {
    if (!write_func_internal(context, data, size)) {
        xil_printf("WARNING: FatFs write failed in callback!\r\n");
    }
}

int InitializeSD() {
    xil_printf("Initializing SD card...\r\n");
    int status = f_mount(&fatfs, "0:/", 0);
    if (status == FR_OK) {
        xil_printf("SD card mounted successfully.\r\n");
        return XST_SUCCESS;
    } else {
        xil_printf("ERROR: f_mount failed with code %d\r\n", status);
        return XST_FAILURE;
    }
}

int OpenLogFile(const char* filename) {
    xil_printf("Opening log file: %s\r\n", filename);
    FRESULT res = f_open(&log_fil, filename, FA_CREATE_ALWAYS | FA_WRITE);
    if (res == FR_OK) {
        xil_printf("Log file opened successfully.\r\n");
        return XST_SUCCESS;
    } else {
        xil_printf("ERROR: Failed to open log file. f_open returned %d\r\n", res);
        return XST_FAILURE;
    }
}

int AppendToLog(const char* msg) {
    UINT written;
    return f_write(&log_fil, msg, strlen(msg), &written) == FR_OK ? XST_SUCCESS : XST_FAILURE;
}

void CloseLogFile() {
    f_close(&log_fil);
}

// 检查文件是否为PNG (支持不同大小写)
bool has_png_extension(const char* filename) {
    const char* dot = strrchr(filename, '.');
    if (!dot || strlen(dot) != 4) return false;
    return (tolower(dot[1]) == 'j' &&
            tolower(dot[2]) == 'p' &&
            tolower(dot[3]) == 'g');
}

// 确保输出目录存在
FRESULT ensure_output_dir_exists() {
    DIR d;
    FRESULT res = f_opendir(&d, OUTPUT_DIR);
    
    if (res == FR_NO_PATH || res == FR_NO_FILE) {
        xil_printf("Output directory not found. Creating...\r\n");
        res = f_mkdir(OUTPUT_DIR);
        if (res != FR_OK) {
            xil_printf("ERROR: Cannot create output directory. f_mkdir returned %d\r\n", res);
        } else {
            xil_printf("Output directory created successfully.\r\n");
        }
    } else if (res == FR_OK) {
        xil_printf("Output directory exists.\r\n");
        f_closedir(&d);
    } else {
        xil_printf("ERROR: Failed to check output directory. f_opendir returned %d\r\n", res);
    }
    
    return res;
}

int ConvertOnePNGtoJPG(const char* input_name, const char* output_name) {
    xil_printf("----\r\nReading image: %s\r\n", input_name);
    UINT bytes_read;
    FRESULT res;
    int width, height, channels;

    global_profiler->resetAll();
    global_profiler->startTimer("load_image");

    res = f_open(&fil, input_name, FA_READ);
    if (res != FR_OK) {
        xil_printf("ERROR: Cannot open input file. f_open returned %d\r\n", res);
        return XST_FAILURE;
    }

    // 获取文件大小并检查有效性
    FSIZE_t size = f_size(&fil);
    xil_printf("File size: %llu bytes\r\n", (unsigned long long)size);
    
    // 检查文件大小是否合理 (小于100MB)
    if (size > 1024 * 1024 * 1024  || size <= 0) {
        xil_printf("ERROR: Invalid file size detected. Size: %llu bytes\r\n", (unsigned long long)size);
        f_close(&fil);
        return XST_FAILURE;
    }
    
    unsigned char* buffer = (unsigned char*)malloc((size_t)size);
    if (!buffer) {
        xil_printf("ERROR: Failed to allocate memory for file (%llu bytes).\r\n", (unsigned long long)size);
        f_close(&fil);
        return XST_FAILURE;
    }

    res = f_read(&fil, buffer, (UINT)size, &bytes_read);
    f_close(&fil);
    if (res != FR_OK || bytes_read != (UINT)size) {
        xil_printf("ERROR: f_read failed. Read %u/%llu bytes. f_read returned %d\r\n", 
                  bytes_read, (unsigned long long)size, res);
        free(buffer);
        return XST_FAILURE;
    }

    xil_printf("Decoding PNG...\r\n");
    unsigned char* image_data = stbi_load_from_memory(buffer, (int)size, &width, &height, &channels, 0);
    free(buffer);
    if (!image_data) {
        xil_printf("ERROR: Failed to decode PNG image. STB error: %s\r\n", stbi_failure_reason());
        return XST_FAILURE;
    }
    xil_printf("Image loaded: %dx%d, %d channels\r\n", width, height, channels);
    global_profiler->stopTimer("load_image");

    width_global = width;
    height_global = height;
    channels_global = channels;

    // 确保输出目录存在
    FRESULT dir_res = ensure_output_dir_exists();
    if (dir_res != FR_OK && dir_res != FR_EXIST) {
        xil_printf("ERROR: Output directory check/creation failed.\r\n");
        stbi_image_free(image_data);
        return XST_FAILURE;
    }

    global_profiler->startTimer("save_image");
    xil_printf("Saving to JPG: %s\r\n", output_name);
    res = f_open(&fil, output_name, FA_CREATE_ALWAYS | FA_WRITE);
    if (res != FR_OK) {
        xil_printf("ERROR: Cannot create output file. f_open returned %d\r\n", res);
        stbi_image_free(image_data);
        return XST_FAILURE;
    }

    int ok = stbi_write_jpg_to_func(write_callback_wrapper, &fil, width, height, channels, image_data, 90);
    f_close(&fil);
    stbi_image_free(image_data);
    global_profiler->stopTimer("save_image");

    xil_printf("JPEG write %s\r\n", ok ? "succeeded" : "FAILED");
    return ok ? XST_SUCCESS : XST_FAILURE;
}


void LogPerformance(const char* filename) {
    char buffer[1024];
    double load = global_profiler->getElapsedTime("load_image");
    double ycbcr = global_profiler->getElapsedTime("rgb2ycbcr");
    double subsample = global_profiler->getElapsedTime("subsample_encoding");
    double shift = global_profiler->getElapsedTime("level_shift");
    double dct_rows = global_profiler->getElapsedTime("dct_rows");
    double dct_cols = global_profiler->getElapsedTime("dct_columns");
    double quant = global_profiler->getElapsedTime("quantize");
    double dc = global_profiler->getElapsedTime("encode_dc");
    double ac = global_profiler->getElapsedTime("encode_acs");
    double save = global_profiler->getElapsedTime("save_image");

    double dct = dct_rows + dct_cols;
    double encode = dc + ac;
    double total = load + ycbcr + subsample + shift + dct + quant + encode + save;

    sprintf(buffer, "========================================\r\n");
    AppendToLog(buffer);
    sprintf(buffer, "Processing: %s\r\n", filename);
    AppendToLog(buffer);
    sprintf(buffer, "Width: %d Height: %d Channels: %d\r\n", width_global, height_global, channels_global); // 可改为真实值
    AppendToLog(buffer);


    sprintf(buffer, "Image name: jpg_input/%s\r\n", filename);
    AppendToLog(buffer);
    sprintf(buffer, "Image loading time: %.4f seconds\r\n", load);
    AppendToLog(buffer);
    sprintf(buffer, "RGB to YCbCr conversion time: %.4f seconds\r\n", ycbcr);
    AppendToLog(buffer);
    sprintf(buffer, "Chroma subsampling time: %.4f seconds\r\n", subsample);
    AppendToLog(buffer);
    sprintf(buffer, "Level shift time: %.4f seconds\r\n", shift);
    AppendToLog(buffer);
    sprintf(buffer, "DCT transform time: %.4f seconds\r\n", dct);
    AppendToLog(buffer);
    sprintf(buffer, "Quantization time: %.4f seconds\r\n", quant);
    AppendToLog(buffer);
    sprintf(buffer, "Encoding time: %.4f seconds\r\n", encode);
    AppendToLog(buffer);
    sprintf(buffer, "File writing time: %.4f seconds\r\n", save);
    AppendToLog(buffer);
    sprintf(buffer, "Total execution time: %.4f seconds\r\n\r\n", total);
    AppendToLog(buffer);

    AppendToLog("Execution time breakdown:  \r\n");
    sprintf(buffer, "Image loading: %.2f%%\r\n", load / total * 100); AppendToLog(buffer);
    sprintf(buffer, "RGB to YCbCr conversion: %.2f%%\r\n", ycbcr / total * 100); AppendToLog(buffer);
    sprintf(buffer, "Chroma subsampling: %.2f%%\r\n", subsample / total * 100); AppendToLog(buffer);
    sprintf(buffer, "Level shift: %.2f%%\r\n", shift / total * 100); AppendToLog(buffer);
    sprintf(buffer, "DCT transform: %.2f%%\r\n", dct / total * 100); AppendToLog(buffer);
    sprintf(buffer, "Quantization: %.2f%%\r\n", quant / total * 100); AppendToLog(buffer);
    sprintf(buffer, "Encoding: %.2f%%\r\n", encode / total * 100); AppendToLog(buffer);
    sprintf(buffer, "File writing: %.2f%%\r\n", save / total * 100); AppendToLog(buffer);
    AppendToLog("========================================\r\n");
}


int main() {
    xil_printf("==== JPEG conversion started ====\r\n");

    if (InitializeSD() != XST_SUCCESS) return XST_FAILURE;
    if (OpenLogFile(LOG_FILE) != XST_SUCCESS) return XST_FAILURE;

    // 先确保输出目录存在
    if (ensure_output_dir_exists() != FR_OK) {
        xil_printf("ERROR: Output directory check/creation failed.\r\n");
        return XST_FAILURE;
    }

    xil_printf("Opening input directory: %s\r\n", INPUT_DIR);
    FRESULT res = f_opendir(&dir, INPUT_DIR);
    if (res != FR_OK) {
        xil_printf("ERROR: Cannot open input directory. f_opendir returned %d\r\n", res);
        return XST_FAILURE;
    }

    int file_count = 0;
    int success_count = 0;
    
    while (1) {
        res = f_readdir(&dir, &fno);
        if (res != FR_OK || fno.fname[0] == 0) break;
        if (fno.fattrib & AM_DIR) continue;
        
        if (!has_png_extension(fno.fname)) continue;

        file_count++;
        sprintf(input_path, "%s/%s", INPUT_DIR, fno.fname);

        // === 去掉原文件名扩展后缀 ===
        char name_only[64];
        char* dot = strrchr(fno.fname, '.');
        if (dot) {
            size_t base_len = dot - fno.fname;
            strncpy(name_only, fno.fname, base_len);
            name_only[base_len] = '\0';
        } else {
            strcpy(name_only, fno.fname);
        }
        sprintf(output_path, "%s/%s.jpg", OUTPUT_DIR, name_only);

        xil_printf("\r\n>> [%d] Converting: %s\r\n", file_count, fno.fname);

        if (ConvertOnePNGtoJPG(input_path, output_path) == XST_SUCCESS) {
            LogPerformance(fno.fname);
            success_count++;
        } else {
            xil_printf("Conversion failed for file: %s\r\n", fno.fname);
        }
    }

    f_closedir(&dir);

    CloseLogFile();
    xil_printf("\r\n==== All conversions done. Processed %d files, %d successful, %d failed ====\r\n", 
              file_count, success_count, file_count - success_count);
    return XST_SUCCESS;
}

