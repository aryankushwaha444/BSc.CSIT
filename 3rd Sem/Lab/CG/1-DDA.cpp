#include<graphics.h>
#include<iostream>
#include<math.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	float x,y,x1,x2,y1,y2,dx,dy,lenght;
	int i,gd=DETECT,gm;
	cout<<"Enter x1,y1 : ";
	cin>>x1>>y1;
	
	cout<<"Enter x2,y2 : ";
	cin>>x2>>y2;

	
	initgraph(&gd,&gm, " ");
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	
	if(dx>=dy)
	{
		lenght=dx;
	}
	else
	{
		lenght = dy;
	}
	
	dx=(x2-x1)/lenght;
	dy=(y2-y1)/lenght;
     x=x1+0.5;
     y=y1+0.5;
     i=1;
     
     while(i<=lenght)
     {
     	putpixel(x,y,BLUE);
     	x=x+dx;
     	y=y+dy;
     	i=i+1;
     	delay(50);
     	
	 }
	getch();
}