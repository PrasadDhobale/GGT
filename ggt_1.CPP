#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C://TURBOC3//BGI");
	setcolor(3);

	line(100,200,100,300);
	getch();
	closegraph();
	return 0;
}