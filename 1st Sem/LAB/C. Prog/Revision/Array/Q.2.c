/* Q.2 :- Find the largest and small number using array 
*/

#include<stdio.h>

int main()
{
	int i;
	int a[3];
	int small,large;
	printf("Enter Three Different No. \n");
	
	for (i=0;i<3;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	small=a[0];
	large=a[0];
	for(i=0;i<3;i++)
	{
		if(small>a[i])
		small=a[i];
		else if (large<a[i])
		large=a[i];
	}
	
	printf("\nSmall = %d\n",small);
	printf("Large = %d",large);
	
	
	
	
	return 0;
}