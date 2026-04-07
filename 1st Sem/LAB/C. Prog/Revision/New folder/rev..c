// Find the reverse No. of user enter No.

#include<stdio.h>

int main()
{
	int n,d,rev=0;
	printf("Enter No. ");
	scanf("%d",&n);
	while(n>0)
	{
	
  d=n%10;
  n=n/10;
  rev=rev*10+d;
   }

printf("Rev. = %d",rev);
  
 	
}
