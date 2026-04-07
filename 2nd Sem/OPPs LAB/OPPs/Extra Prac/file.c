#include<stdio.h>

int main()
{
	FILE *fh;
	fh=fopen("Love2.txt","w");
	
	if(fh!=NULL)
	printf("File Created");
	
	else
	printf("File Not Created");
	
	fputs("Fuck You My Babeee",fh);
	fclose(fh);
	
	
	
	
	return 0;
}