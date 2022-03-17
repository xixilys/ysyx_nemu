#include <nvboard.h>
#include "Vm_mux12.h"

void nvboard_bind_all_pins(Vm_mux12* top){
	nvboard_bind_pin(&top->a, false, false, 1, SW0);
	nvboard_bind_pin(&top->b, false, false, 1, SW1);
	nvboard_bind_pin(&top->s, false, false, 1, SW2);
	nvboard_bind_pin(&top->y, false, true, 1, LD0);
}