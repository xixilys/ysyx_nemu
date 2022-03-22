#include <nvboard.h>
#include "Vfourbitalu.h"

void nvboard_bind_all_pins(Vfourbitalu* top){
	nvboard_bind_pin(&top->a, false, false, 4, SW0, SW1, SW2, SW3);
	nvboard_bind_pin(&top->b, false, false, 4, SW4, SW5, SW6, SW7);
	nvboard_bind_pin(&top->x, false, false, 3, SW8, SW9, SW10);
	nvboard_bind_pin(&top->out, false, true, 4, LD0, LD1, LD2, LD3);
}