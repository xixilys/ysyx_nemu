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


class mycpu_top  extends RawModule with riscv_macros {
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜
    val         aresetn  = IO(Input(Bool())).suggestName("aresetn")
    val         clk     = IO(Input(Bool())).suggestName("aclk")
    val         ext_int = IO(Input(UInt(6.W)))// 外部中断\

    val         axi_mem_port =  IO(new axi_ram_port)
        //IO(Vec(2,(new axi_ram_port)))


    
    // val         arid    = IO(Vec(2,Output(UInt(4.W))))
    // val         araddr  = IO(Vec(2,Output(UInt(32.W))))
    // val         arlen   = IO(Vec(2,Output(UInt(4.W))))
    // val         arsize  = IO(Vec(2,Output(UInt(3.W))))
    // val         arburst = IO(Vec(2,Output(UInt(2.W))))
    // val         arlock  = IO(Vec(2,Output(UInt(2.W))))
    // val         arcache = IO(Vec(2,Output(UInt(4.W))))
    // val         arprot  = IO(Vec(2,Output(UInt(3.W))))
    // val         arvalid = IO(Vec(2,Output(UInt(1.W))))
    // val         arready = IO(Vec(2,Input(UInt(1.W))))
    // //rIO()
    // val         rid     = IO(Vec(2,Input(UInt(4.W))))
    // val         rdata   = IO(Vec(2,Input(UInt(32.W))))
    // val         rresp   = IO(Vec(2,Input(UInt(2.W))))
    // val         rlast   = IO(Vec(2,Input(UInt(1.W))))
    // val         rvalid  = IO(Vec(2,Input(UInt(1.W))))
    // val         rready  = IO(Vec(2,Output(UInt(1.W))))
    // //awIO(
    // val         awid    = IO(Vec(2,Output(UInt(4.W))))
    // val         awaddr  = IO(Vec(2,Output(UInt(32.W))))
    // val         awlen   = IO(Vec(2,Output(UInt(4.W))))
    // val         awsize  = IO(Vec(2,Output(UInt(3.W))))
    // val         awburst = IO(Vec(2,Output(UInt(2.W))))
    // val         awlock  = IO(Vec(2,Output(UInt(2.W))))
    // val         awcache = IO(Vec(2,Output(UInt(4.W))))
    // val         awprot  = IO(Vec(2,Output(UInt(3.W))))
    // val        awvalid  = IO(Vec(2,Output(UInt(1.W))))
    // val        awready  = IO(Vec(2,Input(UInt(1.W))))
    // //wIO(
    // val        wid      = IO(Vec(2,Output(UInt(4.W))))
    // val        wdata    = IO(Vec(2,Output(UInt(32.W))))
    // val        wstrb    = IO(Vec(2,Output(UInt(4.W))))
    // val        wlast    = IO(Vec(2,Output(UInt(1.W))))
    // val        wvalid   = IO(Vec(2,Output(UInt(1.W))))
    // val        wready   = IO(Vec(2,Input(UInt(1.W))))
    // //bIO(
    // val         bid     = IO(Vec(2,Input(UInt(4.W))))
    // val         bresp   = IO(Vec(2,Input(UInt(2.W))))
    // val         bvalid  = IO(Vec(2,Input(UInt(1.W))))
    // val         bready  = IO(Vec(2,Output(UInt(1.W))))

