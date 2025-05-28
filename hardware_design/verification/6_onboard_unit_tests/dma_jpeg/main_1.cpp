#include "xaxidma.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "xil_cache.h"

/************************** Constant Definitions *****************************/

// Device related constants
#define DMA_DEV_ID              0

// Memory related constants
#define DDR_BASE_ADDR           0x00100000  // 移至更安全的内存区域（远离OCM）
#define MEM_BASE_ADDR           (DDR_BASE_ADDR)
#define TX_BUFFER_BASE          (MEM_BASE_ADDR + 0x00100000) // 1MB对齐
#define RX_BUFFER_BASE          (MEM_BASE_ADDR + 0x00200000) // 2MB对齐，与TX相距1MB

// Check for buffer alignment (PL330 DMA requires 8-byte alignment)
#define BUFFER_ALIGNMENT        64
#define IS_ALIGNED(addr) (!((UINTPTR)(addr) & (BUFFER_ALIGNMENT-1)))

#define RESET_TIMEOUT_COUNTER   10000

// Data size constants
#define MAX_PKT_LEN             64          // 减小为64便于测试
#define NUMBER_OF_TRANSFERS      1
#define DATA_DISPLAY_COUNT       16  // Number of bytes to display for visual inspection

// Polling timeout
#define POLL_TIMEOUT            1000000

// Transfer setup order
#define TRANSFER_ORDER_NORMAL   0   // S2MM first, then MM2S (recommended)
#define TRANSFER_ORDER_REVERSED 1   // MM2S first, then S2MM (experimental)
#define TRANSFER_ORDER_MANUAL   2   // 使用手动设置寄存器的方式
#define CURRENT_TRANSFER_ORDER  TRANSFER_ORDER_NORMAL  // Change to test different orders

// Register addresses for direct register access
#define XAXIDMA_RX_CR_OFFSET        0x30    // S2MM Control Register
#define XAXIDMA_RX_SR_OFFSET        0x34    // S2MM Status Register
#define XAXIDMA_RX_CDESC_OFFSET     0x38    // S2MM Current Descriptor
#define XAXIDMA_RX_TDESC_OFFSET     0x40    // S2MM Tail Descriptor

// Add more detailed register bits for debugging
#define XAXIDMA_CR_RUNSTOP_MASK     0x00000001  // Run/Stop bit
#define XAXIDMA_SR_IDLE_MASK        0x00000002  // DMA channel idle bit
#define XAXIDMA_SR_SGINCLD_MASK     0x00000008  // Scatter gather mode bit
#define XAXIDMA_SR_DMADECERR_MASK   0x00000040  // Decode error status bit
#define XAXIDMA_SR_DMASLVERR_MASK   0x00000020  // Slave error status bit
#define XAXIDMA_SR_DMAINTRERR_MASK  0x00000010  // Internal error status bit
#define XAXIDMA_SR_IRQTHRESH_MASK   0x00004000  // IRQ Threshold status bit
#define XAXIDMA_SR_IRQDELAY_MASK    0x00008000  // IRQ Delay status bit
#define XAXIDMA_SR_IRQCOMPLETE_MASK 0x00001000  // IRQ Complete status bit

// JPEG module control register offsets 
// TODO: Update these based on your specific JPEG IP core register map
#define JPEG_CONTROL_REG_OFFSET     0x00    // Control register offset
#define JPEG_STATUS_REG_OFFSET      0x04    // Status register offset
#define JPEG_START_BIT              0x01    // Start bit mask
#define JPEG_BUSY_BIT               0x02    // Busy bit mask

// S2MM和MM2S寄存器直接操作地址
#define XAXIDMA_MM2S_DMACR_OFFSET      0x00 // MM2S DMA control register
#define XAXIDMA_MM2S_DMASR_OFFSET      0x04 // MM2S DMA status register
#define XAXIDMA_MM2S_SA_LSB_OFFSET     0x18 // MM2S source address LSB
#define XAXIDMA_MM2S_SA_MSB_OFFSET     0x1C // MM2S source address MSB
#define XAXIDMA_MM2S_LENGTH_OFFSET     0x28 // MM2S transfer length

#define XAXIDMA_S2MM_DMACR_OFFSET      0x30 // S2MM DMA control register
#define XAXIDMA_S2MM_DMASR_OFFSET      0x34 // S2MM DMA status register 
#define XAXIDMA_S2MM_DA_LSB_OFFSET     0x48 // S2MM destination address LSB
#define XAXIDMA_S2MM_DA_MSB_OFFSET     0x4C // S2MM destination address MSB
#define XAXIDMA_S2MM_LENGTH_OFFSET     0x58 // S2MM buffer length

/************************** Function Prototypes ******************************/

static int check_dma_done(XAxiDma *axidma_ptr, int direction);
static void display_data(u8 *tx_buffer, u8 *rx_buffer, int count);
static void reset_and_verify_dma(XAxiDma *axidma_ptr);
static void print_dma_status(XAxiDma *axidma_ptr);
static void diagnose_s2mm_failure(XAxiDma *axidma_ptr, u8 *rx_buffer, int length);
static int manual_dma_transfer(XAxiDma *axidma_ptr, UINTPTR tx_buffer, UINTPTR rx_buffer, u32 length);

/************************** Variable Definitions *****************************/

static XAxiDma axidma;          // XAxiDma instance

/************************** Function Definitions *****************************/

