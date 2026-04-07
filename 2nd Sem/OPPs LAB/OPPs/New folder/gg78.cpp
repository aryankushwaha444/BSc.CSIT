#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()

{
	int gm,gd=DETECT;
	initgraph(&gm,&gd,(char*)" ");
	int i;
	
	for(i=0;i<=500;i++)
	{
		setcolor(i);
		circle(getmaxx()/2,getmaxy()/2,20+i);
		delay(500);
	}
	
	closegraph();
	
	getch();
	
}