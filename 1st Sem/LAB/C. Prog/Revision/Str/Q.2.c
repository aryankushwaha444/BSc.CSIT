/* Q.2 :- Create a structure person with data field : S.No. ,Name , Address of '3' person , using array 
of pointer to display all information */

#include<stdio.h>

	struct person
	{
		char name[50];
		char adds[100];
	}p[3];
	
	struct person p[3], *pPtr;
	
int main()
{
 int i;
 pPtr=p;
 for(i=0;i<3;i++)
 {
 	printf("For %d Person\n",i+1);
 	printf("Enter Name : ");
 	scanf("%s",&pPtr->name);
 	printf("Enter Address : ");
 	scanf("%s",&pPtr->adds);
 	pPtr++;
 }
 pPtr=p;
 printf("\n");
 
 printf("S.No.\tName\tAddress\n");
 for(i=0;i<3;i++)
 {

 
 	printf("%d \t%s \t%s\n",i+1,pPtr->name,pPtr->adds);
pPtr++;
 }
 
	return 0;
}