int main(void)
{
    int status;
    u8 *tx_buffer_ptr;
    u8 *rx_buffer_ptr;
    XAxiDma_Config *config;
    u32 mm2s_control;
    u32 mm2s_sr;
    u32 s2mm_sr;
    bool data_match = true;
    
    tx_buffer_ptr = (u8 *)TX_BUFFER_BASE;
    rx_buffer_ptr = (u8 *)RX_BUFFER_BASE;
    
    xil_printf("\r\n--- JPG Module I/O Test Program Started --- \r\n");
    
    // 检查内存缓冲区对齐
    xil_printf("内存缓冲区地址:\r\n");
    xil_printf("  TX_BUFFER_BASE: 0x%08X (对齐: %s)\r\n", 
               (UINTPTR)tx_buffer_ptr, 
               IS_ALIGNED(tx_buffer_ptr) ? "是" : "否");
    xil_printf("  RX_BUFFER_BASE: 0x%08X (对齐: %s)\r\n", 
               (UINTPTR)rx_buffer_ptr, 
               IS_ALIGNED(rx_buffer_ptr) ? "是" : "否");
    
    if (!IS_ALIGNED(tx_buffer_ptr) || !IS_ALIGNED(rx_buffer_ptr)) {
        xil_printf("警告: 缓冲区未正确对齐到 %d 字节边界!\r\n", BUFFER_ALIGNMENT);
    }
    
    // Look up DMA configuration
    config = XAxiDma_LookupConfig(DMA_DEV_ID);
    if (!config) {
        xil_printf("No configuration found for device %d\r\n", DMA_DEV_ID);
        return XST_FAILURE;
    }
    
    // Check if MM2S is enabled in the configuration
    xil_printf("DMA Config: HasMm2S=%d, HasS2MM=%d, HasSG=%d\r\n", 
               config->HasMm2S, config->HasS2Mm, config->HasSg);
    
    // 检查系统参数与DMA配置
    xil_printf("XPAR Config: INCLUDE_MM2S=%d, INCLUDE_S2MM=%d, INCLUDE_SG=%d\r\n",
               XPAR_AXI_DMA_0_INCLUDE_MM2S, XPAR_AXI_DMA_0_INCLUDE_S2MM, 
               XPAR_AXI_DMA_0_INCLUDE_SG);
    
    // 使用IP块的设备树查找
    xil_printf("\r\n=== 检查AXI外设设备 ===\r\n");
    xil_printf("DMA 基地址: 0x%08X\r\n", config->BaseAddr);
    
    // 测试基地址可访问性
    u32 test_value = XAxiDma_ReadReg(config->BaseAddr, 0);
    xil_printf("DMA ID寄存器值: 0x%08X\r\n", test_value);
    if (test_value == 0 || test_value == 0xFFFFFFFF) {
        xil_printf("警告: DMA基地址似乎不可访问或返回无效值\r\n");
        xil_printf("      请检查地址映射和总线连接\r\n");
    } else {
        xil_printf("DMA基地址可读，硬件似乎存在\r\n");
    }
    xil_printf("========================\r\n");
    
    // Initialize DMA engine
    status = XAxiDma_CfgInitialize(&axidma, config);
    if (status != XST_SUCCESS) {
        xil_printf("Failed to initialize DMA\r\n");
        xil_printf("--- Test Program Ended --- \r\n");
        return XST_FAILURE;
    }
    
    // Disable interrupts as this example does polling
    XAxiDma_IntrDisable(&axidma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
    XAxiDma_IntrDisable(&axidma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);
    
    // 彻底重置DMA，确保DMA重置成功
    reset_and_verify_dma(&axidma);
    
    // 打印重置后的DMA状态，详细了解两个通道的情况
    print_dma_status(&axidma);
    
    // Check and print MM2S and S2MM status
    xil_printf("MM2S Status: 0x%08X, S2MM Status: 0x%08X\r\n", 
               XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_SR_OFFSET),
               XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET));
    
    // 检查DMA是否配置为SG模式，如果是则提示这是非SG模式的例子
    if (XAxiDma_HasSg(&axidma)) {
        xil_printf("注意: DMA配置为SG模式，但此示例使用简单传输模式\r\n");
        xil_printf("请小心，某些SG功能未在此示例中使用\r\n");
    }
    
    // Initialize transmit buffer with test pattern
    xil_printf("Preparing transmit buffer with test pattern...\r\n");
    for (int i = 0; i < MAX_PKT_LEN; i++) {
        tx_buffer_ptr[i] = i & 0xff;
    }
    
    // 显示发送数据的样本
    xil_printf("Sample of transmit data (first %d bytes):\r\n", DATA_DISPLAY_COUNT);
    for (int i = 0; i < DATA_DISPLAY_COUNT; i++) {
        xil_printf("TX[%3d] = 0x%02X\r\n", i, tx_buffer_ptr[i]);
    }
    
    // 确保数据已写入DDR，使用64的整数倍长度确保覆盖完整缓存线
    Xil_DCacheFlushRange((UINTPTR)tx_buffer_ptr, MAX_PKT_LEN);
    // 接收缓冲区要清零以便后续对比
    for (int i = 0; i < MAX_PKT_LEN; i++) {
        rx_buffer_ptr[i] = 0;
    }
    Xil_DCacheFlushRange((UINTPTR)rx_buffer_ptr, MAX_PKT_LEN);
    
    // 在传输前添加明确的复位代码
    reset_and_verify_dma(&axidma);
    
    // Do a sanity check on MM2S and S2MM channels before attempting transfer
    mm2s_sr = XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_SR_OFFSET);
    s2mm_sr = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
    
    xil_printf("Pre-transfer: MM2S SR=0x%08X CR=0x%08X, S2MM SR=0x%08X CR=0x%08X\r\n",
               mm2s_sr,
               XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_CR_OFFSET),
               s2mm_sr,
               XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET));
    
    // 修改状态检查逻辑 - 重置后通道处于Halted=1,Idle=0是正常的
    // 我们只需要检查错误位是否被设置
    u32 error_mask = XAXIDMA_SR_DMADECERR_MASK | XAXIDMA_SR_DMASLVERR_MASK | XAXIDMA_SR_DMAINTRERR_MASK;
    if (s2mm_sr & error_mask) {
        xil_printf("警告: S2MM通道有错误标志被设置: 0x%08X\r\n", s2mm_sr & error_mask);
        xil_printf("尝试再次复位DMA...\r\n");
        reset_and_verify_dma(&axidma);
        s2mm_sr = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
        if (s2mm_sr & error_mask) {
            xil_printf("错误: 多次复位后S2MM通道仍然有错误标志: 0x%08X\r\n", s2mm_sr & error_mask);
            xil_printf("--- Test Program Ended --- \r\n");
            return XST_FAILURE;
        }
    }
    
    // TODO: 在此处添加JPEG模块寄存器配置（如果需要）
    // 例如: 如果你有JPEG硬件模块的基地址，可以在这里设置它的控制寄存器
    /*
    u32 jpeg_base_addr = XPAR_JPEG_0_S_AXI_BASEADDR; // 替换为实际的基地址
    Xil_Out32(jpeg_base_addr + JPEG_CONTROL_REG_OFFSET, JPEG_START_BIT);
    xil_printf("JPEG模块已配置和启动\r\n");
    
    // 等待JPEG模块准备好接收数据
    while (Xil_In32(jpeg_base_addr + JPEG_STATUS_REG_OFFSET) & JPEG_BUSY_BIT) {
        // 等待JPEG就绪
    }
    xil_printf("JPEG模块准备就绪\r\n");
    */
    
