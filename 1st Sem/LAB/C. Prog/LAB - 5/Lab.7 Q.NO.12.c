/// Lab.7 Q.No.12 :- WAP  to demonstrate the use of strcopy() function....

#include<stdio.h>
#include<string.h>

int main()
{
	char name[10];
	char name1[10];
	
	printf("Enter Name ");
	scanf("%[^\n]",&name);
	strcpy(name1,name);
	
	printf("Your Name : %s",name1);
	
	
	
	return 0;
}