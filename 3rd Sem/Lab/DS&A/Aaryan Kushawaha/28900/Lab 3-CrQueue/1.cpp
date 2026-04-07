#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

struct cQueue
{
	int data[SIZE];
	int front;
	int rear;
	
};

void EnQueue(struct cQueue *);
void DeQueue(struct cQueue *);
void Display(struct cQueue *);

int main()
{
	struct cQueue cq;
	cq.front=SIZE-1;
	cq.rear=SIZE-1;
	
		int choice;
	
     do
    {
        printf("\nPerform operations on the Circular Queue:");
        printf("\n1.Entry Queue\n2.Remove Queue\n3.Display\n4.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            EnQueue(&cq);
            break;
        case 2:
            DeQueue(&cq);
            break;
        case 3:
            Display(&cq);
            break;
        case 4:
        	printf("Have a GOOD DAY ........");
            exit(0);

        default:
            printf("\nInvalid choice!!\n");
        }
    }while(1);
    
    return 0;
}

void EnQueue(struct cQueue *cq)
{
	int num;
	printf("Enter a number to EnQueue : ");
	scanf("%d",&num);
	
	if((cq->rear+1)==cq->front)
	{
		printf("Circular Queue is Full !!!\n");
	}
	else
	{
		cq->rear=(cq->rear+1)%SIZE;
		cq->data[cq->rear]=num;
		
	}
}
void DeQueue(struct cQueue *cq)
{
	
	if(cq->rear==cq->front)
	{
		printf("No any Element in Circular Queue !!!\n");
	}
	else
	{
		cq->front=(cq->front+1)%SIZE;

			printf("Remove Element is %d\n",cq->data[cq->front]);
		}
		}
	
void Display(struct cQueue *cq)
{    
    if(cq->front==cq->rear)
	{
		printf("Circular Queue is Empty !!!\n");
	}

else
{

  printf("Elements in the Queue are: \n");
    int i = (cq->front+1);
    while (i != cq->rear) {
        printf("%d\n", cq->data[i]);
        i = (i + 1) % SIZE;
    }
    printf("%d\n", cq->data[i]);
}
}
     
     