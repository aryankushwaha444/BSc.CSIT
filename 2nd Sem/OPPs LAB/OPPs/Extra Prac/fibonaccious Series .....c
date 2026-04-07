#include<stdio.h>

void swap (int *a,int *b);

int main()
{
	int a,b;
	a=100;
	b=60;
	printf("\n Before Swapping Value is\n a=%d and b=%d",a,b);
	
	swap(&a,&b);
	return 0;
}

void swap (int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n Aftre Swapping Value is\n a=%d and b=%d",*a,*b);
}