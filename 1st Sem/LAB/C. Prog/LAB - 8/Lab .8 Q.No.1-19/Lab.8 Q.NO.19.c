/* Create Structure Employee with Data field : SN , And Name.\
       Create Structure person with data field : 
Take '4' input from Emloyee and '5' input from Person..*/

#include<stdio.h>

struct employee
{
	int sn;
	char name[50];
	
}e[4];

struct person
{
	int sn;
	char name[50];
	
}p[5];

int main()

{
	int i;
	printf("For Employee\n");
	for(i=0;i<4;i++)
	   {

		printf("S.No. ");
		scanf("%d",&e[i].sn);
		
		printf("Name = ");
		scanf("%s",&e[i].name);
		//	printf("\n");
		
		
	     }
	printf("For Person\n");
	for(i=0;i<5;i++)
     	{
		printf("S.No. ");
		scanf("%d",&p[i].sn);
		
		printf("Name = ");
		scanf("%s",&p[i].name);
		///printf("\n");
     	}
printf("\n\nResult For Employee\n");
	printf("\nS.No.\tName\n");
		for(i=0;i<4;i++)
    	{
		printf("%d \t%s\n",e[i].sn,e[i].name);

    	}
	
	printf("\n\n");
		printf("Result For Person\n");
	
	printf("S.No.\tName\n");
		for(i=0;i<4;i++)
    	{
		printf("%d \t%s\n",p[i].sn,p[i].name);

    	}

	
	return 0;
	
   }
