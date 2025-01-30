`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:40:43 01/14/2025 
// Design Name: 
// Module Name:    DATAPATH 
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
module DATAPATH(opcode,rd,rs,rt,shamt,constant,clk,rd_data,rs_data,rt_data,address,pc,pc_1,mem_read,mem_write,hi_out,lo_out,reg_write,rd_load,TEMP);
input clk;
input [3:0] opcode;
input mem_read,mem_write,reg_write;
input [2:0] rd,rs,rt,shamt;
input [5:0] constant;
input[7:0] address;
output reg [15:0] rd_data;
output reg [15:0] rs_data,rt_data,rd_load;
output  [31:0] TEMP;
//reg [15:0] rs_data,rt_data;
input [7:0] pc;
output reg [7:0] pc_1;
output [15:0]hi_out,lo_out;

///////////////////////// REG FILE ///////////////////
reg [15:0] regfile[0:15];
initial
begin
  regfile[0]=16'b0000000000000001;
  regfile[1]=16'b0000000001000001;
  regfile[2]=16'b0000000000110111;
  regfile[3]=16'b0000000010000001;
  regfile[4]=16'b0000000111000010;
  regfile[5]=16'b0000000000011100;
  regfile[6]=16'b0000000000100100;
  regfile[7]=16'b0000000000010000;
  regfile[8]=16'b0000000000000001;
  regfile[9]=16'b0000000001000001;
  regfile[10]=16'b0000000000110111;
  regfile[11]=16'b0000000010000001;
  regfile[12]=16'b0000000111000010;
  regfile[13]=16'b0000000000011100;
  regfile[14]=16'b0000000000100100;
  regfile[15]=16'b0000000000010000;
  
end
///////////////////////////////////////////special registers//////////////
reg [15:0] special_reg [0:1];
initial
begin
special_reg[0] = 16'b 0000000000000000;                 // hi register
special_reg[1] = 16'b 0000000000000000;                 // lo register
end

always@(pc)
begin
        rs_data=regfile[rs];
        rt_data=regfile[rt];
		  rd_load=regfile[rd];
end

    ALU alu(
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
		  .mem_read(mem_read));
	 
//	 wire [7:0] address;    // 8-bit address for RAM
//wire [15:0] data_in;   // 16-bit data input for RAM
//wire [15:0] data_out;  // 16-bit data output from RAM

//	 RAM ram(.pc(pc),
//	 .mem_read(mem_read),
//	 .mem_write(mem_write),
//	 .constant(constant),
//    .rs_data(rs_data),
//	 .data_in(rd_load),
//	 .data_out(rd_data));
//always @(pc)
//begin
//regfile[rd] = rd_data;
//	special_reg[0] = hi_out;
	//special_reg[1] = lo_out;	
//end	
endmodule
