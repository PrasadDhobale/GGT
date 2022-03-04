#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
	int x = 250, y = 250, r = 50,gd = DETECT, gm;
	initgraph(&gd, &gm, "C://TURBOC3//BGI");
	circle(x, y, r);
	getch();
	closegraph();
}