#if CURRENT_TRANSFER_ORDER == TRANSFER_ORDER_NORMAL
    // 正常顺序：先设置接收(S2MM)，再设置发送(MM2S)
    xil_printf("Using normal transfer order: S2MM first, then MM2S\r\n");
    
    // 设置接收传输
    xil_printf("Setting up receive (S2MM) transfer...\r\n");
    status = XAxiDma_SimpleTransfer(&axidma, (UINTPTR)rx_buffer_ptr,
                                  MAX_PKT_LEN, XAXIDMA_DEVICE_TO_DMA);
    if (status != XST_SUCCESS) {
        xil_printf("Failed to set up receive transfer, error code: %d\r\n", status);
        xil_printf("S2MM Status: 0x%08X, Control: 0x%08X\r\n", 
                   XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET),
                   XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET));
        
        // 进行详细诊断
        diagnose_s2mm_failure(&axidma, rx_buffer_ptr, MAX_PKT_LEN);
        
        xil_printf("\r\n=== 故障排除建议 ===\r\n");
        xil_printf("1. 尝试不同的DMA顺序 - 修改CURRENT_TRANSFER_ORDER为TRANSFER_ORDER_REVERSED\r\n");
        xil_printf("2. 尝试使用不同的DMA设备 - 确认DMA硬件配置和连接\r\n");
        xil_printf("3. 考虑使用环回测试 - 将S_AXIS连接回M_AXIS测试DMA自身\r\n");
        xil_printf("4. 检查SDK版本和BSP生成 - 确保驱动程序版本与硬件匹配\r\n");
        xil_printf("======================\r\n");
        
        xil_printf("--- Test Program Ended --- \r\n");
        return XST_FAILURE;
    }
    
    // 确认S2MM传输已正确设置
    u32 s2mm_cr_after = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET);
    u32 s2mm_sr_after = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
    xil_printf("S2MM after setup: CR=0x%08X SR=0x%08X\r\n", s2mm_cr_after, s2mm_sr_after);
    // 确认运行标志已设置
    if (!(s2mm_cr_after & XAXIDMA_CR_RUNSTOP_MASK)) {
        xil_printf("警告: S2MM Control寄存器的Run位未置位\r\n");
        
        // 尝试手动设置Run位
        xil_printf("尝试手动设置S2MM Run位...\r\n");
        XAxiDma_WriteReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET, 
                        s2mm_cr_after | XAXIDMA_CR_RUNSTOP_MASK);
        s2mm_cr_after = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET);
        xil_printf("修正后S2MM CR=0x%08X\r\n", s2mm_cr_after);
    }
    
    // 设置发送传输
    xil_printf("Setting up transmit (MM2S) transfer...\r\n");
    status = XAxiDma_SimpleTransfer(&axidma, (UINTPTR)tx_buffer_ptr,
                                MAX_PKT_LEN, XAXIDMA_DMA_TO_DEVICE);
    if (status != XST_SUCCESS) {
        xil_printf("Failed to set up transmit transfer, error code: %d\r\n", status);
        xil_printf("MM2S Status: 0x%08X, Control: 0x%08X\r\n", 
                   XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_SR_OFFSET),
                   XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_CR_OFFSET));
        xil_printf("--- Test Program Ended --- \r\n");
        return XST_FAILURE;
    }
    
    // 检查MM2S设置是否成功
    u32 mm2s_cr_after = XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_CR_OFFSET);
    u32 mm2s_sr_after = XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_SR_OFFSET);
    xil_printf("MM2S after setup: CR=0x%08X SR=0x%08X\r\n", mm2s_cr_after, mm2s_sr_after);
    
#elif CURRENT_TRANSFER_ORDER == TRANSFER_ORDER_REVERSED
    // 反向顺序：先设置发送(MM2S)，再设置接收(S2MM)
    xil_printf("Using reversed transfer order: MM2S first, then S2MM\r\n");
    
    // 设置发送传输
    xil_printf("Setting up transmit (MM2S) transfer...\r\n");
    status = XAxiDma_SimpleTransfer(&axidma, (UINTPTR)tx_buffer_ptr,
                                MAX_PKT_LEN, XAXIDMA_DMA_TO_DEVICE);
    if (status != XST_SUCCESS) {
        xil_printf("Failed to set up transmit transfer, error code: %d\r\n", status);
        xil_printf("MM2S Status: 0x%08X, Control: 0x%08X\r\n", 
                   XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_SR_OFFSET),
                   XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_CR_OFFSET));
        xil_printf("--- Test Program Ended --- \r\n");
        return XST_FAILURE;
    }
    
    // 设置接收传输
    xil_printf("Setting up receive (S2MM) transfer...\r\n");
    status = XAxiDma_SimpleTransfer(&axidma, (UINTPTR)rx_buffer_ptr,
                                  MAX_PKT_LEN, XAXIDMA_DEVICE_TO_DMA);
    if (status != XST_SUCCESS) {
        xil_printf("Failed to set up receive transfer, error code: %d\r\n", status);
        xil_printf("S2MM Status: 0x%08X, Control: 0x%08X\r\n", 
                   XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET),
                   XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET));
        xil_printf("--- Test Program Ended --- \r\n");
        return XST_FAILURE;
    }
