`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:40:16 01/14/2025 
// Design Name: 
// Module Name:    CONTROLUNIT 
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
module CONTROLUNIT(TEMP,clk,rst,opcode,rd,rs,rt,shamt,constant,address,mem_read, mem_write, reg_write,rd_data,pc,hi_out,lo_out,pc_1,rs_data,rt_data,rd_load);
input clk, rst;
output [3:0] opcode;
output [2:0] rd, rs, rt, shamt;
output [5:0] constant;
output [7:0] address;
output[31:0] TEMP;
output [15:0] rd_data,rs_data,rt_data,rd_load;
output mem_read, mem_write, reg_write;
reg [15:0] instr;
output reg [7:0] pc,pc_1;
output [15:0] hi_out,lo_out;
//PC
always @ (posedge clk,posedge rst)
begin
	if(rst==1) 
	begin
		pc<=0;
	end
	else
	begin
		pc <= pc + 1; 
	end
end
//ROM
reg [15:0] ROM [0:15];
initial
begin
ROM[0]  = 16'b0000_111_001_001_000; // add Rd = Rs + Rt
ROM[1]  = 16'b0001_111_001_000_001; // sll Rd = Rs << shamt
ROM[2]  = 16'b0010_111_001_000_001; // slr Rd = Rs >> shamt
ROM[3]  = 16'b0011_111_001_001_000; // or Rd = Rs | Rt
ROM[4]  = 16'b0100_111_001_001_000; // and Rd = Rs & Rt
ROM[5]  = 16'b1010_111_001_001_000; // mul [Hi, Lo] = Rs   Rt
ROM[6]  = 16'b1011_111_000_001_000; // mflo Rd = Lo
ROM[7]  = 16'b1100_111_000_001_000; // mfhi Rd = Hi
ROM[8]  = 16'b0101_111_001_001_010; // addi Rd = Rs + constant
ROM[9]  = 16'b0110_111_000_000_010; // li Rd = constant
ROM[10] = 16'b0111_111_001_000_010; // lw Rd = memory[Rs + constant]
ROM[11] = 16'b1000_111_001_000_010; // sw memory[Rs + constant] = Rd
ROM[12] = 16'b1001_000_000_000_010; // J address, PC = PC + address
ROM[13] = 16'b1010_111_001_000_010; // beqz Rd, Label
ROM[14] = 16'b1011_111_001_001_010; // beq Rd, Rs, Label
ROM[15] = 16'b0000_000_000_000_000; // No operation or unused
end
always@(pc)
begin
  instr = ROM[pc];
end

always@(pc_1)
begin
	pc = pc_1;
end	 
	 DECODER decoder(.TEMP(TEMP),.rd_load(rd_load),.opcode(opcode),.rd(rd),.rs(rs),.rt(rt),.constant(constant),.shamt(shamt),.address(address),.instr(instr),.mem_read(mem_read),.mem_write(mem_write),.reg_write(reg_write),.rs_data(rs_data),.rt_data(rt_data),.rd_data(rd_data),.pc(pc),.pc_1(pc_1),.hi_out(hi_out),.lo_out(lo_out));
endmodule
