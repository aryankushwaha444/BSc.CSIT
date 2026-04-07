#include<stdio.h>

int main()
{
	int i,b,count=0;
	int a[]={1,2,3,4,5,6,7,8,9};
	
	printf("Enter No. to be Search ");
	scanf("%d",&b);
	
	for(i=0;i<9;i++)
	{
	if(a[i]%b==0)
	{
		count++;
	
		}	

	}
	if(count==1)
	{
		printf("Avaailable");
	}
	else
	printf("Not Available");
	
	return 0;
}
