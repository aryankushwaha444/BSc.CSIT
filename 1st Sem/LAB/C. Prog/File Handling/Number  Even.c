#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>

int main()
{
	FILE *numberFptr , *evenFptr , *oddFptr;
	
	int num,num2,a,i;
	char choice;
	char number[]="A:NUmber.txt";
	char even[]="A:Even.txt";
	char odd[]="A:Odd.txt";
	
	numberFptr = fopen(number,"w+");
	evenFptr=fopen(even,"w");
	oddFptr=fopen(odd,"w");
	
	printf("\n Enter No. How Much Store No. ");
	scanf("%d",&a);
/*	do
	{
		printf("\nEnter No. ");
		scanf("%d",&num);
		fprintf(numberFptr,"%d\n",num);
		
		printf("\n DO Your Have More No. (Y/N): ");
		fflush(stdin);
		choice=getch();
	//	getch();
	}while(choice=='Y'||choice=='y');*/
	for(i=0;i<a;i++)
	{
	printf("\nEnter No. ");
		scanf("%d",&num);
		fprintf(numberFptr,"%d\n",num);	
		fflush(stdin);
	}
	
	rewind(numberFptr);
	
//	printf("\n The Pointer has been Rewinded..");
	
	while(fscanf(numberFptr,"%d",&num2)!=EOF)
	{
		if((num2)%2==0)
		{
		
			fprintf(evenFptr,"%d\n",num2);
	    }
	//	printf("\nEven No. Stored in File\n");
		
	   else
		{
		
			fprintf(oddFptr,"%d\n",num2);
	     }
		//printf("\n Odd No. Stored in File...");
	}
	
	fclose(numberFptr);
	fclose(evenFptr);
	fclose(oddFptr);
	getch();
	
	
	
	return 0;
	
	
}
