//// Lab.7 Q.No.4 :-  WAP 

//#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	int *p[5];
	
	int i;
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
		printf("\n p[%d]=%d",i,*p[i]);
	}
	
	
	
	
	
	return 0;
}