// Q.1a :  WAP to show following series upto 'n' Number :  0 1 1 2 3 5 8 .......

#include<stdio.h>

int main()
{
	int n,i=0,a=0,b=1;
	int sum=0;
	
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("0\t");
while(i<n-1)
{
	a=b;
	b=sum;
	sum=a+b;
	printf("%d\t",sum);
	i++;
}
	
	return 0;
	
}