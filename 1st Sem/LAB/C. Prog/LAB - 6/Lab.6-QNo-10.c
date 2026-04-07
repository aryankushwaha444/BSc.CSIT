/// Lab.6 Q.No.10 :- WAP to find Factorial of n No. using recursive / recursion Function.

#include<stdio.h>

int fact (int n);

int main()
{
	int a,f;
	printf("Enter No. : ");
	scanf("%d",&a);
	//f=fact(a);
	printf("factorial is %d",fact(a));
	return 0;
}

int fact (int n)
{
/*	if (n==0)
	return 0;
	else if (n==1)
	return 1;
	else
	return (n*fact(n-1));
	*/
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
	
}