#elif CURRENT_TRANSFER_ORDER == TRANSFER_ORDER_MANUAL
    // 手动设置DMA传输
    xil_printf("Using manual register control mode\r\n");
    
    // 调用手动设置函数
    status = manual_dma_transfer(&axidma, (UINTPTR)tx_buffer_ptr, (UINTPTR)rx_buffer_ptr, MAX_PKT_LEN);
    if (status != XST_SUCCESS) {
        xil_printf("手动设置DMA传输失败\r\n");
        xil_printf("--- Test Program Ended --- \r\n");
        return XST_FAILURE;
    }
#else
    #error "未定义的传输顺序"
#endif
    
    // 立即检查状态寄存器，翻译关键位
    mm2s_sr = XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_SR_OFFSET);
    u32 mm2s_cr = XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_CR_OFFSET);
    xil_printf("MM2S after transfer: CR=0x%08X SR=0x%08X\r\n", mm2s_cr, mm2s_sr);
    
    // 更详细的状态位分析
    xil_printf("MM2S状态位解析: \r\n");
    xil_printf("  Halted=%d Idle=%d SGIncld=%d DMAIntErr=%d DMASlvErr=%d DMADecErr=%d\r\n",
        (mm2s_sr>>0)&1, (mm2s_sr>>1)&1, (mm2s_sr>>3)&1, (mm2s_sr>>4)&1, 
        (mm2s_sr>>5)&1, (mm2s_sr>>6)&1);
    
    // 同样详细分析S2MM状态
    s2mm_sr = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
    u32 s2mm_cr = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET);
    xil_printf("S2MM状态位解析: \r\n");
    xil_printf("  Halted=%d Idle=%d SGIncld=%d DMAIntErr=%d DMASlvErr=%d DMADecErr=%d\r\n",
        (s2mm_sr>>0)&1, (s2mm_sr>>1)&1, (s2mm_sr>>3)&1, (s2mm_sr>>4)&1, 
        (s2mm_sr>>5)&1, (s2mm_sr>>6)&1);
    
    // 等待发送和接收完成
    xil_printf("Waiting for transfers to complete...\r\n");
    
    int timeout_count = POLL_TIMEOUT;
    // 等待MM2S(发送)完成
    while (1) {
        u32 status = XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_SR_OFFSET);
        
        // 检查IRQ Complete位(位12)或Idle位(位1)
        if ((status & XAXIDMA_SR_IRQCOMPLETE_MASK) || (status & XAXIDMA_SR_IDLE_MASK)) {
            xil_printf("MM2S transfer completed! Status=0x%08X\r\n", status);
            break;
        }
        
        timeout_count--;
        if (timeout_count <= 0) {
            xil_printf("Timeout waiting for MM2S transfer!\r\n");
            break;
        }
        
        if ((timeout_count % 100000) == 0) {
            xil_printf("Waiting... MM2S status: 0x%08X\r\n", status);
        }
    }
    
    // 检查JPEG硬件状态（如果有该功能）
    /*
    if (jpeg_base_addr) {
        u32 jpeg_status = Xil_In32(jpeg_base_addr + JPEG_STATUS_REG_OFFSET);
        xil_printf("JPEG模块状态: 0x%08X\r\n", jpeg_status);
        if (jpeg_status & JPEG_BUSY_BIT) {
            xil_printf("警告: JPEG模块仍处于忙状态\r\n");
        } else {
            xil_printf("JPEG模块已完成处理\r\n");
        }
    }
    */
    
    // 等待S2MM(接收)完成，增加超时报告频率以便调试
    timeout_count = POLL_TIMEOUT;
    int report_interval = 10000; // 更频繁的状态报告
    while (1) {
        u32 s2mm_status = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
        
        // 检查IRQ Complete位(位12)或Idle位(位1)，与MM2S检查逻辑保持一致
        if ((s2mm_status & XAXIDMA_SR_IRQCOMPLETE_MASK) || (s2mm_status & XAXIDMA_SR_IDLE_MASK)) {
            xil_printf("S2MM transfer completed! Status=0x%08X\r\n", s2mm_status);
            break;
        }
        
        timeout_count--;
        if (timeout_count <= 0) {
            u32 s2mm_cr = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET);
            u32 s2mm_cur_desc = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_RX_CDESC_OFFSET);
            u32 s2mm_tail_desc = XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_RX_TDESC_OFFSET);
            
            xil_printf("Timeout waiting for S2MM transfer to complete!\r\n");
            xil_printf("S2MM Status: 0x%08X, Control: 0x%08X\r\n", s2mm_status, s2mm_cr);
            xil_printf("S2MM Current Desc: 0x%08X, Tail Desc: 0x%08X\r\n", s2mm_cur_desc, s2mm_tail_desc);
            xil_printf("  Halted=%d Idle=%d SGIncld=%d DMAIntErr=%d DMASlvErr=%d DMADecErr=%d\r\n",
                (s2mm_status>>0)&1, (s2mm_status>>1)&1, (s2mm_status>>3)&1, 
                (s2mm_status>>4)&1, (s2mm_status>>5)&1, (s2mm_status>>6)&1);
            
            // 尝试识别问题原因
            if (s2mm_status == 0) {
                xil_printf("错误: S2MM状态为0，通道完全没有响应。可能原因:\r\n");
                xil_printf("1. JPEG模块未向DMA发送任何AXIS数据 (tvalid未置位)\r\n");
                xil_printf("2. S2MM通道可能未被正确启用\r\n");
                xil_printf("3. 硬件连接问题 - AXIS接口可能没有正确连接\r\n");
                
                // 检查AXIS信号 - 这是模拟AXIS调试器的操作
                // 这里只是举例说明如何调试，实际上你需要在硬件中使用ILA或类似工具
                xil_printf("\r\n=== 硬件诊断建议 ===\r\n");
                xil_printf("由于S2MM通道在复位后未接收到任何数据，建议:\r\n");
                xil_printf("1. 检查JPEG模块是否正确初始化和启动\r\n");
                xil_printf("2. 使用ILA/ChipScope监测这些AXIS接口信号:\r\n");
                xil_printf("   - m_axis_tvalid: JPEG->DMA 数据有效信号\r\n");
                xil_printf("   - m_axis_tready: DMA->JPEG 准备接收信号\r\n");
                xil_printf("   - m_axis_tlast: JPEG->DMA 数据包结束信号\r\n");
                xil_printf("3. 确认时钟和复位信号正常\r\n");
                xil_printf("4. 如果上述信号正常但仍然失败，考虑尝试一个简单的环回测试\r\n");
                xil_printf("========================\r\n\r\n");
                
                // 强制停止S2MM以复位
                XAxiDma_Reset(&axidma);
                int reset_timeout = RESET_TIMEOUT_COUNTER;
                while (reset_timeout > 0) {
                    if (XAxiDma_ResetIsDone(&axidma)) {
                        xil_printf("DMA复位完成\r\n");
                        break;
                    }
                    reset_timeout--;
                }
            }
            
            xil_printf("--- Test Program Ended --- \r\n");
            return XST_FAILURE;
        }
        
        // 更频繁地报告S2MM状态以便调试
        if ((timeout_count % report_interval) == 0) {
            xil_printf("S2MM still busy, status: 0x%08X, Control: 0x%08X\r\n", 
                      s2mm_status,
                      XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET));
            
            // 如果状态持续为0，减少报告间隔以获得更多信息
            if (s2mm_status == 0 && report_interval > 1000) {
                report_interval = report_interval / 10;
                xil_printf("增加S2MM状态报告频率，新间隔: %d\r\n", report_interval);
            }
        }
    }
    xil_printf("S2MM transfer completed!\r\n");
    
    // 确保数据从DDR读回，确保缓存线对齐
    // 计算对齐到缓存线的开始和结束地址（假设64字节缓存线）
    UINTPTR start_addr = (UINTPTR)rx_buffer_ptr;
    UINTPTR end_addr = start_addr + MAX_PKT_LEN;
    // 向下对齐开始地址，向上对齐结束地址（确保完全包含数据）
    UINTPTR aligned_start = start_addr & ~(64-1);
    UINTPTR aligned_end = (end_addr + 64-1) & ~(64-1);
    UINTPTR aligned_size = aligned_end - aligned_start;
    
    xil_printf("Cache invalidate range: 0x%08X to 0x%08X (size: %d bytes)\r\n", 
              (unsigned int)aligned_start, (unsigned int)aligned_end-1, (unsigned int)aligned_size);
    Xil_DCacheInvalidateRange(aligned_start, aligned_size);
    
    // 显示传输结束后的状态
    xil_printf("Post-transfer: MM2S Status=0x%08X, S2MM Status=0x%08X\r\n", 
               XAxiDma_ReadReg(axidma.RegBase, XAXIDMA_SR_OFFSET),
               XAxiDma_ReadReg(axidma.RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET));
    
    // 显示接收数据的样本
    xil_printf("\r\nSample of received data (first %d bytes):\r\n", DATA_DISPLAY_COUNT);
    for (int i = 0; i < DATA_DISPLAY_COUNT; i++) {
        xil_printf("RX[%3d] = 0x%02X\r\n", i, rx_buffer_ptr[i]);
    }
    
    // 显示发送和接收数据的对比
    display_data(tx_buffer_ptr, rx_buffer_ptr, DATA_DISPLAY_COUNT);
    
    // 验证接收的数据
    data_match = true;
    int mismatch_count = 0;
    for (int i = 0; i < MAX_PKT_LEN; i++) {
        if (tx_buffer_ptr[i] != rx_buffer_ptr[i]) {
            if (mismatch_count < 20) { // 只显示前20个不匹配的数据
                xil_printf("Data mismatch at index %d: TX=0x%02X, RX=0x%02X\r\n", 
                           i, tx_buffer_ptr[i], rx_buffer_ptr[i]);
            } else if (mismatch_count == 20) {
                xil_printf("Too many mismatches, stopping detailed reporting\r\n");
            }
            data_match = false;
            mismatch_count++;
        }
    }
    
    if (data_match) {
        xil_printf("数据验证成功 - 所有字节匹配!\r\n");
        xil_printf("JPG预处理测试成功完成!\r\n");
    } else {
        xil_printf("数据验证失败 - 发现 %d 个不匹配\r\n", mismatch_count);
        xil_printf("JPG预处理可能出现问题!\r\n");
    }
    
    xil_printf("--- Test Program Ended --- \r\n");
    return XST_SUCCESS;
}

