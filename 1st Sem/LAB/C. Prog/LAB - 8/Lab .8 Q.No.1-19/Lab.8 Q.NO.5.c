// Lab.8 Q.No. 5 :-  Create a struvture employee with data field name and salary of 'n' employee and find average of salary...

#include<stdio.h>
 struct employee
 {
 	float salary;
 	char name[50];
 }e;
 
 int main()
 {
 	struct employee e[500];
 	int i,n;
 	float avg=0;
 	
 	printf("Enter No. of Employee ");
 	scanf("%d",&n);
 	
 	printf("\n Employee Information \n");
 	
 	for(i=0;i<n;i++)
 	{
 		printf("Enter %d Employee\n",i+1);
 		printf("Enter Employee Name : ");
 		scanf("%s",&e[i].name);
 		
 		printf("Enter Salary : ");
 		scanf("%f",&e[i].salary);
	 }
	 
	 printf("\n Name\t\t\tSalary\n");
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("%s\t\t\t%f\n",e[i].name,e[i].salary);
	 	avg=avg+e[i].salary;
	 }
	/* for(i=0;i<n;i++)
	 {
	 }
	*/
	 avg= avg/n;
	 printf("Average Salary = %f",avg);
	 
	 
	 return 0;
 }
