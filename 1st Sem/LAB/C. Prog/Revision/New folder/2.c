// WAP to sum the digit of user enter No. Eg. :- 123 = 1 + 2 + 3

#include<stdio.h>

int main()
{
	int n ,d,sum=0;
	printf("Enter digit : ");
	scanf("%d",&n);
	if(n>0)
	{
	
	d=n%10;
	n=n/10;
	sum=sum+d;
   }
   printf("Sum = %d",sum);
   //goto ABC;

	return 0;
	
 } 
