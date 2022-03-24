#include <nvboard.h>
#include "Vtimer.h"

void nvboard_bind_all_pins(Vtimer* top){
	nvboard_bind_pin(&top->rst, false, false, 1, BTNR);
	nvboard_bind_pin(&top->stop, false, false, 1, SW1);
	nvboard_bind_pin(&top->start, false, false, 1, SW2);
	nvboard_bind_pin(&top->bcd2, false, true, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
	nvboard_bind_pin(&top->bcd1, false, true, 7, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G);
}