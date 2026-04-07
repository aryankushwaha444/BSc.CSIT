/// Lab.6 Q.No.11 :- WAP to fibonaccious series 0,1,1,2,3,5,8,13........

#include<stdio.h>

int fab(int n);

int main()
{
	int i,n;
	printf("Enter No. : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d,",fab(i));
	}
		return 0;
}

int fab (int n)
{
/*	if(n==0)
	return 0;
	else if (n==1)
	return 1;
	else
	return (fab(n-1)+fab(n-2));
	*/
	int i,a=0,b=1,c=0;
	for(i=0;i<n;i++)
	{
		a=b;
		b=c;
		c=a+b;
	}
	return c;
	
}

