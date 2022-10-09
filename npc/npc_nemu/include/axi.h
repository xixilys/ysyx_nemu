#ifndef _AXI_H__
#define _AXI_H__

#include<common.h>


typedef struct {
    // uint64_t axi_mem_port_arid;
    // uint64_t axi_mem_port_arlen;
    // uint64_t axi_mem_port_arsize;
    // uint64_t axi_mem_port_arburt;
    // uint64_t axi_mem_port_arlock;
    // uint64_t axi_mem_port_arcache;
    // uint64_t axi_mem_port_arprot;
    // uint64_t axi_mem_port_arvalid;
    // uint64_t axi_mem_port_arready;
    // uint64_t axi_mem_port_rid ;
    // uint64_t axi_mem_port_rresp;
    // uint64_t axi_mem_port_rlast;
    // uint64_t axi_mem_port_rvalid;
    // uint64_t axi_mem_port_rready;
    // uint64_t axi_mem_port_awid;
    // uint64_t axi_mem_port_awlen;
    // uint64_t axi_mem_port_awsize;
    // uint64_t axi_mem_port_awburst;
    // uint64_t axi_mem_port_awlock;
    // uint64_t axi_mem_port_awcache;
    // uint64_t axi_mem_port_awprot;
    // uint64_t axi_mem_port_awvalid;
    // uint64_t axi_mem_port_awready;
    // uint64_t axi_mem_port_wid ;
    // uint64_t axi_mem_port_wstrb;
    // uint64_t axi_mem_port_wlast;
    // uint64_t axi_mem_port_wvalid;
    // uint64_t axi_mem_port_wready;
    // uint64_t axi_mem_port_bid ;
    // uint64_t axi_mem_port_bresp;
    // uint64_t axi_mem_port_bvalid;
    // uint64_t axi_mem_port_bready;
    

    size_t read_addr;
    size_t write_addr;

    int read_len;
    int write_len;

    int read_size;
    int write_size;

    int read_work_state;
    int write_work_state; 
    int read_counter;
    int write_counter;

}AXI_ResponseSignal;

extern AXI_ResponseSignal axi_inst_singal;
extern AXI_ResponseSignal axi_data_singal;



extern "C" void AXI_ResponseHandler_Inst(AXI_ResponseSignal* axi_handle);
extern "C" void AXI_ResponseHandler_Data(AXI_ResponseSignal* axi_handle);

//0 is inst
//1 is data



#endif
