/* Create a file OIC2.txt , create Structure employee with data field : Name and Salary . 
find a Average of 10 Employee and Store on OIC2.txt file . */

#include<stdio.h>

struct employee
{
	char name[50];
	float salary;
}e[10];

int main()
{
	int i;
	FILE *fh;
	int sum=0;
	int avg;
	fh=fopen("A:OIC2.txt","w");
	
	for(i=0;i<10;i++)
	{
		printf("For %d Employee\n",i+1);
		printf("Name = ");
		scanf("%s",&e[i].name);
		
		printf("Salary = ");
		scanf("%f",&e[i].salary);
		
	}
	for(i=0;i<10;i++)
	{
		sum=sum+e[i].salary;
		
	}
	avg=sum/10;
	
	
	fprintf(fh,"\nAverage Salary = %d",avg);
	fclose(fh);
	
	return 0;
	
	
}