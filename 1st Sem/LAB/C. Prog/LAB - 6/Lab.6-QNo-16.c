/// Lab. 6 Q.No.16 :-  WAP to illustrate  using call by Value...

#include<stdio.h>

int calc(int x);

int main()
{
	
	int x=10;
	x=calc(x);
	
	printf("Value Of x is %d",x);
	return 0;
}

int calc(int x)
{
	x=x+10;
	return x;
}