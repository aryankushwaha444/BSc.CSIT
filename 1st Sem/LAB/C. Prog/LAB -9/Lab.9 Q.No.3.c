// Create a file Orchid1.txt . Take 5 Name and Roll No. of Student , Store in File....

#include<stdio.h>

int main()
{
	int roll,i;
	char name[100];
	
	FILE *fh;
	
	fh=fopen("A:Orchid1.txt","w");
	
	for(i=0;i<2;i++)
	{
		printf("Enter Name = ");
		scanf("%s",&name);
		printf("Enter Roll No. ");
		scanf("%d",&roll);
	}
	
	if(fh!=NULL)
	{
		printf("File Created");
	}
	
	else
	{
		printf("File Not Created");
	}
	
	for(i=0;i<2;i++)
	{
		fprintf(fh,"Name = %s\nRoll No. = %d\n",name,roll);
	}
	
	
	
	return 0;
}