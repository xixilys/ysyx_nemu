`timescale 1ns / 1ps
module vga_module (
	input clk,
	input rst,
//	input [23:0]vga_data,
	output vga_vsync,
	output vga_hsync, 
	output [3:0]vga_red,
	output [3:0]vga_green,
	output [3:0]vga_blue

);
(*mark_debug = "true"*)wire [9:0] h_addr;
(*mark_debug = "true"*)wire [9:0] v_addr;
(*mark_debug = "true"*)wire vga_valid;
(*mark_debug = "true"*)wire [11:0]vga_data;
wire vga_clk;

clk_converter clk_con(.clk_in1(clk),
	.clk_out1(vga_clk));
vga vga_1(vga_clk,rst,vga_data,h_addr,v_addr,vga_hsync,vga_vsync,vga_valid,vga_red,vga_green,vga_blue);


wire [9:0]cal_data_v = v_addr/10'd20;
(*mark_debug = "true"*)wire ver_sel = cal_data_v[0];
wire [9:0]cal_data_h = h_addr/10'd20;
(*mark_debug = "true"*)wire her_sel = cal_data_h[0];
wire color_sel = (ver_sel ^ her_sel);
wire [11:0]color_to_be = color_sel?12'hf00:12'h0f0;
assign vga_data = vga_valid?color_to_be:12'h0;

endmodule
