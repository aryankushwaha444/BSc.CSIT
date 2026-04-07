/* Q.5 :- Find the element  ( search the element ) using Array */

#include<stdio.h>

int main()
{
	
	int element[10]={1,5,4,8,5,9,8,9,15,24};
	int i,key,flag=0;
	
	printf("Enter Searching No. ");
	scanf("%d",&key);
	
	for(i=0;i<10;i++)
	{
	
	
			if(key==element[i])
			{
				flag++;
			}
		}
		
		
		if(flag>=1)
		{
			printf("Founnd Element");
				}		
				
				else
				printf("Not Found Element");
	    	
		
	
	
	
	
	return 0;
}
