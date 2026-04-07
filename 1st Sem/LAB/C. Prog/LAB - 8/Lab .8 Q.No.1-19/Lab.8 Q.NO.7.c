/// Lab.8 Q.No. 7 :-  Example of Structure pointer...

#include<stdio.h>



int main()
{

struct point
{
	int a;
	float b;
	
};
	struct point p1 , *p2;

//	struct point *p2;

	p1.a=3;
	p1.b=6.3;
	
	
	p2=&p1;
	
	printf("BIM Second Semester \n\n");
	printf("First Value is = %d\n",p2->a);   ///   p2.a 
	printf("Second value is = %0.1f",p2->b);
	
	
	return 0;
}