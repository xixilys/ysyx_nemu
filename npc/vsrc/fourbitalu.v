module fourbitalu(
	input [3:0]a,
	input [3:0]b,
	input [2:0]x,
	output reg [3:0]out,
	output overflower,
	output zero,
	output carry_flag
);
reg [3:0]temp_adder;
reg [3:0]adder_out;
reg [3:0]normal_a;
reg [3:0]normal_b;

fourbitadder adder(.a(a),.b(temp_adder),.result(adder_out),.carry(carry_flag),.zero(zero),.overflower(overflower));
	always @(a or b or x) begin
			
			//normal_a[2:0] =( ~(a[2:0]-1)) ;normal_b[2:0] =~(b[2:0]-1);
			//normal_a[3]  = a[3];   normal_b[3] = b[3];
			temp_adder = 4'b0000;
			
		case(x) 
		3'b000: begin
				temp_adder = b; out = adder_out;
			end
		3'b001: begin
				temp_adder = ~b+1; out = adder_out;
			end
		3'b010: out = ~a;
		3'b011: out = a & b;
		3'b100: out = a | b;
		3'b101: out = a ^ b;
		3'b110: begin
			out[3:1] = 3'b000;
			out[0] =(a[3]>b[3])||(a<b&&a[3]==0&&b[3]==0)||(a>b&&a[3]==1&&b[3]==1);// (normal_a[3]>normal_b[3])||(normal_a<normal_b&&normal_a[3]==0&&normal_b[3]==0)||(normal_a>normal_b&&normal_a[3]==1&&normal_b[3] == 1);
			
			end
		3'b111: begin
				if(a == b) out = 1;
				else out = 0;
			end
		default: out = 4'b0000;
	endcase 

	end
endmodule
