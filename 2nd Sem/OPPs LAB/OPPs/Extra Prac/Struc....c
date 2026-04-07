#include<stdio.h>

struct employee

{
	int sn;
	char name[50];
}e[2];

struct personn
{
	int sn;
	char name[50];
}p[2];

int main()
{
	int i;
	
	for(i=0;i<2;i++)
	{
		printf("Name = ");
		scanf("%s",&e[i].name);
		printf("S.No. ");
		scanf("%d",&e[i].sn);
	}
		for(i=0;i<2;i++)
	{
		printf("Name = ");
		scanf("%s",&p[i].name);
		printf("S.No. ");
		scanf("%d",&p[i].sn);
	}
	
	for(i=0;i<2;i++)
	{
		printf("\nS.No. %d\n",e[i].sn);
		printf("Name = %s\n",e[i].name);
	}
	
		printf("\t\t");
	for(i=0;i<2;i++)
	{
		printf("\nS.No. %d\n",p[i].sn);
		printf("Name = %s",p[i].name);
	}
	
	return 0;
}