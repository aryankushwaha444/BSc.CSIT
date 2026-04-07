#include<graphics.h>

int main()
{
	initwindow(400,300,"First day");
	circle(10,500,40);
	while(!kbhit())
	{
		delay(200);
	}
	return 0;
}