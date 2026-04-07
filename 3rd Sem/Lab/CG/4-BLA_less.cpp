//slope(m) is less than 1
#include<graphics.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<dos.h>
#include<conio.h>
using namespace std;

int main()
{
	float x,y,x1,y1,x2,y2,dx,dy,length,pk;
	int i , gd=DETECT,gm;
	cout<<"Enter X1 and Y1 : ";
	cin>>x1>>y1;
	cout<<"Enter X2 & Y2 : ";
	cin>>x2>>y2;
	
	initgraph(&gd,&gm," ");
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	x=x1;
	y=y1;
	pk=2*dy-dx;
	i=1;
	
	do
	{
		putpixel(x,y,RED);
		delay(60);
		while(pk>=0)
		{
			y=y+1;
			pk=pk-2*dx;
		}
		x=x+1;
		pk=pk+2*dy;
		i=i+1;
	}while(i<=dx);
	
getch();
closegraph();

return 0;
		
		
}