/**
 * Display side-by-side comparison of input and output data
 */
static void display_data(u8 *tx_buffer, u8 *rx_buffer, int count)
{
    xil_printf("\r\nData Comparison (TX vs RX):\r\n");
    xil_printf("Index    TX       RX\r\n");
    xil_printf("------ ------- -------\r\n");
    
    for (int i = 0; i < count; i++) {
        xil_printf("  %3d    0x%02X    0x%02X %s\r\n", 
                  i, tx_buffer[i], rx_buffer[i], 
                  (tx_buffer[i] == rx_buffer[i]) ? "" : " <-- MISMATCH");
    }
    xil_printf("\r\n");
}

/**
 * Check if DMA transfer is complete using polling
 */
static int check_dma_done(XAxiDma *axidma_ptr, int direction)
{
    int timeout = POLL_TIMEOUT;
    
    // Poll until transfer completes or timeout
    while (timeout > 0) {
        if (direction == XAXIDMA_DMA_TO_DEVICE) {
            // Check if MM2S channel is idle
            if (XAxiDma_Busy(axidma_ptr, XAXIDMA_DMA_TO_DEVICE) == 0) {
                return XST_SUCCESS;
            }
        } else {
            // Check if S2MM channel is idle
            if (XAxiDma_Busy(axidma_ptr, XAXIDMA_DEVICE_TO_DMA) == 0) {
                return XST_SUCCESS;
            }
        }
        
        timeout--;
    }
    
    // If we got here, we timed out
    if (direction == XAXIDMA_DMA_TO_DEVICE) {
        xil_printf("Transmit transfer timed out\r\n");
    } else {
        xil_printf("Receive transfer timed out\r\n");
    }
    
    // Try to reset DMA after timeout
    XAxiDma_Reset(axidma_ptr);
    int reset_timeout = RESET_TIMEOUT_COUNTER;
    while (reset_timeout > 0) {
        if (XAxiDma_ResetIsDone(axidma_ptr)) {
            break;
        }
        reset_timeout--;
    }
    
    return XST_FAILURE;
}

