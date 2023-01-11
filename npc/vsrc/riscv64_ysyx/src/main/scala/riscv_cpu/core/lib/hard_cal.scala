package examples

import difftest._
import chisel3._
import chisel3.stage._
import chisel3.util._
import os.makeDir
class  ysyx_bundle(width:Int) extends  Bundle {
    val mul_valid	 = Input(Bool())	
    val flush	     = Input(Bool())	
    val mulw	     = Input(Bool()) //选择是否为32bit	
    val mul_signed	 = Input(UInt(3.W))	//signed * unsigned and signed * signed  and unsigned * unsigned
    val multiplicand = Input(UInt(width.W))		
    val multiplier	 = Input(UInt(width.W))		
    val mul_ready	 = Output(Bool())	
    val out_valid	 = Output(Bool())		
    val result_hi	 = Output(UInt(width.W))		
    val result_lo	 = Output(UInt(width.W))
    }    
class mul_simple(width:Int) extends Module with riscv_macros{
    
    val io = IO(new Bundle {
        val result = Vec(2,Output(UInt(width.W)))
        val data = Vec(2,Input(UInt(width.W)))
        val input_valid = Input(Bool())
        val input_ready = Output(Bool())
        val Output_valid = Output(Bool())
        val signed = Input(Bool())
    })
    
  // Define the registers for storing the intermediate results of the multiplication
    val regs = RegInit(VecInit(Seq.fill(2)(0.U((width  * 2 ).W))))
    val signed = RegInit(0.U.asBool)
    val counter = RegInit(0.U(log2Up(width).W))
    val cal_start = RegInit(0.U.asBool)
    cal_start := Mux(io.input_valid && io.input_ready,1.U.asBool,Mux(counter === (width - 1).U,0.U.asBool,cal_start))
    counter := Mux(cal_start ,counter + 1.U,0.U)
    signed  := Mux(io.input_valid && io.input_ready , io.signed  ,signed)
    val result_reg = RegInit(0.U((width * 2).W)) 

    regs(0) := Mux(io.input_valid && io.input_ready,Mux(io.signed,sign_extend(io.data(0),width,width * 2),io.data(0)),Mux(cal_start,regs(0) << 1,regs(0)));
    regs(1) := Mux(io.input_valid && io.input_ready,io.data(1),Mux(cal_start,regs(1) >> 1,regs(1)));
    result_reg := Mux(cal_start,Mux(regs(1)(0) && counter < (width - 2).U,result_reg + regs(0),Mux(regs(1)(0) && counter === (width - 2).U ,Mux(signed,result_reg - regs(0),result_reg +  regs(0)),result_reg)),0.U)
    io.result(0) := result_reg(width - 1 , 0)
    io.result(1) := result_reg(width * 2 -1 ,width)
    io.Output_valid :=  counter === width.U - 1.U
    io.input_ready := !cal_start
}


class div_simple(width:Int) extends Module with riscv_macros{
    
    val io = IO(new Bundle {
        val result = Vec(2,Output(UInt(width.W)))
        val data = Vec(2,Input(UInt(width.W)))
        val input_valid = Input(Bool())
        val input_ready = Output(Bool())
        val Output_valid = Output(Bool())
        val signed = Input(Bool())
    })
    
  // Define the registers for storing the intermediate results of the multiplication
    val regs = RegInit(VecInit(Seq.fill(2)(0.U((width  * 2 ).W))))
    val signed = RegInit(0.U.asBool)
    val counter = RegInit(0.U((log2Up(width)  + 1).W))
    val cal_start = RegInit(0.U.asBool)
    cal_start := Mux(io.input_valid && io.input_ready,1.U.asBool,Mux(counter === (width ).U,0.U.asBool,cal_start))
    counter := Mux(cal_start ,counter + 1.U,0.U)
    signed  := Mux(io.input_valid && io.input_ready , io.signed  ,signed)
    val result_reg = RegInit(0.U((width ).W)) 
    val minus_answer = Wire(Bool())
    val data_in = Wire(Vec(2,(UInt(width.W))))
    data_in.zipWithIndex.foreach{ case(a,index) => 
        a := Mux(io.signed && io.data(index)(width - 1),((~io.data(index)) + 1.U(width.W)),io.data(index))
    }
    val result_sign = Wire(Vec(2,(Bool())))
    result_sign := Mux(io.signed,
        MuxLookup(Cat(io.data(0)(width - 1),io.data(1)(width - 1)),0.U.asTypeOf(result_sign),Seq(
            "b11".U -> "b10".U.asTypeOf(result_sign),
            "b10".U -> "b11".U.asTypeOf(result_sign),
            "b01".U -> "b01".U.asTypeOf(result_sign),
            "b00".U -> "b00".U.asTypeOf(result_sign)
        
        ))
        ,0.U.asTypeOf(result_sign))

