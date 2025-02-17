/******************************************************************************
 * Copyright (c) 2013 - 2022 Xilinx, Inc. All rights reserved.
 * Copyright (c) 2022 Advanced Micro Devices, Inc. All Rights Reserved.
 * SPDX-License-Identifier: MIT
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

/************************** Constant Definitions *****************************/

#define LOG_FILE_NAME               "0:/LOG.TXT"
#define A_INPUT_FILE_NAME           "0:/INPUT_A.TXT"
#define B_INPUT_FILE_NAME           "0:/INPUT_B.TXT"
#define OUTPUT_FILE_NAME            "0:/REAL_OUTPUT.TXT"
#define EXPECTED_OUTPUT_FILE_NAME   "0:/OUTPUT_C.TXT"
#define WRITE_DELAY_MS              100
#define OFFSET_TIME_MS              100*1000
#define BUFFER_SIZE                 1024
#define ADDER_BASE                  0x40000000  // The address of the 32-bit adder 


// Macro definition for outputting results
#define CHECK_RESULT(expected, actual) do { \
    if ((expected) == (actual)) { \
        snprintf(WriteBuffer, BUFFER_SIZE, "Success: expected result %u = real result %u\r\n", (expected), (actual)); \
    } else { \
        snprintf(WriteBuffer, BUFFER_SIZE, "Failure: expected result %u != real result %u\r\n", (expected), (actual)); \
    } \
    xil_printf("%s", WriteBuffer); \
    WriteToFile(LOG_FILE_NAME, WriteBuffer); \
} while (0)


/************************** Variable Definitions *****************************/

static FIL fil;     /* File object */
static FATFS fatfs;
static char WriteBuffer[BUFFER_SIZE];
static char ReadBuffer[BUFFER_SIZE];

/************************** Function Prototypes ******************************/
int InitializeSD(void);
int WriteReadSDLoop(void);
int CreateFileIfNotExists(const char* fileName);

// Function to write data to a file
int WriteToFile(const char* fileName, const char* data) {
    FRESULT Res;
    UINT NumBytesWritten;

    Res = f_open(&fil, fileName, FA_OPEN_ALWAYS | FA_WRITE);
    if (Res != FR_OK) {
        xil_printf("ERROR: Cannot open file %s for writing!\r\n", fileName);
        return XST_FAILURE;
    }

    f_lseek(&fil, f_size(&fil));  // Move to the end of the file

    Res = f_write(&fil, data, strlen(data), &NumBytesWritten);
    if (Res != FR_OK || NumBytesWritten != strlen(data)) {
        xil_printf("ERROR: Write to file failed!\r\n");
        f_close(&fil);
        return XST_FAILURE;
    }

    f_close(&fil);
    return XST_SUCCESS;
}

// Function to read data from a file
int ReadFromFile(const char* fileName, char* buffer, UINT bufferSize) {
    FRESULT Res;
    UINT NumBytesRead;

    Res = f_open(&fil, fileName, FA_READ);
    if (Res != FR_OK) {
        xil_printf("ERROR: Cannot open file %s for reading!\r\n", fileName);
        return XST_FAILURE;
    }

    memset(buffer, 0, bufferSize);
    Res = f_read(&fil, buffer, bufferSize - 1, &NumBytesRead);
    if (Res != FR_OK) {
        xil_printf("ERROR: Read from file failed!\r\n");
        f_close(&fil);
        return XST_FAILURE;
    }

    f_close(&fil);
    return XST_SUCCESS;
}

// Function to get the result from the adder
unsigned int get_result_adder(unsigned int a, unsigned int b){
    unsigned int result = 0;

    Xil_Out32(ADDER_BASE, a);
    Xil_Out32(ADDER_BASE + 4, b);
    result = Xil_In32(ADDER_BASE + 8);
    
    return result;
}

/*****************************************************************************/
/**
 * Main function
 *****************************************************************************/
