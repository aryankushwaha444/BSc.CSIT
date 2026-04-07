#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
	FILE *number , *even ,*odd;
	int num,num2,a,i;
	char c[500]="A:Number.txt";
	
	
	number=fopen(c,"r");
	even=fopen("A:Even.txt","w");
	odd=fopen("A:Odd.txt","w");
	
/*	printf("Enter How Much long Store No. ");
	scanf("%d",&a);
	
	for(i=0;i<a;i++)
	{
		printf("\nEnter No.");
		scanf("%d",&num);
		fprintf(number,"%d\n",num);
		
	}
	
	
//	int net;
//	net = remove;*/

fflush(stdin);
	
	while(fscanf(number,"%d",&num2)!=EOF)
	{
rewind(number);
		if(num2 %2 ==0)
		{
			remove(c);
			printf("Even Number ARe removed");
		//	fprintf(even,"%d\n",num2);
		}
		else
		{
			fprintf(odd,"%d\n",num2);
		}
	}
	
	
	fclose(number);
	fclose(even);
	fclose(odd);
	
	getch();
	
	return 0;
	
	
}
