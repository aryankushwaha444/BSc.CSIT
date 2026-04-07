/* Q.1 :-  WAP to find total sum of 10 user enter number using array..
*/
#include<stdio.h>

int main()
{
	int i;
	int sum=0;
	int a[10];
	
	printf("Enter 10 No. \n");
	for(i=0;i<10;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("\nSum = %d",sum);
	
	
	
	
	
	
	return 0;
}