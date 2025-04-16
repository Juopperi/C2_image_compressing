/******************************************************************************
 * Copyright (C) 2023 - All Rights Reserved
 * Based on Xilinx SD card example and custom JPEG encoder
 ******************************************************************************/

/***************************** Include Files *********************************/
#include "xparameters.h"    /* SDK generated parameters */
#include "xsdps.h"          /* SD device driver */
#include "xil_printf.h"
#include "xil_cache.h"
#include "xplatform_info.h"
#include "xilffs.h"
#include "xil_io.h"

#include "ff.h"
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

// Include our JPEG encoder
#include "pl_jpeg_encoder.h"

/************************** Constant Definitions *****************************/
#define LOG_FILE_NAME          "0:/JPEG_LOG.TXT"
#define OUTPUT_JPEG_FILE       "0:/OUTPUT.JPG"
#define BUFFER_SIZE            1024
#define WRITE_DELAY_MS         100
#define OFFSET_TIME_MS         100*1000

// Image parameters
#define IMAGE_WIDTH            640
#define IMAGE_HEIGHT           480
#define BLOCK_SIZE             8
#define COMPONENTS             3  // RGB
#define JPEG_QUALITY           90

// PL hardware registers (not used in this simulation)
#define PL_BASE_ADDR           0x43C00000
#define PL_STATUS_REG          0x00
#define PL_CONTROL_REG         0x04
#define PL_DATA_BUFFER         0x10

/************************** Variable Definitions *****************************/
static FATFS fatfs;
static FIL fil;           /* File object */
static char WriteBuffer[BUFFER_SIZE];

/************************** Function Prototypes ******************************/
int InitializeSD(void);
int WriteToFile(const char* fileName, const void* data, UINT size);
int LogMessage(const char* message);
void SimulatePLData(int* zigzagData, int channel, int x, int y);

/************************** Main Function ************************************/
int main(void)
{
    int Status;

    // Initialize random seed
    srand(time(NULL));

    xil_printf("Zynq JPEG Encoder with SD Card Example\r\n");

    // Initialize SD card
    Status = InitializeSD();
    if (Status != XST_SUCCESS) {
        xil_printf("SD Initialization failed!\r\n");
        return XST_FAILURE;
    }

    LogMessage("SD Card initialized successfully");
    xil_printf("SD Card initialized successfully\r\n");

    // Create and configure JPEG encoder
    PLJpegEncoder encoder;
    if (!encoder.initialize(IMAGE_WIDTH, IMAGE_HEIGHT, COMPONENTS, JPEG_QUALITY)) {
        LogMessage("Failed to initialize JPEG encoder");
        xil_printf("Failed to initialize JPEG encoder\r\n");
        return XST_FAILURE;
    }

    LogMessage("JPEG encoder initialized successfully");

    // Create the output file on SD card
    if (!encoder.writeHeader(OUTPUT_JPEG_FILE)) {
        LogMessage("Failed to create JPEG file on SD card");
        xil_printf("Failed to create JPEG file on SD card\r\n");
        return XST_FAILURE;
    }

    LogMessage("JPEG header written to file");
    xil_printf("Processing image data...\r\n");

    // Buffer to hold zigzag DCT coefficients from PL
    int zigzagData[64];

    // Process each 8x8 block of the image
    for (int y = 0; y < IMAGE_HEIGHT; y += BLOCK_SIZE) {
        for (int x = 0; x < IMAGE_WIDTH; x += BLOCK_SIZE) {
            // For each block, process Y, Cb, Cr components
            for (int channel = 0; channel < COMPONENTS; channel++) {
                // In a real implementation, get zigzag data from PL hardware
                // Here we simulate the data
                SimulatePLData(zigzagData, channel, x, y);
                
                // Process the data with our encoder
                if (!encoder.processDataUnit(zigzagData, channel, x, y)) {
                    snprintf(WriteBuffer, BUFFER_SIZE, 
                             "Error processing block at x=%d, y=%d, channel=%d", 
                             x, y, channel);
                    LogMessage(WriteBuffer);
                    xil_printf("%s\r\n", WriteBuffer);
                }
            }
        }
        
        // Log progress periodically
        if (y % 80 == 0) {
            snprintf(WriteBuffer, BUFFER_SIZE, "Processing progress: %d%%", (y * 100) / IMAGE_HEIGHT);
            LogMessage(WriteBuffer);
            xil_printf("%s\r\n", WriteBuffer);
        }
    }

    // Finalize the JPEG file
    if (!encoder.finalize()) {
        LogMessage("Failed to finalize JPEG file");
        xil_printf("Failed to finalize JPEG file\r\n");
        return XST_FAILURE;
    }

    LogMessage("JPEG encoding completed successfully");
    xil_printf("JPEG encoding completed successfully\r\n");
    xil_printf("Output file saved to %s\r\n", OUTPUT_JPEG_FILE);

    return XST_SUCCESS;
}

