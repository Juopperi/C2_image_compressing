# AXI Interface Module

This module provides AXI4-Lite interface implementations and testing infrastructure for the C2 image compression system. It includes custom IP cores, test harnesses, and utility functions for AXI communication.

## 📁 Directory Structure

After running the organization script, the folder will be structured as follows:

```
8_axi_interface/
├── src/
│   ├── rtl/                    # RTL source files
│   │   ├── myip.sv            # Main IP core module
│   │   ├── user_functional_module.sv  # User logic implementation
│   │   ├── axi_self_test.sv   # Self-test module
│   │   └── myip_slave_lite_v1_0_S00_AXI.v  # AXI4-Lite slave interface
│   └── cpp/                   # C++ source files
│       ├── sim_main.cpp       # Main simulation driver
│       ├── myip_test.cpp      # IP core test suite
│       ├── dct_test.cpp       # DCT functionality tests
│       ├── main_vitis.cpp     # Vitis HLS integration
│       └── axi_helper.cpp     # AXI communication utilities
├── include/                   # Header files
│   ├── axi_helper.h          # AXI helper function declarations
│   └── VerilatorUtils.h      # Verilator utility functions
├── build/                     # Build system
│   ├── Makefile              # Main build configuration
│   ├── Makefile.self_test    # Self-test build rules
│   └── Makefile.myip         # IP core build rules
├── tests/                     # Test files and test cases
├── logs/                      # Simulation and build logs
│   └── log.log               # Main log file
├── docs/                      # Documentation
└── organize.py               # File organization script
```

## 🚀 Getting Started

### Prerequisites

- **Verilator**: For RTL simulation
- **GCC/G++**: For compiling C++ testbenches
- **Make**: For build automation
- **SystemVerilog**: Compatible simulator
- **Vivado** (optional): For synthesis and implementation

### Quick Setup

1. **Organize the files** (if needed):
   ```bash
   python3 organize.py
   ```

2. **Build the project**:
   ```bash
   cd build/
   make -f Makefile
   ```

3. **Run self-tests**:
   ```bash
   make -f Makefile.self_test
   ```

4. **Test the IP core**:
   ```bash
   make -f Makefile.myip
   ```

## 📋 Component Description

### RTL Components

#### `myip.sv`
- **Purpose**: Top-level module for the custom IP core
- **Interface**: AXI4-Lite slave interface
- **Functionality**: Integrates user logic with AXI communication

#### `user_functional_module.sv`
- **Purpose**: Contains the core functional logic
- **Features**: Image processing algorithms, data manipulation
- **Interface**: Internal signals to/from AXI interface

#### `axi_self_test.sv`
- **Purpose**: Built-in self-test functionality
- **Features**: Automated testing, register verification
- **Usage**: Validate AXI communication integrity

#### `myip_slave_lite_v1_0_S00_AXI.v`
- **Purpose**: AXI4-Lite slave interface implementation
- **Features**: Register access, handshaking protocols
- **Compliance**: AXI4-Lite specification

### C++ Components

#### `sim_main.cpp`
- **Purpose**: Main simulation driver
- **Features**: Verilator integration, test orchestration
- **Usage**: Entry point for RTL simulation

#### `myip_test.cpp`
- **Purpose**: Comprehensive IP core testing
- **Features**: Functional verification, performance testing
- **Coverage**: Register access, data path validation

#### `dct_test.cpp`
- **Purpose**: DCT-specific functionality testing
- **Features**: Algorithm verification, precision analysis
- **Integration**: Works with DCT hardware modules

#### `axi_helper.cpp/h`
- **Purpose**: AXI communication utilities
- **Features**: Read/write functions, transaction helpers
- **Benefits**: Simplified AXI interaction for tests

#### `VerilatorUtils.h`
- **Purpose**: Verilator simulation utilities
- **Features**: Clock generation, signal manipulation
- **Benefits**: Standardized simulation framework

## 🔧 Build System

The project uses multiple Makefiles for different build targets:

### `Makefile` (Main)
```bash
make                # Build all components
make clean          # Clean build artifacts
make sim            # Run simulation
```

### `Makefile.self_test`
```bash
make -f Makefile.self_test        # Build self-test
make -f Makefile.self_test run    # Run self-test
make -f Makefile.self_test clean  # Clean self-test artifacts
```

### `Makefile.myip`
```bash
make -f Makefile.myip             # Build IP core tests
make -f Makefile.myip test        # Run IP core tests
make -f Makefile.myip clean       # Clean IP artifacts
```

## 🧪 Testing

### Running Tests

1. **Unit Tests**:
   ```bash
   ./myip_test          # Run IP core unit tests
   ./dct_test           # Run DCT-specific tests
   ```

2. **Integration Tests**:
   ```bash
   ./sim_main           # Run full system simulation
   ```

3. **Self-Tests**:
   ```bash
   ./axi_self_test      # Run built-in diagnostics
   ```

### Test Coverage

- ✅ Register read/write operations
- ✅ AXI protocol compliance
- ✅ Data path integrity
- ✅ Error handling
- ✅ Performance benchmarks

## 📊 Performance Analysis

Monitor performance through:
- **Timing Analysis**: Clock frequency, setup/hold times
- **Resource Utilization**: LUTs, BRAMs, DSPs
- **Throughput**: Data processing rates
- **Latency**: Response times for AXI transactions

## 🔍 Debugging

### Log Files
- Check `logs/log.log` for detailed execution traces
- Enable verbose logging with `LOG_LEVEL=DEBUG`

### Common Issues
1. **AXI Timeout**: Check clock domains and reset signals
2. **Data Mismatch**: Verify endianness and data width
3. **Build Errors**: Ensure all dependencies are installed

## 🤝 Integration

### With Vivado
1. Add RTL files to Vivado project
2. Set `myip.sv` as top module
3. Configure AXI interface in block design
4. Generate bitstream

### With Software
1. Use `axi_helper` functions for communication
2. Include appropriate headers
3. Link against compiled libraries

## 📝 Development Notes

- Follow AXI4-Lite specification for interface compliance
- Use consistent naming conventions for signals
- Document register maps and memory layouts
- Maintain backward compatibility when updating interfaces

## 🐛 Known Issues

- None currently reported

## 📞 Support

For questions or issues, refer to:
- Project documentation in `docs/` folder
- Log files in `logs/` folder
- Main project README for overall context

---

**Last Updated**: [Current Date]
**Version**: 1.0
**Maintainer**: [Your Name/Team] 