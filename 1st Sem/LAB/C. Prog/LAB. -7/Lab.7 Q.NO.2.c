/// Lab.7 Q.No. 2 :-  Example of Double Pointer

#include<stdio.h>

int main()
{
	int a=10;
	int *p;
	int **p1;
	p=&a;
	p1=&p;
	
	printf("Value of a = %d",a);
	printf("\n Value of a =%d",*p);
	printf("\n Value of a =%d",**p1);
	printf("\n Address of p =%d",p1);
	printf("\n Address of a =%d",p);
	printf("\n Address of p = %d",&p);
	printf("\n Address of p1=%d",&p1);
	return 0;
}



