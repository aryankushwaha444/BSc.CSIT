// Union:-

#include<stdio.h>

union student 
{
	float roll;
	char name[100];
	float mark;
	
};

int main()
{
	
	union student s;
	
	printf("Enter ROll No. ");
	scanf("%f",&s.roll);
	
	printf("Enter Marks: ");
	scanf("%f",&s.mark);
	
	printf("Enter Name = ");
	scanf("%s",&s.name);
	printf("\nName = %s\n",s.name);
	printf("Roll No. = %.2f\n",s.roll);
	printf("marks = %.2f\n",s.mark);
	
	return 0;
}