#include<stdio.h>

int main()
{
	int n=854,n1,n2,n3;
	int sum=0;

while (n!=0)
{
	n1=n%10;
	n/=10;
//	n2=n%10;
	//n/=10;
	//n3=n%10;
	sum+=n1;
}
	printf("sum =%d\t",sum);
	
	return 0;
}