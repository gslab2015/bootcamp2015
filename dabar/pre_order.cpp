#include <iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
};

void preorder(node *head)
{

	if (head != NULL)
	{
		cout << head->data;//printing root
		preorder((head)->left);//visiting left node
		preorder((head)->right);// visiting right node
	}


	return;

}

int main(int args, char ** argv)
{
	cout << "Pre-order .. it's not in burhar's release brance" << endl;

	return 0;

}
