  package examples

import chisel3._

class Mux4 extends Module {

    val io = IO(new Bundle {

        val in0 = Input(UInt(1.W))
        val in1 = Input(UInt(1.W))
        val in2 = Input(UInt(1.W))
        val in3 = Input(UInt(1.W))
        val sel = Input(UInt(2.W))
        val out = Output(UInt(1.W))
    })
    val m0 = Module(new Mux2)
    m0.io.sel := io.sel(0)
    m0.io.in0 := io.in0
    m0.io.in1 := io.in1

    val m1 = Module(new Mux2)
    m1.io.sel := io.sel(0)
    m1.io.in0 := io.in2
    m1.io.in1 := io.in3
    
    val m2 = Module(new Mux2)
    m2.io.sel := io.sel(1)
    m2.io.in0 := m0.io.out
    m2.io.in1 := m1.io.out

    io.out := m2.io.out;
}
import chisel3.stage.ChiselStage

// object Mux4_test extends App{
//     (new ChiselStage).emitVerilog(new Mux4)
// }
