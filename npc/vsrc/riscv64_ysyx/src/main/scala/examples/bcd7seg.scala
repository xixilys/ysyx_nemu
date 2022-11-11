package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._
class bcd7seg extends Module {

    val io = IO(new Bundle {
        val in  = Input(UInt(4.W))
        val out = Output(UInt(7.W))
        val en  = Input(UInt(1.W))
    })
	io.out := Mux(io.en.asBool,MuxLookup(io.in,0.U,Seq(
		0.U -> 0x3f.U,1.U -> 0x06.U,2.U -> 0x5b.U,
		3.U -> 0x4f.U,4.U -> 0x66.U,5.U -> 0x6d.U,
		6.U -> 0x7d.U,7.U -> 0x07.U,8.U -> 0x7f.U,
		9.U -> 0x6f.U)),0x00.U)
}
	// when(io.en === 1.U) {
	// 	when(io.in === 0.U) {
	// 		io.out := 0x3f.U//7'01111111
	// 	}.elsewhen(io.in === 1.U) {
	// 		io.out := 0x06.U//7'0000110;
	// 	}.elsewhen(io.in === 2.U) {
	// 		io.out := 0x5b.U//  7'b0010010;
	// 	}.elsewhen(io.in === 3.U) {
	// 		io.out := 0x4f.U //7'b0000110;
	// 	}.elsewhen(io.in === 4.U) {
	// 		io.out := 0x66.U //7'b1001100;
	// 	}.elsewhen(io.in === 5.U) {
	// 		io.out := 0x6d.U// 7'b0100100;
	// 	}.elsewhen(io.in === 6.U) {
	// 		io.out := 0x7d.U//7'b0100000;
	// 	}.elsewhen(io.in === 7.U) {
	// 		io.out := 0x07.U //7'b0001111;
	// 	}.elsewhen(io.in === 8.U) {
	// 		io.out := 0x7f.U //7'b0000000;
	// 	}.otherwise{
	// 		io.out := 0x6f.U//7'b0000100;
	// 	}
	// }.otherwise{ 
	// 	io.out := 0x00.U
	// }	


// object bcd7seg extends App{
//     (new ChiselStage).emitVerilog(new bcd7seg)
// }
