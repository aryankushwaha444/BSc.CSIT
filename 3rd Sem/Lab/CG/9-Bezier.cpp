#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void bezier(int x[4],int y[4])
{
	int gd=DETECT,gm;
	int i;
	double t;
	initgraph(&gd,&gm," ");
	for(i=0.0;t<1;t+=0.0005)
	{
		double xt=pow(1-t,3)*x[0]+3*t*pow(1-t,2)*x[1]+3*pow(t,2)*(1-t)*x[2]+pow(t,3)*x[3];
		double yt=pow(1-t,3)*y[0]+3*t*pow(1-t,2)*y[1]+3*pow(t,2)*(1-t)*y[2]+pow(t,3)*y[3];
		putpixel(xt,yt,WHITE);
		
	}
	
	for(i=0;i<4;i++)
	putpixel(x[i],y[i],BLUE);
	getch();
	closegraph();
	return ;
}

int main()
{
	int x[4],y[4];
	int i;
	cout<<"Enter X & Y co-ordinate";
	for(i=0;i<4;i++)
	cin>>x[i]>>y[i];
	bezier(x,y);
	
	return 0;
}