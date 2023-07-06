package examples

import chisel3._
import chisel3.stage._
import chisel3.util._


class axi_crossbar_0 extends BlackBox{
        val io = IO(new Bundle{
          
        
        val aclk           =   Input(UInt(1.W) )              // input wire aclk
        val aresetn        =   Input(UInt(1.W) )               // input wire aresetn

        val s_axi_awid     =   Input(UInt(8.W) )       
        val s_axi_awaddr   =   Input(UInt(64.W) )       
        val s_axi_awlen    =   Input(UInt(8.W) )       
        val s_axi_awsize   =   Input(UInt(6.W) )       
        val s_axi_awburst  =   Input(UInt(4.W) )       
        val s_axi_awlock   =   Input(UInt(4.W) )       
        val s_axi_awcache  =   Input(UInt(8.W) )       
        val s_axi_awprot   =   Input(UInt(6.W) )       
        val s_axi_awqos    =   Input(UInt(8.W) )       
        val s_axi_awvalid  =   Input(UInt(2.W)) 
        val s_axi_awready  =   Output(UInt(2.W) ) 

        val s_axi_wid      =   Input(UInt(8.W) )       
        val s_axi_wdata    =   Input(UInt(64.W) )       
        val s_axi_wstrb    =   Input(UInt(8.W) )       
        val s_axi_wlast    =   Input(UInt(2.W) )       
        val s_axi_wvalid   =   Input(UInt(2.W) )       
        val s_axi_wready   =   Output(UInt(2.W) )       
        val s_axi_bid      =   Output(UInt(8.W) )       
        val s_axi_bresp    =   Output(UInt(4.W) )       
        val s_axi_bvalid   =   Output(UInt(2.W) )      

        val s_axi_bready   =   Input(UInt(2.W))        
        val s_axi_arid     =   Input(UInt(8.W))        
        val s_axi_araddr   =   Input(UInt(64.W))        
        val s_axi_arlen    =   Input(UInt(8.W))        
        val s_axi_arsize   =   Input(UInt(6.W))        /* verilator lint_off PINMISSING */
        val s_axi_arready  =   Output(UInt(2.W))        
        val s_axi_rid      =   Output(UInt(8.W))        
        val s_axi_rdata    =   Output(UInt(64.W))       
        val s_axi_rresp    =   Output(UInt(4.W))        
        val s_axi_rlast    =   Output(UInt(2.W))        
        val s_axi_rvalid   =   Output(UInt(2.W))    
        
        val s_axi_rready   =   Input(UInt(2.W))     

        
        val m_axi_awid     =   Output(UInt(4.W))        
        val m_axi_awaddr   =   Output(UInt(32.W) )        
        val m_axi_awlen    =   Output(UInt(4.W) )        
        val m_axi_awsize   =   Output(UInt(3.W) )        
        val m_axi_awburst  =   Output(UInt(2.W) )        
        val m_axi_awlock   =   Output(UInt(2.W) )        
        val m_axi_awcache  =   Output(UInt(4.W) )        
        val m_axi_awprot   =   Output(UInt(3.W) )        
        val m_axi_awqos    =   Output(UInt(4.W) )        
        val m_axi_awvalid  =   Output(UInt(1.W) )        /* verilator lint_off PINMISSING */
        val m_axi_wdata    =   Output(UInt(32.W) )        
        val m_axi_wstrb    =   Output(UInt(4.W) )        
        val m_axi_wlast    =   Output(UInt(1.W) )        
        val m_axi_wvalid   =   Output(UInt(1.W) ) 

        val m_axi_wready   =   Input(UInt(1.W) )        
        val m_axi_bid      =   Input(UInt(4.W) )        
        val m_axi_bresp    =   Input(UInt(2.W) )        
        val m_axi_bvalid   =   Input(UInt(1.W))  


        val m_axi_bready   =   Output(UInt(1.W) )        
        val m_axi_arid     =   Output(UInt(4.W) )        
        val m_axi_araddr   =   Output(UInt(32.W) )        
        val m_axi_arlen    =   Output(UInt(4.W) )        
        val m_axi_arsize   =   Output(UInt(3.W) )        
        val m_axi_arburst  =   Output(UInt(2.W) )        
        val m_axi_arlock   =   Output(UInt(2.W) )        
        val m_axi_arcache  =   Output(UInt(4.W) )        
        val m_axi_arprot   =   Output(UInt(3.W) )        
        val m_axi_arqos    =   Output(UInt(4.W) )        
        val m_axi_arvalid  =   Output(UInt(1.W) )        
        val m_axi_rready   =   Output(UInt(1.W))  

        val m_axi_arready  =   Input(UInt(1.W) )        
        val m_axi_rid      =   Input(UInt(4.W) )        
        val m_axi_rdata    =   Input(UInt(32.W) )        
        val m_axi_rresp    =   Input(UInt(2.W))        
        val m_axi_rlast    =   Input(UInt(1.W))         
        val m_axi_rvalid   =   Input(UInt(1.W))       
    
        })


    }


