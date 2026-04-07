/// Q.1 :- WAP to take 3 * 2 matrix and display..

#include<stdio.h>

int main()
{
	int i,j;
	int a[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{		
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);	
		}
	}
printf("Your Matrix \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}
