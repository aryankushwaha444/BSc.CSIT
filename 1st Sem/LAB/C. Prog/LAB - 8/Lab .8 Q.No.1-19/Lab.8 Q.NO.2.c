// Lab.8 Q.. 2 :-  Create a structure student , where sstudent hs roll, aname and Marks . Take 2 input of user and displaty screen.

#include<stdio.h>
struct student

{
	int roll;
	char name[50];
	float marks;
	
};

int main()
{
	struct student s1,s2;
	printf("For 1st Student\n");
	printf("Enter the roll: ");
	scanf("%d",&s1.roll);
	
	printf("Enter Name: ");
	scanf("%s",&s1.name);
	
	printf("Enter Marks :\n ");
	scanf("%f",&s1.marks);
	

		printf("For 2nd Student\n");
		printf("Enter the roll: ");
	scanf("%d",&s2.roll);

	printf("Enter Name: ");
	scanf("%s",&s2.name);
	
	printf("Enter Marks : ");
	scanf("%f",&s2.marks);
	printf("1st Student \n");
		printf("\n \nYour Roll = %d \n Name = %s  \n Marks = %f",s1.roll,s1.name,s1.marks);
		printf("\n2nd Student \n");
		printf("\n \nYour Roll = %d \n Name = %s  \n Marks = %f",s2.roll,s2.name,s2.marks);
	
	return 0;
	
}