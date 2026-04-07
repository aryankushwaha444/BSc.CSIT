#include<stdio.h>

int main()
{
	int i,sum=0,avg,a[10];
	
	for(i=0;i<10;i++)
	{
		printf("Enter %d No. ",i+1);
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<10;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	sum+=a[i];
		
	}
	
	avg=sum/10;
	
	printf("\nAverage = %d",avg);
}