/**
 * 重置DMA并验证重置成功
 */
static void reset_and_verify_dma(XAxiDma *axidma_ptr) {
    int reset_timeout;
    
    xil_printf("执行DMA重置...\r\n");
    XAxiDma_Reset(axidma_ptr);
    
    reset_timeout = RESET_TIMEOUT_COUNTER;
    while (reset_timeout > 0) {
        if (XAxiDma_ResetIsDone(axidma_ptr)) {
            xil_printf("DMA重置成功完成\r\n");
            break;
        }
        reset_timeout--;
        
        if (reset_timeout == 0) {
            xil_printf("警告: DMA重置超时!\r\n");
        }
    }
    
    // 确认重置后的状态
    u32 mm2s_sr = XAxiDma_ReadReg(axidma_ptr->RegBase, XAXIDMA_SR_OFFSET);
    u32 s2mm_sr = XAxiDma_ReadReg(axidma_ptr->RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
    
    xil_printf("重置后状态: MM2S=0x%08X, S2MM=0x%08X\r\n", mm2s_sr, s2mm_sr);
    
    // 重置后 Halted=1, Idle=0 是正常的 (根据Xilinx文档)
    // 这表示DMA处于停止状态，正等待启动
    if ((mm2s_sr & 0x00000001) != 0x00000001) {
        xil_printf("警告: 重置后MM2S未处于Halted状态 (预期0x1，实际0x%X)!\r\n", mm2s_sr & 0x00000001);
    }
    
    if ((s2mm_sr & 0x00000001) != 0x00000001) {
        xil_printf("警告: 重置后S2MM未处于Halted状态 (预期0x1，实际0x%X)!\r\n", s2mm_sr & 0x00000001);
    }
    
    // 检查是否有任何错误位
    if (mm2s_sr & (XAXIDMA_SR_DMADECERR_MASK | XAXIDMA_SR_DMASLVERR_MASK | XAXIDMA_SR_DMAINTRERR_MASK)) {
        xil_printf("警告: MM2S通道有错误标志!\r\n");
    }
    
    if (s2mm_sr & (XAXIDMA_SR_DMADECERR_MASK | XAXIDMA_SR_DMASLVERR_MASK | XAXIDMA_SR_DMAINTRERR_MASK)) {
        xil_printf("警告: S2MM通道有错误标志!\r\n");
    }
    
    // 设置MM2S和S2MM控制寄存器，尝试手动启动通道
    // 注意：XAxiDma_SimpleTransfer会在执行时再次设置这些位
    xil_printf("设置DMA通道控制寄存器为运行状态...\r\n");
    XAxiDma_WriteReg(axidma_ptr->RegBase, XAXIDMA_CR_OFFSET, 
                   XAxiDma_ReadReg(axidma_ptr->RegBase, XAXIDMA_CR_OFFSET) | XAXIDMA_CR_RUNSTOP_MASK);
    XAxiDma_WriteReg(axidma_ptr->RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET, 
                   XAxiDma_ReadReg(axidma_ptr->RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET) | XAXIDMA_CR_RUNSTOP_MASK);
    
    // 读取更新后的状态
    mm2s_sr = XAxiDma_ReadReg(axidma_ptr->RegBase, XAXIDMA_SR_OFFSET);
    s2mm_sr = XAxiDma_ReadReg(axidma_ptr->RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
    xil_printf("启动后状态: MM2S=0x%08X, S2MM=0x%08X\r\n", mm2s_sr, s2mm_sr);
}

/**
 * 打印DMA详细状态信息
 */
static void print_dma_status(XAxiDma *axidma_ptr) {
    u32 mm2s_cr = XAxiDma_ReadReg(axidma_ptr->RegBase, XAXIDMA_CR_OFFSET);
    u32 mm2s_sr = XAxiDma_ReadReg(axidma_ptr->RegBase, XAXIDMA_SR_OFFSET);
    u32 s2mm_cr = XAxiDma_ReadReg(axidma_ptr->RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET);
    u32 s2mm_sr = XAxiDma_ReadReg(axidma_ptr->RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
    
    xil_printf("\r\n=== DMA详细状态 ===\r\n");
    xil_printf("MM2S控制寄存器 (0x%08X):\r\n", mm2s_cr);
    xil_printf("  Run/Stop: %d (1=运行, 0=停止)\r\n", (mm2s_cr & XAXIDMA_CR_RUNSTOP_MASK) ? 1 : 0);
    xil_printf("  其他控制位: 0x%08X\r\n", mm2s_cr & ~XAXIDMA_CR_RUNSTOP_MASK);
    
    xil_printf("MM2S状态寄存器 (0x%08X):\r\n", mm2s_sr);
    xil_printf("  Halted: %d, Idle: %d\r\n", 
              (mm2s_sr & 0x00000001) ? 1 : 0,
              (mm2s_sr & XAXIDMA_SR_IDLE_MASK) ? 1 : 0);
    xil_printf("  SGIncld: %d, IRQComplete: %d\r\n",
              (mm2s_sr & XAXIDMA_SR_SGINCLD_MASK) ? 1 : 0,
              (mm2s_sr & XAXIDMA_SR_IRQCOMPLETE_MASK) ? 1 : 0);
    xil_printf("  错误标志 (IntErr:SlvErr:DecErr): %d:%d:%d\r\n",
              (mm2s_sr & XAXIDMA_SR_DMAINTRERR_MASK) ? 1 : 0,
              (mm2s_sr & XAXIDMA_SR_DMASLVERR_MASK) ? 1 : 0,
              (mm2s_sr & XAXIDMA_SR_DMADECERR_MASK) ? 1 : 0);
    
    xil_printf("S2MM控制寄存器 (0x%08X):\r\n", s2mm_cr);
    xil_printf("  Run/Stop: %d (1=运行, 0=停止)\r\n", (s2mm_cr & XAXIDMA_CR_RUNSTOP_MASK) ? 1 : 0);
    xil_printf("  其他控制位: 0x%08X\r\n", s2mm_cr & ~XAXIDMA_CR_RUNSTOP_MASK);
    
    xil_printf("S2MM状态寄存器 (0x%08X):\r\n", s2mm_sr);
    xil_printf("  Halted: %d, Idle: %d\r\n", 
              (s2mm_sr & 0x00000001) ? 1 : 0,
              (s2mm_sr & XAXIDMA_SR_IDLE_MASK) ? 1 : 0);
    xil_printf("  SGIncld: %d, IRQComplete: %d\r\n",
              (s2mm_sr & XAXIDMA_SR_SGINCLD_MASK) ? 1 : 0,
              (s2mm_sr & XAXIDMA_SR_IRQCOMPLETE_MASK) ? 1 : 0);
    xil_printf("  错误标志 (IntErr:SlvErr:DecErr): %d:%d:%d\r\n",
              (s2mm_sr & XAXIDMA_SR_DMAINTRERR_MASK) ? 1 : 0,
              (s2mm_sr & XAXIDMA_SR_DMASLVERR_MASK) ? 1 : 0,
              (s2mm_sr & XAXIDMA_SR_DMADECERR_MASK) ? 1 : 0);
    xil_printf("========================\r\n\r\n");
}

// S2MM错误诊断函数
static void diagnose_s2mm_failure(XAxiDma *axidma_ptr, u8 *rx_buffer, int length) {
    // 检查缓冲区地址对齐
    if (!IS_ALIGNED(rx_buffer)) {
        xil_printf("错误: 接收缓冲区 (0x%08X) 未对齐到 %d 字节边界\r\n", 
                  (UINTPTR)rx_buffer, BUFFER_ALIGNMENT);
    }
    
    // 检查缓冲区地址范围是否有效
    if ((UINTPTR)rx_buffer < 0x00100000 || (UINTPTR)rx_buffer > 0x1FFFFFFF) {
        xil_printf("错误: 接收缓冲区地址 (0x%08X) 可能超出有效范围\r\n", (UINTPTR)rx_buffer);
        xil_printf("      有效地址范围一般为: 0x00100000 - 0x1FFFFFFF\r\n");
    }
    
    // 检查DMA是否已正确初始化
    if (!axidma_ptr->IsReady) {
        xil_printf("错误: DMA尚未正确初始化\r\n");
    }
    
    // 检查S2MM通道是否可用
    if (!axidma_ptr->HasS2Mm) {
        xil_printf("错误: 此DMA实例不支持S2MM功能\r\n");
    }
    
    // 检查数据长度是否为0
    if (length == 0) {
        xil_printf("错误: 数据长度为0\r\n");
    }
    
    // 检查DMA通道状态
    u32 s2mm_sr = XAxiDma_ReadReg(axidma_ptr->RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET);
    u32 s2mm_cr = XAxiDma_ReadReg(axidma_ptr->RegBase + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET);
    
    xil_printf("S2MM通道状态: SR=0x%08X CR=0x%08X\r\n", s2mm_sr, s2mm_cr);
    
    // 检查通道是否忙
    if (XAxiDma_Busy(axidma_ptr, XAXIDMA_DEVICE_TO_DMA)) {
        xil_printf("错误: S2MM通道当前正忙\r\n");
    }
    
    // 检查是否SG模式
    if (XAxiDma_HasSg(axidma_ptr)) {
        xil_printf("错误: DMA配置为SG模式，但SimpleTransfer需要简单模式\r\n");
    }
    
    // 检查通道是否停止
    if (!(s2mm_cr & XAXIDMA_CR_RUNSTOP_MASK)) {
        xil_printf("错误: S2MM通道未启动 (Run位未置位)\r\n");
    }
    
    xil_printf("\r\n=== 高级诊断信息 ===\r\n");
    xil_printf("1. 检查硬件设计:\r\n");
    xil_printf("   - S2MM AXIS接口是否有设备连接\r\n");
    xil_printf("   - DMA时钟域设置是否正确\r\n");
    xil_printf("   - AXI4总线宽度设置是否匹配\r\n");
    xil_printf("2. 尝试修改设置:\r\n");
    xil_printf("   - 重新配置DMA或简化硬件设计进行测试\r\n");
    xil_printf("   - 确认硬件设计中S2MM通道是否正确连接和启用\r\n");
    xil_printf("   - 检查AXI DMA IP核的配置参数\r\n");
    xil_printf("3. 驱动程序可能出现问题:\r\n");
    xil_printf("   - 检查BSP中的DMA驱动程序版本\r\n");
    xil_printf("   - SimpleTransfer函数可能无法正确配置寄存器\r\n");
    xil_printf("===========================\r\n");
    
    // 直接检查DMA基地址是否有效
    Xil_AssertVoid(axidma_ptr != NULL);
    xil_printf("\r\n=== 尝试直接访问DMA寄存器 ===\r\n");
    u32 dma_base = axidma_ptr->RegBase;
    xil_printf("DMA基地址: 0x%08X\r\n", dma_base);
    
    // 尝试读取DMA版本寄存器（扩展诊断）
    u32 version_info = XAxiDma_ReadReg(dma_base, 0x00);
    xil_printf("DMA硬件标识/版本: 0x%08X\r\n", version_info);
    
    // 尝试直接控制DMA
    xil_printf("\r\n=== 尝试直接控制DMA S2MM通道 ===\r\n");
    xil_printf("1. 手动停止S2MM通道\r\n");
    XAxiDma_WriteReg(dma_base + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET, 
                    XAxiDma_ReadReg(dma_base + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET) & ~XAXIDMA_CR_RUNSTOP_MASK);
    xil_printf("2. 等待S2MM通道停止\r\n");
    while (!(XAxiDma_ReadReg(dma_base + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET) & 0x00000001)) {
        // 等待Halted位
    }
    xil_printf("3. 手动设置接收缓冲区地址\r\n");
    XAxiDma_WriteReg(dma_base + XAXIDMA_RX_OFFSET, 0x48, (u32)((UINTPTR)rx_buffer)); // 缓冲区地址寄存器
    xil_printf("4. 手动设置缓冲区长度\r\n");
    XAxiDma_WriteReg(dma_base + XAXIDMA_RX_OFFSET, 0x58, length); // 缓冲区长度寄存器
    xil_printf("5. 手动启动S2MM通道\r\n");
    XAxiDma_WriteReg(dma_base + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET,
                    XAxiDma_ReadReg(dma_base + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET) | XAXIDMA_CR_RUNSTOP_MASK);
    
    xil_printf("手动设置后S2MM SR=0x%08X CR=0x%08X\r\n",
               XAxiDma_ReadReg(dma_base + XAXIDMA_RX_OFFSET, XAXIDMA_SR_OFFSET),
               XAxiDma_ReadReg(dma_base + XAXIDMA_RX_OFFSET, XAXIDMA_CR_OFFSET));
    xil_printf("注意: 这是诊断性的直接控制，不保证工作，仅用于排除硬件配置问题\r\n");
    xil_printf("===========================\r\n");
}

/**
 * 手动设置DMA传输（不使用SimpleTransfer）
 */
static int manual_dma_transfer(XAxiDma *axidma_ptr, UINTPTR tx_buffer, UINTPTR rx_buffer, u32 length) {
    u32 dma_base = axidma_ptr->RegBase;
    u32 mm2s_status, s2mm_status;
    
    xil_printf("\r\n=== 开始手动DMA传输 ===\r\n");
    
    // 先复位DMA确保清除先前状态
    XAxiDma_Reset(axidma_ptr);
    int reset_timeout = RESET_TIMEOUT_COUNTER;
    while (reset_timeout > 0) {
        if (XAxiDma_ResetIsDone(axidma_ptr)) {
            xil_printf("DMA重置成功\r\n");
            break;
        }
        reset_timeout--;
    }
    if (reset_timeout == 0) {
        xil_printf("错误: DMA重置超时\r\n");
        return XST_FAILURE;
    }
    
    // Step 1: 设置S2MM接收端（目标地址和长度）
    xil_printf("1. 设置S2MM (接收端)...\r\n");
    XAxiDma_WriteReg(dma_base, XAXIDMA_S2MM_DA_LSB_OFFSET, (u32)rx_buffer);
    XAxiDma_WriteReg(dma_base, XAXIDMA_S2MM_DA_MSB_OFFSET, 0); // 假设地址为32位
    XAxiDma_WriteReg(dma_base, XAXIDMA_S2MM_LENGTH_OFFSET, length);
    
    // Step 2: 启动S2MM通道
    xil_printf("2. 启动S2MM通道...\r\n");
    XAxiDma_WriteReg(dma_base, XAXIDMA_S2MM_DMACR_OFFSET, 
                    XAxiDma_ReadReg(dma_base, XAXIDMA_S2MM_DMACR_OFFSET) | XAXIDMA_CR_RUNSTOP_MASK);
    
    s2mm_status = XAxiDma_ReadReg(dma_base, XAXIDMA_S2MM_DMASR_OFFSET);
    xil_printf("   S2MM设置状态: SR=0x%08X CR=0x%08X\r\n",
              s2mm_status, XAxiDma_ReadReg(dma_base, XAXIDMA_S2MM_DMACR_OFFSET));
    
    // Step 3: 设置MM2S发送端（源地址和长度）
    xil_printf("3. 设置MM2S (发送端)...\r\n");
    XAxiDma_WriteReg(dma_base, XAXIDMA_MM2S_SA_LSB_OFFSET, (u32)tx_buffer);
    XAxiDma_WriteReg(dma_base, XAXIDMA_MM2S_SA_MSB_OFFSET, 0); // 假设地址为32位
    XAxiDma_WriteReg(dma_base, XAXIDMA_MM2S_LENGTH_OFFSET, length);
    
    // Step 4: 启动MM2S通道
    xil_printf("4. 启动MM2S通道...\r\n");
    XAxiDma_WriteReg(dma_base, XAXIDMA_MM2S_DMACR_OFFSET, 
                    XAxiDma_ReadReg(dma_base, XAXIDMA_MM2S_DMACR_OFFSET) | XAXIDMA_CR_RUNSTOP_MASK);
    
    mm2s_status = XAxiDma_ReadReg(dma_base, XAXIDMA_MM2S_DMASR_OFFSET);
    xil_printf("   MM2S设置状态: SR=0x%08X CR=0x%08X\r\n",
              mm2s_status, XAxiDma_ReadReg(dma_base, XAXIDMA_MM2S_DMACR_OFFSET));
    
    xil_printf("5. 传输已设置，等待完成...\r\n");
    xil_printf("=========================\r\n");
    
    return XST_SUCCESS;
}
