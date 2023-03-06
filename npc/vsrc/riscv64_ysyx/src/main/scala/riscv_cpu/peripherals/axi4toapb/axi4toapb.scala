package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._



class AXI4ToAPB(apb_addr_w :Int,apb_data_w:Int,axi_addr_w:Int,axi_data_w:Int,
    start_addr:Array[BigInt],end_addr:Array[BigInt]) extends Module {
    val io = IO(new Bundle{
        val axi_port =  Flipped(new axi_ram_port)
        val apb_port =  Flipped(new apb_bundle(32,32))
    })
    // apb 信号读和写不能同时使用
    // 读优先级高于写

    //状态机
    val state_w:Int = 4
    val apb_state = RegInit(0.U(state_w.W))
    val apb_state_idle   = 0.U(state_w.W)
    val apb_state_setup  = 1.U(state_w.W)
    val apb_state_data   = 2.U(state_w.W)
    val apb_state_finish = 3.U(state_w.W)
    io.axi_port.arready := 1.U.asBool
    
    //其他状态变量
    val apb_write_read_state = RegInit(0.U.asBool)
    val apb_write_addr      = RegInit(0.U(apb_addr_w.W))
    val apb_read_addr       = RegInit(0.U(apb_addr_w.W))
    apb_state := MuxLookup(apb_state,apb_state,Seq(
        apb_state_idle   -> Mux(io.axi_port.arvalid.asBool || io.axi_port.awvalid.asBool,apb_state_setup,apb_state),
        apb_state_setup  -> apb_state_data,
        apb_state_data   -> Mux(io.apb_port.pready,apb_state_finish,apb_state),
        apb_state_finish -> apb_state_idle
    ))

    //写数据
    val apb_write_data = RegInit(0.U(apb_data_w.W ))
    val apb_read_data = RegInit(0.U(apb_data_w.W))
    val apb_strb_data = RegInit(0.U((apb_data_w / 8).W))
    apb_write_data := Mux(io.axi_port.wvalid.asBool && io.axi_port.wready.asBool,io.axi_port.wdata,apb_write_data)
    apb_read_data := Mux(io.axi_port.rvalid.asBool && io.axi_port.rready.asBool,io.apb_port.prdata,apb_read_data)
    apb_strb_data := Mux(io.axi_port.arvalid.asBool && io.axi_port.arready.asBool,MuxLookup(io.axi_port.arsize,0.U,Seq(
        0.U -> "b0001".U,
        1.U -> "b0011".U,
        2.U -> "b1111".U
    )),apb_strb_data)
    // apb_read_data  := 
    //读数据
    apb_write_read_state := Mux(io.axi_port.arvalid.asBool,0.U.asBool,Mux(io.axi_port.awvalid.asBool,1.U.asBool,apb_write_read_state))
    apb_write_addr       := Mux(io.axi_port.awvalid.asBool,io.axi_port.awaddr,apb_write_addr)
    apb_read_addr        := Mux(io.axi_port.arvalid.asBool,io.axi_port.araddr,apb_read_addr)

    io.apb_port.paddr := Mux(apb_write_read_state,apb_write_addr,apb_read_addr)
    io.apb_port.psel  := apb_state === apb_state_setup || apb_state === apb_state_data 
    io.apb_port.pwrite := ( apb_state === apb_state_setup || apb_state === apb_state_data ) && apb_write_read_state
    io.apb_port.penable := apb_state === apb_state_data
    io.apb_port.pwdata  := Mux(io.axi_port.wvalid.asBool && io.axi_port.wready.asBool,io.axi_port.wdata,apb_write_data)
    io.apb_port.pstrb   := Mux(apb_write_read_state,Mux(io.axi_port.arvalid.asBool && io.axi_port.arready.asBool,MuxLookup(io.axi_port.arsize,0.U,Seq(
        0.U -> "b0001".U,
        1.U -> "b0011".U,
        2.U -> "b1111".U
    )),apb_strb_data),0.U)

    // io.apb_port.pstrb   := 
    // io.apb_port.pslverr

    //axi signal
    io.axi_port.rdata := apb_read_data
    io.axi_port.rvalid := !apb_write_read_state && apb_state === apb_state_finish
    io.axi_port.rlast  := !apb_write_read_state && apb_state === apb_state_finish
    
    
    io.axi_port.awready := Mux(io.axi_port.arvalid.asBool,0.U.asBool,1.U.asBool)
    io.axi_port.bvalid := apb_state === apb_state_finish
    io.axi_port.wready := apb_state === apb_state_data
    io.axi_port.bresp  := 0.U
    io.axi_port.bid := 0.U
    io.axi_port.rid := 0.U
    io.axi_port.rresp := 0.U
    


    
    // io.apb_port.psel  := Mux(apb)
    
    
    
    
    




}
