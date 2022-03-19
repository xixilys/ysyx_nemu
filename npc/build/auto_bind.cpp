#include <nvboard.h>
#include "Vmux2bit41.h"

void nvboard_bind_all_pins(Vmux2bit41* top){
	nvboard_bind_pin(&top->y, false, false, 2, SW0, SW1);
	nvboard_bind_pin(&top->x[0], false, false, 2, SW2, SW3);
	nvboard_bind_pin(&top->x[1], false, false, 2, SW4, SW5);
	nvboard_bind_pin(&top->x[2], false, false, 2, SW6, SW7);
	nvboard_bind_pin(&top->x[3], false, false, 2, SW8, SW9);
	nvboard_bind_pin(&top->f, false, true, 2, LD0, LD1);
}