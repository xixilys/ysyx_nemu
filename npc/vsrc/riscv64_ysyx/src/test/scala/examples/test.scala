package examples

import org.scalatest.freespec.AnyFreeSpec
import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
import chisel3.experimental.BundleLiterals._

import scala.collection.mutable


//首先先测试输入输出均为2的时候的状态
class div_test  extends AnyFreeSpec with ChiselScalatestTester {

   //huangxinzedashabi


    "DUt pass is hxz shabi" in {
        test(new accumulate_simple(32,4)).withAnnotations(Seq(WriteVcdAnnotation)) { dut => 
            dut.clock.setTimeout(0)
            for (i <- 0 until 100){
               
                // var num1 = ((Math.random  ) * 100000).toInt + 1
                // var num2 = ((Math.random  ) * 1000).toInt + 1
                val num1 = 1
                val num2 = 100
                dut.io.signed.poke(0)
                // println(dut.io.Output_valid.peek())
                do{
                    dut.io.data(0).poke(num1)
                    dut.io.data(1).poke(num2)
                    dut.io.input_valid.poke(1.U.asBool)
                    dut.clock.step()
                }while(dut.io.Output_valid.peekInt() != 1)
                // println(0xffffffff.toInt)
                // dut.clock.step()
                println(num1,num2)
                var num_sum = num1
                // var 
                for(i <- 0 to num2) {
                    num_sum = num_sum +  num1 + i + 1
                }
                println(num_sum)
                println("answer")
                println((dut.io.result.peekInt().toInt))
  
                
                if(num_sum != dut.io.result.peekInt().toInt) {
                    // println((dut.io.result(0).peekInt().toInt,dut.io.result(1).peekInt().toInt))
                    println("error")
                    assert(false);
                }
                dut.clock.step()
            }
        }
    }
}
