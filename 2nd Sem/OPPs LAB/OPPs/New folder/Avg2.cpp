#include<stdio.h>

int main()
{
	int i=0,sum=0,avg,a=0;
	
	for(i=0;i<=5;i++)
	{
		if(i%2==0)
		{
			
			sum+=i;
			a++;
		}
	}
	avg=sum/i;
	
	printf("Average = %d",avg);
	
	return 0;
}
