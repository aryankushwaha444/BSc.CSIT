/* Q.No.12 :- Create Structure Employee with data field : S.No. , Name , Salary and Remarks..
Display the information of employee using function.. (to whole ). */


#include<stdio.h>

struct employee
{
	int sn;
	char name[50];
	float salary;
	char remarks[50];
};

void display (struct employee e);

int main()
{
	struct employee e = { 1,"Bipin",30000,"Good"};
	display (e);
	return 0;
	
}

void display (struct employee e)
{
	printf("S.NO. = %d\n",e.sn);
	printf("Name = %s\n",e.name);
	printf("Salary = %.2f\n",e.salary);
	printf("remarks = %s",e.remarks);
	}	
