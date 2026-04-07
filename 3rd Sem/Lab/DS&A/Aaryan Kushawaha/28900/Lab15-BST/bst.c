#include<stdio.h>
#include<stdlib.h>
typedef struct bst
{
	int data;
	struct bst *left;
	struct bst *right;
}node;
void insert(node*root,int num)
{
	
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->data=num;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else if( num<root->data)
	{
		insert(root->left,num);
	}
	else if(num>root->data)
	{
		insert(root->right,num);
	}
	else
	  printf("Duplicate Entry");	
}
void search(node *root,int num)
{
	node *temp;
	;
	temp->data=num;
	if(root==NULL)
	{
		printf("Unsuccessful Search due to Empty Tree");
	}
	else if(num<root->data)
	{
		insert(root->left,num);
	}
	else if(num>root->data)
	{
		insert(root->right,num);
	}
	else
	  printf("Successful Search");	
}
void Delete(node *root,int num)
{  
	node *temp,*curr;
	if(root==NULL)
	  printf("tree doesn't exist\n");
	if(num<root->data)
	  Delete(root->left,num);
	else if(num>root->data)
	  Delete(root->right,num);
	  else
	  {
	if(root->left==NULL)
	  {
		temp=root->right;
		free(root);
		root=temp;
	  }
      curr=root->right;
	  while(curr && curr->left!=NULL)
	  curr=curr->left;
	  root->data=curr->data;
	Delete(root->right,curr->data);
  }
}
void preorder(node *root)
{
	if(root==NULL)
	  return -1;
	else 
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
    }
}
void postorder(node *root)
{
	if(root==NULL)
	  return -1;
	else 
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
    }
}
void inorder(node *root)
{
	if(root==NULL)
	  return -1;
	else 
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}



int main()
{
	int n;
	node *root;
	
	do
	{
		printf("\n1.Insert\n2.Delete\n3.Search\n4.Pre-Order Traversal\n5.Post-Order Traversal\n6.In-Order Traversal\n7.Exit");
		printf("Enter your choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
	      printf("Enter the num:");
	        scanf("%d",&n);
			insert(root,n);
		   break;
			case 2:
			printf("Enter the num:");
	        scanf("%d",&n);
			search(root,n);
		   break;
			case 3:
			printf("Enter the num:");
	        scanf("%d",&n);
			Delete(root,n);
		    break;
			case 4:
			preorder(root);
				break;
			case 5:
			postorder(root);
			    break;
			case 6:
			inorder(root);
			    break;
			case 7:
			    exit(0);	
			default:
				printf("Invalid Input");
				
				
		}
	}while(n!=7);
	return 0;
}
