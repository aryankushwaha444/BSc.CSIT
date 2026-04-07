//// Lab.6 Q.No.17 :-  WAP to illustrate using call by reference......

#include<stdio.h>

int calc(int *x);

int main ()
{
	int x=10;
	x=calc(&x);
	printf("Value of x is %d",x);
	
}

int calc(int *x)
{
	*x=*x+10;
	return *x;
}