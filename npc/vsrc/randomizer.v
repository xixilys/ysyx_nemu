module randomizer(
	input clk,
	input rst,
	output [6:0]bcd_num0,
	output [6:0]bcd_num1,
	output [6:0]bcd_num2
);
reg [7:0]reg_lfsr;
reg [7:0]last_reg;
reg bitsevern;
reg [7:0]x1;
reg [7:0]x2;
reg [7:0]x3;
assign bitsevern = reg_lfsr[0]^reg_lfsr[1]^reg_lfsr[2]^reg_lfsr[3];
bcd7seg bcd1(.x(x1[3:0]),.en(1),.y(bcd_num0));
bcd7seg bcd2(.x(x2[3:0]),.en(1),.y(bcd_num1));
bcd7seg bcd3(.x(x3[3:0]),.en(1),.y(bcd_num2));
assign x1 = reg_lfsr%10;
assign x2 = reg_lfsr%100/10;
assign x3 = reg_lfsr/100;
initial reg_lfsr = 8'b00000001;
always @(negedge clk or posedge rst) begin
	if(rst == 1)
		reg_lfsr <= 8'b00000001;
	else 
		reg_lfsr <={bitsevern,reg_lfsr[7:1]};
end 
endmodule
