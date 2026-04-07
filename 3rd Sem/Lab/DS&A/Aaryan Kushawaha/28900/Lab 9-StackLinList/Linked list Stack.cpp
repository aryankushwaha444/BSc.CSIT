#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Stack
{
    struct Node *top;
};

void push(struct Stack *);
void pop(struct Stack *);
void display(struct Stack *);

int main()
{
    struct Stack s;
    s.top = NULL;
    int choice;

    do
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Display\n4.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push(&s);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(&s);
            break;
        case 4:
            printf("\t\tHave a GOOD DAY ........");
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    } while (1);
    return 0;
}

void push(struct Stack *s)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = num;

    if (s->top == NULL)
    {
        s->top = newNode;
        newNode->next = newNode; 
    }
    else
    {
        newNode->next = s->top->next; 
        s->top->next = newNode;
        s->top = newNode;             
    }

    printf("Push Element is: %d\n", num);
}

void pop(struct Stack *s)
{
    if (s->top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    int deletedData;
    struct Node *temp = s->top->next;

    if (temp == s->top)
    {
        deletedData = s->top->data;
        free(s->top);
        s->top = NULL;
    }
    else
    {
        deletedData = temp->data;
        s->top->next = temp->next;
        free(temp);
    }

    printf("Deleted element: %d\n", deletedData);
}

void display(struct Stack *s)
{
    if (s->top == NULL)
    {
        printf("Underflow\n");
        return;
    }

    printf("Elements present in the stack: \n");
    struct Node *temp = s->top->next;
    do
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    } while (temp != s->top->next);
}
