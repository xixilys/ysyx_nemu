package examples

import chisel3._
import chisel3.stage._
import chisel3.util._



//multi-banking-cache 用单端口sram模拟双端口cache
// class axi_ram_port_multi_banking extends Bundle {
//      // axi
//         // ar
//         val         arid    = Output(UInt(4.W))
//         val         araddr  = Output(UInt(32.W))
//         val         arlen   = Output(UInt(4.W))
//         val         arsize  = Output(UInt(3.W))
//         val         arburst = Output(UInt(2.W))
//         val         arlock  = Output(UInt(2.W))
//         val         arcache = Output(UInt(4.W))
//         val         arprot  = Output(UInt(3.W))
//         val         arvalid = Output(UInt(1.W))
//         val         arready = Input(UInt(1.W))
//         //r
//         val         rid     = Input(UInt(4.W))
//         val         rdata   = Input(UInt(32.W))
//         val         rresp   = Input(UInt(2.W))
//         val         rlast   = Input(UInt(1.W))
//         val         rvalid  = Input(UInt(1.W))
//         val         rready  = Output(UInt(1.W))
//         //aw
//         val         awid    = Output(UInt(4.W))
//         val         awaddr  = Output(UInt(32.W))
//         val         awlen   = Output(UInt(4.W))
//         val         awsize  = Output(UInt(3.W))
//         val         awburst = Output(UInt(2.W))
//         val         awlock  = Output(UInt(2.W))
//         val         awcache = Output(UInt(4.W))
//         val         awprot  = Output(UInt(3.W))
//         val        awvalid  = Output(UInt(1.W))
//         val        awready  = Input(UInt(1.W))
//         //w
//         val        wid      = Output(UInt(4.W))
//         val        wdata    = Output(UInt(32.W))
//         val        wstrb    = Output(UInt(4.W))
//         val        wlast    = Output(UInt(1.W))
//         val        wvalid   = Output(UInt(1.W))
//         val        wready   = Input(UInt(1.W))
//         //b
//         val         bid     = Input(UInt(4.W))
//         val         bresp   = Input(UInt(2.W))
//         val         bvalid  = Input(UInt(1.W))
//         val         bready  = Output(UInt(1.W))
        
//         // from cpu  sram like

        
// }
class axi_ram_port extends Bundle {
     // axi
        // ar
        val         data_length = 64
        val         arid    = Output(UInt(4.W))
        val         araddr  = Output(UInt(data_length.W))
        val         arlen   = Output(UInt(4.W))
        val         arsize  = Output(UInt(3.W))
        val         arburst = Output(UInt(2.W))
        val         arlock  = Output(UInt(2.W))
        val         arcache = Output(UInt(4.W))
        val         arprot  = Output(UInt(3.W))
        val         arvalid = Output(UInt(1.W))
        val         arready = Input(UInt(1.W))
        //r
        val         rid     = Input(UInt(4.W))
        val         rdata   = Input(UInt(data_length.W))
        val         rresp   = Input(UInt(2.W))
        val         rlast   = Input(UInt(1.W))
        val         rvalid  = Input(UInt(1.W))
        val         rready  = Output(UInt(1.W))


        //aw
        val         awid    = Output(UInt(4.W))
        val         awaddr  = Output(UInt(data_length.W))
        val         awlen   = Output(UInt(4.W))
        val         awsize  = Output(UInt(3.W))
        val         awburst = Output(UInt(2.W))
        val         awlock  = Output(UInt(2.W))
        val         awcache = Output(UInt(4.W))
        val         awprot  = Output(UInt(3.W))
        val        awvalid  = Output(UInt(1.W))
        val        awready  = Input(UInt(1.W))
        //w
        val         wid      = Output(UInt(4.W))
        val         wdata    = Output(UInt(data_length.W))
        val         wstrb    = Output(UInt((data_length / 8).W))
        val         wlast    = Output(UInt(1.W))
        val         wvalid   = Output(UInt(1.W))
        val         wready   = Input(UInt(1.W))
        //b
        val         bid     = Input(UInt(4.W))
        val         bresp   = Input(UInt(2.W))
        val         bvalid  = Input(UInt(1.W))
        val         bready  = Output(UInt(1.W))
        
}


