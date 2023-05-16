/* verilator lint_off WIDTH */
  module can_level_packet (
  	rstn,
  	clk,
  	can_rx,
  	can_tx,
  	tx_start,
  	tx_data,
  	tx_done,
  	tx_acked,
  	rx_valid,
  	rx_id,
  	rx_ide,
  	rx_rtr,
  	rx_len,
  	rx_data,
  	rx_ack
  );
  	parameter [0:0] TX_RTR = 1'b0;
  	parameter [10:0] TX_ID = 11'h200;
  	parameter [15:0] default_c_PTS = 16'd34;
  	parameter [15:0] default_c_PBS1 = 16'd10;
  	parameter [15:0] default_c_PBS2 = 16'd5;
  	input wire rstn;
  	input wire clk;
  	input wire can_rx;
  	output wire can_tx;
  	input wire tx_start;
  	(*mark_debug = "true"*) input wire [63:0] tx_data;
  	output reg tx_done;
  	output reg tx_acked;
  	output reg rx_valid;
  	output reg [28:0] rx_id;
  	output reg rx_ide;
  	output reg rx_rtr;
  	output reg [3:0] rx_len;
  	output reg [63:0] rx_data;
  	input wire rx_ack;
  	initial {tx_done, tx_acked} = 1'b0;
  	initial {rx_valid, rx_id, rx_ide, rx_rtr, rx_len, rx_data} = 1'sb0;
  	function automatic [14:0] crc15;
  		input reg [14:0] crc_val;
  		input reg in_bit;
  		crc15 = {crc_val[13:0], 1'b0} ^ (crc_val[14] ^ in_bit ? 15'h4599 : 15'h0000);
  	endfunction
  	wire bit_req;
  	wire bit_rx;
  	reg bit_tx = 1'b1;
  	can_level_bit #(
  		.default_c_PTS(default_c_PTS),
  		.default_c_PBS1(default_c_PBS1),
  		.default_c_PBS2(default_c_PBS2)
  	) can_level_bit_i(
  		.rstn(rstn),
  		.clk(clk),
  		.can_rx(can_rx),
  		.can_tx(can_tx),
  		.req(bit_req),
  		.rbit(bit_rx),
  		.tbit(bit_tx)
  	);
  	reg [7:0] rx_history = 1'sb0;
  	reg [3:0] tx_history = 1'sb1;
  	wire rx_end = rx_history == {8 {1'sb1}};
  	wire rx_err = rx_history[5:0] == {6 {1'sb0}};
  	wire rx_ben = (rx_history[4:0] != {5 {1'sb0}}) && (rx_history[4:0] != {5 {1'sb1}});
  	wire tx_ben = ({tx_history, bit_tx} != {5 {1'sb0}}) && ({tx_history, bit_tx} != {5 {1'sb1}});
  	always @(posedge clk or negedge rstn)
  		if (~rstn) begin
  			rx_history <= 1'sb0;
  			tx_history <= 1'sb1;
  		end
  		else if (bit_req) begin
  			rx_history <= {rx_history[6:0], bit_rx};
  			tx_history <= {tx_history[2:0], bit_tx};
  		end
  	reg tx_arbitrary = 1'sb0;
  	reg [14:0] rx_crc = 1'sb0;
  	wire [14:0] rx_crc_next = {rx_crc[13:0], 1'b0} ^ (rx_crc[14] ^ bit_rx ? 15'h4599 : 15'h0000);
//  	reg [49:0] tx_shift = 1'sb1;
//  	reg [14:0] tx_crc = 1'sb0;
//  	wire [14:0] tx_crc_next = {tx_crc[13:0], 1'b0} ^ (tx_crc[14] ^ tx_shift[49] ? 15'h4599 : 15'h0000);

   	(*mark_debug = "true"*) reg [81:0] tx_shift = 1'sb1;
  	reg [14:0] tx_crc = 1'sb0;
  	wire [14:0] tx_crc_next = {tx_crc[13:0], 1'b0} ^ (tx_crc[14] ^ tx_shift[81] ? 15'h4599 : 15'h0000);


  	wire [3:0] rx_len_next = {rx_len[2:0], bit_rx};
  	wire [7:0] rx_cnt = (rx_len[3] ? 8'd63 : {1'd0, rx_len, 3'd0} - 8'd1);
  	localparam [3:0] INIT = 4'd0;
  	localparam [3:0] IDLE = 4'd1;
  	localparam [3:0] TX_ID_MSB = 4'd2;
  	localparam [3:0] TRX_ID_BASE = 4'd3;
  	localparam [3:0] TX_PAYLOAD = 4'd4;
  	localparam [3:0] TX_ACK_DEL = 4'd5;
  	localparam [3:0] TX_ACK = 4'd6;
  	localparam [3:0] TX_EOF = 4'd7;
  	localparam [3:0] RX_IDE_BIT = 4'd8;
  	localparam [3:0] RX_ID_EXTEND = 4'd9;
  	localparam [3:0] RX_RESV1_BIT = 4'd10;
  	localparam [3:0] RX_CTRL = 4'd11;
  	localparam [3:0] RX_DATA = 4'd12;
  	localparam [3:0] RX_CRC = 4'd13;
  	localparam [3:0] RX_ACK = 4'd14;
  	localparam [3:0] RX_EOF = 4'd15;
  	reg [7:0] cnt = 1'sb0;
  	reg [3:0] stat = INIT;
  	reg rx_valid_pre = 1'sb0;
  	reg rx_valid_latch = 1'sb0;
  	reg rx_ack_latch = 1'sb0;
  	always @(posedge clk or negedge rstn)
  		if (~rstn) begin
  			rx_valid <= 1'b0;
  			rx_valid_latch <= 1'b0;
  			rx_ack_latch <= 1'b0;
  		end
  		else begin
  			rx_valid <= rx_valid_pre & (rx_crc == 15'd0);
  			rx_valid_latch <= rx_valid;
  			if (rx_valid_latch)
  				rx_ack_latch <= rx_ack;
  		end
  	always @(posedge clk or negedge rstn)
  		if (~rstn) begin
  			{tx_done, tx_acked} <= 1'b0;
  			rx_valid_pre <= 1'b0;
  			{rx_id, rx_ide, rx_rtr, rx_len, rx_data, rx_crc} <= 1'sb0;
  			bit_tx <= 1'b1;
  			tx_arbitrary <= 1'b0;
  			tx_crc <= 1'sb0;
  			tx_shift <= 1'sb1;
  			cnt <= 8'd0;
  			stat <= INIT;
  		end
  		else begin
  			{tx_done, tx_acked} <= 1'b0;
  			rx_valid_pre <= 1'b0;
  			if (bit_req) begin
  				bit_tx <= 1'b1;
  				case (stat)
  					INIT:
  						if (rx_end)
  							stat <= IDLE;
  					IDLE: begin
  						tx_arbitrary <= 1'b0;
  						{rx_id, rx_ide, rx_rtr, rx_len, rx_data, rx_crc} <= 1'sb0;
  						tx_crc <= 1'sb0;
  						tx_shift <= {TX_ID, TX_RTR, 1'b0, 1'b0, 4'd8, tx_data};
//                        tx_shift <= {TX_ID, TX_RTR, 1'b0, 1'b0, 4'd4, tx_data};
  						if (bit_rx == 1'b0) begin
  							cnt <= 8'd0;
  							stat <= TRX_ID_BASE;
  						end
  						else if (cnt < 8'd20)
  							cnt <= cnt + 8'd1;
  						else if (tx_start) begin
  							bit_tx <= 1'b0;
  							cnt <= 8'd0;
  							stat <= TX_ID_MSB;
  						end
  					end
  					TX_ID_MSB:
  						if (bit_rx)
  							stat <= TX_EOF;
  						else begin
  							{bit_tx, tx_shift} <= {tx_shift, 1'b1};
  							tx_crc <= tx_crc_next;
  							tx_arbitrary <= 1'b1;
  							stat <= TRX_ID_BASE;
  						end
  					TRX_ID_BASE: begin
  						if (tx_arbitrary && (bit_rx == bit_tx)) begin
  							if (tx_ben) begin
  								{bit_tx, tx_shift} <= {tx_shift, 1'b1};
  								tx_crc <= tx_crc_next;
  							end
  							else
  								bit_tx <= ~tx_history[0];
  						end
  						else
  							tx_arbitrary <= 1'b0;
  						if (rx_end)
  							stat <= IDLE;
  						else if (rx_err)
  							stat <= RX_EOF;
  						else if (rx_ben) begin
  							rx_crc <= rx_crc_next;
  							cnt <= cnt + 8'd1;
  							if (cnt < 8'd11)
  								rx_id <= {rx_id[27:0], bit_rx};
  							else begin
  								rx_rtr <= bit_rx;
  								if (!(tx_arbitrary && (bit_rx == bit_tx))) begin
  									cnt <= 8'd0;
  									stat <= RX_IDE_BIT;
  								end
  								else if (tx_ben) begin
  									cnt <= 8'd0;
  									stat <= TX_PAYLOAD;
  								end
  							end
  						end
  						else if (cnt > 8'd11) begin
  							cnt <= 8'd0;
  							stat <= TX_PAYLOAD;
  						end
  					end
  					TX_PAYLOAD:
  						if (bit_rx != bit_tx)
  							stat <= TX_EOF;
  						else if (tx_ben) begin
  							{bit_tx, tx_shift} <= {tx_shift, 1'b1};
  							tx_crc <= tx_crc_next;
//  							if (cnt == 8'd36)
//  								tx_shift[49:35] <= tx_crc_next;
//  							if (cnt < 8'd52)
//  								cnt <= cnt + 8'd1;
  							if (cnt == 8'd36 + 8'd32)
  								tx_shift[81:67] <= tx_crc_next;
  							if (cnt < 8'd84)
  								cnt <= cnt + 8'd1;

  							else begin
  								cnt <= 8'd0;
  								stat <= TX_ACK_DEL;
  							end
  						end
  						else
  							bit_tx <= ~tx_history[0];
  					TX_ACK_DEL: stat <= (bit_rx ? TX_ACK : TX_EOF);
  					TX_ACK: begin
  						tx_done <= 1'b1;
  						tx_acked <= ~bit_rx;
  						stat <= TX_EOF;
  					end
  					TX_EOF:
  						if (cnt < 8'd8)
  							cnt <= cnt + 8'd1;
  						else begin
  							cnt <= 8'd0;
  							stat <= RX_EOF;
  						end
  					RX_IDE_BIT:
  						if (rx_end)
  							stat <= IDLE;
  						else if (rx_err)
  							stat <= RX_EOF;
  						else if (rx_ben) begin
  							rx_crc <= rx_crc_next;
  							rx_ide <= bit_rx;
  							stat <= (bit_rx ? RX_ID_EXTEND : RX_CTRL);
  						end
  					RX_ID_EXTEND:
  						if (rx_end)
  							stat <= IDLE;
  						else if (rx_err)
  							stat <= RX_EOF;
  						else if (rx_ben) begin
  							rx_crc <= rx_crc_next;
  							if (cnt < 8'd18) begin
  								rx_id <= {rx_id[27:0], bit_rx};
  								cnt <= cnt + 8'd1;
  							end
  							else begin
  								rx_rtr <= bit_rx;
  								cnt <= 8'd0;
  								stat <= RX_RESV1_BIT;
  							end
  						end
  					RX_RESV1_BIT:
  						if (rx_end)
  							stat <= IDLE;
  						else if (rx_err)
  							stat <= RX_EOF;
  						else if (rx_ben) begin
  							rx_crc <= rx_crc_next;
  							stat <= (bit_rx ? RX_EOF : RX_CTRL);
  						end
  					RX_CTRL:
  						if (rx_end)
  							stat <= IDLE;
  						else if (rx_err)
  							stat <= RX_EOF;
  						else if (rx_ben) begin
  							rx_crc <= rx_crc_next;
  							rx_len <= rx_len_next;
  							if (cnt < 8'd4)
  								cnt <= cnt + 8'd1;
  							else begin
  								cnt <= 8'd0;
  								stat <= ((rx_len_next != {4 {1'sb0}}) && (rx_rtr == 1'b0) ? RX_DATA : RX_CRC);
  							end
  						end
  					RX_DATA:
  						if (rx_end)
  							stat <= IDLE;
  						else if (rx_err)
  							stat <= RX_EOF;
  						else if (rx_ben) begin
  							rx_crc <= rx_crc_next;
  							rx_data <= {rx_data[62:0], bit_rx};
  							if (cnt < rx_cnt)
  								cnt <= cnt + 8'd1;
  							else begin
  								cnt <= 8'd0;
  								stat <= RX_CRC;
  							end
  						end
  					RX_CRC:
  						if (rx_end)
  							stat <= IDLE;
  						else if (rx_err)
  							stat <= RX_EOF;
  						else if (rx_ben) begin
  							rx_crc <= rx_crc_next;
  							if (cnt < 8'd14)
  								cnt <= cnt + 8'd1;
  							else begin
  								cnt <= 8'd0;
  								stat <= RX_ACK;
  								rx_valid_pre <= 1'b1;
  							end
  						end
  					RX_ACK:
  						if (rx_end)
  							stat <= IDLE;
  						else if (rx_err)
  							stat <= RX_EOF;
  						else if (rx_ben) begin
  							if ((bit_rx && (rx_crc == 15'd0)) && rx_ack_latch)
  								bit_tx <= 1'b0;
  							stat <= RX_EOF;
  						end
  					RX_EOF:
  						if (rx_end)
  							stat <= IDLE;
  				endcase
  			end
  		end
  endmodule
