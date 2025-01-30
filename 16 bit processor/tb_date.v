`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:55:40 01/14/2025
// Design Name:   DATAPATH
// Module Name:   C:/Users/Virtu/Desktop/New folder/updated/tb_date.v
// Project Name:  updated
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DATAPATH
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_date;

	// Inputs
	reg [3:0] opcode;
	reg [2:0] rd;
	reg [2:0] rs;
	reg [2:0] rt;
	reg [2:0] shamt;
	reg [5:0] constant;
	reg clk;
	reg [7:0] address;
	reg [7:0] pc;
	reg mem_read;
	reg mem_write;
	reg reg_write;

	// Outputs
	wire [15:0] rd_data;
	wire [15:0] rs_data;
	wire [15:0] rt_data;
	wire [7:0] pc_1;
	wire [15:0] hi_out;
	wire [15:0] lo_out;
	wire [15:0] rd_load;
	wire [31:0] TEMP;

	// Instantiate the Unit Under Test (UUT)
	DATAPATH uut (
		.opcode(opcode), 
		.rd(rd), 
		.rs(rs), 
		.rt(rt), 
		.shamt(shamt), 
		.constant(constant), 
		.clk(clk), 
		.rd_data(rd_data), 
		.rs_data(rs_data), 
		.rt_data(rt_data), 
		.address(address), 
		.pc(pc), 
		.pc_1(pc_1), 
		.mem_read(mem_read), 
		.mem_write(mem_write), 
		.hi_out(hi_out), 
		.lo_out(lo_out), 
		.reg_write(reg_write), 
		.rd_load(rd_load), 
		.TEMP(TEMP)
	);

	initial begin
		// Initialize Inputs
		opcode = 0;
		rd = 0;
		rs = 0;
		rt = 0;
		shamt = 0;
		constant = 0;
		clk = 0;
		address = 0;
		pc = 0;
		mem_read = 0;
		mem_write = 0;
		reg_write = 0;

		// Wait 100 ns for global reset to finish
		#100;
		opcode = 7;
		rd = 0;
		rs = 0;
		rt = 0;
		shamt = 0;
		constant = 0;
		clk = 0;
		address = 1;
		pc = 1;
		mem_read = 1;
		mem_write = 0;
		reg_write = 0;

        
		// Add stimulus here

	end
      
endmodule

