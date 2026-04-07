// Q.2b :-  Series  1 + x^2 + x^3 + x^4 +.......

#include<stdio.h>
#include<math.h>

int main()
{
	int i,x,n;
	int sum=1;
	
	printf("Enter value of x and nth terms : ");
	scanf("%d %d",&x,&n);
	
	for(i=2;i<=n;i++)
	{
		sum+=pow(x,i);
	//	printf(" Series : ",sum);
	}
	
	
	printf("\nSum = %d",sum);
	
	
	
	return 0;
}