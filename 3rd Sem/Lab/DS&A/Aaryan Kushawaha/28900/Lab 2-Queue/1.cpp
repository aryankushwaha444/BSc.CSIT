#include<stdio.h>
#include<stdlib.h>

# define SIZE 10

struct Queue
{
	int data[SIZE];
	int front;
	int current;
	
};

void EqQueue(struct Queue *);
void DqQueue(struct Queue *);
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
        printf("\n1.Entry Queue\n2.Exit Queue\n3.Display current Queue\n4.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            EqQueue(&q);
            break;
        case 2:
            DqQueue(&q);
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

void EqQueue(struct Queue *q)
{
	int num;
	printf("Enetr a number to Entry Queue : ");
	scanf("%d",&num);
	if(q->current==SIZE-1)
	{
		printf("Queue is Full !!!!!");
	}
	else
	{
	q->current=q->current+1;
	q->data[q->current]=num;	
	}

}



