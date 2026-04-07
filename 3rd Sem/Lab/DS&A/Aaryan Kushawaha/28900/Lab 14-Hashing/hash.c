#include<stdio.h>
#include<stdlib.h>

void init(int n,int key[])
{   
    int i;
    for(i=0;i<n;i++)
        key[i] = -1;
}
void insert(int key[],int n)
{   
    int value;
    printf("enter value:\t");
    scanf("%d",&value);
    int ind = value % n;
    
    if(key[ind]==-1)
    {   
        key[ind] = value;
        printf("%d inserted at key[%d]\n", value,ind);
    }
    else
    for(int i=0;i<n;i++)
             {
                int t=(ind+i)%n;
                if (key[t]==-1) 
                {
                 key[t]=value;
                  printf("%d inserted at key[%d]\n", value,t);
                break;
                }      
}
 
}

void del(int value,int key[],int n)
{
    int ind=value % n;
    if(key[ind]==value)
    {
        key[ind]=-1;
        printf("%d deleted from index:%d\n",value,ind);
    }
    else
    {
    int i;
     for(i=0;i<n;i++)
             {
                int t=(ind+i)%n;
                if (key[t]==value) 
                {
                key[t]=-1;
                printf("%d deleted from index: %d\n",value,t);
                break;
            }
             }
    if(i==n)
    {
        printf("%d not present in the hash table\n",value);
    }
     
}
}

void search(int value,int key[],int n)
{
    int ind=value%n;
    if(key[ind]==value)
         printf("%d found at index %d \n",value,ind);
    else
     {
    int i;
     for(i=0;i<n;i++)
      {
                int t=(ind+i)%n;
                if(key[t]==value) 
                {
               printf("%d found at index %d \n",value,t);
                break;
                }
             }
             if(i==n)
            {
            printf("%d not found\n",value);
            }    
}
    
}

void print(int key[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("key[%d] = %d\n",i,key[i]);
}
int main()
{
    int key[1000],n,ts,value;
     printf("enter size:\t");
   scanf("%d",&ts);
   init(ts,key);
        printf("1.)Insert\n2.)Search\n3.)Delete\n4.)Display\n5.)Exit\n");
do
    {
    printf("Operation to be performed:");
    scanf("%d",&n);
     switch(n)
  {
   case 1:
   insert(key,ts);
   break;
   case 2:
  
   printf("enter value:\t");
   scanf("%d",&value);
   search(value,key,ts);
   break;
   case 3:

   printf("enter value:\t");
   scanf("%d",&value);
   del(value,key,ts);
   break;
   case 4:
   print(key,ts);
   break;
   case 5:
   	   printf("Have a GOOD Day!!!");
   exit(0);
   break;
   deafult:
   printf("Enter a valid option!!!");
   break;
  }
}while(1);
}