module vga_module (
	input clk,
	input rst,
//	input [23:0]vga_data,
	output vga_vs,
	output vga_hs, 
	output vga_clk,
	output vga_blank_n,
	output vga_sync_n,
	output [7:0]vga_r,
	output [7:0]vga_g,
	output [7:0]vga_b,
	output [9:0]addr_h, //方便调试
	output [9:0]addr_v //方便调试
);
reg [9:0] h_addr;
reg [9:0] v_addr;

wire [23:0]vga_data;
reg [23:0]vga_data_array[524287:0];

vga vga_1(clk,rst,vga_data,h_addr,v_addr,vga_hs,vga_vs,vga_blank_n,vga_r,vga_g,vga_b,vga_clk);

initial begin
	$readmemh("resource/kuangsan.hex",vga_data_array);	 
end
assign vga_data = vga_data_array[{h_addr,v_addr[8:0]}];
assign vga_sync_n = 1'b0 ;
//assign vga_data = 24'hFF0000;
assign addr_h = h_addr;
assign addr_v = v_addr;
endmodule
