/// Lab.8 Q.No. 9 :-  Pointer to array of structure..

#include<stdio.h>

int main()
{

struct student
{
	char id[15];
	char firstname[50];
	char lastname[50];
	float points;
	
};

struct student std[3],*ptr;
int i;
ptr=std;

for(i=0;i<3;i++)
{
	printf("Enter detail of student %d\n",(i+1));
	printf("Enter ID: ");
	scanf("%s",&ptr->id);
	printf("Enter first name : ");
	scanf("%s",&ptr->firstname);
	printf("Enter last name : ");
	scanf("%s",&ptr->lastname);
	printf("Enter Points : ");
	scanf("%f",&ptr->points);
	
	ptr++;
}

ptr = std;

for(i=0;i<3;i++)
{
	printf("\n Results : \n");
	printf("ID : %s\n",ptr->id);
	printf("First Name : %s\n",ptr->firstname);
	printf("Last Name : %s\n",ptr->lastname);
	printf("Points : %f",ptr->points);
	printf("\n");
	
ptr++;
}

return 0;
}