/// Lab.7 Q.NO.16 :-  WAP to find the length of user enter string ....

#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	char name[5200];
	printf("Enter Your Name :");
	scanf("%[^\n]",&name);
	
	n=strlen(name);
	printf("\n Length of Your Name : %d",n);
	
	
	
	
	return 0;
}