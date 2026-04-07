
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
	int gm,gd=DETECT;
	
	initgraph(&gd,&gm, " ");
	
	int i;
	
	for(i=0;i<=500;i++)
	{
		setcolor(i);
		circle(getmaxx()/2,getmaxy()/2,20+i);
		delay(10);
	
	}
	
	
	getch();
	closegraph();

	
}