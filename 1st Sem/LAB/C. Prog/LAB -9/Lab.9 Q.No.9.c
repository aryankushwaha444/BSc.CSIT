/*  cereate a file oic.txt , WAP to find largest No. & smallest No. of 5 User given random No. 
 using Array Method to store the reject large and small No. oic.txt file */
 
 #include<stdio.h>
 
 int main()
 {
 	int small,large,i,j,temp;
 	int a[5];
 	FILE *fh;
 	fh=fopen("A:Oic.txt","w");
 	printf("Enter 5 No.\n");
 	for(i=0;i<5;i++)
 	{
 		printf("a[%d] : ",i);
 		scanf("%d",&a[i]);
	 }
	 
	 small=a[0];
	 large=a[0];
	 
	 for(i=0;i<5;i++)
	 {
	 	if(small>a[i])
	 	small=a[i];
	 	
	 	if(large<a[i])
	 	large=a[i];
	 }
	 
	 fprintf(fh,"large = %d\n Small = %d",large,small);
	 
	 fclose(fh);
	 
	 return 0;
	 
 }