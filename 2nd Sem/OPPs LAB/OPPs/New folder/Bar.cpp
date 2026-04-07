#include<graphics.h>
#include<conio.h>

int main()
{
	int gm,gd=DETECT;
	initgraph(&gd,&gm,(char*)" ");
	
	bar(50,100,100,300);
	getch();
	closegraph();
	return 0;
}
