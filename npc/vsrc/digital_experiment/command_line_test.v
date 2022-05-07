module command_line_test(
	input clk,
	input rst,
	input ps2_clk,
	input ps2_data,
	output vga_vs,
	output vga_hs,
	output vga_clk,
	output vga_blank_n,
	output vga_sync_n,
	output [7:0]vga_r,
	output [7:0]vga_g,
	output [7:0]vga_b,
	output [9:0]addr_h,
	output [9:0]addr_v,
	output   led
);
reg [15:0]raw_table_data[255:0];
reg [7:0]lookup_table[255:0];
reg [31:0]i ;
initial begin
	$readmemh("resource/look_up_table.hex",raw_table_data);
	for(i = 0;i<=255;i =i+1) begin //初始化table数组
		lookup_table[raw_table_data[i][15:8]] = raw_table_data[i][7:0];
	end
		//for(i = 0;i<=255;i = i+1)begin
		//	$display("table[%h] = %h raw_data = %h",i,lookup_table[i],raw_table_data[i][7:0]);
		//end
	
end

reg [23:0]vga_data_array[500000:0];
initial begin
	$readmemh("resource/picture.hex",vga_data_array);
end

reg [11:0] char_table [5000:0];
initial begin
	$readmemh("resource/vga_glyphs.hex",char_table);
end
	

reg [23:0]vga_data;
reg [7:0]screen_data[2500:0];

//initial begin
//	for(i = 0;i<=30;i=i+1)
//	screen_data[i*70+3] = 8'd49;
//end


assign vga_sync_n = 0;
vga vga_module1(clk,rst,vga_data,addr_h,addr_v,vga_hs,vga_vs,vga_blank_n,vga_r,vga_g,vga_b,vga_clk);
reg [7:0]asc_data;
reg [7:0]key_board_data;
reg [23:0]key_board_data_sync;
reg loosen_flag;
wire continue_flag;
wire ready;
keyboard_bottom keyboard1 (clk,rst,ps2_clk,ps2_data,continue_flag,key_board_data,loosen_flag,ready);

integer temp_h;
integer temp_v;
integer char_x;
integer char_y;
reg  [7:0]temp_asc;
integer down_set;

always @(negedge vga_vs or posedge rst) begin
	if(rst == 1) begin
		temp_h = 0;
		temp_v = 0;
		char_x = 0;
		char_y = 0;
		temp_asc = 0;
	end
	else begin
		for(temp_v = 1;temp_v <= 480 ; temp_v = temp_v + 1) begin
			char_y = temp_v /16;
			for(temp_h = 1;temp_h <= 640 ; temp_h = temp_h + 1)begin
				char_x = temp_h/9;
				down_set = char_x + char_y*70;
				//$display("char x = %d char_y = %d temp_asc = %d dow_set = %d\n",char_x,char_y,temp_asc,down_set);
				temp_asc =screen_data[down_set];
				vga_data_array[{(temp_h[9:0]),(temp_v[8:0])}] = 
				(char_table[temp_asc*16+((temp_v-1)%16)][(temp_h-1)%9])>0 ? 24'hFFFFFF:24'b0;
			end
		end
	end
end

assign vga_data = vga_data_array[{addr_h,addr_v[8:0]}];

reg [7:0]command_x;
reg [7:0]command_y;

always @(posedge ready) begin
	if(ready) begin
		key_board_data_sync = {key_board_data_sync[15:0],key_board_data};
		if(loosen_flag || key_board_data_sync[15:8] == 8'hF0) begin
			command_x <= command_x;
			command_y <= command_y;
		end 
		else begin	case (key_board_data)
			8'h5A:begin
				command_x<=8'b0;
				command_y<=command_y + 1;
			end
			default: begin
		//	$display("key data is %h and table answer is %h",key_board_data,lookup_table[key_board_data]);
				screen_data[command_x+command_y*70] <=lookup_table[key_board_data];
				if(command_x<70) begin
					command_x <= command_x+8'b1;
				end
				else begin
					command_x <= 8'b0;
					command_y <= command_y + 1;
				end
			end
			endcase
		end
		
	end
end
endmodule



