/// WAP to insert 10 No. , find the sum of onlyinclude dividible by 3 No.

#include<stdio.h>

int main()
{
	int a;
	int i,sum=0;
	
	printf("Enter 10 No. \n");
	for(i=0;i<10;i++)
	{
		printf("%d No. : ",i+1);
		scanf("%d",&a[i]);
	}
	
		for(i=0;i<10;i++)
		{
	    while(a%3==0)
		 sum+=a;	
		}
	
	
	printf("Sum = %d",sum);
	
	
	return 0;
}
