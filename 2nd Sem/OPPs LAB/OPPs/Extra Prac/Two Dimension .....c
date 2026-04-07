/// Two Dimension

#include<stdio.h>


void display(int n[2][2]);

int main()
{
	int n[2][2];
	int i,j;
	
	printf("Enter 4 No.\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	display(n);
	return 0;
}

void display(int n[2][2])
{
	int i,j;
	printf("Displaying No. \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\n",n[i][j]);
		}
	}
}