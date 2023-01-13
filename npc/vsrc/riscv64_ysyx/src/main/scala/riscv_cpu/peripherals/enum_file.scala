package riscv_cpu.peripherals
import chisel3._

object Margin extends Enumeration {
        val axi_idle  = 1.U
        val axi_work1 = 2.U
        val axi_work2 = 3.U
        val axi_end   = 4.U
    }


