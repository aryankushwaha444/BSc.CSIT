/// Lab.8 Q.No.1 :-  WAP to create a structure student , wheere student has roll , name, and Marks . Take input from user and DisplaY or screen ..

#include<stdio.h>

struct student

{
	int roll;
	char name[50];
	float marks;
	
};

int main()
{
	struct student s;
	
	printf("Enter the roll: ");
	scanf("%d",&s.roll);
	
	printf("Enter Name: ");
	scanf("%s",&s.name);
	
	printf("Enter Marks : ");
	scanf("%f",&s.marks);
	
	printf("Your Roll = %d \n Name = %s  \n Marks = %f",s.roll,s.name,s.marks);
	
	return 0;
	
}