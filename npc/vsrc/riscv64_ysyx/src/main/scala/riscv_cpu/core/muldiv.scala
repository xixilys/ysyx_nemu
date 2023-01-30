
// package examples

// import chisel3._
// import chisel3.stage.ChiselStage
// import chisel3.util._

// // class unsigned_div extends BlackBox{

// //     val io = IO(new Bundle {
// //         val aclk = Input(Clock())
// //         val s_axis_divisor_tvalid  = Input(UInt(1.W))
// //         val s_axis_divisor_tready  = Output(UInt(1.W))
// //         val s_axis_divisor_tdata   = Input(UInt(32.W))
// //         val s_axis_dividend_tvalid = Input(UInt(1.W))
// //         val s_axis_dividend_tready = Output(UInt(1.W))
// //         val s_axis_dividend_tdata  = Input(UInt(32.W))
// //         val m_axis_dout_tvalid     = Output(UInt(1.W))
// //         val m_axis_dout_tdata      = Output(UInt(64.W))
// //   })

// // }

// // class signed_div extends BlackBox{

// //     val io = IO(new Bundle {
// //         val aclk = Input(Clock())
// //         val s_axis_divisor_tvalid  = Input(UInt(1.W))
// //         val s_axis_divisor_tready  = Output(UInt(1.W))
// //         val s_axis_divisor_tdata   = Input(UInt(32.W))
// //         val s_axis_dividend_tvalid = Input(UInt(1.W))
// //         val s_axis_dividend_tready = Output(UInt(1.W))
// //         val s_axis_dividend_tdata  = Input(UInt(32.W))
// //         val m_axis_dout_tvalid     = Output(UInt(1.W))
// //         val m_axis_dout_tdata      = Output(UInt(64.W))

// //   })

// // }

// class unsigned_mul extends BlackBox{

//     val io = IO(new Bundle {
//         val CLK = Input(Clock())
//         val A  = Input(UInt(32.W))
//         val B  = Input(UInt(32.W))
//         val CE = Input(UInt(1.W))
//         val P  = Output(UInt(64.W))
//   })

// }

// class signed_mul extends BlackBox{

//     val io = IO(new Bundle {
//         val CLK = Input(Clock())
//         val A  = Input(UInt(32.W))
//         val B  = Input(UInt(32.W))
//         val CE = Input(UInt(1.W))
//         val P  = Output(UInt(64.W))
//   })
// }


// class muldiv extends Module with riscv_macros{ //觉得除法器那一块有很多可以改的东西，但是怕改了出问题，还是不要改了吧

//     val io = IO(new Bundle { //有隐式的时钟与复位，并且复位为高电平复位
//         //流水线中的延迟器
//         val en  = Input(UInt(1.W))
//         val ctrl = Input(UInt(5.W))
       
//         val in1  = Input(UInt(32.W))
//         val in2  = Input(UInt(32.W))
//         val hi   = Output(UInt(32.W))
//         val lo   = Output(UInt(32.W))
//         val pending = Output(UInt(1.W))
//       // val b = Output(UInt(1.W))
//         //val a = Output(UInt)
//     })

//     // val pending_Reg = RegInit(0.U(1.W))
//     val counter_Reg = RegInit(0.U(1.W))
//     val last_counter_Reg = RegInit(0.U(1.W))
//     last_counter_Reg := counter_Reg
//     // io.pending     := pending_Reg

//     val mulu_answer = Wire(UInt(64.W))
//     val mul_answer = Wire(UInt(64.W))

//     // val hi_r = RegInit(0.U(32.W)) // 由于除法器用的ip核为时序电路不是组合逻辑,为了优化
//     // val lo_r = RegInit(0.U(32.W))//用来存储除法器输出的数据

//     val in1_valid_u = RegInit(0.U(1.W))
//     val in2_valid_u = RegInit(0.U(1.W))
//     val in1_valid = RegInit(0.U(1.W))//RegInit(0.U(1.W))
//     val in2_valid = RegInit(0.U(1.W))
//     val divu_output_valid =  Wire(UInt(1.W))
//     val div_output_valid =  Wire(UInt(1.W))

