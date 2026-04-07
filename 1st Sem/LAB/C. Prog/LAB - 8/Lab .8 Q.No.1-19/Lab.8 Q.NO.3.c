// Lab.8 Q.No.3 :- WAP  to create 2 str. where str . has name, amd amrkd and anmes and salary and take two information for student and three infotmation for emplooyee ..


#include<stdio.h>

struct student


{
	int roll;
	char name[50];
	float marks;
	
}s[2];

struct employee
{
	float salary;
	char name[50];
	
}e[3];

int main()
{
	
int i;
for(i=0;i<2;i++)

{
	
	printf("For %d Student :\n",i+1);
	printf("Student Name : ");
    scanf("%s",&s[i].name);
	//gets(s[i].name);
	
	printf("Student Roll No. :");
	scanf("%d",&s[i].roll);
	
	printf("Student Marks : ");
	scanf("%f",&s[i].marks);
	
}

printf("\n");


for(i=0;i<3;i++)


{
	printf("For %d Empployee \n",i+1);
	printf("Employee Name :");
	scanf("%s",&e[i].name);
//gets(e[i].name);
	
	printf("Employee Salary : ");
	scanf("%d",&e[i].salary);
}
printf("\n");


// printf("Result \n");
		printf("Student Information \n");
	printf("Name\t\tRoll NO.\t\tMarks\n");
for(i=0;i<2;i++)
{
	
	
printf("%s\t\t%d\t\t%f\n",s[i].name,s[i].roll,s[i].marks);

//printf("\n");
}

		printf("Employee Information\n");
	printf("Name\t\t\tsalary\n");
for(i=0;i<3;i++)
{
	
		
	printf("%s\t\t\t%f\n",e[i].name,e[i].salary);
	
//	printf("\n");
}







return 0;
}






	

