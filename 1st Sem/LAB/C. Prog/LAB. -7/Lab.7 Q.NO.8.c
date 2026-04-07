// Lab.7 Q.No.8 :-  WAP illustrate the example of increment pointer...

#include<stdio.h>

int main()
{
	int number=50;
	int *p;
	p=number;
	printf("Address of p Variable is %u \n",&p);
	
	p=p+1;
	printf("After increment :\n Address of p variable is %u \n",&p);
	
	// in oour case , p will get incremented by 4 bytes
	return 0;
}