//     val in2_ready_u =Wire(UInt(1.W))
//     val in1_ready_u =Wire(UInt(1.W))
//     val in2_ready =Wire(UInt(1.W))
//     val in1_ready =Wire(UInt(1.W))

//     val divisor_Reg = Wire(UInt(32.W))
//    // val divisor_Reg = RegInit(0.U(32.W))//除数
//     val dividend_Reg = Wire(UInt(32.W))
//    // val dividend_Reg = RegInit(0.U(32.W))//被除数
//     val mul_A = Mux(io.en.asBool,io.in1,0.U)
//     val mul_B = Mux(io.en.asBool,io.in2,0.U)

//     divisor_Reg := Mux(io.en.asBool,io.in2,0.U)//这地方写的我就是沙比，如果真的是寄存器的 话
//     dividend_Reg := Mux(io.en.asBool,io.in1,0.U)//这地方写的我就是沙比

    

//     val divu_answer  = Wire(UInt(64.W))
//     val div_answer  = Wire(UInt(64.W))

//     in1_valid := 1.U
//     in2_valid := 1.U
//     in1_valid_u := 1.U
//     in2_valid_u := 1.U
//    // pending_Reg := 0.U
    
 
//     //搞不出来能用的时序的除法器，怪的一批，到时候再看看咋办吧呜呜呜
//     //val div_en_tag = io.en === 1.U && pending_Reg === 0.U //代表现实处于除法可以计算的状态
//     ///val div_end_tag = pending_Reg.asBool //&& in1_ready.asBool && in2_ready.asBool
//     //val divu_end_tag = pending_Reg.asBool //&& in1_ready_u.asBool && in2_ready_u.asBool
//     val output_valid_tag = divu_output_valid.asBool || div_output_valid.asBool


//     val a = RegInit(0.U(32.W))
//     val b = RegInit(0.U(1.W))
//     val limit = Wire(UInt(32.W))
//     limit := Mux(io.ctrl(0),34.U,32.U)
//     a := Mux(counter_Reg.asBool,Mux(a === limit,0.U,(a+1.U)),0.U)
//     b := Mux(a === limit,1.U,0.U)

//     val mul_counter_Reg = RegInit(0.U.asBool)
//     val a_mul = RegInit(0.U(32.W))
//     val b_mul = RegInit(0.U(1.W))
//     val limit_mul = Wire(UInt(32.W))
//     val mul_counter_enable = io.en.asBool &&  (io.ctrl(2) || io.ctrl(3) || io.ctrl(4))
      
//     limit_mul := 3.U
//     a_mul := Mux(mul_counter_enable.asBool,Mux(a_mul === limit_mul - 1.U,0.U,(a_mul + 1.U)),0.U)
//     b_mul := Mux(a_mul === limit_mul - 1.U,0.U,1.U)

//    // io.b := b
//     when(io.en.asBool && !counter_Reg.asBool) {
//         when(io.ctrl(0) ) {
//             when(in1_ready.asBool) {
//                 counter_Reg := 1.U
//             }
//         }.elsewhen(io.ctrl(1)){ 
//             when(in1_ready_u.asBool) {
//                 counter_Reg:= 1.U
//             }
//         }
//     }.otherwise{
//         when(b.asBool) {

//             counter_Reg := 0.U

//         }

//     }
//     io.pending := Mux(io.en.asBool && (io.ctrl(0) || io.ctrl(1) ),Mux(last_counter_Reg === 1.U && counter_Reg === 0.U,0.U,1.U),
//         Mux(io.en.asBool && (io.ctrl(2)|| io.ctrl(3) || io.ctrl(4)),b_mul,0.U))




//     io.lo := Mux1H(Seq(
//         io.ctrl(0) -> div_answer(63,32),
//         io.ctrl(1) -> divu_answer(63,32),
//         io.ctrl(2) -> mul_answer(31,0),
//         io.ctrl(3) -> mulu_answer(31,0),
//         io.ctrl(4) -> mulu_answer(31,0),
//     ))

