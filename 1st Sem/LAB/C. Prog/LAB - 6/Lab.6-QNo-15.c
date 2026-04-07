/// Lab.6 Q.No.15 :- WAP to pass argument by address or reference or pointer....

#include<stdio.h>

void swap(int *a,int *b);

int main()
{
	int a, b;
	a=100;
	b=55;
	printf("\n Before Swapping a=%d \t b=%d",a,b);
	swap(&a,&b);
	return 0;
}

void swap (int *a , int *b)
{
//	int a,b;
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n\n After Swapping a=%d \t b=%d",*a,*b);
}
