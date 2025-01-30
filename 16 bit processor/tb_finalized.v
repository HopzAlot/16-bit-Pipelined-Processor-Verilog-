`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:55:22 01/14/2025
// Design Name:   CONTROLUNIT
// Module Name:   C:/Users/Virtu/Desktop/New folder/updated/tb_finalized.v
// Project Name:  updated
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CONTROLUNIT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_finalized;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [31:0] TEMP;
	wire [3:0] opcode;
	wire [2:0] rd;
	wire [2:0] rs;
	wire [2:0] rt;
	wire [2:0] shamt;
	wire [5:0] constant;
	wire [7:0] address;
	wire mem_read;
	wire mem_write;
	wire reg_write;
	wire [15:0] rd_data;
	wire [7:0] pc;
	wire [15:0] hi_out;
	wire [15:0] lo_out;
	wire [7:0] pc_1;
	wire [15:0] rs_data;
	wire [15:0] rt_data;
	wire [15:0] rd_load;

	// Instantiate the Unit Under Test (UUT)
	CONTROLUNIT uut (
		.TEMP(TEMP), 
		.clk(clk), 
		.rst(rst), 
		.opcode(opcode), 
		.rd(rd), 
		.rs(rs), 
		.rt(rt), 
		.shamt(shamt), 
		.constant(constant), 
		.address(address), 
		.mem_read(mem_read), 
		.mem_write(mem_write), 
		.reg_write(reg_write), 
		.rd_data(rd_data), 
		.pc(pc), 
		.hi_out(hi_out), 
		.lo_out(lo_out), 
		.pc_1(pc_1), 
		.rs_data(rs_data), 
		.rt_data(rt_data), 
		.rd_load(rd_load)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst=1;
		#100;
		rst=0;
        
		// Add stimulus here

	end
always
begin
#50;
clk=!clk;
end
      
endmodule

