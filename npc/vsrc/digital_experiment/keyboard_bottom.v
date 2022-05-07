module keyboard_bottom (
	input clk,
	input rst,
	input ps2_clk,
	input ps2_data,
	output reg continue_flag,
	output  [7:0]keyboard_data,
	output  loosen_flag,
	output ready
);
reg [31:0]data_sync;
reg overflow;
reg nextdata_n;
reg [15:0] raw_table_data[300:0];
reg [7:0]  lookup_table[300:0];

ps2_keyboard k1(.clk(clk),.clrn(rst),.data(keyboard_data),.ready(ready),.overflow(overflow),.nextdata_n(nextdata_n),.ps2_clk(ps2_clk),.ps2_data(ps2_data));

always @(posedge clk or posedge rst) begin
	if(rst == 1) begin
		data_sync <= 32'b0;
	end
	else if(ready == 1) begin
	    data_sync <= {data_sync[23:0],keyboard_data};
		nextdata_n <= 0;
	end
	else nextdata_n <= 1;
end

always @(posedge clk or posedge rst) begin
	if(rst == 1) continue_flag <= 0;
	else if( data_sync[15:8] == data_sync[7:0]) begin
		continue_flag <= 1;
	end
	else continue_flag <= 0;
end
assign loosen_flag = (keyboard_data == 8'hF0);
endmodule
