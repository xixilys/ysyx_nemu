package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
import firrtl.PrimOps
import scala.math._
import scala.reflect.runtime.Macros
import javax.swing.plaf.basic.BasicToolBarUI


//想参数化，但是貌似不是很好参数化的样子，但是还好，直接粘贴过去改一下就行
class  fifo_with_data_length  (length :Int,width :Int,write_num:Int,read_num:Int) extends Module  with riscv_macros{
    val bank_width = log2Up(write_num.max(read_num))
    val bank_num  = pow(2,bank_width).toInt
    val length_width = (log10(length)/log10(2)).toInt
    val io = IO(new Bundle { 
        val read_en = Input(UInt(bank_width.W))
        val write_en = Input(UInt(bank_width.W))//0为前面的
        val read_out  = Vec(read_num,Output(UInt(width.W)))//0为前面的
        val write_in  = Vec(write_num,Input(UInt(width.W)))//0为前面的
        val full = Output(Bool()) //浪费一点空间无所谓，只要剩余的空间小于最大的写入空间，就算满
        val empty = Output(Bool())


        val point_write_en = Input(Bool())
        val point_flush = Input(Bool()) //清空整个指令序列
        // val empty = Output(Bool()) //只有满足超过发射大小的情况下才叫做不空 ,不需要empty判定吧，我这个算是写优先】的效果
        //感觉应该还算比较难满的把 感觉
    })
    def value2valid(value:UInt,width:Int)  :UInt= {
        MuxLookup(value,0.U(width.W),Seq(
            0.U -> 0.U,
            1.U -> "b001".U,
            2.U -> "b011".U,
            3.U -> "b111".U
        ))
    }

    val fifo_banks = VecInit(Seq.fill(bank_num)(Module(new Look_up_table_read_first_(length,width)).io))
    val write_banks_points = RegInit(0.U(bank_width.W))
    val write_length_points = RegInit(0.U(length_width.W))
    val read_banks_points = RegInit(0.U(bank_width.W))
    val read_length_points = RegInit(0.U(length_width.W))

    val write_valid = value2valid(io.write_en,3)
    for(i <- 0 until bank_num) {
        fifo_banks(i.asUInt).aw_addr := write_length_points//MuxLookup(i.asUInt,0.U,Seq(
        fifo_banks(i.asUInt).ar_addr := read_length_points//MuxLookup(i.asUInt,0.U,Seq(
        fifo_banks(i.asUInt).in :=  io.write_in(0)//MuxLookup(i.asUInt,0.U,Seq(
  
        fifo_banks(i.asUInt).write := MuxLookup(i.asUInt,0.U,Seq(
            write_banks_points -> io.write_en(0)
        ))
    }
   
   //================must have error
    val point_write_tag = Mux(io.point_write_en && (!io.empty ||(io.empty.asBool && io.write_en =/= 0.U)),1.U,0.U)

  //  branch_error_has_finished := point_write_tag.asBool
    // 因为分支指令的处理就在id阶段，所以中间并不会向流水线中添加指令

    //===========================
    write_banks_points := Mux(io.point_flush,0.U,Mux(point_write_tag.asBool,read_banks_points + 1.U,(write_banks_points + io.write_en)(bank_width - 1,0)))
//假如出现需要跳转的分支指令的时候我需要做的事情，read_point 暂时不变 write point移动到分支延迟槽的位置
  
    write_length_points := Mux(io.point_flush,0.U,Mux(point_write_tag.asBool,read_length_points + Mux(read_banks_points === 3.U,1.U,0.U),(write_length_points +  Mux((Cat(0.U(1.W),write_banks_points) + io.write_en)(bank_width),1.U,0.U))(length_width - 1,0)))
    read_banks_points := Mux(io.point_flush,0.U,(read_banks_points + io.read_en)(bank_width - 1,0))
    read_length_points := Mux(io.point_flush,0.U, (read_length_points + Mux((Cat(0.U(1.W),read_banks_points) + io.read_en)(bank_width),1.U,0.U))(length_width - 1,0))
    
 
    val read_out_1_data = Mux(io.empty,0.U,fifo_banks(read_banks_points ).out)
    for(i <- 0 until read_num) {
        //io.read_out(i.asUInt) := Mux(io.empty,0.U,fifo_banks(read_banks_points + i.asUInt).out)
        io.read_out(i.asUInt) := read_out_1_data//Mux(io.empty,0.U,fifo_banks(read_banks_points + i.asUInt).out)
    }


    io.empty := write_banks_points === read_banks_points && write_length_points === read_length_points
    // write 和 read 在一排肯定满了
    io.full  := Mux(write_length_points === read_length_points, Cat(0.U(1.W),write_banks_points) + 1.U === Cat(0.U(1.W),read_banks_points),
        Mux(write_length_points + 1.U === read_length_points , write_banks_points  ===  3.U &&  read_banks_points === 0.U ,0.U))
    // io.read_bank_point := read_banks_points
    // io.read_length_point := read_length_points
}                                              


