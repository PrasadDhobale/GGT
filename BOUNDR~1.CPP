
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void flood(int x,int y, int f_colour, int b_colour)
{

	if( getpixel (x,y)!=b_colour& getpixel (x,y)!=f_colour)
	{
		putpixel(x,y, f_colour);
		flood(x+1, y, f_colour, b_colour);
		flood(x-1, y, f_colour, b_colour);
		flood(x, y+1, f_colour, b_colour);
		flood(x,y-1, f_colour, b_colour);
		flood(x+1, y+1, f_colour, b_colour);
		flood(x-1, y-1, f_colour, b_colour);
		flood(x+1, y-1, f_colour, b_colour);
		flood(x-1, y+1, f_colour, b_colour);
	}
}



int main()
{

	int gd,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	rectangle(50,50,100,100);
	flood(55,55,25,15);
	getch();
	closegraph();
	return 0;
}
