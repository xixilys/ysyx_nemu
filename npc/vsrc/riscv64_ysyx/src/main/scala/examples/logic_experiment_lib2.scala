package examples
import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._


trait system_config {
    val sys_clock_frequency  =  100000000
}

class logic_experiment_lib2 extends Module{
    
    val io = IO(new Bundle {
        val en   = Input(UInt(1.W))
        val in   = Input(UInt(1.W))
        val out0 = Output(UInt(7.W))
        val out1 = Output(UInt(7.W))
        val out_sel1 = Output(UInt(4.W))
        val out_sel2 = Output(UInt(4.W))
    })
    val timer_reg = Wire(UInt(1.W))
    val num_reg   = RegInit(0.U(32.W))
    val timer1    = Module( new timer(2))//产生2HZ
    val in1_reg_past   = RegInit(0.U(1.W))
    val in1_reg_present = RegInit(0.U(1.W))
    in1_reg_past    := in1_reg_present
    in1_reg_present    := io.in
   
    timer_reg := timer1.io.out
    timer1.io.en   := io.en

    val show_number = Module(new Show_Numbers)
    io.out_sel1 := show_number.io.out_sel1
    io.out_sel2 := show_number.io.out_sel2
    show_number.io.in := num_reg
    io.out0 := show_number.io.out0
    io.out1 := show_number.io.out1

    timer1.io.en := io.en
    show_number.io.en := 1.U
    val(a,b) = Counter(in1_reg_present.asBool,100000)
    val bottom_flag = RegInit(0.U(1.W))
    bottom_flag := Mux(b.asBool,0.U,Mux(bottom_flag.asBool,1.U,(!in1_reg_past.asBool&&in1_reg_present.asBool)))


    num_reg :=  MuxCase(num_reg,Seq(
        (timer_reg.asBool && io.en.asBool) -> Mux(num_reg === 9999.U,0.U,(num_reg+1.U)),
        (bottom_flag.asBool && in1_reg_present ===1.U && !io.en.asBool && b.asBool) -> (num_reg+ 1.U)
    ))
}

//     withClock(clock) {
//         when(io.in === 1.U) {
//             num_reg := 20202542.U
//         }.elsewhen(timer_reg === 1.U) {
//             when(num_reg === 20202542.U) {
//                 num_reg := 0.U
//             }.otherwise {
//                 num_reg := num_reg + 1.U
//             }
//         }.otherwise{
//             num_reg := num_reg
//         }

//     }
// }
    
//  object lib2_test extends App{
//     (new ChiselStage).emitVerilog(new logic_experiment_lib2)
// }
   



    
