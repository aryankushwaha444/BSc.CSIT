// Q.2e :- Series  1 + 1/2! + 1/3! + 1/4! +.........

#include<stdio.h>

int main()
{
	int i,n;
	float fact=1;
	float sum=1;
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+1/fact;
		
	}
	
	printf("\n Sum = %.2f",sum);
	
	return 0;
}