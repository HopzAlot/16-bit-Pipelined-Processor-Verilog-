`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:40:54 01/14/2025 
// Design Name: 
// Module Name:    ALU 
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
module ALU(shamt,rs_data, rt_data,constant,opcode,address,rd_data, hi_out, lo_out,pc,pc_1,reg_write,TEMP,rd_load,mem_write,mem_read);
    input [2:0] shamt;              // shamt: 3-bit shift amount
    input [15:0] rs_data, rt_data,rd_load; // 16-bit inputs
    input[5:0] constant;
	 input reg_write,mem_write,mem_read;
    input [3:0] opcode;             // 4-bit opcode (decimal values)
    input [7:0] address;            // 8-bit address for jump instructions
    output reg [15:0] rd_data, hi_out, lo_out; // 16-bit outputs

	output reg [31:0] TEMP;                // Temporary register for 32-bit multiplication
//    reg [15:0] datamem [0:255];     // Expanded memory array
    input [7:0] pc;                  // Program counter for jump instructions
    output reg [7:0] pc_1;

    // Initialize memory
//    initial begin
//        datamem[0] = 16'b0000000000000001;
//        datamem[1] = 16'b0000000000000101;
  //      datamem[2] = 16'b0000000000000000;
    //    datamem[3] = 16'b0000000000000000;
      //  datamem[4] = 16'b0000000000000011;
        //datamem[5] = 16'b0000000000000001;
        //datamem[6] = 16'b0000000000000001;
        //datamem[7] = 16'b0000000000000001;
    //end
    // ALU operation
    always @(pc) begin            // Default: clear lo_out

        if (opcode == 0 & reg_write==1) begin
            rd_data = rs_data + rt_data;           // add Rd = Rs + Rt
        end else if (opcode == 1 & reg_write ==1) begin
            rd_data = rs_data << shamt;       // sll Rd = Rs << shamt
        end else if (opcode == 2 & reg_write ==1) begin
            rd_data = rs_data >> shamt;       // srl Rd = Rs >> shamt
        end else if (opcode == 3 & reg_write ==1) begin
            rd_data = rs_data | rt_data;           // or Rd = Rs | Rt
        end else if (opcode == 4 & reg_write ==1) begin
            rd_data = rs_data & rt_data;           // and Rd = Rs & Rt
        end else if (opcode == 5 & reg_write ==1) begin
            rd_data = rs_data + constant;     // addi Rd = Rs + constant
        end else if (opcode == 6 & reg_write ==1) begin
            rd_data = constant;          // li Rd = constant
        end 
//else if (opcode == 7) begin
       //     rd_data = mem[rs_data + constant]; // lw Rd = memory[Rs + constant]
       // end else if (opcode == 8) begin
         //   mem[rs_data + constant] = rd_data; // sw memory[Rs + constant] = Rd
		  else if (opcode == 9) begin
            pc_1 = pc + address;      // j PC = PC + address
        end else if (opcode == 13 & reg_write ==1) begin
            TEMP = rs_data * rt_data;         // mul [Hi, Lo] = Rs   Rt
            hi_out = TEMP[31:16];
            lo_out = TEMP[15:0];
        end else if (opcode == 14 & reg_write ==1) begin
            rd_data = lo_out;             // mflo Rd = Lo
        end else if (opcode == 12 & reg_write ==1) begin
            rd_data = hi_out;             // mfhi Rd = Hi
        end else if (opcode == 10 & rs_data == 0) begin
            pc_1 = pc + address;      // beqz PC = PC + address if Rs == 0
        end else if (opcode == 11 & rd_load == rs_data) begin
            pc_1 = pc + address;      // beq PC = PC + address if Rd == Rs
        end
   end
	 RAM ram(.pc(pc),
	 .mem_read(mem_read),
	 .mem_write(mem_write),
	 .constant(constant),
    .rs_data(rs_data),
	 .rd_load(rd_load),
	 .rd_data(rd_data),
	 .opcode(opcode));
endmodule
