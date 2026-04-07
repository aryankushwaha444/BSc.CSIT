// Q.No.11 :- Passing to Whole Structure to Function...

#include<stdio.h>

struct student
{
	char name[50];
	int roll_no;
	int marks;
	
};

void print_struct (struct student stu);

int main()
{
	struct student stu = {"Aryan",1,78};
	print_struct(stu);
	return 0;
}

void print_struct (struct student stu)
{
	printf("Name = %s\n",stu.name);
	printf("Roll No  = %d\n",stu.roll_no);
	
	printf("Marks = %d\n",stu.marks);
}