#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif

#include <axi.h>    

#include<Vmycpu_top.h>
#include<verilated.h>
#include<verilated_vcd_c.h>   
#include<verilator_use.h>   
#include<iostream>
 

#include<memory/paddr.h>

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic pop
#endif

using namespace std;
//0为读通道，1为写通道
#define read_channel 0
#define write_channel 1


AXI_ResponseSignal axi_data_singal = {};

//按理来说
//这两个通道应该是互不干扰的
const int AXI_DATA_READY = 0;
const int AXI_DATA_READ = 1;
const int AXI_DATA_WRITE = 2;


int axi_size_to_bytes_num(int axi_size) {
    switch(axi_size) {
        case 0:return 1;break;
        case 1:return 2;break;
        case 2:return 4;break;
        case 3:return 8;break;
        default: return 0;break;
    }
}
uint64_t read_data_to_axi_data(uint64_t get_data,uint64_t addr,int burst_mode) {
    int unaligned_size = addr % 8;
    if(burst_mode == 1) {
        return get_data ;
    }else {
        return get_data << (unaligned_size * 8);
    }
    
}

// extern "C" void AXI_ResponseHandler_Inst(AXI_ResponseSignal* axi_handle){
//     if(axi_handle->read_work_state != AXI_DATA_READY) {
//         // printf("work state is %d\n", axi_handle->read_work_state);
//     }
    
//     switch (axi_handle->read_work_state)
//     {
//     case AXI_DATA_READY:
//         top->axi_mem_port_0_rlast =  0;
//         top->axi_mem_port_0_arready = 1;
//         top->axi_mem_port_0_rvalid =  0;
//         if(top->axi_mem_port_0_arvalid == 1){
//             //完成地址的握手
//             axi_handle->read_work_state = AXI_DATA_READ;
//             axi_handle->read_addr = top->axi_mem_port_0_araddr;
//             axi_handle->read_len = top->axi_mem_port_0_arlen;
//             axi_handle->read_size = top->axi_mem_port_0_arsize;
//         }break;
//     case AXI_DATA_READ:
//         top->axi_mem_port_0_rlast =  0;
//         top->axi_mem_port_0_rvalid = 1;
//         top->axi_mem_port_0_rdata = paddr_read(axi_handle->read_addr,axi_size_to_bytes_num(axi_handle->read_size),mem_inst_fec,0);
//         // cout<<"read_data = " << top->axi_mem_port_0_rdata<<endl;
//         if(top->axi_mem_port_0_rready){
//             axi_handle->read_addr += axi_size_to_bytes_num(axi_handle->read_size);
//             axi_handle->read_counter ++;
//             if(axi_handle->read_counter > axi_handle->read_len) {
//                 axi_handle->read_work_state = AXI_DATA_READY;
//                 top->axi_mem_port_0_rlast =  1;
//                 axi_handle->read_counter = 0;
                
//             }
//         }break;
//     default:
//         axi_handle->read_work_state = AXI_DATA_READY;
//         break;
//     }
//     switch (axi_handle->write_work_state)
//     {
//     case AXI_DATA_READY:
//         top->axi_mem_port_0_awready = 1;
//         top->axi_mem_port_0_wlast = 0;
//         top->axi_mem_port_0_wready =  0;
//         if(top->axi_mem_port_0_awvalid == 1){
//             //完成地址的握手
//             axi_handle->write_work_state = AXI_DATA_WRITE;
//             axi_handle->write_addr = top->axi_mem_port_0_awaddr;
//             axi_handle->write_len = top->axi_mem_port_0_awlen;
//             axi_handle->write_size = top->axi_mem_port_0_awsize;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            

