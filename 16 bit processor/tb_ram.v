`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:13:55 01/14/2025
// Design Name:   RAM
// Module Name:   C:/Users/Virtu/Desktop/New folder/updated/tb_ram.v
// Project Name:  updated
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_ram;

	// Inputs
	reg [7:0] pc;
	reg mem_read;
	reg mem_write;
	reg [5:0] constant;
	reg [15:0] rs_data;
	reg [15:0] data_in;

	// Outputs
	wire [15:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	RAM uut (
		.pc(pc), 
		.mem_read(mem_read), 
		.mem_write(mem_write), 
		.constant(constant), 
		.rs_data(rs_data), 
		.data_in(data_in), 
		.data_out(data_out)
	);

	initial begin
		// Initialize Inputs
		pc = 0;
		mem_read = 0;
		mem_write = 0;
		constant = 0;
		rs_data = 0;
		data_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
		pc = 1;
		mem_read = 1;
		mem_write = 0;
		constant = 1;
		rs_data = 2;
		data_in = 2;
        
		// Add stimulus here

	end
      
endmodule

