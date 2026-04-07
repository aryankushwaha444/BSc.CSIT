#include<stdio.h>
#include<stdlib.h>

# define SIZE 10

struct Queue
{
	int data[SIZE];
	int front;
	int current;
	
};

void EnQueue(struct Queue *);
void DeQueue(struct Queue *);
void Display(struct Queue *);

int main()
{
	struct Queue q;
	q.current=-1;
	q.front=0;
	int choice;
	
     do
    {
        printf("\nPerform operations on the Queue:");
        printf("\n1.Entry Queue\n2.Remove Queue\n3.Display\n4.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            EnQueue(&q);
            break;
        case 2:
            DeQueue(&q);
            break;
        case 3:
            Display(&q);
            break;
        case 4:
        	printf("Have a GOOD DAY ........");
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }while(1);	
    return 0;
}

void EnQueue(struct Queue *q)
{
	int num;
	printf("Enetr a number to Entry Queue : ");
	scanf("%d",&num);
	if(q->current==SIZE-1)
	{
		printf("Queue is Full !!!!!\n");
	}
	else
	{
	q->current=q->current+1;
	q->data[q->current]=num;	
	printf("Entry Queue is %d\n",q->data[q->current]);
	}
}

void DeQueue(struct Queue *q)
{
	if(q->front>q->current)
	{
		printf("No any Queue Here !!!!!\n");
	}
	else
	{
		printf("Remove Queue is %d\n",q->data[q->front]);
		q->front +=1;
		
	}
}

void Display(struct Queue *q)
{
	for(int i = q->front ; i<=q->current;i++)
	{
		printf("Current Queue is %d\n",q->data[i]);
	}
	if(q->current<q->front)
	{
		printf("No any Queue here !!!!\n");
	}
}



