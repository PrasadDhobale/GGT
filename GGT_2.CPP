#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
	int i=GREEN, gd=DETECT, gm;
	initgraph(&gd, &gm, "C://TURBOC3//BGI");
	putpixel(250, 250, i);
	getch();
	closegraph();
}