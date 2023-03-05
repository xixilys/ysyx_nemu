package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._

class spi (apb_addr_w:Int,apb_data_w:Int)extends  BlackBox {


    val io = IO(new Bundle {
    val clk  = Input(Bool())
    val resetn = Input(Bool())
    val in_paddr = Input(UInt(apb_addr_w.W))
    val in_psel  = Input(Bool())
    val in_penable = Input(Bool())
    val in_pprot  = Input(UInt(3.W))
    val in_pwrite = Input(Bool())
    val in_pwdata = Input(UInt(apb_data_w.W))
    val in_pstrb  = Input(UInt((apb_data_w/8).W))
    val in_pready = Input(Bool())
    val in_prdata = Output(UInt(apb_data_w.W))
    val in_pslverr = Output(Bool())
    val spi_clk = Output(Bool())
    val spi_cs = Output(Bool())
    val spi_mosi = Output(Bool())
    val spi_miso = Input(Bool())
    val spi_irq_out = Output(Bool())
    })
 
}