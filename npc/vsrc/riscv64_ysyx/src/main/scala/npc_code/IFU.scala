
// package examples

// import chisel3._
// import chisel3.stage.ChiselStage

// class IFU extends Module {//only fetch the instruction whith the input pc
        
//     val io = IO(new Bundle { //有隐式的时钟与复位，并且复位为高电平复位
//        // val pc_worktype   = Input(UInt(1.W))  //counter or assign new number
//         val pc    = Input(UInt(64.W))
//         val mem_instrution = Input(UInt(32.W))// 由于存储器接口的信号在顶层，则写了一个instruction的信号出来
//         val ifu_instruction  = Output(UInt(32.W))
//     }) //只起着取指的作用
//     val instruction_reg   = Wire(UInt(32.W))
//     io.ifu_instruction    := instruction_reg
//     instruction_reg       := io.mem_instrution
 
    

// }
