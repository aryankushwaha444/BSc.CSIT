// Q.2 :-  Sum of 3+6+9+12......

#include<stdio.h>

int main()
{
	//int sum=0;
	int n,i;
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\t",3*i);
	}
	
	
	
	
	return 0;
}