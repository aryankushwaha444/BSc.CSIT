#include<stdio.h>
struct personal_record
{
char name[20];
struct 
{
int day;
int month;
int year;
}birthday;
float salary;
}person[5];
int main()
{
 int i;
 for(i=0;i<5;i++)
{ 
 printf(“Enter info of %d person record\n”,i+1);
 printf(“Enter Name:”);
 scanf(“%s”,&person[i].name);
 printf(“Enter birthday:”);
 scanf(“%d”,&person[i].dirthday.day);
 printf(“Enter birthmonth:”);
 scanf(“%d”,&person[i].birthday.month);
 printf(“Enter year:”);
 scanf(“%d”,&person[i].birthday.year);
 printf(“Enter salary:”);
 scanf(“%f”,&person[i].salary); 
}
 printf(“Name\t\tday\t\tmonth\t\tyear\t\tsalary\n”); 
 for(i=0;i<5;i++)
{
 printf(“%s\t\t%d\t\t%d\t\t%d\t\t%f\n”,person[i].name,person[i].birthday.day, 
person[i].birthday.month,person[i].birthday.year, person[i].salary);
}
return 0;
}
//Pointer to array of structur