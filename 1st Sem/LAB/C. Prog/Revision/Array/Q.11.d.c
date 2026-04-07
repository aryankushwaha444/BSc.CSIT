// Q.11d :- 1+2x^2 + x^3 + x^4............

#include<stdio.h>
#include<math.h>

int main()

{
	int x,n,i;
	printf("Enter value of x and n : ");
	scanf("%d %d",&x,&n);
	
	int sum=1+2*pow(x,2);
	
	for(i=3;i<=n;i++)
	{
		sum+=pow(x,i);
	}
	
	printf("\nSum = %d",sum);
	
	return 0;
}