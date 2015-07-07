#include <stdio.h>
#include <stdlib.h>
	
struct treeNode 
{
	int data;
	struct treeNode *left, *right;
};
	
struct treeNode *root = NULL;
	
	/* create a new node with the given data */
struct treeNode* createNode(int data) 
{
	struct treeNode *newNode;
	newNode = (struct treeNode *) malloc(sizeof (struct treeNode));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return(newNode);
}
	
	/* insertion in binary search tree */
void insertion(struct treeNode **node, int data) 
{
	if (*node == NULL) {
		*node = createNode(data);
	} else if (data < (*node)->data) {
		insertion(&(*node)->left, data);
	} else if (data > (*node)->data) {
		insertion(&(*node)->right, data);
	}
}
	
void traverse_preorder(struct treeNode *node) {
	if (node != NULL) {
		printf("%3d", node->data);
		traverse_preorder(node->left);
		traverse_preorder(node->right);
	}
	return;
}
	
int main() {
	int data, ch;
	while (1) {
		printf("1. Insertion in Binary Search Tree\n");
		printf("2. Preorder traversal\n3. Exit\n");
		printf("Enter your choice:");
		scanf("%d", &ch);
		switch (ch) {
			case 1:
				while (1) {
					printf("Enter your data:");
					scanf("%d", &data);
					insertion(&root, data);
					printf("Continue Insertion(0/1):");
					scanf("%d", &ch);
					if (!ch)
						break;
				}
				break;
			case 2:
				printf("Preorder Traversal:\n");
				traverse_preorder(root);
				printf("\n");
				break;
			case 3:
				exit(0);
			default:
				printf("u've entered wrong option\n");
				break;
		}
	}
	return 0;
	
}
