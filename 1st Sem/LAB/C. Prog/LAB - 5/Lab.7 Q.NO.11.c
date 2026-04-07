/// Lab.7 Q.No.11 :- WAP  to demonstrate the use of strcopy() function....

#include<stdio.h>
#include<string.h>

int main()
{
	char studentname[15];
	strcpy(studentname,"Amit kr.");
	
	printf("\n Student Name =%s",studentname);
	
	return 0;
}