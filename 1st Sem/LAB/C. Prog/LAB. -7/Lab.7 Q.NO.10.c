//// Lab.7 Q.No.10 :-  In the folloing example we are using while loop to print the characters of the string variable str... by pointer...

#include<stdio.h>

int main()
{
	char str[6]="Hello";
	char *ptr=str;
	while(*ptr !=0)
	{
		printf("%c\n",*ptr);
		ptr++;
		
	}
	
	return 0;
}
