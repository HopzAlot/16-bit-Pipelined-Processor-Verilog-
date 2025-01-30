`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:40:30 01/14/2025 
// Design Name: 
// Module Name:    DECODER 
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
module DECODER(opcode, rd, rs, rt, constant, shamt, address, instr, mem_read, mem_write, reg_write, rs_data, rt_data,rd_data,pc,pc_1,hi_out,lo_out,rd_load,TEMP);
    output reg [3:0] opcode;
    output reg [2:0] rd, rs, rt, shamt;
    output reg [5:0] constant;
    output reg [7:0] address;
	 output [31:0] TEMP;
    output [7:0]pc_1;
	 output [15:0]  rd_data,rd_load;
    input [7:0] pc;
    output reg mem_read, mem_write, reg_write;
    input [15:0] instr;
    output[15:0] rs_data, rt_data;
    output [15:0] hi_out,lo_out;
    always @(pc) begin
        opcode = instr[3:0];
		  end
    always @(pc) begin
        if (opcode == 0 || opcode == 1 || opcode == 2 || opcode == 3 || opcode == 4) begin
            rs = instr[9:7];
            rt = instr[12:10];
            rd = instr[6:4];
            shamt = instr[15:13];
            reg_write = 1; // These instructions write to a register
        end
        else if (opcode == 5 || opcode == 6 || opcode == 7 || opcode == 8 ) begin
            rs = instr[9:7];
				rd=  instr[6:4];
				constant= instr[15:10];
            if (opcode == 7) mem_read = 1; // lw
            if (opcode == 8) mem_write = 1; // sw
        end 
        else if (opcode == 9 || opcode == 10 || opcode == 11) begin
            address=instr[12:4];
        end 
        else if (opcode == 12 || opcode == 13 || opcode == 14) begin
            rd= instr[6:4];
				rs= instr[9:7];
				rt= instr[12:10];
				reg_write=1;
        end
    end
DATAPATH datapath(.TEMP(TEMP),.rd_load(rd_load),.reg_write(reg_write),.opcode(opcode),.rd(rd),.rs(rs),.rt(rt),.shamt(shamt),.address(address),.constant(constant),.clk(clk),.rs_data(rs_data),.rt_data(rt_data),.rd_data(rd_data),.pc(pc),.pc_1(pc_1),.mem_read(mem_read),.mem_write(mem_write),.hi_out(hi_out),.lo_out(lo_out));

endmodule
