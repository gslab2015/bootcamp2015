#include "stdio.h"

struct treeNode {
	int data;
    	struct treeNode *left, *right;
};

void preorderTraversal(struct treeNode *node) {
    	if (node != NULL) {
		printf("%3d", node->data);
    		traverse(node->left);
    		traverse(node->right);
    	}
    	return;



int main()
{
	return 0;
}
