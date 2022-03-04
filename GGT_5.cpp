#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C://TURBOC3//BGI");
	moveto(200, 200);
	lineto(100, 100);
	getch();
	closegraph();
}