// 没有分支延迟槽

//想参数化，但是貌似不是很好参数化的样子，但是还好，直接粘贴过去改一下就行
class  fifo_with_bundle  (length :Int,bundle:Bundle,write_num:Int,read_num:Int) extends Module  with riscv_macros{
    val bank_width = log2Ceil(write_num.max(read_num))
    val bank_num  = pow(2,(bank_width )).toInt
    println(bank_num,bank_width,write_num.max(read_num))
    val length_width = (log10(length)/log10(2)).toInt
    val width        =  bundle.getWidth
    val io = IO(new Bundle { 
        val read_en = Input(UInt((bank_width + 1).W))
        val write_en = Input(UInt((bank_width + 1).W))//0为前面的
        val read_out  = Vec(read_num,Output(bundle))//0为前面的
        val write_in  = Vec(write_num,Input(bundle))//0为前面的
        val full = Output(Bool()) //浪费一点空间无所谓，只要剩余的空间小于最大的写入空间，就算满
        val empty = Output(Bool())
        val point_write_en = Input(Bool())
        val point_flush = Input(Bool()) //清空整个指令序列
        // val empty = Output(Bool()) //只有满足超过发射大小的情况下才叫做不空 ,不需要empty判定吧，我这个算是写优先】的效果
        //感觉应该还算比较难满的把 感觉
    })
    def value2valid(value:UInt,width:Int)  :UInt= {
        MuxLookup(value,0.U(width.W),Seq(
            0.U -> 0.U,
            1.U -> "b001".U,
            2.U -> "b011".U,
            3.U -> "b111".U
        ))
    }

    val fifo_banks = VecInit(Seq.fill(bank_num)(Module(new Look_up_table_read_first_with_bundle(length,bundle)).io))
    
    val write_banks_points =  if(bank_num == 1) 0.U else RegInit(0.U(bank_width.W))
    val write_length_points = RegInit(0.U(length_width.W))
    val read_banks_points = if(bank_num == 1) 0.U else RegInit(0.U(bank_width.W))
    val read_length_points = RegInit(0.U(length_width.W))

    val write_valid = value2valid(io.write_en,3)
    for(i <- 0 until bank_num) {
        fifo_banks(i.asUInt).aw_addr :=  write_length_points//MuxLookup(i.asUInt,0.U,Seq(
        fifo_banks(i.asUInt).ar_addr :=  read_length_points//MuxLookup(i.asUInt,0.U,Seq(
        fifo_banks(i.asUInt).in      :=  io.write_in(0)//MuxLookup(i.asUInt,0.U,Seq(
        val fifo_banks_to_be  =  if(bank_num > 1)  MuxLookup(i.asUInt,0.U,Seq(
            write_banks_points -> io.write_en(0)
        )) else io.write_en(0)
        fifo_banks(i.asUInt).write := fifo_banks_to_be
    }


//假如出现需要跳转的分支指令的时候我需要做的事情，read_point 暂时不变 write point移动到分支延迟槽的位置
//狗屁u，现在已经没有分支延迟槽了
// 我讨厌延迟槽
//延迟槽🐶都不用
//煞笔延迟槽
//写麻烦，不写也麻烦，反正就是很麻烦
    if(bank_num > 1) {
        write_banks_points :=  Mux(io.point_flush || io.point_write_en,0.U,(write_banks_points + io.write_en)(bank_width - 1,0))
        read_banks_points := Mux(io.point_flush || io.point_write_en,0.U,(read_banks_points + io.read_en)(bank_width - 1,0))
    }
    write_length_points := Mux(io.point_flush || io.point_write_en,0.U,(write_length_points +  Mux((Cat(0.U(1.W),write_banks_points) + io.write_en)(bank_width),1.U,0.U))(length_width - 1,0))
    // write_length_points := Mux(io.point_flush || io.point_write_en,0.U,Mux(io.write_en.asBool))
    read_length_points := Mux(io.point_flush || io.point_write_en,0.U, (read_length_points + Mux((Cat(0.U(1.W),read_banks_points) + io.read_en)(bank_width),1.U,0.U))(length_width - 1,0))

    val read_out_1_data = Mux(io.empty,0.U.asTypeOf(bundle),fifo_banks(read_banks_points ).out)
    for(i <- 0 until read_num) {
        
        io.read_out(i.asUInt) := read_out_1_data//Mux(io.empty,0.U,fifo_banks(read_banks_points + i.asUInt).out)
    }


    io.empty := (write_banks_points === read_banks_points && write_length_points === read_length_points) || io.point_write_en
    // write 和 read 在一排肯定满了
    io.full  := write_length_points + 1.U === read_length_points
        //  Mux(write_length_points === read_length_points, Cat(0.U(1.W),write_banks_points) + 1.U === Cat(0.U(1.W),read_banks_points),
        // Mux(write_length_points + 1.U === read_length_points , write_banks_points  ===  3.U &&  read_banks_points === 0.U ,0.U))
  
}                                              