//     io.hi := Mux1H(Seq(
//         io.ctrl(0) -> div_answer(31,0),
//         io.ctrl(1) -> divu_answer(31,0),
//         io.ctrl(2) -> mul_answer(63,32),
//         io.ctrl(3) -> mulu_answer(63,32),
//         io.ctrl(4) -> mulu_answer(63,32)
//     ))


//     val _udiv = Module(new unsigned_div)  //时钟信号最好保持均为上升沿触发
//     _udiv.io.aclk := clock//反向的时钟来驱动触除法器，以保证下一周期需要的时候肯定能有结果，并且输入也可以使用寄存器
//     _udiv.io.s_axis_divisor_tvalid :=  in2_valid_u //I2为除数
//     _udiv.io.s_axis_divisor_tdata  :=  divisor_Reg
//     _udiv.io.s_axis_dividend_tvalid :=  in1_valid_u 
//     _udiv.io.s_axis_dividend_tdata :=  dividend_Reg
//     in2_ready_u :=  _udiv.io.s_axis_divisor_tready
//     in1_ready_u :=  _udiv.io.s_axis_dividend_tready
//     divu_answer :=  _udiv.io.m_axis_dout_tdata
//     divu_output_valid :=  _udiv.io.m_axis_dout_tvalid


//     val _div  = Module(new signed_div)    
//     _div.io.aclk := clock
//     _div.io.s_axis_divisor_tvalid :=  in2_valid //I2为除数
//     _div.io.s_axis_divisor_tdata  :=  divisor_Reg
//     _div.io.s_axis_dividend_tvalid :=  in1_valid 
//     _div.io.s_axis_dividend_tdata :=  dividend_Reg
//     in2_ready :=  _div.io.s_axis_divisor_tready
//     in1_ready :=  _div.io.s_axis_dividend_tready
//     div_answer :=  _div.io.m_axis_dout_tdata
//     div_output_valid :=  _div.io.m_axis_dout_tvalid

//     val _mul = Module(new signed_mul)
//     _mul.io.A  :=  mul_A
//     _mul.io.B  :=  mul_B
//     _mul.io.CLK := clock    
//     _mul.io.CE :=  mul_counter_enable
//     mul_answer := _mul.io.P




//     val _umul = Module(new unsigned_mul)
//     _umul.io.A  :=  mul_A
//     _umul.io.B  :=  mul_B
//     _umul.io.CLK := clock    
//     _umul.io.CE := mul_counter_enable
//     mulu_answer := _umul.io.P
//     // mulu_answer := io.in1 * io.in2
//     // mul_answer := (io.in1.asSInt * io.in2.asSInt).asUInt

  
// }

// // object muldiv_test extends App{
// //     (new ChiselStage).emitVerilog(new muldiv )
// // }


package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._

// class unsigned_div extends BlackBox{

//     val io = IO(new Bundle {
//         val aclk = Input(Clock())
//         val s_axis_divisor_tvalid  = Input(UInt(1.W))
//         val s_axis_divisor_tready  = Output(UInt(1.W))
//         val s_axis_divisor_tdata   = Input(UInt(32.W))
//         val s_axis_dividend_tvalid = Input(UInt(1.W))
//         val s_axis_dividend_tready = Output(UInt(1.W))
//         val s_axis_dividend_tdata  = Input(UInt(32.W))
//         val m_axis_dout_tvalid     = Output(UInt(1.W))
//         val m_axis_dout_tdata      = Output(UInt(64.W))
//   })

// }

// class signed_div extends BlackBox{

//     val io = IO(new Bundle {
//         val aclk = Input(Clock())
//         val s_axis_divisor_tvalid  = Input(UInt(1.W))
//         val s_axis_divisor_tready  = Output(UInt(1.W))
//         val s_axis_divisor_tdata   = Input(UInt(32.W))
//         val s_axis_dividend_tvalid = Input(UInt(1.W))
//         val s_axis_dividend_tready = Output(UInt(1.W))
//         val s_axis_dividend_tdata  = Input(UInt(32.W))
//         val m_axis_dout_tvalid     = Output(UInt(1.W))
//         val m_axis_dout_tdata      = Output(UInt(64.W))

//   })

// }