/*****************************************************************************/
/**
 * Initialize SD card
 *****************************************************************************/
int InitializeSD(void)
{
    FRESULT Res;

    // Mount FAT file system
    Res = f_mount(&fatfs, "0:/", 0);
    if (Res != FR_OK) {
        xil_printf("ERROR: f_mount failed: %d\r\n", Res);
        return XST_FAILURE;
    }

    xil_printf("SD Card Mounted.\r\n");
    return XST_SUCCESS;
}

/*****************************************************************************/
/**
 * Write data to a file on SD card
 *****************************************************************************/
int WriteToFile(const char* fileName, const void* data, UINT size)
{
    FRESULT Res;
    UINT NumBytesWritten;

    Res = f_open(&fil, fileName, FA_CREATE_ALWAYS | FA_WRITE);
    if (Res != FR_OK) {
        xil_printf("ERROR: Cannot open file %s for writing: %d\r\n", fileName, Res);
        return XST_FAILURE;
    }

    Res = f_write(&fil, data, size, &NumBytesWritten);
    if (Res != FR_OK || NumBytesWritten != size) {
        xil_printf("ERROR: Write to file failed: %d\r\n", Res);
        f_close(&fil);
        return XST_FAILURE;
    }

    f_close(&fil);
    return XST_SUCCESS;
}

/*****************************************************************************/
/**
 * Write a log message to the log file
 *****************************************************************************/
int LogMessage(const char* message)
{
    FRESULT Res;
    UINT NumBytesWritten;
    
    // Get current time (would need to be implemented properly in a real system)
    char timeStamp[32];
    snprintf(timeStamp, sizeof(timeStamp), "Time: N/A");

    // Prepare log entry
    snprintf(WriteBuffer, BUFFER_SIZE, "[%s] %s\r\n", timeStamp, message);

    // Open log file (append mode)
    Res = f_open(&fil, LOG_FILE_NAME, FA_OPEN_ALWAYS | FA_WRITE);
    if (Res != FR_OK) {
        xil_printf("ERROR: Cannot open log file for writing: %d\r\n", Res);
        return XST_FAILURE;
    }

    // Move to end of file
    Res = f_lseek(&fil, f_size(&fil));
    if (Res != FR_OK) {
        xil_printf("ERROR: Failed to seek to end of log file: %d\r\n", Res);
        f_close(&fil);
        return XST_FAILURE;
    }

    // Write log entry
    Res = f_write(&fil, WriteBuffer, strlen(WriteBuffer), &NumBytesWritten);
    if (Res != FR_OK || NumBytesWritten != strlen(WriteBuffer)) {
        xil_printf("ERROR: Write to log file failed: %d\r\n", Res);
        f_close(&fil);
        return XST_FAILURE;
    }

    f_close(&fil);
    return XST_SUCCESS;
}

/*****************************************************************************/
/**
 * Simulate PL data - generate random zigzag DCT coefficients
 * In a real implementation, this would be replaced with reading from PL hardware
 *****************************************************************************/
void SimulatePLData(int* zigzagData, int channel, int x, int y)
{
    // Simulate a DC coefficient (typically larger)
    zigzagData[0] = rand() % 1000;
    
    // Simulate AC coefficients (typically smaller and many zeros at higher frequencies)
    for (int i = 1; i < 64; i++) {
        // Higher frequencies have higher probability of being zero
        int zero_prob = 30 + i; // Probability increases with frequency
        if (rand() % 100 < zero_prob) {
            zigzagData[i] = 0;
        } else {
            // Lower frequencies have larger magnitudes
            zigzagData[i] = rand() % (1000 / (1 + i/4));
        }
    }
    
    // Alternatively, we could use the coordinates to generate more realistic patterns
    // For example, areas with similar x,y might have similar values
    // This would better simulate real image data
} 