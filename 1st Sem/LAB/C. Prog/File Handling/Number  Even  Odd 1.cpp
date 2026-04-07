#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	FILE *number , *even ,*odd;
	int num,num2,a,i;
	
	number=fopen("A:number.txt","w+");
	even=fopen("A:Even.txt","w");
	odd=fopen("A:Odd.txt","w");
	
	printf("Enter How Much long Store No. ");
	scanf("%d",&a);
	
	for(i=0;i<a;i++)
	{
		printf("\nEnter No.");
		scanf("%d",&num);
		fprintf(number,"%d\n",num);
		fflush(stdin);
	}
	
	rewind(number);
	
	while(fscanf(number,"%d",&num2)!=EOF)
	{
		if(num2%2==0)
		{
			//remove(Number.txt);
			fprintf(even,"%d\n",num2);
		printf("Even No. Stored\n");
		}
		
	else
		{
			fprintf(odd,"%d\n",num2);
		}
	}
		printf("Odd No. Stored\n");
	
	
	fclose(number);
	fclose(even);
	fclose(odd);
	
	getch();
	
	return 0;
	
	
}
