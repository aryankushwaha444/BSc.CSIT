// Q.2 :- WAP to add two matrix A2*3 and B2*3 and Show 2*3...

#include<stdio.h>

int main()
{
	int i,j;
	int a[10][10];
	int b[10][10];
	int sum[10][10];
	
	printf("Enter 2*3  1st Matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("Enter 2*3  2nd Matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n Your 2*3 1st Matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
		printf("\n Your 2*3 2nd Matrix \n");
		
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
	printf("Sum of Two 2*3 Matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
	
		}
		printf("\n");
	}

	
	return 0;
}