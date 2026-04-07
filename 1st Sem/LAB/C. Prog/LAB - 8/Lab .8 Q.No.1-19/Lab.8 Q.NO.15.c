/* Q.No./15 :- Create Structure Student With Data Field : Name , Roll No. , Marks  And Remarks. 
Dissplay the Information of Student Using Function to Pointer.. */

#include<stdio.h>

struct student
{
	int sn;
	char name[50];
	int roll_no;
	float marks;
	char remarks[50];
};

void display(struct student *ptr );

int main()
{
	struct student stu = {1,"Bipin",5,73,"Good"};
	display(&stu);
	return 0;
}

void display(struct student *ptr )
{
	printf("S.No. = %d\n",ptr->sn);
	printf("Name = %s\n",ptr->name);
	printf("ROll No. = %d\n",ptr->roll_no);
	printf("Marks = %.2f\n",ptr->marks);
	printf("Remarks = %s\n",ptr->remarks);
	
}