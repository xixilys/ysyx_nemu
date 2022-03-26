#include <nvboard.h>
#include "Vkeyboard_bottom.h"

void nvboard_bind_all_pins(Vkeyboard_bottom* top){
	nvboard_bind_pin(&top->rst, false, false, 1, BTNR);
	nvboard_bind_pin(&top->clk, false, false, 1, BTNL);
	nvboard_bind_pin(&top->ps2_clk, true, false, 1, PS2_CLK);
	nvboard_bind_pin(&top->ps2_data, true, false, 1, PS2_DAT);
	nvboard_bind_pin(&top->led, false, true, 1, LD0);
}