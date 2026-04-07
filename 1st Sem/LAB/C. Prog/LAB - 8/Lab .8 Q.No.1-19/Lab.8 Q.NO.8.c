/// Lab.8 Q.No. 8 :-  Structure and Pointer..


#include<stdio.h>

struct person
{
	int age;
	float weight;
	
};

int main()
{
	struct person person1,*personPtr;
	personPtr=person1;
	
	printf("Enetr Age :  ");
	scanf("%d",&personPtr->age);
	
	printf("Enter Weight :  ");
	scanf("%f",&personPtr->weight);
	
	printf("Display  \n");
	printf("Age : %d \nWeight : %0.2f",personPtr->age,personPtr->weight);
	
	
	return 0;
}