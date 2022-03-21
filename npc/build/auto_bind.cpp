#include <nvboard.h>
#include "Vencoder83.h"

void nvboard_bind_all_pins(Vencoder83* top){
	nvboard_bind_pin(&top->en, false, false, 1, SW0);
	nvboard_bind_pin(&top->x, false, false, 8, SW2, SW3, SW4, SW5, SW6, SW7, SW8, SW9);
	nvboard_bind_pin(&top->out, false, true, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
}