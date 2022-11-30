#ifndef _AXI_H__
#define _AXI_H__

#include<common.h>


typedef struct {
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

extern AXI_ResponseSignal axi_data_singal;




extern "C" void AXI_ResponseHandler_Data(AXI_ResponseSignal* axi_handle);

//0 is inst
//1 is data



#endif
