#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *p,*pp;
	char c[100];
	p=fopen("A:OIC.txt","r");
	//clrscr();
	if(p==NULL)
	{
		printf("File Can't read");
		//exit();
	}
	
	pp=fopen("A:orchid.txt","W");
	
	if(pp==NULL)
	{
		printf("File Can't Open");
		//exit();
	}
	
	while(fscanf(p,"%s",&c)!=EOF)
	{
		if((strcmp(c,"BIM")!=0&&strcmp(c,"BCA")!=0&&strcmp(c,"DANG")!=0))
		{
			fprintf(pp,"%s",c);
		}
	}
	
	fclose(p);
	fclose(pp);
	
	getch();
	
	
}
