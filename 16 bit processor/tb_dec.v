`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:57:01 01/14/2025
// Design Name:   DECODER
// Module Name:   C:/Users/Virtu/Desktop/New folder/updated/tb_dec.v
// Project Name:  updated
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DECODER
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_dec;

	// Inputs
	reg [15:0] instr;
	reg [7:0] pc;

	// Outputs
	wire [3:0] opcode;
	wire [2:0] rd;
	wire [2:0] rs;
	wire [2:0] rt;
	wire [5:0] constant;
	wire [2:0] shamt;
	wire [7:0] address;
	wire mem_read;
	wire mem_write;
	wire reg_write;
	wire [15:0] rs_data;
	wire [15:0] rt_data;
	wire [15:0] rd_data;
	wire [7:0] pc_1;
	wire [15:0] hi_out;
	wire [15:0] lo_out;
	wire [15:0] rd_load;
	wire [31:0] TEMP;

	// Instantiate the Unit Under Test (UUT)
	DECODER uut (
		.opcode(opcode), 
		.rd(rd), 
		.rs(rs), 
		.rt(rt), 
		.constant(constant), 
		.shamt(shamt), 
		.address(address), 
		.instr(instr), 
		.mem_read(mem_read), 
		.mem_write(mem_write), 
		.reg_write(reg_write), 
		.rs_data(rs_data), 
		.rt_data(rt_data), 
		.rd_data(rd_data), 
		.pc(pc), 
		.pc_1(pc_1), 
		.hi_out(hi_out), 
		.lo_out(lo_out), 
		.rd_load(rd_load), 
		.TEMP(TEMP)
	);

	initial begin
		// Initialize Inputs
		instr = 0;
		pc = 0;

		// Wait 100 ns for global reset to finish
		#100;
		instr=16'b1110_111_001_001_001;
		pc=1;
        
		// Add stimulus here

	end
      
endmodule

