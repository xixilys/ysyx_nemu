module vga(
	input clk,
	input rst,
	input [23:0]vga_data,
	output [9:0]h_addr,
	output [9:0]v_addr,
	output      hsync,
	output      vsync,
	output      valid,
	output [7:0]vga_r,
	output [7:0]vga_g,
	output [7:0]vga_b,
	output  vga_clk
);
//抄的640*480分辨率下的配置
parameter h_frontporch = 96;//消隐位存在的时间
parameter h_active     = 144;//rgn信号开始有用的时候
parameter h_backporch  = 784;
parameter h_total      = 800;

parameter v_frontporch = 2;
parameter v_active     = 35;
parameter v_backporch  = 515;
parameter v_total      = 525;

reg [9:0] x_cnt;//x轴数据
reg [9:0] y_cnt;
wire h_valid;
wire v_valid;
assign vga_clk = clk;

always @(posedge rst or posedge clk) begin //计算行像素的东西
	if(rst) begin
		x_cnt <= 10'b1;
	end
	else  begin
		if(x_cnt == h_total) begin
			x_cnt <= 1;
		end
		else begin
			x_cnt <= x_cnt + 10'b1;
		end
	end
end 
always @(posedge rst or posedge clk) begin
	if(rst) begin 
		x_cnt <= 10'b1;
	end
	else begin
		if(y_cnt == v_total & x_cnt == h_total) begin
			y_cnt <= 10'b1;
		end
		else if(x_cnt == h_total) begin
			y_cnt <= y_cnt + 1;
		end
		else begin
			y_cnt <= y_cnt;
		end
	end
end
//行列同步信号
assign hsync = (x_cnt > h_frontporch);
assign vsync = (y_cnt > v_frontporch);
//消隐信号
assign h_valid = ( x_cnt > h_active & x_cnt <= h_backporch );
assign v_valid = ( y_cnt > v_active & y_cnt <= v_backporch );
assign valid = h_valid & v_valid;
//计算目前坐标,显存坐标从0开始吧
assign h_addr = h_valid ? (x_cnt - h_active - 1 ):{10{1'b0}};
assign v_addr = v_valid ? (y_cnt - v_active - 1 ):{10{1'b0}};
//设置输出的颜色
assign vga_r = vga_data[23:16];
assign vga_g = vga_data[15:8];
assign vga_b = vga_data[7:0];


endmodule 


