/// Lab7. Q.No.7 :-  WAP that lowser case letter to upper case and upper case to lowser case by passing of pointer of function....

#include<stdio.h>

void conversion(char *ch);

int main()
{
	char ch;
	printf("Enter Character : ");
	scanf("%c",&ch);
	
	conversion(&ch);
	printf("After Conversion : %c",ch);
	return 0;
	
}
void conversion(char *ch)
{
	if(*ch>=97&&*ch<=122)
		*ch=*ch-32;
	
	else /*if(*ch>=65&&*ch<=90) */
	*ch=*ch+32;
	
	
}
