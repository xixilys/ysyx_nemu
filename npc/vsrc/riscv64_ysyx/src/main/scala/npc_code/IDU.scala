
// package examples

// import chisel3.util._
// import chisel3._
// import chisel3.stage.ChiselStage

// class IDU extends Module {//only decode  the instruction whith the input pc
        
//     val io = IO(new Bundle { //有隐式的时钟与复位，并且复位为高电平复位
//         val idu_instruction  = Input(UInt(32.W))
//         val idu_src1         = Output(UInt(32.W))
//         val idu_src2         = Output(UInt(32.W))
//         val idu_dest         = Output(UInt(32.W))
//         val idu_inscode      = Output(UInt(32.W))
//         val idu_instype      = Output(UInt(4.W)) //0->R 1->I 2->S 3-SB 4->U 5->UJ
//     })
//     def sign_extend(value:UInt,length:Int):UInt = 
//        Mux((value(length-1) === 1.U),Cat( ~0.U((64-length).W),value),Cat( 0.U((64-length).W),value))
    
        

    
    
//     val type_r_test  = io.idu_instruction(6,0)===0x33.U|| io.idu_instruction(6,0) === 0x3B.U
//     val type_I_test  = io.idu_instruction(6,0)===0x67.U || io.idu_instruction(6,0) === 0x13.U
//     val type_S_test  = io.idu_instruction(6,0)===0x03.U || io.idu_instruction(6,0) === 0x23.U
//     val type_SB_test = io.idu_instruction(6,0)===0x63.U 
//     val type_U_test  = io.idu_instruction(6,0)===0x37.U || io.idu_instruction(6,0) === 0x17.U
//     val type_UJ_test = io.idu_instruction(6,0)==="b_1101111".U
//     val type_Ebreak_test = io.idu_instruction ==="b0000000_00001_00000_000_00000_11100_11".U
//     val instype      = Wire(UInt(4.W))
//     io.idu_instype := instype
//     instype  := MuxCase(0xf.U(4.W),Seq(
//                     type_r_test   ->  0.U(4.W) ,
//                     type_I_test   ->  1.U(4.W) ,
//                     type_S_test   ->  2.U(4.W) ,
//                     type_SB_test  ->  3.U(4.W) ,
//                     type_U_test   ->  4.U(4.W) ,
//                     type_UJ_test  ->  5.U(4.W),
//                     type_Ebreak_test -> 6.U(4.W))) //通过mux搞出instruction的


//     val type_R_I_S_SB_src1 =io.idu_instruction(19,15)
//     val type_R_S_SB_src2 = io.idu_instruction(24,20)
//     val type_R_I_U_UJ_dest = io.idu_instruction(11,7)

//     // val type_I_src2 = io.idu_instruction>>20 & 0x00000fff.U // 为immu
    
//     val type_I_src2  = sign_extend(io.idu_instruction(31,20),12)
//     val type_S_dest = Cat(io.idu_instruction(31,25),io.idu_instruction(11,7))
//     val type_SB_dest = Cat(io.idu_instruction(31),io.idu_instruction(7),
//     io.idu_instruction(30,25),io.idu_instruction(11,8),0.U(1.W))
//     val type_U_src1 = Cat(io.idu_instruction(31,12),0.U(12.W))
//     val type_UJ_src1 = Cat(io.idu_instruction(31),io.idu_instruction(19,12),
//     io.idu_instruction(20),io.idu_instruction(30,21))
// //0->R 1->I 2->S 3-SB 4->U 5->UJ
//     io.idu_src1 := MuxCase(0.U(32.W),Seq(
//                     (instype === 0.U)   -> type_R_I_S_SB_src1 ,
//                     (instype === 1.U)   -> type_R_I_S_SB_src1 ,
//                     (instype === 2.U)   -> type_R_I_S_SB_src1 ,
//                     (instype === 3.U)   -> type_R_I_S_SB_src1 ,
//                     (instype === 4.U)   -> type_U_src1 ,
//                     (instype === 5.U)   -> type_UJ_src1 )) //通过mux搞出instruction的
// //0->R 1->I 2->S 3-SB 4->U 5->UJ
//     io.idu_src2 := MuxCase(0.U(32.W),Seq(
//                     (instype === 0.U)   -> type_R_S_SB_src2 ,
//                     (instype === 1.U)   -> type_I_src2,
//                     (instype === 2.U)   -> type_R_S_SB_src2  ,
//                     (instype === 3.U)   -> type_R_S_SB_src2  ,
//                     (instype === 4.U)   -> 0.U ,
//                     (instype === 5.U)   -> 0.U )) //通过mux搞出instruction的      
// //0->R 1->I 2->S 3-SB 4->U 5->UJ
//     io.idu_dest := MuxCase(0.U(32.W),Seq(
//                     (instype === 0.U)   -> type_R_I_U_UJ_dest ,
//                     (instype === 1.U)   -> type_R_I_U_UJ_dest,
//                     (instype === 2.U)   -> type_S_dest  ,
//                     (instype === 3.U)   -> type_SB_dest  ,
//                     (instype === 4.U)   -> type_R_I_U_UJ_dest ,
//                     (instype === 5.U)   -> type_R_I_U_UJ_dest )) //通过mux搞出instruction的                    
    
//     io.idu_inscode := Cat(io.idu_instruction(31,25),io.idu_instruction(14,12),io.idu_instruction(6,0))     



// }
// // object IDU_test extends App{
// //     (new ChiselStage).emitVerilog(new IDU)
// // }
