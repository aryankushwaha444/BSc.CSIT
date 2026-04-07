#include<graphics.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<dos.h>
#include<conio.h>
using namespace std;

int main()
{
	float p;
	int x,y,maxx,maxy;
	int i , gd=DETECT,gm,r;
	cout<<"Enter Radius : ";
	cin>>r;
	
	initgraph(&gd,&gm,(char*)" ");
	
	x=0;
	y=r;
	p=1.25-r;
	maxx=getmaxx();
	maxy=getmaxy();
	do
	{
		putpixel((maxx/2)+x,(maxy/2)+y,5);
		putpixel((maxx/2)+y,(maxy/2)+x,6);
		putpixel((maxx/2)+x,(maxy/2)-y,7);
		putpixel((maxx/2)+y,(maxy/2)-y,8);
		putpixel((maxx/2)-x,(maxy/2)-y,9);
		putpixel((maxx/2)-x,(maxy/2)+y,10);
		putpixel((maxx/2)-y,(maxy/2)+x,11);
		putpixel((maxx/2)-y,(maxy/2)-x,12);
		
        if(p<0)
		{
			x=x+1;
			y=y;
			p=p+2*x+2;
			
				}
		else
		{
			x=x+1;
			y=y-1;
			p=p+2*(x-y)+1;
			
				}
				delay(20);		
	}while(x<y);
	
	closegraph();
	return 0;
}
	
	
	