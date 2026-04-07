// 3 *3 Matrix....

#include<stdio.h>

int main()
{
	int i,j,a[30][30],sum=0;
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nYour Matrix 3*3 is \n\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d\t ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
		for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
		sum=sum+a[i][j];
		}
	
	}
	printf("\nSum = %d",sum);
	
	
	return 0;
}
