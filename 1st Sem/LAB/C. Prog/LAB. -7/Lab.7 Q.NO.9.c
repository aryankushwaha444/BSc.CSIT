//// Lab.7 Q.No.9 :- WAP to illustrate the example of decrement pointer...

#include<stdio.h>

int main()
{
	int num=50;
	int *p;
	
	p=&num;      // pointer to int...
	printf("Address of p : %u\n",p);
	
	p=p-1;   ///// Stores the address of num
	
	printf("After Decrement : \n Address of p is %u",p);
	
	return 0;
	
 } 