/// Lab.9 Q.No.2 :-  Create a File Orchid.txt , take input string from user and store in file...

#include<stdio.h>

int main()
{
	FILE  *fh;
	char a[500];
	
	fh=fopen("A:Orchid.txt","w");
	
	printf("Enetr Comment");
	scanf("%s",&a);
	
	if(fh!=NULL)
	printf(" File Created");
	
	else
	printf("File Not Created");
	
	fputs(a,fh);
	
	fclose(fh);
		
	return 0;
}