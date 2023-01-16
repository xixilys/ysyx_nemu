package riscv_cpu.peripherals
import chisel3._

object Margin extends Enumeration {
        val axi_idle  = 0.U
        val axi_work1 = 1.U
        val axi_work2 = 2.U
        val axi_end   = 3.U
    }