    val   debug_wb_pc       = IO(Output(UInt(32.W)))
    val   debug_wb_rf_wen   = IO(Output(UInt(4.W)))
    val   debug_wb_rf_wnum  = IO(Output(UInt(5.W)))
    val   debug_wb_rf_wdata = IO(Output(UInt(32.W)))

    

withClockAndReset(clk.asClock,(~aresetn).asAsyncReset) {
    // val u_axi_cache_bridge = Module(new axi_crossbar_0)
    val u_riscv_cpu = Module(new myCPU)
    val icache_first = Module(new inst_cache).io
    val icache = icache_first//.port
    val dcache_first = Module(new data_cache).io  
    val dcache = dcache_first//.port
    val _axi_cross_bar = Module(new axi_cross_bar(2))
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
        tlb.dcache_port.req   := dcache_first.tlb_req
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
    


    debug_wb_pc             := u_riscv_cpu.debug_wb_pc
    debug_wb_rf_wdata       := u_riscv_cpu.debug_wb_rf_wdata
    debug_wb_rf_wen         := u_riscv_cpu.debug_wb_rf_wen
    debug_wb_rf_wnum        := u_riscv_cpu.debug_wb_rf_wnum
    u_riscv_cpu.clk          := clk
    u_riscv_cpu.resetn       := aresetn
    u_riscv_cpu.ext_int      := ext_int
    u_riscv_cpu.stage2_stall      := icache_first.stage2_stall


    icache_first.stage2_flush := u_riscv_cpu.stage2_flush

    axi_mem_port <> _axi_cross_bar.io.s_port
    // axi_mem_port(1) <> dcache.port
    _axi_cross_bar.io.m_port(0) <> icache.port
    _axi_cross_bar.io.m_port(1) <> dcache.port

    

    // u_axi_cache_bridge.io.aclk             := clk       
    // u_axi_cache_bridge.io.aresetn          := aresetn
    // u_axi_cache_bridge.io.s_axi_awid       := Cat(dcache.awid,icache.awid)
    // u_axi_cache_bridge.io.s_axi_awaddr     := Cat(dcache.awaddr,icache.awaddr)
    // u_axi_cache_bridge.io.s_axi_awlen      := Cat(dcache.awlen,icache.awlen)
    // u_axi_cache_bridge.io.s_axi_awsize     := Cat(dcache.awsize,icache.awsize)
    // u_axi_cache_bridge.io.s_axi_awburst    := Cat(dcache.awburst,icache.awburst)
    // u_axi_cache_bridge.io.s_axi_awlock     := Cat(dcache.awlock,icache.awlock)
    // u_axi_cache_bridge.io.s_axi_awcache    := Cat(dcache.awcache,icache.awcache)
    // u_axi_cache_bridge.io.s_axi_awprot     := Cat(dcache.awprot,icache.awprot)
    // u_axi_cache_bridge.io.s_axi_awqos      := Cat(0.U(4.W),0.U(4.W))
    // u_axi_cache_bridge.io.s_axi_awvalid    := Cat(dcache.awvalid,icache.awvalid)
    // dcache.awready                          := u_axi_cache_bridge.io.s_axi_awready(1)
    // icache.awready                          := u_axi_cache_bridge.io.s_axi_awready(0)

    // u_axi_cache_bridge.io.s_axi_wid        := Cat(dcache.wid,icache.wid)
    // u_axi_cache_bridge.io.s_axi_wdata      := Cat(dcache.wdata,icache.wdata)
    // u_axi_cache_bridge.io.s_axi_wstrb      := Cat(dcache.wstrb,icache.wstrb)
    // u_axi_cache_bridge.io.s_axi_wlast      := Cat(dcache.wlast,icache.wlast)
    // u_axi_cache_bridge.io.s_axi_wvalid     := Cat(dcache.wvalid,icache.wvalid)
    // dcache.wready   := u_axi_cache_bridge.io.s_axi_wready(1)
    // icache.wready   := u_axi_cache_bridge.io.s_axi_wready(0)
    // dcache.bid      := u_axi_cache_bridge.io.s_axi_bid(7,4)
    // icache.bid      := u_axi_cache_bridge.io.s_axi_bid(3,0)
    // dcache.bresp    := u_axi_cache_bridge.io.s_axi_bresp(3,2)
    // icache.bresp    := u_axi_cache_bridge.io.s_axi_bresp(1,0)
    // dcache.bvalid   := u_axi_cache_bridge.io.s_axi_bvalid(1)
    // icache.bvalid   := u_axi_cache_bridge.io.s_axi_bvalid(0)
    
    // u_axi_cache_bridge.io.s_axi_bready     := Cat(dcache.bready,icache.bready)
    // u_axi_cache_bridge.io.s_axi_arid       := Cat(dcache.arid,icache.arid)
    // u_axi_cache_bridge.io.s_axi_araddr     := Cat(dcache.araddr,icache.araddr)
    // u_axi_cache_bridge.io.s_axi_arlen      := Cat(dcache.arlen,icache.arlen)
    // u_axi_cache_bridge.io.s_axi_arsize     := Cat(dcache.arsize,icache.arsize)
    // u_axi_cache_bridge.io.s_axi_arburst    := Cat(dcache.arburst,icache.arburst)
    // u_axi_cache_bridge.io.s_axi_arlock     := Cat(dcache.arlock,icache.arlock)
    // u_axi_cache_bridge.io.s_axi_arcache    := Cat(dcache.arcache,icache.arcache)
    // u_axi_cache_bridge.io.s_axi_arprot     := Cat(dcache.arprot,icache.arprot)
    // u_axi_cache_bridge.io.s_axi_arqos      := Cat(0.U(4.W),0.U(4.W))
    // u_axi_cache_bridge.io.s_axi_arvalid    := Cat(dcache.arvalid,icache.arvalid)


    
    // dcache.arready            := u_axi_cache_bridge.io.s_axi_arready(1)
    // icache.arready            := u_axi_cache_bridge.io.s_axi_arready(0)
    // dcache.rid                := u_axi_cache_bridge.io.s_axi_rid(7,4)
    // icache.rid                := u_axi_cache_bridge.io.s_axi_rid(3,0)
    // dcache.rdata              := u_axi_cache_bridge.io.s_axi_rdata(63,32)
    // icache.rdata              := u_axi_cache_bridge.io.s_axi_rdata(31,0)
    // dcache.rresp              := u_axi_cache_bridge.io.s_axi_rresp(3,2)
    // icache.rresp              := u_axi_cache_bridge.io.s_axi_rresp(1,0)
    // dcache.rlast              := u_axi_cache_bridge.io.s_axi_rlast(1)
    // icache.rlast              := u_axi_cache_bridge.io.s_axi_rlast(0)
    // dcache.rvalid             := u_axi_cache_bridge.io.s_axi_rvalid(1)
    // icache.rvalid             := u_axi_cache_bridge.io.s_axi_rvalid(0)

    // u_axi_cache_bridge.io.s_axi_rready    := Cat(dcache.rready,icache.rready)


    // awid                := u_axi_cache_bridge.io.m_axi_awid       
    // awaddr              := u_axi_cache_bridge.io.m_axi_awaddr     
    // awlen               := u_axi_cache_bridge.io.m_axi_awlen      
    // awsize              := u_axi_cache_bridge.io.m_axi_awsize     
    // awburst             := u_axi_cache_bridge.io.m_axi_awburst    
    // awlock              :=u_axi_cache_bridge.io.m_axi_awlock     
    // awcache             :=u_axi_cache_bridge.io.m_axi_awcache    
    // awprot              :=u_axi_cache_bridge.io.m_axi_awprot     
    // awqos               :=u_axi_cache_bridge.io.m_axi_awqos      
    // awvalid             :=u_axi_cache_bridge.io.m_axi_awvalid    
   
    // u_axi_cache_bridge.io.m_axi_awready     :=   awready
    // wid                                     :=u_axi_cache_bridge.io.m_axi_wid        
    // wdata                                   :=u_axi_cache_bridge.io.m_axi_wdata      
    // wstrb                                   :=u_axi_cache_bridge.io.m_axi_wstrb      
    // wlast                                   :=u_axi_cache_bridge.io.m_axi_wlast      
    // wvalid                                  :=u_axi_cache_bridge.io.m_axi_wvalid     
    // u_axi_cache_bridge.io.m_axi_wready      := wready
    // u_axi_cache_bridge.io.m_axi_bid         :=bid
    // u_axi_cache_bridge.io.m_axi_bresp       := bresp
    // u_axi_cache_bridge.io.m_axi_bvalid      :=bvalid
    // bready              :=u_axi_cache_bridge.io.m_axi_bready     

    // arid                :=u_axi_cache_bridge.io.m_axi_arid       
    // araddr              :=u_axi_cache_bridge.io.m_axi_araddr     
    // arlen               :=u_axi_cache_bridge.io.m_axi_arlen      
    // arsize              :=u_axi_cache_bridge.io.m_axi_arsize     
    // arburst             :=u_axi_cache_bridge.io.m_axi_arburst    
    // arlock              :=u_axi_cache_bridge.io.m_axi_arlock     
    // arcache             :=u_axi_cache_bridge.io.m_axi_arcache    
    // arprot              :=u_axi_cache_bridge.io.m_axi_arprot     
    // arqos               :=u_axi_cache_bridge.io.m_axi_arqos      
    // arvalid             :=u_axi_cache_bridge.io.m_axi_arvalid    
    
    // u_axi_cache_bridge.io.m_axi_arready   := arready 
    // u_axi_cache_bridge.io.m_axi_rid    :=    rid 
    // u_axi_cache_bridge.io.m_axi_rdata  :=    rdata
    // u_axi_cache_bridge.io.m_axi_rresp  :=    rresp
    // u_axi_cache_bridge.io.m_axi_rlast  :=    rlast
    // u_axi_cache_bridge.io.m_axi_rvalid :=    rvalid
    // rready              := u_axi_cache_bridge.io.m_axi_rready     

    icache_first.stage1_valid_flush := u_riscv_cpu.stage1_valid_flush
    icache_first.inst_ready_to_use := u_riscv_cpu.inst_ready_to_use
    icache_first.inst_buffer_full   := u_riscv_cpu.inst_buffer_full


}}

object my_CPU_top_test extends App{
    (new ChiselStage).emitVerilog(new mycpu_top)
}
