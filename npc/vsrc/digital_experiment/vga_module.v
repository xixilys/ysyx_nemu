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
wire vga_valid;
(*mark_debug = "true"*)wire [11:0]vga_data;
wire vga_clk;

clk_converter clk_con(.clk_in1(clk),
	.clk_out1(vga_clk));
vga vga_1(vga_clk,rst,vga_data,h_addr,v_addr,vga_hsync,vga_vsync,vga_valid,vga_red,vga_green,vga_blue);

// 计算颜色值
parameter segment_colors [0:segments_per_row-1] = {
    12'hf00, 12'hff0, 12'h0f0, 12'h00f, 12'hf0f, 12'h0ff,
    12'h800, 12'h080, 12'h008, 12'h888, 12'h808, 12'h088,
    12'h444, 12'h222, 12'h111, 12'h888
};


assign vga_data = vga_valid?12'hf00:12'h0;

endmodule
