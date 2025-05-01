#include "Vaxi_self_test.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>
#include "axi_helper.h"

// 仿真时间单位
#define RESET_PERIOD  5
#define PERIOD        10
#define SIM_PERIOD    1000

// 内存映射地址
#define CONFIG_BASE 0x80
#define CONFIG_AREA 16
#define WRITE_BASE  0x00
#define WRITE_AREA  64
#define READ_BASE   0x40
#define READ_AREA   64

#define CONFIG_WRITE_OUTRANGE 0x88

// AXI响应码
#define AXI_RESP_OKAY    0
#define AXI_RESP_EXOKAY  1
#define AXI_RESP_SLVERR  2
#define AXI_RESP_DECERR  3


// 主函数示例 - 展示如何使用AXI读写函数
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // 创建模块实例
    Vaxi_self_test* top = new Vaxi_self_test;
    
    // 创建波形文件
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("wave.vcd");
    
    vluint64_t sim_time = 0;
    
    // 初始化
    axi_init(top);
    
    // 记录初始状态
    top->eval();
    tfp->dump(sim_time++);
    
    // 复位
    axi_reset(top, tfp, sim_time);
    
    // 测试写入
    std::cout << "========= Start AXI Write Test =========" << std::endl;
    print_region_info("Write Area测试", WRITE_BASE, WRITE_AREA);
    sweep_write(top, tfp, sim_time, WRITE_BASE, WRITE_AREA);
    
    std::cout << "========= Undefined Behavior Test =========" << std::endl;
    print_region_info("读区域写测试", READ_BASE, READ_AREA);
    sweep_write(top, tfp, sim_time, READ_BASE, READ_AREA);

    std::cout << "========= Check Error Information =========" << std::endl;
    uint32_t error_message = axi_read(top, CONFIG_WRITE_OUTRANGE, tfp, sim_time);
    print_axi_result("读取错误计数器", CONFIG_WRITE_OUTRANGE, error_message, true);
    
    // 延迟几个周期
    delay_clock(top, tfp, sim_time, 4);
    
    // 测试读取
    std::cout << "========= Start AXI Read Test =========" << std::endl;
    print_region_info("Read Area测试", READ_BASE, READ_AREA);
    sweep_read(top, tfp, sim_time, READ_BASE, READ_AREA);
    
    std::cout << "========= Read Write Area Test =========" << std::endl;
    print_region_info("读写区域测试", WRITE_BASE, WRITE_AREA);
    sweep_read(top, tfp, sim_time, WRITE_BASE, WRITE_AREA);
    
    std::cout << "========= Read Config Area =========" << std::endl;
    print_region_info("配置区域测试", CONFIG_BASE, CONFIG_AREA);
    sweep_read(top, tfp, sim_time, CONFIG_BASE, CONFIG_AREA);
    
    // 再执行一些时钟周期
    delay_clock(top, tfp, sim_time, 10);
    
    // 确保最后的状态被记录
    top->eval();
    tfp->dump(sim_time);
    tfp->flush();
    
    // 清理
    tfp->close();
    delete top;
    delete tfp;
    
    std::cout << "仿真完成，总时间: " << sim_time << std::endl;
    return 0;
}