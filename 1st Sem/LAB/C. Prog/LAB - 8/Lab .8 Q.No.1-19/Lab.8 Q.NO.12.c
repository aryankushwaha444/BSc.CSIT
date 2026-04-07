/* Q.No.12 :- Create Structure Employee with data field : S.No. , Name , Salary and Remarks..
Display the information of employee using function.. (individualy). */

#include<stdio.h>

struct  employee
{
	int sn;
	char name[50];
	float salary;
	char remarks[50];
};

void display (int sn , char name[], float salary,char remarks[]);

int main()
{
	struct employee e = {1,"Bipin",30000 , "Good" };
	display (e.sn,e.name,e.salary,e.remarks);
	return 0;

}

void display (int sn , char name[], float salary,char remarks[])
{
	printf("S.No. = %d\n",sn);
	printf("Name = %s\n",name);
	printf("Salary = %.2f\n",salary);
	printf("Remarks = %s",remarks);
}