//先不考虑延时的问题

class axi_cross_bar(cross_num:Int)  extends Module with riscv_macros{
        val io = IO(new Bundle {
                val m_port = Flipped((Vec(cross_num,(new axi_ram_port))))
                val s_port = new axi_ram_port
        })

        val judge_num_width = log2Up(cross_num)
        
        val r_inuse = RegInit(VecInit(Seq.fill(cross_num)(0.U.asBool)))
        val r_inuse_wire = Wire(Vec(cross_num,Bool()))
        val w_inuse = RegInit(VecInit(Seq.fill(cross_num)(0.U.asBool)))
        val w_inuse_wire = Wire(Vec(cross_num,Bool()))
        for(i <- 0 until cross_num ) {
                //for write
                when((io.m_port(i).awvalid.asBool || io.m_port(i).wvalid.asBool) && w_inuse.asUInt === 0.U ) {
                        // w_judge := i.asUInt
                        w_inuse_wire(i) := 1.U.asBool
                }.elsewhen(io.s_port.bvalid.asBool && w_inuse(i)) {
                        w_inuse_wire(i) := 0.U.asBool
                }.otherwise{
                        w_inuse_wire(i) := w_inuse(i)
                }
                
                io.m_port(i).awready  := Mux( w_inuse(i) ,io.s_port.awready,0.U)
                io.m_port(i).wready   := Mux( w_inuse(i) ,io.s_port.wready,0.U)
                io.m_port(i).bid      := Mux( w_inuse(i) ,io.s_port.bid,0.U) 
                io.m_port(i).bresp    := Mux( w_inuse(i) ,io.s_port.bresp,0.U)
                io.m_port(i).bvalid   := Mux( w_inuse(i) ,io.s_port.bvalid,0.U)
                w_inuse(i) := Mux(w_inuse_wire.asUInt >> (i.asUInt + 1.U) === 0.U || i.asUInt === (cross_num.asUInt - 1.U),w_inuse_wire(i),0.U)
                //for read
                when((io.m_port(i).arvalid.asBool || io.m_port(i).rvalid.asBool) && r_inuse.asUInt === 0.U ) {
                        r_inuse_wire(i) := 1.U.asBool
                }.elsewhen(io.s_port.rlast.asBool && r_inuse(i)){
                        r_inuse_wire(i) := 0.U.asBool
                }.otherwise{
                        r_inuse_wire(i) := r_inuse(i)
                }
                // r_inuse(i) := Mux((io.m_port(i).arvalid.asBool || io.m_port(i).rvalid.asBool) && r_inuse.asUInt === 0.U ,1.U.asBool,
                //         Mux(io.s_port.rlast.asBool && r_inuse(i),0.U.asBool,r_inuse(i)) )
                io.m_port(i).arready := Mux(r_inuse(i), io.s_port.arready  ,0.U)
                io.m_port(i).rid     := Mux(r_inuse(i), io.s_port.rid,0.U)
                io.m_port(i).rdata   := Mux(r_inuse(i), io.s_port.rdata,0.U)
                io.m_port(i).rresp   := Mux(r_inuse(i), io.s_port.rresp,0.U)
                io.m_port(i).rlast   := Mux(r_inuse(i), io.s_port.rlast ,0.U)
                io.m_port(i).rvalid  := Mux(r_inuse(i), io.s_port.rvalid  ,0.U)
                r_inuse(i) := Mux((r_inuse_wire.asUInt >> (i.asUInt + 1.U)) === 0.U || i.asUInt === (cross_num.asUInt - 1.U),r_inuse_wire(i),0.U)
        }
        
