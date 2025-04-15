#include <systemc.h>
#include <cstdlib>  // for rand()
#include <ctime>    // for time()
#include <iomanip>  // for setw, setfill
#include "jpeg_compression_pipeline_systemc.h"

using namespace std;

// 将8位值转换为二进制字符串的辅助函数
std::string to_binary(unsigned char value) {
    std::string result = "";
    for (int i = 7; i >= 0; i--) {
        result += ((value >> i) & 0x1) ? '1' : '0';
    }
    return result;
}

// Test bench for JPEG compression pipeline with detailed input output
SC_MODULE(jpeg_testbench) {
    // Clock and reset signals
    sc_clock clk;
    sc_signal<bool> reset_n;
    
    // Input signals
    sc_signal<sc_bv<8 * 64>> r_all;
    sc_signal<sc_bv<8 * 64>> g_all;
    sc_signal<sc_bv<8 * 64>> b_all;
    
    // Output signals
    sc_signal<sc_bv<32 * 64>> y_zigzag;
    sc_signal<sc_bv<32 * 64>> cb_zigzag;
    sc_signal<sc_bv<32 * 64>> cr_zigzag;
    
    // JPEG compression pipeline instance
    jpeg_compression_pipeline<>* jpeg_inst;
    
    // 存储生成的RGB数据的数组
    unsigned char r_values[64];
    unsigned char g_values[64];
    unsigned char b_values[64];
    
    // Test stimulus generation with detailed input display
    void generate_stimulus() {
        // Seed the random number generator
        srand(time(NULL));
        
        // Reset sequence
        reset_n.write(false);
        wait(10, SC_NS);
        reset_n.write(true);
        
        // Generate input data - 8x8 RGB block with random values
        sc_bv<8 * 64> r_data;
        sc_bv<8 * 64> g_data;
        sc_bv<8 * 64> b_data;
        
        cout << "=== 生成随机输入数据 ===" << endl;
        cout << "格式: 像素[行,列]: R=值(二进制) G=值(二进制) B=值(二进制)" << endl;
        cout << "----------------------------------------" << endl;
        
        // Fill the input data with random values
        for (int i = 0; i < 64; i++) {
            int row = i / 8;
            int col = i % 8;
            
            // Generate random RGB values between 0-255
            r_values[i] = rand() % 256;
            g_values[i] = rand() % 256;
            b_values[i] = rand() % 256;
            
            // 打印像素信息，包括位置、十进制值和二进制表示
            cout << "像素[" << row << "," << col << "]: ";
            cout << "R=" << setw(3) << setfill(' ') << (int)r_values[i] << "(" << to_binary(r_values[i]) << ") ";
            cout << "G=" << setw(3) << setfill(' ') << (int)g_values[i] << "(" << to_binary(g_values[i]) << ") ";
            cout << "B=" << setw(3) << setfill(' ') << (int)b_values[i] << "(" << to_binary(b_values[i]) << ")" << endl;
            
            // Convert to binary and store in bit vector
            for (int j = 0; j < 8; j++) {
                r_data[(i * 8) + j] = (r_values[i] >> j) & 0x1;
                g_data[(i * 8) + j] = (g_values[i] >> j) & 0x1;
                b_data[(i * 8) + j] = (b_values[i] >> j) & 0x1;
            }
        }
        
        // Write the randomized data to the input ports
        r_all.write(r_data);
        g_all.write(g_data);
        b_all.write(b_data);

        wait(100, SC_NS); // Wait for the clock to stabilize
        
        // 打印整个8x8输入矩阵的可视化表示
        cout << "\n=== 输入矩阵可视化表示 ===" << endl;
        
        // 打印R通道
        cout << "R通道:" << endl;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                cout << setw(3) << setfill(' ') << (int)r_values[row*8 + col] << " ";
            }
            cout << endl;
        }
        
        // 打印G通道
        cout << "\nG通道:" << endl;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                cout << setw(3) << setfill(' ') << (int)g_values[row*8 + col] << " ";
            }
            cout << endl;
        }
        
        // 打印B通道
        cout << "\nB通道:" << endl;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                cout << setw(3) << setfill(' ') << (int)b_values[row*8 + col] << " ";
            }
            cout << endl;
        }
        
        cout << "\n输入数据生成完成！" << endl;
        cout << "处理JPEG压缩流水线..." << endl;
        
        // Wait for pipeline processing to complete
        wait(1000, SC_NS);
        
        // Read results
        sc_bv<32 * 64> y_result = y_zigzag.read();
        sc_bv<32 * 64> cb_result = cb_zigzag.read();
        sc_bv<32 * 64> cr_result = cr_zigzag.read();
        
        // Print some results for verification
        cout << "\n压缩完成！前几个输出值:" << endl;
        
        cout << "\nY通道zigzag输出 (前8个值):" << endl;
        for (int i = 0; i < 8; i++) {
            cout << "Y[" << i << "]: ";
            for (int j = 0; j < 32; j++) {
                cout << y_result[(i * 32) + j];
                
                // Add space every 8 bits for readability
                if ((j + 1) % 8 == 0) {
                    cout << " ";
                }
            }
            cout << endl;
        }
        
        cout << "\nCb通道zigzag输出 (前8个值):" << endl;
        for (int i = 0; i < 8; i++) {
            cout << "Cb[" << i << "]: ";
            for (int j = 0; j < 32; j++) {
                cout << cb_result[(i * 32) + j];
                
                // Add space every 8 bits for readability
                if ((j + 1) % 8 == 0) {
                    cout << " ";
                }
            }
            cout << endl;
        }
        
        cout << "\nCr通道zigzag输出 (前8个值):" << endl;
        for (int i = 0; i < 8; i++) {
            cout << "Cr[" << i << "]: ";
            for (int j = 0; j < 32; j++) {
                cout << cr_result[(i * 32) + j];
                
                // Add space every 8 bits for readability
                if ((j + 1) % 8 == 0) {
                    cout << " ";
                }
            }
            cout << endl;
        }
        
        cout << "\n模拟完成！" << endl;
        
        // End simulation
        sc_stop();
    }
    
    SC_CTOR(jpeg_testbench) : clk("clk", 10, SC_NS) {
        // Create JPEG compression pipeline instance
        jpeg_inst = new jpeg_compression_pipeline<>("jpeg_compression");
        
        // Connect ports
        jpeg_inst->clk(clk);
        jpeg_inst->reset_n(reset_n);
        jpeg_inst->r_all(r_all);
        jpeg_inst->g_all(g_all);
        jpeg_inst->b_all(b_all);
        jpeg_inst->y_zigzag(y_zigzag);
        jpeg_inst->cb_zigzag(cb_zigzag);
        jpeg_inst->cr_zigzag(cr_zigzag);

        
        // Register test process
        SC_THREAD(generate_stimulus);
        sensitive << clk.posedge_event() << r_all << g_all << b_all;
    }
    
    ~jpeg_testbench() {
        delete jpeg_inst;
    }
};

int sc_main(int argc, char* argv[]) {
    // Create and run test bench
    jpeg_testbench tb("testbench");
    
    // Output simulation info
    cout << "=== JPEG压缩流水线模拟 ===" << endl;
    cout << "处理具有随机RGB值的8x8块" << endl;
    cout << "===========================" << endl;
    
    // Start simulation
    sc_start();
    
    return 0;
}