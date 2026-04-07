/* Create   a file oic.txt , WAP to take 10 random No. from user then
 sorting ( in ascendiing order then number in oic.txt file ).. */ 
 
 #include<stdio.h>
 
 int main()
 {
 	FILE *fh;
 	int i,j,temp;
 	int a[10];
 	fh=fopen("A:oic.txt","w");
 	
 	for(i=0;i<10;i++)
 	{
 		printf("a[%d] : ",i);
 		scanf("%d",&a[i]);
	 }
	 
	 for(i=0;i<9;i++)
	 {
	 	for(j=i+1;j<10;j++)
	 	{
		 
	 	
	 if(a[i]>a[j])
	 {
	 	temp=a[i];
	 	a[i]=a[j];
	 	a[j]=temp;
	 }	 
      }
	 }
	 
	 for(i=0;i<10;i++)
	 {
	 	fprintf(fh,"%d\t",a[i]);
	 }
	 
	 if(fh!=NULL)
	 {
	 	printf("No. Stored ...");
	 }
	 else
	 printf("No. Can't Store..!'");
	 
 	fclose(fh);
 	
 	
 	
 	return 0;
 }