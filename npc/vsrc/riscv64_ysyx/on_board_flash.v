module on_board_flash(
  input   clock,
  input   reset,
  output  io_spi_clk,
  output  io_spi_cs,
  output  io_spi_mosi,
  input   io_spi_miso,
  input   io1_spi_clk,
  input   io1_spi_cs,
  input   io1_spi_mosi,
  output  io1_spi_miso
);
  assign io_spi_clk = io1_spi_clk; // @[spi_flash.scala 52:9]
  assign io_spi_cs = io1_spi_cs; // @[spi_flash.scala 52:9]
  assign io_spi_mosi = io1_spi_mosi; // @[spi_flash.scala 52:9]
  assign io1_spi_miso = io_spi_miso; // @[spi_flash.scala 52:9]
endmodule
