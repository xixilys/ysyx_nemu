package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._

class uart (apb_addr_w:Int,apb_data_w:Int)extends  BlackBox {
    
    override def desiredName = "uart_apb"
    val io = IO(new Bundle {
        val clk  = Input(Bool())
        val resetn = Input(Bool())
        val in = new apb_bundle(32,32)
        val in_pprot = Input(UInt(3.W))
        val uart_rx = Input(Bool())
        val uart_tx = Output(Bool())
    })
}        
