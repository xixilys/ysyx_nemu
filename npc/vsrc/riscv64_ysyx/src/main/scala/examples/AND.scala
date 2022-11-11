package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
import scala.math._
class AND(what :Bundle) extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(1.W))
    val d = Input(UInt(1.W))
    val b = Input(UInt(32.W))
    val c = Output(UInt(1.W))
    val data_in = Input(UInt(1.W))
    val data_sel = Input(UInt(7.W))
    val data_out = Output(Bool())
    val out = Output(UInt(32.W))
    val data = Input(what)
    val data_out_out = Output(what)
  })  
  def Hash(num:UInt) : UInt  = {
  val length = num.getWidth 
  val num_array = Wire(Vec((length/4),UInt(1.W)))
  for(i <- 0 to (length/4)-1) {
    num_array(i) :=  num(((i+1)*4 - 1),i*4).xorR
  }
  num_array.asUInt

}
  io.data_out_out := RegNext(io.data)
  val Mux2_test = Module(new Mux2)
  val Mux3_test = Module(new Mux2)
  val stage_decoder_pc = Seq.fill(2)(Module(new Mux2))
  // class pc_detail  extends Module {
  //   val pc_value = RegInit(UInt(32.W))
  //   // val pc_inst = RegInit(UInt(32.W))
  // }

  // // val value1 = Module(new pc_detail)
  // value1.pc_value := io.b

  Mux2_test.io.in0 := io.a
  Mux2_test.io.in1 := io.b
  Mux2_test.io.sel := io.d

  Mux3_test.io.in0 := Mux2_test.io.in0
  Mux3_test.io.in1 := Mux2_test.io.in1
  Mux3_test.io.sel := Mux2_test.io.sel

  for(i <- 0 until 2) {
    stage_decoder_pc(i).io.in0 := io.a
    stage_decoder_pc(i).io.in1 := io.b
    stage_decoder_pc(i).io.sel := io.d
  }
  
  io.c := MuxLookup(io.a,0.U,Seq(
    1.U -> stage_decoder_pc(0).io.out,
    3.U -> stage_decoder_pc(1).io.out
  ))
  io.out :=stage_decoder_pc(0).io.out + stage_decoder_pc(1).io.out

  val lru = RegInit(VecInit(Seq.fill(128)(0.U(1.W))))
  lru(io.data_sel) := io.data_in
  io.data_out := Mux(io.data_sel(6),lru(Cat(0.U(1.W),io.data_sel(5,0))),lru(Cat(1.U(1.W),io.data_sel)))
 
}


// object ANDtest extends App{
//     val test_bundle = new  Bundle {
//   val data_input = UInt(32.W)
// }
//     (new ChiselStage).emitVerilog(new AND(test_bundle))
// }


