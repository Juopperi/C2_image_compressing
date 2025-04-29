# JPEG Preprocessor with AXI Interface

This repository contains an integration of a JPEG compression preprocessing module with an AXI4 interface, allowing seamless connection to DMA, DDR, and other AXI-compliant components in a Vivado-based image processing system.

## System Architecture

The system comprises three main components:

1. **AXI Wrapper** - Handles AXI bus protocol communications, including:
   - AXI Slave interface for control and status registers
   - AXI Master interface for writing processed data

2. **JPEG Preprocessing Module** - Converts RGB pixel data to YCbCr components:
   - Takes 64 RGB (8x8 block) pixels as input
   - Performs color space conversion, DCT, quantization, and zigzag reordering
   - Outputs three 32-bit streams (Y, Cb, and Cr components)

3. **Control Logic** - Manages data flow between components:
   - Reads RGB pixel data from FIFO
   - Buffers data for JPEG processing
   - Controls DMA operations for writing processed data

## Interface Description

### Top-Level Ports

#### Control Interface
- `s00_axi_*` - AXI4-Lite slave interface for control and status
- `m00_axi_*` - AXI4 master interface for writing processed data

#### FIFO Interface
- `fifo_empty` - Input flag indicating when FIFO is empty
- `fifo_rd_en` - Output signal to read from FIFO
- `fifo_data` - Input pixel data from FIFO (8-bit RGB pixels)

#### DMA Control
- `dma_start` - Output signal to start DMA transfer
- `dma_done` - Input signal indicating DMA transfer completion
- `dma_dst_addr` - Output providing destination address for DMA
- `dma_length` - Output providing length of data for DMA transfer

### Register Map

The module provides 4 control/status registers accessible via AXI slave interface:

| Register | Address Offset | Description |
|----------|---------------|-------------|
| REG0 | 0x00 | Control Register: [0]=Start processing, [1]=Reset |
| REG1 | 0x04 | DMA Destination Address |
| REG2 | 0x08 | Reserved |
| REG3 | 0x0C | Status Register: [0]=Busy, [1]=Done, [2]=Error |

## Operation Flow

1. **Initialization**:
   - Configure `REG1` with the DMA destination address
   - Set `REG0[0]` to start processing

2. **Data Acquisition**:
   - System reads 64 RGB pixels (8x8 block) from FIFO
   - RGB values are stored in internal buffers

3. **JPEG Preprocessing**:
   - RGB data is converted to YCbCr color space
   - DCT, quantization, and zigzag reordering are applied
   - Three sets of 32-bit data (Y, Cb, Cr) are produced

4. **Data Transfer**:
   - Processed data is sent to DDR through AXI master interface
   - DMA handles the actual transfer

5. **Completion**:
   - `REG3[1]` is set when processing completes
   - System returns to idle state

## Integration Guidelines

### Connecting to FIFO

Connect the FIFO source (e.g., image sensor or memory reader) to the FIFO interface of this module. Ensure that:

- FIFO provides 8-bit RGB pixel data
- FIFO provides empty flag
- FIFO can be read when `fifo_rd_en` is asserted

### Connecting to DMA

Connect the DMA controller to the DMA control signals. The DMA should:

- Start transfer when `dma_start` is asserted
- Use `dma_dst_addr` as destination address
- Transfer `dma_length` bytes of data
- Assert `dma_done` when transfer completes

### Software Control

Software should:

1. Write the destination address to `REG1`
2. Write a '1' to `REG0[0]` to start processing
3. Poll `REG3[1]` to detect completion
4. Check `REG3[2]` to detect any errors

## Example Usage

```c
// Initialize the JPEG preprocessor
void init_jpeg_preprocessor(uint32_t dst_addr) {
    // Set destination address
    JPEG_REG1 = dst_addr;
}

// Process one block of image data
bool process_image_block() {
    // Start processing
    JPEG_REG0 = 0x1;
    
    // Wait for completion
    while (!(JPEG_REG3 & 0x2)) {
        // Check for error
        if (JPEG_REG3 & 0x4) {
            return false;  // Error occurred
        }
    }
    
    return true;  // Processing completed successfully
}
```

## Key Design Considerations

1. **Clock Domain**: All components operate in the same clock domain (`s00_axi_aclk`).

2. **Reset**: Active-low reset signal (`s00_axi_aresetn`) resets all internal states.

3. **Data Width**: 
   - Input: 8-bit RGB pixels
   - Output: 32-bit YCbCr components after DCT and quantization

4. **Throughput**:
   - Processes 64 pixels per operation
   - Output size is 768 bytes (64 × 32-bit × 3 components)

5. **Error Handling**: Error status is reported in `REG3[2]`. 