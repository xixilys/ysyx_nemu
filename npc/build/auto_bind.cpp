#include <nvboard.h>
#include "Vcommand_line_test.h"

void nvboard_bind_all_pins(Vcommand_line_test* top){
	nvboard_bind_pin(&top->rst, false, false, 1, BTNR);
	nvboard_bind_pin(&top->vga_vs, true, true, 1, VGA_VSYNC);
	nvboard_bind_pin(&top->vga_hs, true, true, 1, VGA_HSYNC);
	nvboard_bind_pin(&top->vga_blank_n, true, true, 1, VGA_BLANK_N);
	nvboard_bind_pin(&top->led, false, true, 1, LD0);
	nvboard_bind_pin(&top->vga_r, true, true, 8, VGA_R7, VGA_R6, VGA_R5, VGA_R4, VGA_R3, VGA_R2, VGA_R1, VGA_R0);
	nvboard_bind_pin(&top->vga_g, true, true, 8, VGA_G7, VGA_G6, VGA_G5, VGA_G4, VGA_G3, VGA_G2, VGA_G1, VGA_G0);
	nvboard_bind_pin(&top->vga_b, true, true, 8, VGA_B7, VGA_B6, VGA_B5, VGA_B4, VGA_B3, VGA_B2, VGA_B1, VGA_B0);
	nvboard_bind_pin(&top->ps2_clk, true, false, 1, PS2_CLK);
	nvboard_bind_pin(&top->ps2_data, true, false, 1, PS2_DAT);
}