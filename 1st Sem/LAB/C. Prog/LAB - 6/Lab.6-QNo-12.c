// Lab.6 Q.No. 12 :- WAP to read 10 No. in an array & find their sum and display using the function.

#include<stdio.h>

int sum (int n[]);

void display (int n[]);

int main()
{
	int n[10],i;
	printf("Enter 10 No. \n");
	for(i=0;i<10;i++)
	
		scanf("%d",&n[i]);
	display (n);
	printf("\n The Sum of 10 No. = %d",sum(n));
	
	return 0;
}

int sum(int n[])
{
	int i,sum = 0;
	
	for(i=0;i<10;i++)
	{
		sum+=n[i];
		
	}
	return sum;
	
}
void display (int n[])
{
	
int i;
printf("Your 10 No. is \n ");

for (i=0;i<10;i++)
{
	printf("%d  ",n[i]);
	
}
}
