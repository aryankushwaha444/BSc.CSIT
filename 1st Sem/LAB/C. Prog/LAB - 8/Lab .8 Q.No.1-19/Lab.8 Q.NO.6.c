// Lab.8 Q.NO.6 :- Create a structure person with following  data field of '10' person.



#include<stdio.h>

struct person
{
	int sn;
	char name[50];
	
	struct birth
	{
		int date;
		int month;
		int year;
		
	}b;
	
	float salary;
	
 }p[10];
 
 int main()
 {
 	int i;
 	printf("Enter Person Information \n");
 	
 	for(i=0;i<10;i++)
 	{
 
 		
 		printf("Entet %d Name : ",i+1);
 		scanf("%s",&p[i].name);
 	//	gets(&p[i].name);
 		
 		printf("Enter Day :");
 		scanf("%d",&p[i].b.date);
 		printf("Enter Month : ");
 		scanf("%d",&p[i].b.month);
 		printf("Enter Year : ");
 		scanf("%d",&p[i].b.year);
 		
 		printf("Enter Salary : ");
 		scanf("%f",&p[i].salary);
	 }
	 printf("\n");
	 
	// printf("Persion Information \n\n");


printf("SN\tName\t\t  Birth\t\t\tSalary\n");

printf("\t\t\tDay Month Year\n");
	for(i=0;i<10;i++)
	
	{
		printf("%d\t%s",i+1,p[i].name);
		printf("\t\t %d",p[i].b.date);
		printf("  %d",p[i].b.month);
		printf("   %d",p[i].b.year);
		printf("\t\t%f",p[i].salary);

		printf("\n");

}
	 
	 return  0;
	 
 }