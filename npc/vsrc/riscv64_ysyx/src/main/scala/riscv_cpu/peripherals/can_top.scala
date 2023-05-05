
package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._




class axi_can_32 extends BlackBox {
    val io = IO(new  Bundle{
        val axi_port = Flipped(new axi_ram_port(32,32))
        val can_intr = Output(Bool())
        val can_tx = Output(Bool())
        val can_rx = Input(Bool())
        val clk = Input(Bool())
        val rst_n = Input(Bool())
    })
}

// class axi_can_32 extends BlackBox {
    
//     val io = IO(new  Bundle{
//         val s00_axi = Flipped(new axi_ram_port(32,32))
//         // val int_wire = Output(Bool())
//         val can_tx = Output(Bool())
//         val can_rx = Input(Bool())
//         val s00_axi_aclk = Input(Bool())
//         val s00_axi_aresetn = Input(Bool())
//     })
// }