        //read
        // val 
        val r_select_port = Mux1H(r_inuse,io.m_port)
        io.s_port.arid     := r_select_port.arid   
        io.s_port.araddr   := r_select_port.araddr 
        io.s_port.arlen    := r_select_port.arlen  
        io.s_port.arsize   := r_select_port.arsize 
        io.s_port.arburst  := r_select_port.arburst
        io.s_port.arlock   := r_select_port.arlock 
        io.s_port.arcache  := r_select_port.arcache
        io.s_port.arprot   := r_select_port.arprot 
        io.s_port.arvalid  := r_select_port.arvalid
        io.s_port.rready   := r_select_port.rready


        //write

        val w_select_port = Mux1H(w_inuse,io.m_port)
        io.s_port.awid      := w_select_port.awid        
        io.s_port.awaddr    := w_select_port.awaddr   
        io.s_port.awlen     := w_select_port.awlen            
        io.s_port.awsize    := w_select_port.awsize   
        io.s_port.awburst   := w_select_port.awburst  
        io.s_port.awlock    := w_select_port.awlock   
        io.s_port.awcache   := w_select_port.awcache  
        io.s_port.awprot    := w_select_port.awprot   
        io.s_port.awvalid   := w_select_port.awvalid   

        io.s_port.wid       := w_select_port.wid      
        io.s_port.wdata     := w_select_port.wdata    
        io.s_port.wstrb     := w_select_port.wstrb    
        io.s_port.wlast     := w_select_port.wlast    
        io.s_port.wvalid    := w_select_port.wvalid   
        io.s_port.bready    := w_select_port.bvalid
       }
//保证addr不会有冲突的部分
//地址区间为左闭右开
//0是默认空间
class axi_cross_bar_addr_switch(cross_num:Int,slave_num:Int,start_addr:Array[BigInt],end_addr:Array[BigInt])  
                                        extends Module with riscv_macros {
        val io = IO(new Bundle {
                //0号是默认选择的地址空间，如果没
                val m_port = Flipped((Vec(cross_num,(new axi_ram_port))))
                val s_port = (Vec(slave_num,(new axi_ram_port)))
        })
        val master_cross_bar = Module(new  axi_cross_bar(cross_num)).io
        master_cross_bar.m_port  := io.m_port
        val judge_num_width = log2Up(cross_num)
        val select_s_port_num_r  = RegInit(VecInit(Seq.fill(slave_num)(0.U.asBool)))
        val select_s_port_num_w  = RegInit(VecInit(Seq.fill(slave_num)(0.U.asBool)))
        select_s_port_num_r.zipWithIndex.foreach{case(a,index) =>
                if(index == 0) {
                        select_s_port_num_r(index) := Mux(select_s_port_num_r.asUInt(slave_num - 1,1) =/= 0.U,0.U.asBool,1.U.asBool)
                        select_s_port_num_w(index) := Mux(select_s_port_num_w.asUInt(slave_num - 1,1) =/= 0.U,0.U.asBool,1.U.asBool)
                }else{
                        select_s_port_num_r(index) := Mux(master_cross_bar.s_port.arvalid.asBool,(master_cross_bar.s_port.araddr >= start_addr(index  ).asUInt(data_length.W) &&  
                                master_cross_bar.s_port.araddr < end_addr(index).asUInt(data_length.W)),Mux(io.s_port(index).rlast.asBool,0.U.asBool,select_s_port_num_r(index)))
                        select_s_port_num_w(index) := Mux(master_cross_bar.s_port.awvalid.asBool,(master_cross_bar.s_port.awaddr >= start_addr(index).asUInt(data_length.W) &&  
                                master_cross_bar.s_port.awaddr < end_addr(index).asUInt(data_length.W)),Mux(io.s_port(index).rlast.asBool,0.U.asBool,select_s_port_num_r(index)))
                }
        }
        // io.s_port()

        
       

        
}