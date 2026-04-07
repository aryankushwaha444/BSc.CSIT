#include<stdio.h>

int main()
{
	int i,j,temp,a[5];
	for(i=0;i<5;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n Ascending \n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nDescending\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	
	
	return 0;
}