class muldiv(mul_type :String,div_type:String) extends Module with riscv_macros{ //觉得除法器那一块有很多可以改的东西，但是怕改了出问题，还是不要改了吧

    val io = IO(new Bundle { //有隐式的时钟与复位，并且复位为高电平复位
        //流水线中的延迟器
        val en  = Input(UInt(1.W))
        val ctrl = Input(UInt(24.W))
       
        val in1  = Input(UInt(data_length.W))
        val in2  = Input(UInt(data_length.W))
        // val hi   = Output(UInt(data_length.W))
        // val lo   = Output(UInt(data_length.W))
        val data_out = Output(UInt(data_length.W))
        val pending = Output(UInt(1.W))

    })
    val cal_start_mul = RegInit(0.U.asBool)
    val cal_end_mul = Wire(Bool())
    val cal_end_div = Wire(Bool())
    val cal_mul =   io.en.asBool &&  (  io.ctrl(MULDIV_MUL) || io.ctrl(MULDIV_MULHSU) || 
            io.ctrl(MULDIV_MULH)   || io.ctrl(MULDIV_MULHU) )
    val cal_div =   io.en.asBool &&  (  io.ctrl(MULDIV_DIV) || io.ctrl(MULDIV_DIVU) || 
             io.ctrl(MULDIV_REM)  || io.ctrl(MULDIV_REMU) )
    val cal_divw = io.en.asBool && (io.ctrl(MULDIV_DIVW)  || io.ctrl(MULDIV_DIVUW)  ||     io.ctrl(MULDIV_REMW)   || io.ctrl(MULDIV_REMUW)) 
    val cal_mulw = io.en.asBool &&   io.ctrl(MULDIV_MULW)  
    val cal_mul_result = Wire(UInt(64.W))
    val cal_div_result = Wire(UInt(64.W))
    val work_state  = RegInit(0.U(4.W))
    val state_idle = 0.U
    val state_cal_mul = 1.U
    val state_cal_mulw = 2.U
    val state_cal_div = 3.U
    val state_cal_end = 4.U
    val state_cal_divw = 5.U
    val ctrl_data = RegInit(0.U(io.ctrl.getWidth.W))
    work_state := MuxCase(work_state,Seq(
        (cal_mul   && work_state === state_idle)->  state_cal_mul,
        (cal_mulw  && work_state === state_idle)->  state_cal_mulw,
        (cal_div   && work_state === state_idle)->  state_cal_div,
        (cal_divw  && work_state === state_idle)->  state_cal_divw,
        (cal_end_mul && (work_state === state_cal_mul || work_state === state_cal_mulw)) -> state_cal_end,
        (cal_end_div  && (work_state === state_cal_div || work_state === state_cal_divw)) -> state_cal_end,
        (work_state === state_cal_end)          ->  state_idle
    ))
    ctrl_data  := Mux(work_state === state_idle ,io.ctrl,ctrl_data)
    