    // printf("result_sign is %d\n",result_sign(1))

    // val
//被除数
    val by_divide_num = regs(0)(2 * width - 1,width - 1).asSInt - Cat(0.U(1.W),regs(1)(width - 1 ,0)).asSInt
    minus_answer := by_divide_num >= 0.asSInt
    val regs0_to_be = Cat(Mux(minus_answer,by_divide_num.asUInt(width - 1,0),(regs(0))(2 * width - 2,width  - 1)),(regs(0))(width - 2 ,0),0.U(1.W))
    regs(0) := Mux(io.input_valid && io.input_ready,data_in(0),Mux(cal_start,regs0_to_be,regs(0)));
    // regs0_to_be := 
    regs(1) := Mux(io.input_valid && io.input_ready,data_in(1),regs(1));
    result_reg := Mux(cal_start,Cat((result_reg << 1 )(width - 1,1),minus_answer),result_reg)
    val result_before = Wire(Vec(2,(UInt(width.W))))
    result_before(0) := Cat((result_reg << 1 )(width - 1,1),minus_answer)
    // io.result(1) :=Mux(minus_answer,by_divide_num.asUInt(width - 1,0),(regs(0))(2 * width - 1,width ))
    result_before(1) := Mux(minus_answer,by_divide_num.asUInt(width - 1,0),(regs(0))(2 * width - 2,width - 1) )
    io.result.zipWithIndex.foreach{case(a,index) =>
        a := Mux(result_sign(index),(~result_before(index) + 1.U(width.W)),result_before(index))    
    }
    io.Output_valid :=  counter === width.U - 1.U
    io.input_ready := !cal_start
}

class accumulate_simple(width:Int,one_cal_times:Int) extends Module with riscv_macros{
    val data_source = 0
    val data_times  = 1
    val io = IO(new Bundle {
        val result = Output(UInt(width.W))
        val data = Vec(2,Input(UInt(width.W)))
        val input_valid = Input(Bool())
        val input_ready = Output(Bool())
        val Output_valid = Output(Bool())
        val signed = Input(Bool())
    })
    val regs_for_mul_add = 0
    val regs_under_add = 1
  // Define the registers for storing the intermediate results of the multiplication
    val regs = RegInit(VecInit(Seq.fill(2)(0.U((width).W))))
    val signed = RegInit(0.U.asBool)
    val counter = RegInit(0.U(((width)  ).W))
    val cal_start = RegInit(0.U.asBool)
    val cal_times = RegInit(0.U(width.W))

    cal_times := Mux(io.input_valid && io.input_ready,io.data(data_times),cal_times)
    cal_start := Mux(io.input_valid && io.input_ready,1.U.asBool,Mux(counter === (width ).U,0.U.asBool,cal_start))
    counter := Mux(cal_start ,counter + 1.U,0.U)
    signed  := Mux(io.input_valid && io.input_ready , io.signed  ,signed)

    // val cal_reg = RegInit(0.U((width ).W))
    //一个周期算两次加法
    val caling_data  = Wire(Vec(one_cal_times,UInt(width.W)))
    regs(regs_under_add) := Mux(io.input_valid && io.input_ready,io.data(data_source),caling_data(one_cal_times - 1))
    regs(regs_for_mul_add) := Mux(io.input_valid && io.input_ready,io.data(data_source),regs(regs_for_mul_add) + one_cal_times.U)
    caling_data.zipWithIndex.foreach{case(a,index) =>
        if(index == 0) {
            caling_data(index) := regs(regs_under_add) + regs(regs_for_mul_add) + 1.U
        }else{
            caling_data(index) := caling_data(index - 1) + regs(regs_for_mul_add) + (index + 1).U
        }
    }
    io.result := caling_data(cal_times(log2Up(one_cal_times) - 1 ,0))
    // io.result(1)
    // val minus_answer = Wire(Bool())

//被除数


  

    io.Output_valid :=  counter === cal_times(width - 1,log2Up(one_cal_times)) 
    io.input_ready := !cal_start
}
// class ysyx_cal_mul(mul_type:String) extends  Module {
//     val io = IO(new ysyx_bundle(64))
//     val mul_module = Module(new mul_simple(66)).io
//     if(mul_type == "easy") {
//         val cal_start = RegInit(0.U.asBool)
//         val hands_ok = io.mul_valid && io.mul_ready
//         cal_start := Mux(hands_ok,1.U,Mux(mul_module.Output_valid,0.U.asBool,cal_start))
//         mul_module.data(0) := Mux1H(Seq(
//             io.mul_signed
//         ))
//     }else if(mul_type == "hard") {

//     }


    
// }