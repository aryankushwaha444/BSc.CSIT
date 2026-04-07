// Circular Singly Linked List....
#include <stdio.h>
#include <stdlib.h>

int count = 0;

struct linked_list
{
    int data;
    struct linked_list *next;
};

typedef struct linked_list node;

void addAtBeg(node **head, node **tail)
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    node *temp = (node *)malloc(sizeof(node));
    temp->data = num;

    if (*head == NULL)
    {
        temp->next = temp; // Circular link to itself
        *head = temp;
        *tail = temp;
    }
    else
    {
        temp->next = *head;
        (*tail)->next = temp;
        *head = temp;
    }
    count++;
}

void addAtPos(node **head,node **tail)
{
    int pos, num, i;
    printf("Enter Position Number: ");
    scanf("%d", &pos);;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (pos > count + 1 || pos <= 0)
    {
        printf("Invalid position! Current Nodes Position is: %d\n", count);
    }

    if (pos == 1)
    {
        addAtBeg(head,tail);
    }

    node *temp = *head;
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = num;

    for (i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    count++;
}

void addAtEnd(node **head, node **tail)
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    node *temp = (node *)malloc(sizeof(node));
    temp->data = num;

    if (*head == NULL)
    {
        temp->next = temp; // Circular link to itself
        *head = temp;
        *tail = temp;
    }
    else
    {
        temp->next = *head;
        (*tail)->next = temp;
        *tail = temp;
    }

    count++;
}

void delFromBeg(node **head, node **tail)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
    }

    node *temp = *head;

    if (*head == *tail)
    {
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        *head = (*head)->next;
        (*tail)->next = *head;
        count--;
    }

    printf("Deleted item = %d\n", temp->data);
    free(temp);

}

void delFromEnd(node **head, node **tail)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
    }

    node *temp = *head;
    node *prev = NULL;

    while (temp->next != *head)
    {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL)
    {
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        prev->next = *head;
        *tail = prev;
        count--;
    }

    printf("Deleted item = %d\n", temp->data);
    free(temp);

}

void delFromPosition(node **head , node **tail)
{
    int pos, i;
    printf("Enter Position Number: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > count)
    {
        printf("Invalid position! Current Nodes Position is: %d\n", count);
    }

    else if (pos == 1)
    {
        delFromBeg(head,tail);
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

void display(node *head)
{
    node *temp = head;

    if (temp == NULL)
    {
        printf("List is empty.\n");
    }

    printf("Linked List: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("\n");
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
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
            addAtBeg(&head, &tail);
            break;
        case 2:
            addAtEnd(&head, &tail);
            break;
        case 3:
            addAtPos(&head,&tail);
            break;
        case 4:
            delFromBeg(&head, &tail);
            break;
        case 5:
            delFromEnd(&head, &tail);
            break;
        case 6:
            delFromPosition(&head,&tail);
            break;
        case 7:
            display(head);
            break;
        case 8:
            printf("\n \t \tHAVE A GOOD DAY !!!!!\n");
            exit(0);
        default:
            printf("Invalid choice! Please enter a valid menu number.\n");
        }
    } while (1);

    return 0;
}

