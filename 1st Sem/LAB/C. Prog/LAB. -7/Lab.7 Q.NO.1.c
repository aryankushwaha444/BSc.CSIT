// Lab.7 Q.No.1 :-   Example of single Pointer....

#include<stdio.h>

int main()
{
	int a=10;
	int *p;
	p=&a;
	printf("Value of a = %d",a);
	printf("\n Value of a = %d",*p);
	printf("\n Address of a = %d",&a);
	printf("\n Address of a = %d",p);
	printf("\n Address of p = %d",&p);
	
	return 0;
}