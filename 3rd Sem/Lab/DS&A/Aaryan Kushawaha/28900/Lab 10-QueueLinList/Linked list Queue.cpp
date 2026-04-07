#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

void EnQueue(struct Queue*);
void DeQueue(struct Queue*);
void Display(struct Queue*);

int main()
{
    struct Queue q;
    q.front = NULL;
    q.rear = NULL;
    int choice;

    do {
        printf("\nPerform operations on the Queue:");
        printf("\n1.Entry Queue\n2.Remove Queue\n3.Display\n4.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
    } while(1);

    return 0;
}

void EnQueue(struct Queue* q) 
{
    int num;
    printf("Enter a number to Enqueue: ");
    scanf("%d", &num);

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = num;
    newNode->next = NULL;

    if (q->rear == NULL)
	 {
        q->front = newNode;
        q->rear = newNode;
    } 
	else 
	{
        q->rear->next = newNode;
        q->rear = newNode;
    }

    printf("Enqueued element: %d\n", num);
}

void DeQueue(struct Queue* q)
 {
    if (q->front == NULL) 
	{
        printf("Queue is empty!\n");
        return;
    }

    struct Node* temp = q->front;
    int deletedData = temp->data;

    if (q->front == q->rear) 
	{
        q->front = NULL;
        q->rear = NULL;
    }
	 else 
	 {
        q->front = q->front->next;
    }

    free(temp);
    printf("Dequeued element: %d\n", deletedData);
}

void Display(struct Queue* q) 
{
    if (q->front == NULL) 
	{
        printf("Queue is empty!\n");
        return;
    }

    struct Node* temp = q->front;
    printf("Elements present in the Queue: \n");

    while (temp != NULL) 
	{
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