    if(mul_type == "easy") {
        val mul_module = Module(new mul_simple(64)).io
        val mul_module_32_bit = Module(new mul_simple(32)).io
        val cal_signed =  io.ctrl(MULDIV_MUL) || io.ctrl(MULDIV_MULH) || io.ctrl(MULDIV_MULW) || io.ctrl(MULDIV_MULHSU)
        mul_module.signed := cal_signed
        mul_module_32_bit.signed := cal_signed
        mul_module.data(0) := io.in1
        mul_module.data(1) := io.in2
        mul_module_32_bit.data(0) := io.in1
        mul_module_32_bit.data(1) := io.in2
        mul_module.input_valid  := Mux(work_state === state_idle && cal_mul,1.U.asBool,0.U.asBool)
        mul_module_32_bit.input_valid := Mux(work_state === state_idle && cal_mulw,1.U.asBool,0.U.asBool)
        cal_end_mul := MuxCase(0.U.asBool,Seq(
            (work_state === state_cal_mul && mul_module.Output_valid)  ->  1.U.asBool,
            (work_state === state_cal_mulw && mul_module_32_bit.Output_valid) -> 1.U.asBool  
        ))
        val mul_cal_reg = RegInit(0.U(64.W))
        val access_mul_result =  Mux1H(Seq(
                    ctrl_data(MULDIV_MUL)   -> mul_module.result(0),
                    ctrl_data(MULDIV_MULH)  -> mul_module.result(1),
                    ctrl_data(MULDIV_MULHU) -> mul_module.result(1),
                    ctrl_data(MULDIV_MULHSU)-> mul_module.result(1),
                    ctrl_data(MULDIV_MULW)  -> sign_extend(mul_module_32_bit.result(0),32)
        ))
        cal_mul_result := Mux(cal_end_mul,access_mul_result,mul_cal_reg) 
        mul_cal_reg := Mux(cal_end_mul,access_mul_result,mul_cal_reg) 

    }else if(mul_type == "hard") {
        //符号扩展来控制罢了
        val mul_module = Module(new mul_hard(66)).io
        val mul_module_32_bit = Module(new mul_hard(34)).io
        val cal_signed =  io.ctrl(MULDIV_MUL) || io.ctrl(MULDIV_MULH) || io.ctrl(MULDIV_MULW) || io.ctrl(MULDIV_MULHSU)
        mul_module.signed := cal_signed
        mul_module_32_bit.signed := cal_signed
        mul_module.data(0) := Mux(cal_signed,sign_extend(io.in1,64,66),unsign_extend(io.in1,64,66))
        mul_module.data(1) := Mux(cal_signed,sign_extend(io.in2,64,66),unsign_extend(io.in2,64,66))
        mul_module_32_bit.data(0) := Mux(cal_signed,sign_extend(io.in1(31,0),32,34),unsign_extend(io.in1(31,0),32,34))
        mul_module_32_bit.data(1) := Mux(cal_signed,sign_extend(io.in2(31,0),32,34),unsign_extend(io.in2(31,0),32,34))
        mul_module.input_valid  := Mux(work_state === state_idle && cal_mul,1.U.asBool,0.U.asBool)
        mul_module_32_bit.input_valid := Mux(work_state === state_idle && cal_mulw,1.U.asBool,0.U.asBool)
        cal_end_mul := MuxCase(0.U.asBool,Seq(
            (work_state === state_cal_mul && mul_module.Output_valid)  ->  1.U.asBool,
            (work_state === state_cal_mulw && mul_module_32_bit.Output_valid) -> 1.U.asBool  
        ))
        val final_result = Cat(mul_module.result(1),mul_module.result(0))
        val mul_cal_reg = RegInit(0.U(64.W))
        val access_mul_result =  Mux1H(Seq(
                    ctrl_data(MULDIV_MUL)   -> final_result(63,0),
                    ctrl_data(MULDIV_MULH)  -> final_result(127,64),
                    ctrl_data(MULDIV_MULHU) -> final_result(127,64),
                    ctrl_data(MULDIV_MULHSU)-> final_result(127,64),
                    ctrl_data(MULDIV_MULW)  -> sign_extend(mul_module_32_bit.result(0)(31,0),32)
        ))
        cal_mul_result := Mux(cal_end_mul,access_mul_result,mul_cal_reg) 
        mul_cal_reg := Mux(cal_end_mul,access_mul_result,mul_cal_reg) 
    }

