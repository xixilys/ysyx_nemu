 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
 /* verilator lint_off WIDTHEXPAND */ 
  
  /* verilator lint_off WIDTHEXPAND */
  module can_level_bit (
  	rstn,
  	clk,
  	can_rx,
  	can_tx,
  	req,
  	rbit,
  	tbit
  );
  	parameter [15:0] default_c_PTS = 16'd34;
  	parameter [15:0] default_c_PBS1 = 16'd5;
  	parameter [15:0] default_c_PBS2 = 16'd10;
  	input wire rstn;
  	input wire clk;
  	input wire can_rx;
  	output reg can_tx;
  	output reg req;
  	output reg rbit;
  	input wire tbit;
  	initial can_tx = 1'b1;
  	initial req = 1'b0;
  	initial rbit = 1'b1;
  	reg rx_buf = 1'b1;
  	reg rx_fall = 1'b0;
  	always @(posedge clk or negedge rstn)
  		if (~rstn) begin
  			rx_buf <= 1'b1;
  			rx_fall <= 1'b0;
  		end
  		else begin
  			rx_buf <= can_rx;
  			rx_fall <= rx_buf & ~can_rx;
  		end
  	localparam [16:0] default_c_PTS_e = {1'b0, default_c_PTS};
  	localparam [16:0] default_c_PBS1_e = {1'b0, default_c_PBS1};
  	localparam [16:0] default_c_PBS2_e = {1'b0, default_c_PBS2};
  	reg [16:0] adjust_c_PBS1 = 1'sb0;
  	reg [2:0] cnt_high = 1'sb0;
  	reg [16:0] cnt = 17'd1;
  	reg [1:0] stat = 2'd0;
  	reg inframe = 1'b0;
  	always @(posedge clk or negedge rstn)
  		if (~rstn) begin
  			can_tx <= 1'b1;
  			req <= 1'b0;
  			rbit <= 1'b1;
  			adjust_c_PBS1 <= 8'd0;
  			cnt_high <= 3'd0;
  			cnt <= 17'd1;
  			stat <= 2'd0;
  			inframe <= 1'b0;
  		end
  		else begin
  			req <= 1'b0;
  			if (~inframe & rx_fall) begin
  				adjust_c_PBS1 <= default_c_PBS1_e;
  				cnt <= 17'd1;
  				stat <= 2'd0;
  				inframe <= 1'b1;
  			end
  			else
  				case (stat)
  					2'd0: begin
  						if ((rx_fall & tbit) && (cnt > 17'd2))
  							adjust_c_PBS1 <= default_c_PBS1_e + cnt;
  						if (cnt >= default_c_PTS_e) begin
  							cnt <= 17'd1;
  							stat <= 2'd1;
  						end
  						else
  							cnt <= cnt + 17'd1;
  					end
  					2'd1: begin
  						if (cnt == 17'd1) begin
  							req <= 1'b1;
  							rbit <= rx_buf;
  							cnt_high <= (rx_buf ? (cnt_high < 3'd7 ? cnt_high + 3'd1 : cnt_high) : 3'd0);
  						end
  						if (cnt >= adjust_c_PBS1) begin
  							cnt <= 17'd0;
  							stat <= 2'd2;
  						end
  						else
  							cnt <= cnt + 17'd1;
  					end
  					2'd2:
  						if ((rx_fall & tbit) || (cnt >= default_c_PBS2_e)) begin
  							can_tx <= tbit;
  							adjust_c_PBS1 <= default_c_PBS1_e;
  							cnt <= 17'd1;
  							stat <= 2'd0;
  							if (cnt_high == 3'd7)
  								inframe <= 1'b0;
  						end
  						else begin
  							cnt <= cnt + 17'd1;
  							if (cnt == (default_c_PBS2_e - 17'd1))
  								can_tx <= tbit;
  						end
  					default: stat <= 2'd0;
  				endcase
  		end
  endmodule
