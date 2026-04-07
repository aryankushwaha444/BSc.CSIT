//   Lab.7 Q.No. 14 :-  WAP to concat first name and last name which are enter by user and then display full name;

#include<stdio.h>
#include<string.h>

int main()
{
	char Name[500];
	char Last[200];
	printf("Enter 1st Name : ");
//	gets(Name);
	scanf("%[^\n]",&Name);
	
	printf("Enter Last Name :\n ");
//	gets(Last);
	scanf("%s",&Last);
	strcat(Name,Last);
	printf("Your Full Name : %s",Name);
	
	
	
	
	
	
	
	return 0;
}