class mycpu_top  extends Module with riscv_macros {
    // override val compileOptions = ExplicitCompileOptions.NotStrict.copy(explicitInvalidate = true)
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜
    // val         aresetn  = IO(Input(Bool())).suggestName("reset")
    // val         clk     = IO(Input(Bool())).suggestName("clock")
    // val         ext_int = IO(Input(UInt(6.W)))// 外部中断\
    //按键是按下低电平，相当于就是低电平复位，而chisel是高电平复位
    val        axi_mem_port =  IO(if(on_board == 1) Output(UInt(0.W)) else  (new axi_ram_port(64,32)) ) 
    val        resetn  = reset.asBool
    val        resetp  = !reset.asBool
    // val        io_slave  = IO(Flipped(new axi_ram_port(64,32)))
    // val        io_interrupt = IO(Input(Bool()))

    val        can_rx     = IO(Vec(1,Input(Bool())))
    val        can_tx     = IO(Vec(1,Output(Bool())))

    
    // val        led_shine  = IO(Vec(2,Output(Bool())))

    
    val  spi_flash_cs   = IO(if(on_board == 1 )Output(Bool()) else Output(UInt(0.W)))
    val  spi_flash_clk  = IO(if(on_board == 1 )Output(Bool()) else Output(UInt(0.W)))
    val  spi_flash_mosi = IO(if(on_board == 1 )Output(Bool()) else Output(UInt(0.W)))
    val  spi_flash_miso = IO(if(on_board == 1 )Input(Bool()) else Input(UInt(0.W)))
    val  spi_flash_hold = IO(if(on_board == 1 )Output(Bool()) else Output(UInt(0.W)))
    val  spi_flash_wp   = IO(if(on_board == 1 )Output(Bool()) else Output(UInt(0.W)))

    val  uart_rx = IO(Input(Bool()))
    val  uart_tx = IO(Output(Bool()))

    val  uart_rx_remote = IO(Input(Bool()))
    val  uart_tx_remote = IO(Output(Bool()))
    val  board_reset = IO(Output(Bool()))




    val sys_clk = Wire(Bool())

