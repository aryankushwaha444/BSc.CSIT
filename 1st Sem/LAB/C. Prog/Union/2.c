// Union:-

#include<stdio.h>

union student 
{
	int Roll;
	char name[100];
	float mark;
	
};

int main()
{
	
	union student s;
	
	printf("Enter Name = ");
	gets(s.name);
	
	printf("Enter ROll No. ");
	scanf("%d",&s.Roll);
	
	printf("Enter Marks: ");
	scanf("%f",&s.mark);
	
	printf("\nName = %s\n",s.name);
	printf("Roll No. %d\n",s.Roll);
	printf("Marks = %.2f",s.mark);
	
return 0;
}