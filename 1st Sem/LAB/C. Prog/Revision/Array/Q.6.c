// Q.2 :- Find the transpose value of 3 * 2 matrix..

#include<stdio.h>

int main()
{
	int i,j;
	int a[3][2];
//	int tran[2][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Your Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
/*	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			tran[j][i]=a[i][j];
		}
	}
*/	printf("\nTranspose Matrix \n");
	for(j=0;j<2;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	
	
	
	return 0;
}