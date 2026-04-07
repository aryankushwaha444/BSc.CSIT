/* Q.No.1 :- Create structure employee with data field ID,Name and Salary of 5 employee and Create structure Student with data
 field Roll , Name and mark of 6 Students and Display all record */
#include<stdio.h>

struct employee
{
	int id;
	char name[500];
	float salary;
	
}e[5];

struct student
{
	int roll;
	char name[50];
	float marks;
}s[6];

int main()
{
	int i;
	printf("Enter Employee Details : \n");
	
	for(i=0;i<5;i++)
	{
		printf("for %d Employee \n",i+1);
		printf("Enter ID : ");
		scanf("%d",&e[i].id);
		printf("Enter Name : ");
		scanf("%s",&e[i].name);
		printf("Enter Salary : ");
		scanf("%f",&e[i].salary);
	}
	printf("\n");
	
	printf("Enter Student Details : \n");
	
	for(i=0;i<6;i++)
	{
		printf("For %d Students \n",i+1);
		printf("Enter Roll No. ");
		scanf("%d",&s[i].roll);
		printf("Enter Name : ");
		scanf("%s",&s[i].name);
		printf("Enter Marks : ");
		scanf("%f",&s[i].marks);
	}
	printf("\n");
	
	printf(" Employee Results \n");
	
	printf("S.No.\tID\tName\tSalary\n");
	for(i=0;i<5;i++)
	{
	printf("%d\t%d\t%s\t%.2f\n",i+1,e[i].id,e[i].name,e[i].salary);
	printf("\n");
	}
	
	printf("\nStudents Results \n");
	 printf("S.No.\tRoll NO.\tName\tMarks\n");
	for(i=0;i<6;i++)
	{
	 printf("%d\t%d\t\t%s\t%.2f",i+1,s[i].roll,s[i].name,s[i].marks);
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}