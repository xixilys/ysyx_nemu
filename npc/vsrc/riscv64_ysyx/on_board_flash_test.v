module on_board_flash_test(
  input   clock,
  input   reset,
   (*mark_debug = "true"*) output  io_spi_clk,
   (*mark_debug = "true"*) output  io_spi_cs,
   (*mark_debug = "true"*) output  io_spi_mosi,
   (*mark_debug = "true"*) input   io_spi_miso,
   (*mark_debug = "true"*) output  led_shine,
   (*mark_debug = "true"*) output  board_reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  wire  _T_1 = ~reset; // @[spi_flash.scala 187:29]
  reg  board_reset_REG; // @[spi_flash.scala 189:31]
    (*mark_debug = "true"*)  reg [3:0] clk_counter; // @[Counter.scala 62:40]
  wire  wrap_wrap = clk_counter == 4'he; // @[Counter.scala 74:24]
  wire [3:0] _wrap_value_T_1 = clk_counter + 4'h1; // @[Counter.scala 78:24]
  reg  spi_clk_reg; // @[spi_flash.scala 191:34]
  reg  start_state; // @[spi_flash.scala 195:34]
    (*mark_debug = "true"*)  reg [5:0] sum_counter; // @[Counter.scala 62:40]
  wire  wrap_wrap_1 = sum_counter == 6'h27; // @[Counter.scala 74:24]
  wire [5:0] _wrap_value_T_3 = sum_counter + 6'h1; // @[Counter.scala 78:24]
  wire  sum_counter_signal = wrap_wrap & wrap_wrap_1; // @[Counter.scala 120:{16,23}]
  wire  _spi_clk_reg_T_2 = sum_counter >= 6'h20; // @[spi_flash.scala 201:70]
  wire  _spi_clk_reg_T_5 = wrap_wrap ? ~spi_clk_reg : spi_clk_reg; // @[spi_flash.scala 201:93]
  wire  _T_5 = start_state & wrap_wrap; // @[spi_flash.scala 211:82]
  reg [9:0] sum_counter_1; // @[Counter.scala 62:40]
  wire  wrap_wrap_2 = sum_counter_1 == 10'h31f; // @[Counter.scala 74:24]
  wire [9:0] _wrap_value_T_5 = sum_counter_1 + 10'h1; // @[Counter.scala 78:24]
  wire  _io_spi_mosi_T_3 = sum_counter_1 == 10'he; // @[spi_flash.scala 216:29]
  wire  _io_spi_mosi_T_4 = sum_counter_1 == 10'hc | sum_counter_1 == 10'hd | _io_spi_mosi_T_3; // @[spi_flash.scala 215:96]
  wire  _io_spi_mosi_T_7 = sum_counter_1 == 10'h6e; // @[spi_flash.scala 217:31]
  wire  _io_spi_mosi_T_8 = _io_spi_mosi_T_4 | sum_counter_1 == 10'hf | _io_spi_mosi_T_7; // @[spi_flash.scala 216:85]
  wire  _io_spi_mosi_T_11 = sum_counter_1 >= 10'h80; // @[spi_flash.scala 219:30]
  wire  _io_spi_mosi_T_12 = _io_spi_mosi_T_8 | sum_counter_1 == 10'h6f | _io_spi_mosi_T_11; // @[spi_flash.scala 217:110]
  wire  _GEN_10 = start_state & _io_spi_mosi_T_12; // @[spi_flash.scala 197:21 198:29 215:25]
  wire  _GEN_12 = start_state & (sum_counter_1 >= 10'h200 | _T_1); // @[spi_flash.scala 196:19 198:29 223:23]
  reg  led_shine_REG; // @[spi_flash.scala 232:29]
  assign io_spi_clk = spi_clk_reg; // @[spi_flash.scala 231:20]
  assign io_spi_cs = ~start_state ? _spi_clk_reg_T_2 | _T_1 : _GEN_12; // @[spi_flash.scala 198:29 204:23]
  assign io_spi_mosi = ~start_state | _GEN_10; // @[spi_flash.scala 198:29 203:25]
  assign board_reset = board_reset_REG; // @[spi_flash.scala 189:21]
  assign led_shine = led_shine_REG; // @[spi_flash.scala 232:19]
  always @(posedge clock) begin
    board_reset_REG <= ~reset; // @[spi_flash.scala 189:32]
    if (_T_1) begin // @[Counter.scala 62:40]
      clk_counter <= 4'h0; // @[Counter.scala 62:40]
    end else if (wrap_wrap) begin // @[Counter.scala 88:20]
      clk_counter <= 4'h0; // @[Counter.scala 88:28]
    end else begin
      clk_counter <= _wrap_value_T_1; // @[Counter.scala 78:15]
    end
    if (_T_1) begin // @[spi_flash.scala 191:34]
      spi_clk_reg <= 1'h0; // @[spi_flash.scala 191:34]
    end else if (~start_state) begin // @[spi_flash.scala 198:29]
      if (io_spi_cs | sum_counter >= 6'h20) begin // @[spi_flash.scala 201:31]
        spi_clk_reg <= 1'h0;
      end else begin
        spi_clk_reg <= _spi_clk_reg_T_5;
      end
    end else if (start_state) begin // @[spi_flash.scala 198:29]
      if (io_spi_cs | sum_counter_1[4:0] >= 5'h10) begin // @[spi_flash.scala 213:31]
        spi_clk_reg <= 1'h0;
      end else begin
        spi_clk_reg <= _spi_clk_reg_T_5;
      end
    end
    if (_T_1) begin // @[spi_flash.scala 195:34]
      start_state <= 1'h0; // @[spi_flash.scala 195:34]
    end else if (~start_state) begin // @[spi_flash.scala 198:29]
      start_state <= sum_counter_signal | start_state; // @[spi_flash.scala 208:25]
    end
    if (_T_1) begin // @[Counter.scala 62:40]
      sum_counter <= 6'h0; // @[Counter.scala 62:40]
    end else if (wrap_wrap) begin // @[Counter.scala 120:16]
      if (wrap_wrap_1) begin // @[Counter.scala 88:20]
        sum_counter <= 6'h0; // @[Counter.scala 88:28]
      end else begin
        sum_counter <= _wrap_value_T_3; // @[Counter.scala 78:15]
      end
    end
    if (_T_1) begin // @[Counter.scala 62:40]
      sum_counter_1 <= 10'h0; // @[Counter.scala 62:40]
    end else if (_T_5) begin // @[Counter.scala 120:16]
      if (wrap_wrap_2) begin // @[Counter.scala 88:20]
        sum_counter_1 <= 10'h0; // @[Counter.scala 88:28]
      end else begin
        sum_counter_1 <= _wrap_value_T_5; // @[Counter.scala 78:15]
      end
    end
    led_shine_REG <= io_spi_miso; // @[spi_flash.scala 232:29]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  board_reset_REG = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  clk_counter = _RAND_1[3:0];
  _RAND_2 = {1{`RANDOM}};
  spi_clk_reg = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  start_state = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  sum_counter = _RAND_4[5:0];
  _RAND_5 = {1{`RANDOM}};
  sum_counter_1 = _RAND_5[9:0];
  _RAND_6 = {1{`RANDOM}};
  led_shine_REG = _RAND_6[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
