#include<stdio.h>

int main()
{
	int n,i,count=0;
	
	printf("Enter No. To be Check ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	
	if(count==2)
	{
		printf("It's No. is Prime No. ");
		
		
	}
	
	else
	printf("It's No. is Composite No. ");
	
	
	return 0;
}
