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
        val s_axi_arsize   =   Input(UInt(6.W))        
        val s_axi_arburst  =   Input(UInt(4.W))        
        val s_axi_arlock   =   Input(UInt(4.W))        
        val s_axi_arcache  =   Input(UInt(8.W))        
        val s_axi_arprot   =   Input(UInt(6.W))       
        val s_axi_arqos    =   Input(UInt(8.W))        
        val s_axi_arvalid  =   Input(UInt(2.W))        
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
        val m_axi_awvalid  =   Output(UInt(1.W) )        
        
        val m_axi_awready  =   Input(UInt(1.W) )        
        val m_axi_wid      =   Output(UInt(4.W) )        
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

    val        axi_mem_port =  IO((new axi_ram_port)) 
    // val        io_slave  = IO(Flipped(new axi_ram_port))
    val        io_interrupt = IO(Input(Bool()))

    val        can_rx     = IO(Input(Bool()))
    val        can_tx     = IO(Output(Bool()))

    val        io_sram0 = IO(Flipped(new sram_port))
    val        io_sram1 = IO(Flipped(new sram_port))
    val        io_sram2 = IO(Flipped(new sram_port))
    val        io_sram3 = IO(Flipped(new sram_port))
    val        io_sram4 = IO(Flipped(new sram_port))
    val        io_sram5 = IO(Flipped(new sram_port))
    val        io_sram6 = IO(Flipped(new sram_port))
    val        io_sram7 = IO(Flipped(new sram_port))
        //IO(Vec(2,(new axi_ram_port)))


    // val   debug_wb_pc       = IO(Output(UInt(32.W)))
    // val   debug_wb_rf_wen   = IO(Output(UInt(4.W)))
    // val   debug_wb_rf_wnum  = IO(Output(UInt(5.W)))
    // val   debug_wb_rf_wdata = IO(Output(UInt(32.W)))

    
    // override def desiredName = "ysyx_22040886"
// withClockAndReset(clk.asClock,(aresetn).asAsyncReset) {
    // io_slave <> 0.U.asTypeOf(new axi_ram_port)
    // val u_axi_cache_bridge = Module(new axi_crossbar_0)
    val u_riscv_cpu = Module(new myCPU)
    val icache_first = Module(new inst_cache).io
    val icache = icache_first//.port
    val dcache_first = Module(new data_cache).io  
    val dcache = dcache_first//.port
    val _axi_cross_bar = Module(new axi_cross_bar_addr_switch(2,5,Array(0,0X20000000,0x21000000,0x22000000,0x30000000),Array(0,0X2000BFFF,0x2100FFFF,0x2200FFFF,0x3fffffff)))
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
    dcache_first.data_wstrb := u_riscv_cpu.data_wstrb
    u_riscv_cpu.data_rdata := dcache.sram_rdata
    u_riscv_cpu.data_addr_ok := dcache.sram_addr_ok
    u_riscv_cpu.data_data_ok := dcache.sram_data_ok

    icache.sram_addr        := u_riscv_cpu.inst_addr
    icache.sram_size        := u_riscv_cpu.inst_size
    icache.sram_cache       := u_riscv_cpu.inst_cache
    icache.sram_req         := u_riscv_cpu.inst_req
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

    axi_mem_port <> _axi_cross_bar.io.s_port(0)
    // axi_mem_port(1) <> dcache.port
    _axi_cross_bar.io.m_port(0) <> icache.port
    _axi_cross_bar.io.m_port(1) <> dcache.port

    //peripherals
    val axi_clint = Module(new timer_periph(0X02000000.U(data_length.W))).io


    _axi_cross_bar.io.s_port(1) <> axi_clint.axi_port

    u_riscv_cpu.ext_int.timer := axi_clint.int_line
    u_riscv_cpu.ext_int.out_int := io_interrupt

    


    icache_first.stage1_valid_flush := u_riscv_cpu.stage1_valid_flush
    icache_first.inst_ready_to_use := u_riscv_cpu.inst_ready_to_use
    icache_first.inst_buffer_full   := u_riscv_cpu.inst_buffer_full
    io_sram0 <> icache_first.sram(0)
    io_sram1 <> icache_first.sram(1)
    io_sram2 <> icache_first.sram(2)
    io_sram3 <> icache_first.sram(3)
    io_sram4 <> dcache_first.sram(0)
    io_sram5 <> dcache_first.sram(1)
    io_sram6 <> dcache_first.sram(2)
    io_sram7 <> dcache_first.sram(3)

        //peripherals

    val axi_can = Module(new axi_can_top).io
    val axi_plic = Module(new plic_periph(0x22000000.U(data_length.W),1)).io
    val axi2apb = Module(new AXI4ToAPB(32,32,32,64,
        Array(0x30000000),Array(0x3fffffff)))
    

    val spi_controler = Module(new spi(32,32)).io

    

    _axi_cross_bar.io.s_port(2) <> axi_can.axi_port
    _axi_cross_bar.io.s_port(3) <> axi_plic.axi_port
    _axi_cross_bar.io.s_port(4) <> axi2apb.io.axi_port
    
    axi_can.rst_n  := reset
    axi_can.clk    := clock.asBool
    axi_can.can_rx := can_rx
    can_tx := axi_can.can_tx

    

    axi_plic.int_get(0) := axi_can.int_wire
 

    icache_first.stage1_valid_flush := u_riscv_cpu.stage1_valid_flush
    icache_first.inst_ready_to_use := u_riscv_cpu.inst_ready_to_use
    icache_first.inst_buffer_full   := u_riscv_cpu.inst_buffer_full

    // spi flash 
    spi_controler.clk := clock.asBool
    spi_controler.resetn := reset
    spi_controler.in <> axi2apb.io.apb_port
    spi_controler.in_pprot := 0.U

    val spi_flash = Module(new spiFlash).io
    spi_flash.clk := clock.asBool
    spi_flash.cs := spi_controler.spi_cs
    spi_flash.mosi := spi_controler.spi_mosi
    spi_controler.spi_miso := spi_flash.miso


}



object my_CPU_top_test extends App{
    (new ChiselStage).emitVerilog(new mycpu_top)
}



