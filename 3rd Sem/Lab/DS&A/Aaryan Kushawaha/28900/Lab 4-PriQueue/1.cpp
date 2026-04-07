#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void DeQueue();
void EnQueue(int , int);
void Display();
int peek();
int SIZE=-1;
struct item
{
	int value;
	int priority;
};
struct item pr[100000];

int main()
{
		int choice , num , pri,fr;
	
     do
    {
        printf("\nPerform operations on the Priority Queue:");
        printf("\n1.Entry Queue\n2.Remove Queue\n3.Peek\n4.Display\n5.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        	printf("Enter Any value & Priority : ");
	        scanf("%d%d",&num,&pri);
	        EnQueue(num,pri);
            break;
        case 2:
            DeQueue();
            break;
        case 3:
            fr=peek();
            if(SIZE==-1)
	        {
		      printf("Queue is Empty!!! \n1st Choice '1' :\n");		
	         }
	      else
	        {
            printf("Highest Priority is %d\n",pr[fr]);
               }
               break;
            
        case 4:
		    Display();
			break;    
        case 5:
        	printf("Have a GOOD DAY ........");
            exit(0);

        default:
            printf("\nInvalid choice!!\n");
            break;
        }
    }while(1);
    
    return 0;
}

void EnQueue(int value ,int priority)
{
	SIZE++;
	pr[SIZE].value=value;
	pr[SIZE].priority=priority;
}

int peek()
{
	int highestPriority=INT_MIN;
	int ind=0;

	
	for(int i=0;i<=SIZE;i++)
	{
		if(highestPriority==pr[i].priority && ind>-1 && pr[ind].value < pr[i].value)
		{
			highestPriority=pr[i].priority;
			ind =i;
		}
		else if(highestPriority < pr[i].priority)
		{
			highestPriority=pr[i].priority;
			ind =i;
		}
		else
		{
			ind = 0;
		}
	}
	return ind;
	
}

void DeQueue()
{
	int ind = peek();
	int i;
	if(SIZE==-1)
	{
		printf("Queue is Empty !!!\n");
	}
	else if(SIZE > 0)
	{
//		for(i=ind;i<=SIZE;i++)
//		{
		
//		pr[i]=pr[i+1];
		printf("Remove Element is %d",pr[ind]);
		SIZE--;		
//	}
	}
	else
	{
		printf("Remove Element is %d",pr[ind]);
	}
}

void Display()
{
		if(SIZE==-1)
	{
		printf("No any element in Queue  !!!\n");
	}
	else
	{
		printf("Element is \n\t");
		for(int i=0;i<=SIZE;i++)
		{
			printf("%d\t",pr[i]);
		}		
	}
}
