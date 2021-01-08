#include <stdio.h>
#include "color.h"

void menu(){
	printf(MAG"\nUSER MANAGERMENT PROGRAM\n");
	printf(MAG"-----------------------------\n");
	printf(GRN"1. Register\n");
	printf(YEL"2. Sign in\n");
	printf(RED"3. Exit\n");
	printf(MAG"Your choice (1-3):  ");
}

void chatFunction(){
	printf(MAG"\nCHATROOM FUNCTION\n");
	printf(MAG"---------------------------\n");
	printf(YEL"0. List member Online\n");
	printf(BLU"1. Create room\n");
	printf(GRN"2. Get in room\n");
	printf(YEL"3. List of rooms\n");
	printf(CYN"4. Single chat\n");
	printf(RED"5. Sign Out\n");
	printf(MAG"Your choice (0-5):\n");
}