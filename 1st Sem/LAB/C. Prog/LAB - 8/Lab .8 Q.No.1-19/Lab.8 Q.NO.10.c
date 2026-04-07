// Q.No.10 :- Passing the individual member to function...

#include<stdio.h>

struct student
{
	char name[50];
	int roll_no;
	int marks;
};

void print_struct (char name[],int roll_no,int marks);

int main()
{
	struct student stu = {"Aryan",1,78};
	print_struct (stu.name,stu.roll_no,stu.marks);
		
	return 0;
}

void print_struct (char name[],int roll_no,int marks)
{
	printf("Name = %s\n",name);
	printf("Roll No. = %d\n",roll_no);
	printf("Marks = %d\n",marks);
	
}