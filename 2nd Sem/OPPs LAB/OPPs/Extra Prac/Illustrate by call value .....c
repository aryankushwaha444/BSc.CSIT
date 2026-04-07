#include<stdio.h>

int calc(int *n);

int main()
{
	int n=10;
	n=calc(&n);
	printf("Value of X is %d",n);
	return 0;
	
}

int calc(int *n)
{
	*n=*n+10;
	return *n;
}