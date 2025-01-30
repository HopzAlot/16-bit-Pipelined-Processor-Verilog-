`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:41:51 01/14/2025
// Design Name:   ALU
// Module Name:   C:/Users/Virtu/Desktop/New folder/updated/tb_de.v
// Project Name:  updated
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_de;

	// Inputs
	reg [2:0] shamt;
	reg [15:0] rs_data;
	reg [15:0] rt_data;
	reg [5:0] constant;
	reg [3:0] opcode;
	reg [7:0] address;
	reg [7:0] pc;
	reg reg_write;
	reg [15:0] rd_load;
	reg mem_write;
	reg mem_read;

	// Outputs
	wire [15:0] rd_data;
	wire [15:0] hi_out;
	wire [15:0] lo_out;
	wire [7:0] pc_1;
	wire [31:0] TEMP;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.shamt(shamt), 
		.rs_data(rs_data), 
		.rt_data(rt_data), 
		.constant(constant), 
		.opcode(opcode), 
		.address(address), 
		.rd_data(rd_data), 
		.hi_out(hi_out), 
		.lo_out(lo_out), 
		.pc(pc), 
		.pc_1(pc_1), 
		.reg_write(reg_write), 
		.rd_load(rd_load), 
		.TEMP(TEMP),
		.mem_write(mem_write), 
		.mem_read(mem_read)
	);

	initial begin
		// Initialize Inputs
		shamt = 0;
		rs_data = 0;
		rt_data = 0;
		constant = 0;
		opcode = 0;
		address = 0;
		pc = 0;
		reg_write = 0;
		rd_load = 0;
		mem_write = 0;
		mem_read = 0;

		// Wait 100 ns for global reset to finish
		#100;
				shamt = 0;
		rs_data = 0;
		rt_data = 0;
		constant = 0;
		opcode = 7;
		address = 0;
		pc = 1;
		reg_write = 0;
		rd_load = 2;
		mem_write = 0;
		mem_read = 1;

        
		// Add stimulus here

	end
      
endmodule

