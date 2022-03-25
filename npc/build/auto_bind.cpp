#include <nvboard.h>
#include "Vrandomizer.h"

void nvboard_bind_all_pins(Vrandomizer* top){
	nvboard_bind_pin(&top->rst, false, false, 1, BTNR);
	nvboard_bind_pin(&top->bcd_num0, false, true, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
	nvboard_bind_pin(&top->bcd_num1, false, true, 7, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G);
	nvboard_bind_pin(&top->bcd_num2, false, true, 7, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G);
	nvboard_bind_pin(&top->clk, false, false, 1, BTNL);
}