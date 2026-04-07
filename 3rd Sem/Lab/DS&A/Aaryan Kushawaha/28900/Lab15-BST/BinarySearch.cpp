#include<stdio.h>
#include<stdlib.h>

typedef struct bst
 {
    int data;
    struct bst *left;
    struct bst *right;
}node;

node* insert(node *root, int num) 
{
    if (root == NULL)
	 {
        node *temp = (node*)malloc(sizeof(node));
        temp->data = num;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }

    if (num < root->data)
	 {
        root->left = insert(root->left, num);
    } 
	else if (num > root->data) 
	{
        root->right = insert(root->right, num);
    }
	 else 
	 {
        printf("Duplicate Entry\n");
    }
    return root;
}

node* search(node *root, int num)
 {
    if (root == NULL) 
	{
        printf("Unsuccessful Search due to Empty Tree\n");
        return NULL;
    }

    if (num < root->data) 
	{
        return search(root->left, num);
    } 
	else if (num > root->data) 
	{
        return search(root->right, num);
    } 
	else
	 {
        printf("Successful Search\n");
        return root;
    }
}

node* findMin(node *root) 
{
    while (root->left != NULL)
	 {
        root = root->left;
    }
    return root;
}

node* Delete(node *root, int num)
 {
    if (root == NULL)
	 {
        printf("Tree doesn't exist\n");
        return root;
    }

    if (num < root->data)
	 {
        root->left = Delete(root->left, num);
    } 
	else if (num > root->data) 
	{
        root->right = Delete(root->right, num);
    }
	 else 
	 {
        if (root->left == NULL) 
		{
            node *temp = root->right;
            printf("Deleted Successful");
            free(root);
            return temp;
        } 
		else if(root->right == NULL) 
		 {
            node *temp = root->left;
            printf("Deleted Successful");
            free(root);
            return temp;
        }
        node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = Delete(root->right, temp->data);
    }
    return root;
}

void preorder(node *root) 
{
    if (root == NULL) 
	{
        return;
    }
    printf("%d\t", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root) 
{
    if (root == NULL) 
	{
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t", root->data);
}

void inorder(node *root) 
{
    if (root == NULL) 
	{
        return;
    }
    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}

int main()
 {
    int n;
    node *root = NULL;

    do
	 {
        printf("\n1.Insert\n2.Delete\n3.Search\n4.Pre-Order Traversal\n5.Post-Order Traversal\n6.In-Order Traversal\n7.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch(n) 
		{
            case 1:
                printf("Enter the num: ");
                scanf("%d", &n);
                root = insert(root, n);
                break;
            case 2:
                printf("Enter the num: ");
                scanf("%d", &n);
                root = Delete(root, n);
                break;
            case 3:
                printf("Enter the num: ");
                scanf("%d", &n);
                search(root, n);
                break;
            case 4:
                preorder(root);
                printf("\n");
                break;
            case 5:
                postorder(root);
                printf("\n");
                break;
            case 6:
                inorder(root);
                printf("\n");
                break;
            case 7:
            	printf("Have A GOOD Day!!!");
                exit(0);
            default:
                printf("Invalid Input\n");
        }
    } while (1);

    return 0;
}
