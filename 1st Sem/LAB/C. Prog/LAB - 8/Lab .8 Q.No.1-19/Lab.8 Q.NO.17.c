/* :- Create  a structure Student with data field : Name , Roll No. , Marks And Remarks..
Display the Information of '5' Student on Screen    */ 

#include<stdio.h>

struct student
{
	char name[100];
	int roll_no;
	float marks;
	char remarks[50];
	
	
}s[5];

int main()
{
	int i;
	for(i=0;i<2;i++)
	{ 
		printf("For %d Student\n",i+1);
  printf("Name= ");
  scanf("%s",&s[i].name);
   
  printf("Roll No. = ");
  scanf("%d",&s[i].roll_no);
  
  printf("Marks = ");
  scanf("%f",&s[i].marks);
  
  printf("Remarks = ");
  scanf("%s",&s[i].remarks);
  
  printf("\n\n");
  	
	}
	
	printf("\nS.No.\tName\tRoll No.\tMarks\tRemarks\n");
	for(i=0;i<2;i++)
	{
		printf("%d\t%s\t%d\t\t%.2f\t%s\n",i+1,s[i].name,s[i].roll_no,s[i].marks,s[i].remarks);
	}
	
	return 0;
	
}