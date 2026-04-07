#include<stdio.h>
#include<stdlib.h>

int count = 0;

struct linked_list
{
    int data;
    struct linked_list *next;
};

typedef struct linked_list node;

void addAtBeg(node **head)
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    node *temp = (node*)malloc(sizeof(node));
    if(*head == NULL)
    {
    	*head = temp;
	}
	else
	{
	temp->data = num;
    temp->next = *head;
    *head = temp;
	
	}
    count++;
}

void addAtPos(node **head)
{
    int pos, num, i;
    printf("Enter Position Number: ");
    scanf("%d", &pos);

    if (pos > count+1 || pos == 0)
    { 
	  	printf("Invalid position! Current Nodes Position is :- %d\n",count);

    }

    else if (pos == 1)
    {
        addAtBeg(head);
            count++; 

    }
   else
   {
   
    node *temp = *head;
    for (i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    printf("Enter a Number : ");
    scanf("%d", &num);

    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = num;
    newNode->next = temp->next;
    temp->next = newNode;
    count++; 
    }

}

void addAtEnd(node **head)
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    node *temp = *head;
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = num;
    newNode->next = NULL;

    if (temp == NULL)
    {
        *head = newNode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    count++;
}

void delFromBeg(node **head)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");

    }

    node *temp = *head;
    *head = (*head)->next;
    printf("Deleted item = %d\n", temp->data);
    free(temp);

    count--;
}

void delFromEnd(node **head)
{
    if (*head== NULL)
    {
        printf("List is empty.\n");
    }

    node *temp = *head;
    node *prev = NULL;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL)
    {
        *head = NULL;
    }
    else
    {
        prev->next = NULL;
    }

    printf("Deleted item = %d\n", temp->data);
    free(temp);

    count--;
}

void delFromPosition(node **head)
{
    int pos, i;
    printf("Enter Position Number: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > count)
    {
        printf("Invalid position! Current Nodes Position is :- %d\n",count);

    }

   else if (pos == 1)
    {
        delFromBeg(head);
        count--;
    }
    
    else
    {
    node *temp = *head;
    node *prev = NULL;

    for (i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    printf("Deleted item = %d\n", temp->data);
    free(temp);
    count--;
     }
}

void display(node **head)
{
    node *temp = *head;

    if (temp == NULL)
    {
        printf("List is empty.\n");
    }

    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    node *head = NULL;
    int choice;

    do
    {
        printf("----- MENU -----\n");
        printf("1.) ADD AT THE BEGINNING\n2.) ADD AT THE END\n3.) ADD AT SPECIFIED POSITION\n4.) DELETE FROM BEGINNING\n5.) DELETE FROM END\n6.) DELETE FROM SPECIFIED POSITION\n7.) DISPLAY\n8.) EXIT\n");
        printf("----------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addAtBeg(&head);
                break;
            case 2:
                addAtEnd(&head);
                break;
            case 3:
                addAtPos(&head);
                break;
            case 4:
                delFromBeg(&head);
                break;
            case 5:
                delFromEnd(&head);
                break;
            case 6:
                delFromPosition(&head);
                break;
            case 7:
                display(&head);
                break;
            case 8:
            	printf("\n \t \tHAVE A GOOD DAY !!!!!");
                exit(0);
                
            default:
                printf("Invalid choice! Please enter a valid menu number.\n");
        }
    } while (1);

    return 0;
}
