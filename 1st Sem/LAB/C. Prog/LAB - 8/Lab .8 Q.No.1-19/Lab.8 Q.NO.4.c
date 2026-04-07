/// Lab.8 Q.No.4 :- Craete a structure employee with data filed name and Salary of 5 Employee

#include<stdio.h>

struct employee
{
	float salary;
	char name[50];
	
}e[5];

int main()
{
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("For %d Employee \n",i+1);
		printf("Enter Name : ");
		scanf("%s",&e[i].name);
		
		printf("Enter Salary ");
		scanf("%f",&e[i].salary);
	}
	printf("Employee Information \n");
	printf("\n Name \t\t\t Salary\n");
	
	for(i=0;i<5;i++)
	{
		printf("%s\t\t\t%f\n",e[i].name,e[i].salary);
	}
	
	
	
	
	
	
	
	return 0;
}
