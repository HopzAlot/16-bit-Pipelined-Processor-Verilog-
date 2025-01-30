`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:41:04 01/14/2025 
// Design Name: 
// Module Name:    RAM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module RAM(pc,mem_read,mem_write,constant,rs_data,rd_load,rd_data,opcode);    
    input [7:0] pc;                      // Clock signal
	 input[3:0] opcode;
    input mem_read;                 // Memory read enable
    input mem_write;                // Memory write enable
    input [15:0] rd_load;           // 16-bit input data for write operations
    output reg [15:0] rd_data;      // 16-bit output data for read operations
    input[15:0] rs_data;
    input[5:0] constant;

    // Declare RAM as a 2D array of 256 locations, each 16 bits wide
    reg [15:0] RAM [0:30];
	 initial begin
    RAM[0]=3;
	 RAM[1]=5;
	 RAM[2]=7;
	 RAM[3]=1;
	 RAM[4]=7;
	 RAM[5]=2;
	 RAM[6]=2;
	 RAM[7]=4;
	 RAM[8]=6;
	 RAM[9]=1;
	 RAM[10]=2;
	 RAM[11]=8;
	 RAM[12]=6;
	 RAM[13]=5;
	 RAM[14]=3;
	 RAM[15]=2;
	 RAM[16]=2;
	 RAM[17]=2;
	 RAM[18]=2;
	 RAM[19]=2;
	 RAM[20]=2;
	 RAM[21]=2;
	 RAM[22]=2;
	 RAM[23]=2;
	 RAM[24]=2;
	 RAM[25]=2;
	 RAM[26]=2;
	 RAM[27]=2;
	 RAM[28]=2;
	 RAM[29]=2;
	 RAM[30]=2;
	 end

    // Synchronous read and write operation
    always @(pc) begin
        if (mem_write ==1 & opcode==8) begin
            // Write operation
            RAM[rs_data+constant] = rd_load;
        end
        else if (mem_read==1 & opcode==7) begin
            // Read operation
            rd_data = RAM[rs_data+constant];
        end
    end
endmodule

