# 16-Bit Pipelined Processor

## Overview
I was assigned to build a 16-Bit Processor as my 1st semester project performing the basic operations.
This project implements a custom **16-bit pipelined processor** using **Verilog HDL**. The processor follows the **Harvard Architecture** and executes a basic set of instructions, including **ALU operations, Load Word (LW), and Store Word (SW)** instructions. The processor is currently compiling at **70% efficiency** and does not include additional flags.

## Features
- **16-bit Data Registers and Memory**
- **8-bit Program Counter (PC)**
- **Harvard Architecture** (Separate Instruction and Data Memory)
- **Pipeline Implementation** for improved performance
- **ALU Operations** (Addition, Logical Operations, Shifting, Multiplication)
- **Memory Operations** (LW, SW)
- **Basic Instruction Set Execution**

## Instruction Set
The processor supports the following instruction types:

### R-Type Instructions (Register-Register Operations)
| Instruction | Opcode | Function |
|------------|--------|----------|
| ADD Rd, Rs, Rt | 0000 | Rd = Rs + Rt |
| SLL Rd, Rs, shamt | 0001 | Rd = Rs << shamt |
| SLR Rd, Rs, shamt | 0010 | Rd = Rs >> shamt |
| OR Rd, Rs, Rt | 0011 | Rd = Rs OR Rt |
| AND Rd, Rs, Rt | 0100 | Rd = Rs AND Rt |
| MUL Rs, Rt | 1010 | [Hi, Lo] = Rs * Rt |
| MFLO Rd | 1011 | Rd = Lo |
| MFHI Rd | 1100 | Rd = Hi |

### I-Type Instructions (Immediate and Memory Operations)
| Instruction | Opcode | Function |
|------------|--------|----------|
| ADDI Rd, Rs, Imm | 0101 | Rd = Rs + Imm |
| LI Rd, Imm | 0110 | Rd = Imm |
| LW Rd, Imm(Rs) | 0111 | Rd = Memory[Rs + Imm] |
| SW Rd, Imm(Rs) | 1000 | Memory[Rs + Imm] = Rd |

### J-Type Instructions (Jump Operations)
| Instruction | Opcode | Function |
|------------|--------|----------|
| J Address | 1001 | PC = PC + Address |
| BEQZ Rd, Label | 1010 | PC = PC + Address (if Rd == 0) |
| BEQ Rd, Rs, Label | 1011 | PC = PC + Address (if Rd == Rs) |

## Implementation Details
- **Pipeline Stages:** The processor follows a **5-stage pipeline architecture**
  1. **Instruction Fetch (IF)**
  2. **Instruction Decode (ID)**
  3. **Execution (EX)**
  4. **Memory Access (MEM)**
  5. **Write Back (WB)**
- **Control Unit:** Manages control signals for each stage.
- **Data Path:** Handles register operations and ALU computations.

## Limitations
- The processor is **compiling at 70% efficiency**.
- **Additional flags (Zero, Negative, Carry, Overflow) are not implemented**.
- The instruction set is **basic** and can be extended for additional functionality.

## Future Improvements
- Optimize pipeline for **higher efficiency**.
- Implement **hazard detection and forwarding**.
- Add **additional instruction support**.
- Implement **status flags** for enhanced control.

## Getting Started
### Prerequisites
- **Verilog HDL Simulator** (ModelSim, Xilinx Vivado, or similar)
- **Quartus Prime/Vivado for FPGA implementation (optional)**

### Running the Project
1. Clone the repository:
    ```sh
   git clone https://github.com/HopzAlot/16-bit-Pipelined-Processor-Verilog-
   ```
2. Open the .v files in your Verilog simulator.
3. Make test files to check the working status of the files.
## Contributors
- **HOPZALOT** - Developer

