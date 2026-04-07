//  WAP to read Whole paragraph from ( file ) diretory.....

#include<stdio.h>

int main()
{
	FILE *fh;
	fh=fopen("A:ORCHID1.txt","r");
	char ch;
	if(fh!=NULL)
	{
		printf("File Red\n");
	}
	else
	{
		printf("ERROR !! Can't Read..\n");
	}
	
	do
	{
		ch=fgetc(fh);
		printf("%c",ch);
	}
	while(ch!=EOF);
	
	fclose(fh);	
	
	return 0;
}