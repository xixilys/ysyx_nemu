package examples

import chisel3._
import chisel3.util

class Mux4_2 extends Module {

    val io = IO(new Bundle {

        val in0 = Input(UInt(1.W))
        val in1 = Input(UInt(1.W))
        val in2 = Input(UInt(1.W))
        val in3 = Input(UInt(1.W))
        val sel = Input(UInt(2.W))
        val out = Output(UInt(1.W))
    })
    val m = VecInit(Seq.fill(3)(Module(new Mux2).io)) //实例化三个mux2,并且参数是端口字段io
    m(0).sel := io.sel(0)  // 模块的端口通过下标索引，并且路径里没有“io”
    m(0).in0 := io.in0
    m(0).in1 := io.in1
    m(1).sel := io.sel(0)
    m(1).in0 := io.in2
    m(1).in1 := io.in3
    m(2).sel := io.sel(1)
    m(2).in0 := m(0).out
    m(2).in1 := m(1).out

    io.out := m(2).out;
}
import chisel3.stage.ChiselStage

// object Mux4_2_test extends App{
//     (new ChiselStage).emitVerilog(new Mux4_2)
// }