int main(void) {
    int Status;

    xil_printf("SD Polled File System Example Start\r\n");

    // Initialize SD card
    Status = InitializeSD();
    if (Status != XST_SUCCESS) {
        xil_printf("SD Initialization failed!\r\n");
        return XST_FAILURE;
    }

    // Create file to ensure the path is correct
    // CreateFileIfNotExists(EXPECTED_OUTPUT_FILE_NAME);

    xil_printf("SD Initialized Successfully. Entering Write/Read Loop...\r\n");

    // Continuously write and read in a loop
    Status = WriteReadSDLoop();
    
    return Status;
}

/*****************************************************************************/
/**
 * Initialize SD card
 *****************************************************************************/
int InitializeSD(void) {
    FRESULT Res;

    // Mount FAT file system
    Res = f_mount(&fatfs, "0:/", 0);
    if (Res != FR_OK) {
        xil_printf("ERROR: f_mount failed!\r\n");
        return XST_FAILURE;
    }

    xil_printf("SD Card Mounted.\r\n");
    return XST_SUCCESS;
}

/*****************************************************************************/
/**
 * Continuously write and read SD card at a low frequency
 *****************************************************************************/
int WriteReadSDLoop(void) {
    FRESULT Res;
    UINT NumBytesRead;
    unsigned int a, b, expected_result, actual_result;
    char aBuffer[BUFFER_SIZE], bBuffer[BUFFER_SIZE], expectedBuffer[BUFFER_SIZE];
    char *aLine, *bLine, *expectedLine;

    // Read input file A
    Res = ReadFromFile(A_INPUT_FILE_NAME, aBuffer, BUFFER_SIZE);
    if (Res != XST_SUCCESS) {
        xil_printf("Failed to read input A file.\r\n");
        return XST_FAILURE;
    }
    else{
        xil_printf("Read input A file successfully.\r\n");
    }

    // Read input file B
    Res = ReadFromFile(B_INPUT_FILE_NAME, bBuffer, BUFFER_SIZE);
    if (Res != XST_SUCCESS) {
        xil_printf("Failed to read input B file.\r\n");
        return XST_FAILURE;
    }
    else{
        xil_printf("Read input B file successfully.\r\n");
    }

    // // Read expected output file
    // Res = ReadFromFile(EXPECTED_OUTPUT_FILE_NAME, expectedBuffer, BUFFER_SIZE);
    // if (Res != XST_SUCCESS) {
    //     xil_printf("Failed to read expected output file.\r\n");
    //     return XST_FAILURE;
    // }

    // Process input and expected output line by line
    aLine = strtok(aBuffer, "\n");
    bLine = strtok(bBuffer, "\n");
    // expectedLine = strtok(expectedBuffer, "\n");

    while (aLine && bLine) {
        a = (unsigned int)strtoul(aLine, NULL, 10);
        xil_printf("a: %u\r\n", a);
        b = (unsigned int)strtoul(bLine, NULL, 10);
        xil_printf("b: %u\r\n", b);
        // expected_result = (unsigned int)strtoul(expectedLine, NULL, 10);
        expected_result = a + b;

        // Get the result from the adder
        actual_result = get_result_adder(a, b);

        // Check result
        CHECK_RESULT(expected_result, actual_result);

        // Read next line
        aLine = strtok(NULL, "\n");
        bLine = strtok(NULL, "\n");
        // expectedLine = strtok(NULL, "\n");

        // Delay
        for (volatile int i = 0; i < WRITE_DELAY_MS * OFFSET_TIME_MS; i++);  // Hardware delay (used when sleep is unavailable)
    }

    return XST_SUCCESS;
}

int CreateFileIfNotExists(const char* fileName) {
    FRESULT Res;
    FIL fil;

    Res = f_open(&fil, fileName, FA_CREATE_NEW | FA_WRITE);
    if (Res == FR_OK) {
        xil_printf("File %s created successfully.\r\n", fileName);
        f_close(&fil);
    } else if (Res == FR_EXIST) {
        xil_printf("File %s already exists.\r\n", fileName);
    } else {
        xil_printf("ERROR: Cannot create file %s!\r\n", fileName);
        return XST_FAILURE;
    }

    return XST_SUCCESS;
}
