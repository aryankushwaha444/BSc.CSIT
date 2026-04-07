#include<stdio.h>
#include<stdlib.h>

int GCD(int , int);
int Fact(int);
int Fab(int);
void TOH(int , char,char,char);

int main()
{
	int choice , n,n1,n2;
	do
	{
        printf("Perform operations on Recursion :");
		printf("\n1.GCD\n2.Factorial\n3.Fibonacci \n4.Tower of Hanoi\n5.Exit\n");
		printf("Enter Your Choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter Diviser and Divident NUmber : ");
				scanf("%d%d",&n1,&n2);
				printf("Your GCD is %d\n",GCD(n1,n2));
				break;
				
			case 2:
				 printf("Enter Factorial Number : ");
				 scanf("%d",&n);
				 printf("Your Factorial is %d\n",Fact(n));
				 break;
				 
			case 3:
				{
                 printf("Enter the number of terms : ");
                 scanf("%d", &n);
                 printf("Fibonacci sequence:\n");
                 for (int i = 0; i < n; i++)
				  {
                 printf("%d ", Fab(i));
                  }
                  printf("\n");
			     }
			     break;
				
			case 4:
				{
				printf("Enter Number of Disk : ");
				scanf("%d",&n);
				TOH(n,'S','A','D');
				break;
			}
				
			case 5:
				{	
			    printf("HAVE A GOOD DAY !!!!!\n");
				exit(0);
				break;
			}	    		 	
		}
	}while(1);
	
	return 0;
	
}

void TOH(int num,char S , char A , char D)
{
	if(num==1)
	{
		printf("Disk %d from %c to %c \n",num,S,D);
        return ;
	}
	else
	{
		TOH(num-1,S,D,A);
		printf("Disk %d from %c to %c \n",num,S,D);
		TOH(num-1,A,S,D);
	}
}

int GCD(int n1, int n2)
 {
    if (n2 != 0)
        return GCD(n2, n1 % n2);
    else
        return n1;
}

int Fact(int num)
{
	if (num==0 || num==1)
	{
		return 1;
	}
	else
	return num*Fact(num-1);
}

int Fab(int num)
{
   if(num<=1)
   {
   	return num;
   }
   else
      return Fab(num-1) + Fab(num-2);
}