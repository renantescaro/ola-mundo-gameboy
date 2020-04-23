#include <gb/gb.h>
#include <stdio.h>

void init();
void checkInput();

void main() {
	init();
	
	while(1) {
		// Código do jogo
		checkInput();
	}	
}

void init() {
	DISPLAY_ON;		    // Liga Display
	NR52_REG = 0x8F;	// Liga Som
	NR51_REG = 0x11;	// Ativa canal de audio
	NR50_REG = 0x77;	// Volume no maximo
}

void checkInput() {

    if (joypad() & J_B) {
        printf("B\n");
    }

    if (joypad() & J_A) {
        printf("A\n");
    }

    if (joypad() & J_START) {
        printf("START\n");
    }

    if (joypad() & J_SELECT) {
        printf("SELECT\n");
    }

    if (joypad() & J_UP) {
        printf("UP\n");
    }

    if (joypad() & J_DOWN) {
        printf("DOWN\n");
    }

    if (joypad() & J_LEFT) {
        printf("LEFT\n");
    }

    if (joypad() & J_RIGHT) {
        printf("RIGHT");
    }
}