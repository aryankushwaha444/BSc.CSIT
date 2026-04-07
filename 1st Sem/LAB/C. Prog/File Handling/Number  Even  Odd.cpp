#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>

int main()
{
	FILE *numberFptr , *evenFptr , *oddFptr;
	
	int num,num2;
	char choice;
	char number[]="A:NUmber.txt";
	char even[]="A:Even.txt";
	char odd[]="A:Odd.txt";
	
	numberFptr = fopen(number,"w+");
	evenFptr=fopen(even,"w");
	oddFptr=fopen(odd,"w");
	
	do
	{
		printf("Enter No. ");
		scanf("%d",&num);
		fprintf(numberFptr,"%d\n",num);
		
		printf("\n DO Your Have More No. (Y/N): ");
		fflush(stdin);
		choice=getch();
	//	getch();
	}while(choice=='Y'||choice=='y');
	
	rewind(numberFptr);
	
	printf("\n The Pointer has been Rewinded..");
	
	while(fscanf(numberFptr,"%d",&num2)!=EOF)
	{
		if(num2%2==0)
		{
			fscanf(evenFptr,"%d",&num2);
			printf("\nEven No. Stored in File\n");
		}
		else
		{
			fscanf(oddFptr,"%d",&num2);
			printf("\n Odd No. Stored in File...");
		}
	}
	
	fclose(numberFptr);
	fcolse(evenFptr);
	fclose(oddFptr);
	getch();
	
	
	
	return 0;
	
	
}
