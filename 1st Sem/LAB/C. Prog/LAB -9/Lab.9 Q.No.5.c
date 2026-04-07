/// WAP to Check existing file , if there is file then update the flowing information : Roll NO. , Name And MArks of 5 Student...

#include<stdio.h>

int main()
{
	FILE *fh;
	fh=fopen("A:ORCHID1.txt","a");
	
	int i,roll;
	char name[50];
	float mark;
	
for(i=0;i<1;i++)
{
	printf("Enter Roll No. Name  and Marks : ");
	scanf("%d%s%f",&roll,&name,&mark);
	fprintf(fh,"Roll = %d\nName = %s\n Marks = %.2f\n",roll,name,mark);
}
	
	if(fh!=NULL)
	{
		printf("File Updated");
	}
	else
	{
	printf("File Not Updated");
}

	fclose(fh);
	
	return 0;
}