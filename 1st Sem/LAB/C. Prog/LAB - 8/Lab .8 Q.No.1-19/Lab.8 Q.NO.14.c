// Q.No.14 :- Passing Structure pointer to Function...

#include<stdio.h>

struct employee
{
	char name[50];
	int age;
	char doj[50];
	char designation[50];
	
};

void print_struct (struct employee *ptr);

int main()
{
	struct employee dev = {"Nabin",25,"25/02/2015","Develpoer"};
	print_struct (&dev);
	
	return 0;
}

void print_struct (struct employee *ptr)
{
	printf("Name = %s\n",ptr->name);
	printf("Age = %d\n",ptr->age);
	printf("Date of Joining = %s\n",ptr->doj);
	printf("Designation = %s",ptr->designation);
}