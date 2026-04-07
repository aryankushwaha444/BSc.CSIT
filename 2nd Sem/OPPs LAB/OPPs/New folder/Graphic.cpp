#include<graphics.h>
#include<dos.h>
#include<conio.h>

int main()
{
	int i,j=0,gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)" ");
	
//	settextstylexy(25,240,"Press any Key to View moving Car");
	getch();
	setviewport(0,0,639,440,1);
	
	for(i=0;i<=420;i=i+10,i++)
	{
		setfillstyle(SOLID_FILL,RED);
	//	floodfill()
		rectangle(50+i,275,150+i,400);
		rectangle(150+i,350,200+i,400);
		circle(75+i,410,10);
		circle(175+i,410,10);
		setcolor(i);
		delay(100);
		
		if(i==420)
		break;
		
		clearviewport();
	}
	getch();
	closegraph();
	
	return 0;
}
