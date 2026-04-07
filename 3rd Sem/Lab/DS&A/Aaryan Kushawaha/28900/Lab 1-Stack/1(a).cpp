// Lab :1 :-  Menu driven implementation of Stack
// Sub :- Data & Algorithm
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
struct Stack
{
	int data[SIZE],top;
	
};
void push(struct Stack *);
void pop(struct Stack *);
void display(struct Stack *);
int main()
{
	struct Stack s;
	s.top=-1;
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
        	printf("Have a GOOD DAY ........");
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }while(1);	
    return 0;
}

void push(struct Stack *s)
{
  int num;
  printf("Enter a number :  ");
  scanf("%d",&num);
  if(s->top==SIZE-1)
  {
  	printf("Stack Overflow...");
  }
  else
  {
  	s->top=s->top+1;
  	s->data[s->top]=num;
  	printf("Push Element is : %d\n",num);
  }
  	
}

void pop(struct Stack *s)
{
	if(s->top==-1)
	{
		printf("Stack UnderFlow..");
	}
	else
	{
		printf("Deleted element: %d\n",s->data[s->top]);
		s->top=s->top-1;
	}
}
void display(struct Stack *s)
{
	 if (s->top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = s->top; i >= 0; --i)
            printf("%d\n",s->data[i]);
    }
}
