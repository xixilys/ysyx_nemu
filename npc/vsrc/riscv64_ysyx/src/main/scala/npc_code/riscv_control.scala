
// package examples

// import chisel3._
// import chisel3.stage.ChiselStage
// import chisel3.util._


// class riscv_control extends Module {//only decode  the instruction whith the input pc
        
//     val io = IO(new Bundle { //有隐式的时钟与复位，并且复位为高电平复位
//         val mem_instrution   = Input(UInt(32.W))
//        // val control_output   = Output(UInt(64.W))
//         val pc   = Output(UInt(64.W))//现在就一个单周期cpu容易被优化
//         val riscv_instruction = Output(UInt(32.W))
//         val answer =    Output(UInt(64.W))
//         val src1   =    Output(UInt(32.W))
//         val src2    = Output(UInt(32.W))
//         val dest    = Output(UInt(32.W))
//         val inscode  = Output(UInt(32.W))
//         val instype  = Output(UInt(4.W))
//         val trap_flag = Output(UInt(1.W))

//         //val exu_
//     })

//     val riscv_ins = Wire(UInt(64.W))
//     io.riscv_instruction := riscv_ins
//     val pc = RegInit(Cat(0.U(32.W),0x8.U(4.W),0.U(28.W)))
//     io.pc := pc
//     val ifu_instance = Module(new IFU) 
//     ifu_instance.io.pc := pc 
//     ifu_instance.io.mem_instrution := io.mem_instrution
//     riscv_ins          :=  ifu_instance.io.ifu_instruction 

//     // val src1 = RegInit(0.U(32.W)) 
//     // val src2 = RegInit(0.U(32.W)) 
//     // val dest = RegInit(0.U(32.W))
//     // val inscode  = RegInit(0.U(32.W))
//     // val instype  = RegInit(0.U(4.W))
//     val src1 = Wire(UInt(32.W)) 
//     val src2 = Wire(UInt(32.W)) 
//     val dest = Wire(UInt(32.W)) 
//     val inscode  = Wire(UInt(32.W)) 
//     val instype  = Wire(UInt(4.W)) 

//     io.src1 := src1
//     io.src2 := src2
//     io.dest := dest
//     io.instype :=  instype
//     io.inscode :=  inscode

//     val idu_instance = Module(new IDU) 
//     idu_instance.io.idu_instruction  := riscv_ins 
//     src1 := idu_instance.io.idu_src1
//     src2 := idu_instance.io.idu_src2
//     dest := idu_instance.io.idu_dest
//     inscode := idu_instance.io.idu_inscode
//     instype := idu_instance.io.idu_instype

//     val exu_enable = Wire(UInt(1.W))

  
//     val exu_instance = Module(new EXU)
//     exu_instance.io.exu_src1 := src1
//     exu_instance.io.exu_src2 := src2
//     exu_instance.io.exu_dest := dest
//     exu_instance.io.exu_inscode := inscode
//     exu_instance.io.exu_instype := instype
//     exu_instance.io.exu_enable  := exu_enable 

//     //写的太少了，容易被优化
//     io.answer := exu_instance.io.exu_answer
//     io.trap_flag := Mux(instype === 6.U,1.U,0.U)

//     // val(a,b) = Counter(true.B,3)
//     // pc := Mux((b === 1.U && instype =/= 6.U),pc + 4.U,pc)
    
//     // exu_enable := Mux((a===1.U),1.U,0.U)
//     exu_enable := 1.U
//     pc := pc + 4.U

// }

// // object riscv_test extends App{
// //     (new ChiselStage).emitVerilog(new riscv_control )
// // }

