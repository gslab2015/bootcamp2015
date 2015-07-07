#include<stdio.h>
typedef struct node
{
	int data;
	struct node *left,*right;
}node;
void pre_order(node *root)
{
	if(root)
	{	
		printf("%d",root->data);
		pre_order(root->left);
		pre_order(root->right);
	}
}
void in_order(node *root)
{
	if(root)
	{	
		in_order(root->left);
		printf("%d",root->data);
		in_order(root->right);
	}
}
node *root = NULL;
/* create a new node with the given data */
struct node* createNode(int data) 
{
	node *newNode;
	newNode = (node *) malloc(sizeof (node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return(newNode);
}
/* insertion in binary search tree */
void insertion(node **nd, int data) 
{
	if (*nd == NULL) 
	{
		*nd = createNode(data);
	} 
	else if (data < (*nd)->data) 
	{
		insertion(&(*nd)->left, data);
	} 
	else if (data > (*nd)->data) 
	{
		insertion(&(*nd)->right, data);
	}
}
int main()
{
	int data, ch;
	while (1) 
	{
		printf("\n1. Insertion in Binary Search Tree");
		printf("\n2. Preorder traversal ");
		printf("\n3. Preorder traversal ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				while (1) 
				{
				printf("Enter your data:");
				scanf("%d", &data);
				insertion(&root, data);
				printf("Continue Insertion(0/1):");
				scanf("%d", &ch);
				if (!ch)
				break;
				}
				break;
			case 2: pre_order(root);
				break;
			case 3: in_order(root);
				break;
			default: exit(0);
		}
	}
}