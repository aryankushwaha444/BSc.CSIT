// Q.2c... :-  serise  1 - x^2 + x^3 - x^4 + .....

#include<stdio.h>
#include<math.h>

int main()
{
	int i,n,x;
	float sum=1;
	
	printf("Enter Value of x and n : ");
	scanf("%d %d",&x,&n);
	
	for(i=2;i<=n;i++)
	{
		if(i%2==1)
		
			sum+=pow(x,i);
		
		else if(i%2==0)
		sum-=pow(x,i);
	}
     	//sum=sum1+sum2;
	printf("\nSum = %.2f",sum);
	
	
	
	
	
	return 0;
}