    if(on_board == 1) {
        val pll_instance = Module(new clk_pll)
        pll_instance.io.clk_in1 := clock.asBool
        sys_clk := pll_instance.io.clk_out1.asBool
       
        // val can_axi_clock_converter = Module(new axi_clock_converter)
        // can_axi_clock_converter.io.m_axi_aclk := sys_clk
        // can_axi_clock_converter.io.m_axi_aresetn := resetn
        // can_axi_clock_converter.io.s_axi_aresetn := resetn
        
    }else{
        sys_clk := clock.asBool

    }

  
    withClockAndReset(sys_clk.asClock,resetp.asBool) {

    board_reset := RegNext(~reset.asBool)
    // val (counter,a_signal ) = Counter(1.U.asBool,10000000)
    // led_shine := Mux)
    // val led_shine_reg = RegInit(0.U.asBool)
    // led_shine(0) := led_shine_reg
    // led_shine_reg := Mux(a_signal,!led_shine_reg,led_shine_reg)

    val u_riscv_cpu = Module(new myCPU)
    val icache_first = Module(new inst_cache).io
    val icache = icache_first//.port
    val dcache_first = Module(new data_cache).io  
    val dcache = dcache_first//.port
    val _axi_cross_bar = Module(new axi_cross_bar_addr_switch(2,7,Array(0,0X0200_0000,0x21000000,0x0c000000,0x30000000,0x1000_0000,0x1000_1000/*,0x22000000*/),
        Array(0,0X0200_BFFF,0x2100FFFF,0x0cFFFFFF,0x3fffffff,0x1000_0fff,0x1000_1fff/*,0x2200FFFF*/)))
    //length总共也就16，比较拉
    //length总共也就16，比较拉
    
    if(tlb_on) {
        val tlb  = Module(new double_ports_tlb_for_inst_and_data(0)).io

        tlb.csr_asid          := u_riscv_cpu.csr_asid
        tlb.icache_port.vaddr := icache_first.v_addr_for_tlb
        tlb.icache_port.req   := icache_first.tlb_req
        tlb.icache_port.wr    := 0.U.asBool
        // tlb.icache_port.size  := 
        icache_first.p_addr_for_tlb  := tlb.icache_port.paddr
        icache_first.tlb_exception   := Cat(tlb.icache_port.tlb_search_ineffective_exception,
                        tlb.icache_port.tlb_search_not_hit_exception)
        icache_first.csr_asid := u_riscv_cpu.csr_asid
        dcache_first.csr_asid := u_riscv_cpu.csr_asid

        tlb.dcache_port.vaddr := Mux(u_riscv_cpu.tlbp_search_en,u_riscv_cpu.tlbp_search_vaddr,dcache_first.v_addr_for_tlb)
        tlb.dcache_port.req   := 0.U.asBool
        tlb.dcache_port.wr    := dcache_first.stage1_wr
        dcache_first.p_addr_for_tlb := tlb.dcache_port.paddr
        dcache_first.tlb_exception   := Cat(tlb.tlb_dirty_exception,tlb.dcache_port.tlb_search_ineffective_exception,
                        tlb.dcache_port.tlb_search_not_hit_exception)   
        u_riscv_cpu.inst_tlb_exception := icache_first.stage2_exception
        u_riscv_cpu.data_tlb_exception := dcache_first.stage1_tlb_exception
        u_riscv_cpu.tlb_search_hit  :=  tlb.tlb_search_hit
        //mem1 阶段扔进tlb数据   
        u_riscv_cpu.tlb_search_index := tlb.tlb_search_index
        u_riscv_cpu.csr_tlb_write_data := tlb.tlb_read_port
        tlb.tlb_write_en     := u_riscv_cpu.tlb_write_en
        tlb.tlb_write_port   := u_riscv_cpu.csr_tlb_read_data
        tlb.tlb_write_index  := u_riscv_cpu.tlb_write_index
        tlb.tlb_read_index   := u_riscv_cpu.tlb_read_index
    }else {
        icache_first.csr_asid := 0.U//u_riscv_cpu.csr_asid
        dcache_first.csr_asid := 0.U//u_riscv_cpu.csr_asid
        icache_first.p_addr_for_tlb  := icache_first.v_addr_for_tlb
        dcache_first.p_addr_for_tlb  := dcache_first.v_addr_for_tlb
        icache_first.tlb_exception   := 0.U
        dcache_first.tlb_exception   := 0.U
        u_riscv_cpu.inst_tlb_exception := icache_first.stage2_exception
        u_riscv_cpu.data_tlb_exception := dcache_first.stage1_tlb_exception
        u_riscv_cpu.tlb_search_hit  :=  1.U//tlb.tlb_search_hit
        //mem1 阶段扔进tlb数据   
        u_riscv_cpu.tlb_search_index := 0.U//tlb.tlb_search_index

        val test_bundle_for_notlb = Wire(new tlb_write_or_read_port);
        test_bundle_for_notlb.tlb_port_to_bundle_all_zero

        u_riscv_cpu.csr_tlb_write_data := test_bundle_for_notlb
       
    }
    

    // val  arqos = Wire(UInt(4.W))
    // val  awqos = Wire(UInt(4.W))

    dcache.sram_addr := u_riscv_cpu.data_addr
    dcache.sram_size := u_riscv_cpu.data_size
    dcache.sram_cache := u_riscv_cpu.data_cache
    dcache.sram_req   := u_riscv_cpu.data_req
    dcache.sram_wr    := u_riscv_cpu.data_wr
    dcache.sram_wdata := u_riscv_cpu.data_wdata
    dcache.fence_i_control := u_riscv_cpu.data_fence_i_control
    dcache_first.data_wstrb := u_riscv_cpu.data_wstrb32
    icache.sram_wr          := u_riscv_cpu.inst_wr
    icache.sram_wdata       := u_riscv_cpu.inst_wdata
    icache_first.inst_buffer_empty := u_riscv_cpu.inst_buffer_empty
    icache_first.inst_ready_branch := u_riscv_cpu.inst_ready_branch

    u_riscv_cpu.inst_rdata_L   := icache.sram_rdata_L
    // u_riscv_cpu.inst_rdata_M   := icache.sram_rdata_M
    // u_riscv_cpu.inst_rdata_R   := icache.sram_rdata_R
    u_riscv_cpu.inst_addr_ok := icache.sram_addr_ok
    u_riscv_cpu.inst_data_ok := icache.sram_data_ok
    u_riscv_cpu.inst_hit  := icache_first.sram_hit
    u_riscv_cpu.inst_valid := icache.sram_data_valid
  //  u_riscv_cpu.inst_cache_working_on := icache_first.cache_working_on    
    u_riscv_cpu.inst_write_en := icache.sram_write_en    
    u_riscv_cpu.data_stage2_stall := dcache_first.stage2_stall
    


    // debug_wb_pc             := u_riscv_cpu.debug_wb_pc
    // debug_wb_rf_wdata       := u_riscv_cpu.debug_wb_rf_wdata
    // debug_wb_rf_wen         := u_riscv_cpu.debug_wb_rf_wen
    // debug_wb_rf_wnum        := u_riscv_cpu.debug_wb_rf_wnum

    u_riscv_cpu.stage2_stall      := icache_first.stage2_stall


    icache_first.stage2_flush := u_riscv_cpu.stage2_flush
    icache_first.tag_valid_flush := u_riscv_cpu.icache_tag_flush
    if(on_board == 1) {
        val axi_block_ram = Module(new axi_ram).io
        axi_block_ram.s_axi <> _axi_cross_bar.io.s_port(0)
        axi_block_ram.s_aclk := sys_clk.asBool
        axi_block_ram.s_aresetn := resetn
        axi_mem_port := 0.U

    }else {
        axi_mem_port <> _axi_cross_bar.io.s_port(0)
    }

    // axi_mem_port(1) <> dcache.port
    _axi_cross_bar.io.m_port(0) <> icache.port
    _axi_cross_bar.io.m_port(1) <> dcache.port

    //peripherals
    val axi_clint = Module(new timer_periph(0X02000000.U(data_length.W))).io


    _axi_cross_bar.io.s_port(1) <> axi_clint.axi_port

    u_riscv_cpu.ext_int.timer := axi_clint.int_line
    
    val axi32_to_64_converter =  VecInit(Seq.fill(1)(Module(new axi_converter).io))
    


    icache_first.stage1_valid_flush := u_riscv_cpu.stage1_valid_flush
    icache_first.inst_ready_to_use := u_riscv_cpu.inst_ready_to_use
    icache_first.inst_buffer_full   := u_riscv_cpu.inst_buffer_full
    icache_first.pre_branch         := u_riscv_cpu.pre_branch
    // io_sram0 <> icache_first.sram(0)
    // io_sram1 <> icache_first.sram(1)
    // io_sram2 <> icache_first.sram(2)
    // io_sram3 <> icache_first.sram(3)
    // io_sram4 <> dcache_first.sram(0)
    // io_sram5 <> dcache_first.sram(1)
    // io_sram6 <> dcache_first.sram(2)
    // io_sram7 <> dcache_first.sram(3)
axi32_to_64_converter
        //peripherals

    val axi_can = Module(new axi_can_32)
    // val axi_can_1 = Module(new axi_can_32)

    // val axi_can_1 = Module(new axi_can_32).io
    

    
    val axi_plic = Module(new plic_periph(0x0c000000.U(data_length.W),2)).io
    val axi2apb = Module(new AXI4ToAPB(32,32,32,64,
        Array(0x30000000),Array(0x3fffffff)))
    val axi2apb_uart = Module(new AXI4ToAPB(32,32,32,64,
        Array(0x10000000),Array(0x10000FFF)))
    val axi2apb_uart_remote = Module(new AXI4ToAPB(32,32,32,64,
        Array(0x10010000),Array(0x10010FFF)))
    

    val spi_controler = Module(new spi(32,32)).io
    val uart_controler = Module(new uart(32,32)).io
    val uart_controler_remote = Module(new uart(32,32)).io

    

    _axi_cross_bar.io.s_port(2) <>  axi32_to_64_converter(0).master 
    _axi_cross_bar.io.s_port(3) <> axi_plic.axi_port
    _axi_cross_bar.io.s_port(4) <> axi2apb.io.axi_port
    _axi_cross_bar.io.s_port(5) <> axi2apb_uart.io.axi_port
    _axi_cross_bar.io.s_port(6) <> axi2apb_uart_remote.io.axi_port
    // _axi_cross_bar.io.s_port(7) <> axi32_to_64_converter(1).master
    // _axi_cross_bar.io.s_port(7) <> axi_can_1.axi_port
    axi_can.io.axi_port <> axi32_to_64_converter(0).slave
    // axi_can_1.io.axi_port <> axi32_to_64_converter(1).slave
    // for(i <- 0 to 1) {

    can_tx(0) := axi_can.io.can_tx
    axi_can.io.can_rx := can_rx(0)
    axi_can.io.clk := sys_clk.asBool
    axi_can.io.rst_n := resetn


    // can_tx(1) := axi_can_1.io.can_tx
    // axi_can_1.io.can_rx := can_rx(1)
    // axi_can_1.io.clk := sys_clk.asBool
    // axi_can_1.io.rst_n := resetn

    // }
// 1
   

    

    

    axi_plic.int_get(0) := 0.U.asBool
    axi_plic.int_get(1) := 0.U.asBool
 

    icache_first.stage1_valid_flush := u_riscv_cpu.stage1_valid_flush
    icache_first.inst_ready_to_use := u_riscv_cpu.inst_ready_to_use
    icache_first.inst_buffer_full   := u_riscv_cpu.inst_buffer_full

    // spi flash 
    spi_controler.clk := sys_clk.asBool
    spi_controler.resetn := resetn
    spi_controler.in <> axi2apb.io.apb_port
    spi_controler.in_pprot := 1.U
    if(on_board == 0) {
        val spi_flash = Module(new spiFlash).io
        spi_flash.clk := spi_controler.spi_clk
        spi_flash.cs := spi_controler.spi_cs
        spi_flash.mosi := spi_controler.spi_mosi
        spi_controler.spi_miso := spi_flash.miso
        spi_flash_clk := 0.U
        spi_flash_mosi := 0.U
        spi_flash_cs := 0.U
        spi_flash_hold  := 1.U
        spi_flash_wp    := 1.U
    }else {
        spi_flash_clk := spi_controler.spi_clk
        spi_flash_cs  := spi_controler.spi_cs(0)
        spi_flash_mosi := spi_controler.spi_mosi
        spi_controler.spi_miso := spi_flash_miso
        spi_flash_hold  := 1.U.asBool
        spi_flash_wp    := 1.U.asBool
    }

    //uart
    uart_controler.clk := sys_clk.asBool
    uart_controler.resetn := resetn
    uart_controler.in    <> axi2apb_uart.io.apb_port
    uart_controler.in_pprot := 1.U
    uart_controler.uart_rx := uart_rx
    uart_tx := uart_controler.uart_tx

    uart_controler_remote.clk := sys_clk.asBool
    uart_controler_remote.resetn := resetn
    uart_controler_remote.in    <> axi2apb_uart_remote.io.apb_port
    uart_controler_remote.in_pprot := 1.U
    uart_controler_remote.uart_rx := uart_rx_remote
    uart_tx_remote := uart_controler_remote.uart_tx

    u_riscv_cpu.ext_int.out_int := axi_plic.int_line


    }

}



object my_CPU_top_test extends App{
    (new ChiselStage).emitVerilog(new mycpu_top)
}


