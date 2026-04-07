// WAP to use the File to read the using File handling Keeping.... 

#include<stdio.h>

int main()
{
	FILE *fh;
	fh=fopen("A:Orchid.txt","r");
	int n;
	if(fh!=NULL)
	{
		printf("File Opened\n");
	}
	else
	{
		printf("ERROR! Can't Open\n");
	}
	
	fscanf(fh,"%d",&n);
	printf("%d",n);
	fclose(fh);
	
	
	return 0;
}