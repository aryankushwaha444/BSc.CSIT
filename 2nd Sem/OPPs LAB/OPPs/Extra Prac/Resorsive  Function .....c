///// factorial by recursive and recursio Function.....

#include<stdio.h>

int fact(int x);

int main()
{
	int n,f;
	printf("Enter No. : ");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial is : %d",f);
	
	return 0;
}

int fact (int x)
{
	if(x==0)
	return 0;
	else if (x==1)
	return 1;
	else
	return (x*fact(x-1));
}