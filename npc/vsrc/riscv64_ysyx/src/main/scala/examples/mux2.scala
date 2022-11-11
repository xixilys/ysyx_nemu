package  examples

import chisel3._

class Mux2 extends Module {
    val io = IO(new Bundle {

        val sel = Input(UInt(1.W))
        val in0 = Input(UInt(1.W))
        val in1 = Input(UInt(1.W))
        val out = Output(UInt(1.W))
       
    })

    io.out := (io.sel & io.in1) | (~io.sel) & io.in0;
    // io.out1 := (io.in0 & io.in0);
}

import chisel3.stage.ChiselStage

// object Mux2_test extends App{
//     (new ChiselStage).emitVerilog(new Mux2)
// }
