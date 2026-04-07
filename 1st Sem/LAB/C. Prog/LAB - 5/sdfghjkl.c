#include<stdio.h>
#include<string.h>

int main()
{
	char n[8519];
	char name[8519];
	
	printf("Enter Your Name =  ");
	scanf("%[^\n]",&n);
	
	strcpy(name,n);
	printf(" Name =%s",name);
	
	return 0;
}