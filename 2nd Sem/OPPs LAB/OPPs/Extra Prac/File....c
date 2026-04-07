// Create Structure Student with Data Field : Roll No. , Name  & Marks . Take 5 Information of Student and Store in OIC.txt File...

#include<stdio.h>

struct student
{
	int sn;
	int roll;
	char name[50];
	float marks;
}s[5];

int main()
{
	int i;
	FILE *fh;
	fh=fopen("A:Orchid11.txt","w");
	
	for(i=0;i<5;i++)
	{
		printf("Enter S.No. = ");
		scanf("%d",&s[i].sn);
		
		printf("Enter Name = ");
		scanf("%s",&s[i].name);
		
		printf("Enter ROll No. ");
		scanf("%d",&s[i].roll);
		
		printf("Enter Marks = ");
		scanf("%f",&s[i].marks);
		printf("\n");
	}
	
	if(fh!=NULL)
	{
		printf("File Created");
	}
	else
	{
		printf("File Not Craeted");
	}
	
	fprintf(fh,"S.No.\tROll No.\tName\tMarks\n");
		for(i=0;i<5;i++)
	{
		fprintf(fh,"%d\t%d\t\t%s\t%.2f\n",s[i].sn,s[i].roll,s[i].name,s[i].marks);
	
	}
	
	return 0;
}