//         }break;
//     case AXI_DATA_WRITE:
//         top->axi_mem_port_0_wready =  1;
//         if(top->axi_mem_port_0_wvalid){
//             paddr_write(axi_handle->write_addr,axi_size_to_bytes_num(axi_handle->write_size),top->axi_mem_port_0_wdata,0);
//             axi_handle->write_addr += axi_size_to_bytes_num(axi_handle->write_size );
//             axi_handle->write_counter ++;
//             if(axi_handle->write_counter > axi_handle->write_len || top->axi_mem_port_0_wlast) {
//                 axi_handle->write_work_state = AXI_DATA_READY ;
//                 axi_handle->write_counter = 0;
                
//             }
//         }break;
//     default:
//         axi_handle->write_work_state = AXI_DATA_READY;
//         break;
//     }
// }

extern "C" void AXI_ResponseHandler_Data(AXI_ResponseSignal* axi_handle){
    // printf("state machine is %d\n",axi_handle->read_work_state);
    switch (axi_handle->read_work_state)
    {
    case AXI_DATA_READY:
        top->axi_mem_port_rlast =  0;
        top->axi_mem_port_arready = 1;
        top->axi_mem_port_rvalid =  0;
        if(top->axi_mem_port_arvalid == 1){
            //完成地址的握手
            axi_handle->read_work_state = AXI_DATA_READ;
            axi_handle->read_addr = top->axi_mem_port_araddr;
            axi_handle->read_len = top->axi_mem_port_arlen;
            axi_handle->read_size = top->axi_mem_port_arsize;
        }break;
    case AXI_DATA_READ:
        top->axi_mem_port_rlast =  0;
        top->axi_mem_port_rvalid = 1;
        //窄带传输
        // size_t sb_read_addr = axi_handle->read_addr - (axi_handle->read_addr) % 8;
        //

        top->axi_mem_port_rdata = read_data_to_axi_data(paddr_read(axi_handle->read_addr,axi_size_to_bytes_num(axi_handle->read_size),mem_inst_fec,0),axi_handle->read_addr,axi_handle->read_len > 0);
      
        if(top->axi_mem_port_rready){
            axi_handle->read_addr += axi_size_to_bytes_num(axi_handle->read_size);
            axi_handle->read_counter ++;
            if(axi_handle->read_counter > axi_handle->read_len) {
                axi_handle->read_work_state = AXI_DATA_READY;
                top->axi_mem_port_rlast =  1;
                axi_handle->read_counter = 0;
                
            }
        }
        break;
    default:
        axi_handle->read_work_state = AXI_DATA_READY;
        break;
    }
    static int write_end = 0;
    switch (axi_handle->write_work_state)
    {
    case AXI_DATA_READY:
        if(write_end == 1) {
            top->axi_mem_port_bvalid = 1;
            write_end = 0;
        }else{
            top->axi_mem_port_bvalid = 0;
        }
        top->axi_mem_port_awready = 1;
        top->axi_mem_port_wlast = 0;
        top->axi_mem_port_wready =  0;
        if(top->axi_mem_port_awvalid == 1){
            //完成地址的握手
            axi_handle->write_work_state = AXI_DATA_WRITE;
            axi_handle->write_addr = top->axi_mem_port_awaddr;
            axi_handle->write_len = top->axi_mem_port_awlen;
            axi_handle->write_size = top->axi_mem_port_awsize;
            //nanhuo
            // goto
        }
        break;
    case AXI_DATA_WRITE:
        top->axi_mem_port_wready =  1;
        static int num_to_stop = 0;
        if(top->axi_mem_port_wvalid){
            paddr_write(axi_handle->write_addr,axi_size_to_bytes_num(axi_handle->write_size),top->axi_mem_port_wdata,0);
            
            axi_handle->write_addr += axi_size_to_bytes_num(axi_handle->write_size );
            axi_handle->write_counter ++;
            if(axi_handle->write_counter > axi_handle->write_len || top->axi_mem_port_wlast) {
                axi_handle->write_work_state = AXI_DATA_READY ;
                write_end = 1;
                axi_handle->write_counter = 0;
                
            }
            
            
        }
        break;
    default:
        axi_handle->write_work_state = AXI_DATA_READY;
        break;
    }
}