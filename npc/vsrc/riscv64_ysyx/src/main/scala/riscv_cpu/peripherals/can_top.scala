
package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._




class axi_can_top extends BlackBox {
    val io = IO(new  Bundle{
        val axi_port = Flipped(new axi_ram_port)
        val rx_irq = Output(Bool())
        val can_tx = Output(Bool())
        val can_rx = Input(Bool())
        val clk = Input(Bool())
        val rstn = Input(Bool())
    })
}