
// package examples

// import chisel3._
// import chisel3.stage.ChiselStage
// import chisel3.util._

// class Alu extends Module {//only decode  the instruction whith the input pc
        
//     val io = IO(new Bundle { //有隐式的时钟与复位，并且复位为高电平复位

//         val operand_1        = Input(UInt(64.W))
//         val operand_2        = Input(UInt(64.W))
//         val operator         = Input(UInt(4.W))  // 0->+,1->-,2->*,3->/,4-><<,5->>
//         val answer           = Output(UInt(64.W))
//     })

//     io.answer := MuxCase(0.U(64.W),Array(
//         (io.operator === 0.U) -> (io.operand_1 + io.operand_2)  ,
//         (io.operator === 1.U) -> (io.operand_1 - io.operand_2)  ,
//         (io.operator === 2.U) -> (io.operand_1 * io.operand_2)  ,
//         (io.operator === 3.U) -> (io.operand_1 / io.operand_2)  ,
//         (io.operator === 4.U) -> (io.operand_1 << io.operand_2) ,
//         (io.operator === 5.U) -> (io.operand_1 >> io.operand_2) 
//     ))

//     //目前仅仅实现addi，没有想好怎么写一个更好的结构
// }


// class EXU extends Module {//only decode  the instruction whith the input pc
        
//     val io = IO(new Bundle { //有隐式的时钟与复位，并且复位为高电平复位

//         val exu_src1         = Input(UInt(32.W))
//         val exu_src2         = Input(UInt(32.W))
//         val exu_dest         = Input(UInt(32.W))
//         val exu_inscode      = Input(UInt(32.W))
//         val exu_instype      = Input(UInt(32.W)) //0->R 1->I 2->S 3-SB 4->U 5->UJ
//         val exu_answer       = Output(UInt(64.W))//val exu_
//         val exu_enable       = Input(UInt(1.W))
//     })
//     val  Riscv_Reg = Reg(Vec(32, UInt(64.W)))
//     Riscv_Reg(0) := 0.U(64.W)
//    // val Riscv_Reg  = Wire(Vec(32,RegInit(0.U(64.W))))
//     //val type_R_answer = Wire(UInt(64.W))
//     val type_I_answer = Wire(UInt(64.W))
//     // type_I_answer := Mux((io.exu_instype === 1.U),alu1.io.answer,type_I_answer)
//     type_I_answer := Mux((io.exu_instype === 1.U),MuxCase(0.U(64.W),Array(
//         (io.exu_inscode(9,0) === "b0000010011".U) -> (Riscv_Reg(io.exu_src1) + io.exu_src2) ,//addi
//         (io.exu_inscode(9,0) === "b0100010011".U) -> Mux((Riscv_Reg(io.exu_src1).asSInt < io.exu_src2.asSInt),1.U,0.U),  // slti
//         (io.exu_inscode(9,0) === "b0110010011".U) -> Mux((Riscv_Reg(io.exu_src1) < io.exu_src2),1.U,0.U))
//         ),0.U(64.W)
//     )
//     // alu1.io.operator := Mux((io.exu_instype === 1.U),MuxCase(0.U(64.W),Array(
//     //     (io.exu_inscode === 0000010011.U) -> (Riscv_Reg(io.exu_src1) + io.exu_src2) ,//addi
//     //     (io.exu_inscode === 0100010011.U) -> Mux((Riscv_Reg(io.exu_src1).asSInt < io.exu_src2.asSInt),1.U,0.U),  // slti
//     //     (io.exu_inscode === 0110010011.U) -> Mux((Riscv_Reg(io.exu_src1) < io.exu_src2),1.U,0.U))
//     //     ),0.U(64.W)
//     // )
//    // val type_U_answer = Wire(UInt(64.W))
//     //val type_UJ_answer = Wire(UInt(64.W))
    
//     //val alu1          = Module(new Alu)
    

//     Riscv_Reg(io.exu_dest) := Mux((io.exu_enable === 1.U),MuxCase(Riscv_Reg(io.exu_dest),Array(
//            // (io.exu_instype  === 0.U ) -> type_R_answer,
//             (io.exu_instype  === 1.U ) -> type_I_answer
//           //  (io.exu_instype  === 4.U ) -> type_U_answer,
//           //  (io.exu_instype  === 5.U ) -> type_UJ_answer
//           )),Riscv_Reg(io.exu_dest))

//     withClock(clock){
//         io.exu_answer := Riscv_Reg(io.exu_dest)
//     }

// }