    if(div_type == "easy") {
        val div_module = Module(new div_simple(64)).io
        val div_module_32_bit = Module(new div_simple(32)).io
        val cal_signed =    io.ctrl(MULDIV_DIV) || io.ctrl(MULDIV_DIVW) || io.ctrl(MULDIV_REM) || io.ctrl(MULDIV_REMW) 
        div_module.signed := cal_signed
        div_module_32_bit.signed := cal_signed
        div_module.data(0) := io.in1
        div_module.data(1) := io.in2
        div_module_32_bit.data(0) := io.in1
        div_module_32_bit.data(1) := io.in2
        div_module.input_valid  := Mux(work_state === state_idle && cal_div,1.U.asBool,0.U.asBool)
        div_module_32_bit.input_valid := Mux(work_state === state_idle && cal_divw,1.U.asBool,0.U.asBool)
        cal_end_div := MuxCase(0.U.asBool,Seq(
            (work_state === state_cal_div && div_module.Output_valid)  ->  1.U.asBool,
            (work_state === state_cal_divw && div_module_32_bit.Output_valid) -> 1.U.asBool  
        ))
        val div_cal_reg = RegInit(0.U(64.W))
        val access_div_result =  Mux1H(Seq(
                    ctrl_data(MULDIV_DIV)   -> div_module.result(0),
                    ctrl_data(MULDIV_DIVU)  -> div_module.result(0),
                    ctrl_data(MULDIV_REM)   -> div_module.result(1),
                    ctrl_data(MULDIV_REMU)  -> div_module.result(1),
                    ctrl_data(MULDIV_DIVW)   -> sign_extend(div_module_32_bit.result(0),32),
                    ctrl_data(MULDIV_DIVUW)  -> sign_extend(div_module_32_bit.result(0),32),
                    ctrl_data(MULDIV_REMW)   -> sign_extend(div_module_32_bit.result(1),32),
                    ctrl_data(MULDIV_REMUW)  -> sign_extend(div_module_32_bit.result(1),32)
        ))
        cal_div_result := Mux(cal_end_div,access_div_result,div_cal_reg) 
        div_cal_reg := Mux(cal_end_div,access_div_result,div_cal_reg) 

    }else if(div_type == "hard") {

    }

    // val mulu_answer =  io.in1 * io.in2//Wire(UInt(64.W))
    // val mul_answer = io.in1.asSInt * io.in2.asSInt
    // val mulh_answer = mul_answer(data_length * 2 -1,data_length)
    // val mulhu_answer = mulu_answer(data_length * 2 -1 , data_length)
    // val mulhsu_answer = (io.in1.asSInt * io.in2.asUInt)(data_length * 2 -1 , data_length)
    // val mulw_answer  = sign_extend(mulu_answer(31,0),32)
    


    // val divu_answer  = (io.in1 / io.in2)(63,0) //Wire(UInt(64.W))
    // val div_answer  =  (io.in1.asSInt / io.in2.asSInt).asUInt//Wire(UInt(64.W))
    // val divw_answer  = sign_extend((io.in1(31,0).asSInt / io.in2(31,0).asSInt).asUInt,32)
    // val divuw_answer = unsign_extend((io.in1(31,0) / io.in2(31,0)).asUInt,32)
    // val remu_answer  =  (io.in1 % io.in2).asUInt
    // val rem_answer   =  (io.in1.asSInt % io.in2.asSInt).asUInt
    // val remw_answer  =  sign_extend((io.in1(31,0).asSInt % io.in2(31,0).asSInt).asUInt,32)
    // val remuw_answer =  unsign_extend((io.in1(31,0) % io.in2(31,0)),32) 


    io.data_out := Mux1H(Seq(
        io.ctrl(MULDIV_DIV)   -> cal_div_result,
        io.ctrl(MULDIV_DIVU)  -> cal_div_result,
        io.ctrl(MULDIV_DIVW)  -> cal_div_result,
        io.ctrl(MULDIV_DIVUW) -> cal_div_result,
        io.ctrl(MULDIV_REM)   -> cal_div_result,
        io.ctrl(MULDIV_REMU)  -> cal_div_result,
        io.ctrl(MULDIV_REMW)  -> cal_div_result,
        io.ctrl(MULDIV_REMUW) -> cal_div_result,
        io.ctrl(MULDIV_MUL)   -> cal_mul_result,
        io.ctrl(MULDIV_MULW)  -> cal_mul_result,
        io.ctrl(MULDIV_MULH)  -> cal_mul_result,
        io.ctrl(MULDIV_MULHU) -> cal_mul_result,
        io.ctrl(MULDIV_MULHSU)-> cal_mul_result
     ))
    // val pending_reg = RegInit(0.U.asBool())
    // pending_reg := Mux()

    io.pending := (work_state =/= state_idle && work_state =/= state_cal_end) || (work_state === state_idle && (cal_mul || cal_mulw || cal_div || cal_divw) ) 

  
}

// object muldiv_test extends App{
//     (new ChiselStage).emitVerilog(new muldiv )
// }

