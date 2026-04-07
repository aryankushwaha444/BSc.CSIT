#include<graphics.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void flood_fill4(int x , int y , char newColor , int oldColor)
{
	int c;
	c = getpixel(x,y);
	if(c==oldColor)
	{
		setcolor(newColor);
		putpixel(x,y,newColor);
		delay(1);
		flood_fill4(x+1,y,newColor,oldColor);
		flood_fill4(x,y+1,newColor,oldColor);
		flood_fill4(x-1,y,newColor,oldColor);
		flood_fill4(x,y-1,newColor,oldColor);
	}
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	circle(250,200,100);
	flood_fill4(251,201,'D',0);
	getch();
	closegraph();
	
	return 0;
}