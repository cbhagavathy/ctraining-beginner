#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

union REGS in, out;

int initMouse() {
	in.x.ax = 0;
	int86(0x33, &in, &out);
	return out.x.ax;
}

void showMouse() {
	in.x.ax = 1;
	int86(0x33, &in, &out);
}

void restrictMouse(int x1, int y1, int x2, int y2) {
	in.x.ax = 7; in.x.cx = x1; in.x.dx = x2;
	int86(0x33, &in, &out);
	in.x.ax = 8; in.x.cx = y1; in.x.dx = y2;
	int86(0x33, &in, &out);
}

void main() {
	int gd = DETECT, gm;

	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	if (initMouse() == 0)
		printf("Unable to initiate Mouse....\n");
	else {
		showMouse();
		rectangle(50, 50, 300, 300);
		restrictMouse(50, 50, 300, 300);
	}
	closegraph();
	return 0;
}


