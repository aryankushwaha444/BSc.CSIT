/// Lab6. Q.NO.14 :-  WAP  To Swap  two nnumber using call by value..

#include<stdio.h>

void swap (int a, int b);

int main()
{
	int a,b;
	a=100;
	b=55;
	printf("\n Before swapping a=%d\t b=%d:",a,b);
	swap(a,b);
	return 0;
}

void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
//	printf("\n The function within Function are : a=%d\t b=%d",a,b);
printf("\n After Swapping a=%d\tb=%d:",a,b);
	
}

