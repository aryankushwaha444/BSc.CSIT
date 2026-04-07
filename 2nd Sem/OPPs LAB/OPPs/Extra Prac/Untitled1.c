// Lab.8 Q.. 2 :-  Create a structure student , where sstudent has roll, aname and Marks . Take 2 input of user and displaty screen.

#include<stdio.h>
struct student

{
	int roll;
	char name[50];
	float marks;
	
}s[5];

int main()
{
	int i;
 printf("Students Record \n");
 for (i=1;i<=2;i++)
 {
 	
	
 printf("%d Student \n",i);
 
 printf("Enter Student Name : ");
 scanf("%s",&s[i].name);
 
	printf("Enter Roll No.  ");
	scanf("%d",&s[i].roll);
	
	printf("Enter Marks : ");
	scanf("%f",&s[i].marks);
	
	
}
printf("\n");


 for (i=1;i<=2;i++)
 {
 
 {
 	printf("For %d Student\n",i);
 
 printf("Enter Student Name : %s\n ",s[i].name);

 
	printf("Enter Roll No.  %d\n ",s[i].roll);
	
	
	printf("Enter Marks : %f\n",s[i].marks);
}
printf("\n\n");
}

return 0;
}

