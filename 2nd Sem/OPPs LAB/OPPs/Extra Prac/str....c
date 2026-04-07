#include<stdio.h>

struct employee
{
	int sn;
	char name[50];

}e[4];

struct person
{
	int sn;
	char name[50];

}s[5];

int main()

{
	int i;
	printf("For Employee\n");
	for(i=0;i<2;i++)
	{

		printf("S.No. ");
		scanf("%d",&e[i].sn);

		printf("Name = ");
		scanf("%s",&e[i].name);
			printf("\n");

	}
	printf("For Person\n");
	for(i=0;i<2;i++)
	{
		printf("S.No. ");
		scanf("%d",&s[i].sn);

		printf("Name = ");
		scanf("%s",&s[i].name);
		printf("\n");
	}
	printf("Result Employee\n");
		for(i=0;i<4;i++)
	{
		printf("S.No. = %d \n",e[i].sn);

		printf("Name = %s\n",e[i].name);
			printf("\n");

	}
	printf("Result Person\n");
		for(i=0;i<5;i++)
	{
		printf("S.No. = %d\n ",s[i].sn);

		printf("Name = %s\n",s[i].name);
		printf("\n");
	}

	return 0;

}
