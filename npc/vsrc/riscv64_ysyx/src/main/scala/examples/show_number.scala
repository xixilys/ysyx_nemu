package examples

import chisel3._
import chisel3.util._
class Show_Numbers extends Module {

     val io = IO(new Bundle {

        val en = Input(UInt(1.W))
        val in  = Input(UInt(32.W))
        val out0 = Output(UInt(7.W))
        val out1 = Output(UInt(7.W))
        val out_sel1 = Output(UInt(4.W))
        val out_sel2 = Output(UInt(4.W))
    })
    
    val temp = io.in;
    val out_temp = RegInit(0.U(4.W))
   // val temp_division = new Array[UInt](8);
    val(a,b) = Counter(io.en.asBool,10000)
    val bcd = VecInit(Seq.fill(8)(Module(new bcd7seg).io)) 
    // val bcd0 = Module(new bcd7seg)
    bcd(0) .en := io.en
    bcd (0).in := io.in / 10000000.U % 10.U
    io.out0 := bcd (0).out

    // val bcd1 = Module(new bcd7seg)
    bcd (1).en := io.en
    bcd (1).in := io.in / 1000000.U % 10.U
    
    // val bcd2 = Module(new bcd7seg)
    bcd (2).en := io.en
    bcd (2).in := io.in / 100000.U  % 10.U
  
    // val bcd3 = Module(new bcd7seg)
    bcd (3).en := io.en
    bcd (3).in := io.in / 10000.U  % 10.U

    // val bcd4 = Module(new bcd7seg)
    bcd (4).en := io.en
    bcd (4).in := io.in / 1000.U  % 10.U

    // val bcd5 = Module(new bcd7seg)
    bcd (5).en := io.en
    bcd (5).in := io.in / 100.U  % 10.U

    // val bcd6 = Module(new bcd7seg)
    bcd (6).en := io.en
    bcd (6).in := io.in / 10.U  % 10.U

    // val bcd7 = Module(new bcd7seg)
    bcd (7).en := io.en
    bcd (7).in := io.in  % 10.U
 

    out_temp := Mux(b,(out_temp + 1.U)%4.U,out_temp)
  
   	when(out_temp === 0.U) {
        io.out0 := bcd (0).out
        io.out1 := bcd (4).out
        io.out_sel1 := 0x08.U
        io.out_sel2 := 0x08.U
    }.elsewhen(out_temp === 1.U) {
        io.out0 := bcd (1).out
        io.out1 := bcd (5).out
        io.out_sel1 := 0x04.U
        io.out_sel2 := 0x04.U
    }.elsewhen(out_temp === 2.U) {
        io.out0 := bcd (2).out
        io.out1 := bcd (6).out
        io.out_sel1 := 0x02.U
        io.out_sel2 := 0x02.U
    }.otherwise{
        io.out0 := bcd (3).out
        io.out1 := bcd (7).out
        io.out_sel1 := 0x01.U
        io.out_sel2 := 0x01.U
    }

}

import chisel3.stage.ChiselStage

// object show_num extends App{
//     (new ChiselStage).emitVerilog(new Show_Numbers)
// }
