#ifndef AXI_HELPER_H
#define AXI_HELPER_H

#include "Vaxi_self_test.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

// AXI响应码
#define AXI_RESP_OKAY    0
#define AXI_RESP_EXOKAY  1
#define AXI_RESP_SLVERR  2
#define AXI_RESP_DECERR  3

// 内存映射地址
#define CONFIG_BASE 0x80
#define CONFIG_AREA 16
#define WRITE_BASE  0x00
#define WRITE_AREA  64
#define READ_BASE   0x40
#define READ_AREA   64

#define CONFIG_WRITE_OUTRANGE 0x88

// 仿真时间单位
#define RESET_PERIOD  5
#define PERIOD        10
#define SIM_PERIOD    1000

// 初始化AXI总线接口
void axi_init(Vaxi_self_test* top);

// 复位AXI总线接口
void axi_reset(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time);

// 延迟指定的时钟周期数
void delay_clock(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int delay);

// AXI写函数 - 向指定地址写入数据
bool axi_write(Vaxi_self_test* top, uint32_t addr, uint32_t data, VerilatedVcdC* tfp, vluint64_t& sim_time);

// AXI读函数 - 从指定地址读取数据
uint32_t axi_read(Vaxi_self_test* top, uint32_t addr, VerilatedVcdC* tfp, vluint64_t& sim_time);

// 扫描并写入一段连续的地址空间
void sweep_write(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int write_begin, int write_range);

// 扫描并读取一段连续的地址空间
void sweep_read(Vaxi_self_test* top, VerilatedVcdC* tfp, vluint64_t& sim_time, int read_begin, int read_range);

// 打印AXI传输结果
void print_axi_result(const char* operation, uint32_t addr, uint32_t data, bool success);

// 打印地址区域信息
void print_region_info(const char* region_name, int base, int size);

#endif // AXI_HELPER_H 