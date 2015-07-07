
#include<stdio.h>
#include<alloc.h>

typedef struct bint
{
   int data;
   struct bint *left,*right;
}node;

node * create(node *r,int d)
{
  if(r == NULL)
  {
    r = (node *)malloc(sizeof(node));
    r->data = d;
    r->left = r->right = NULL;
 }
 else
 {
    if(r->data <= d)
      r->right = create(r->right,d);
    else
      r->left = create(r->left,d);
 }
 return r;
}


void inorder(node *r)
{
    if(r != NULL)
    {
		preorder(r->left);
		printf("%d\t",r->data);
		preorder(r->right);
    }
}

void preorder(node *r)
{
    if(r != NULL)
    {
       printf("%d\t",r->data);
       preorder(r->left);
       preorder(r->right);
    }
}


int main()
{
   int d;
   char ch = 'Y';
   node *head = NULL;
   clrscr();
   while(toupper(ch) == 'Y')
   {
      printf("\n Enter the item to insert");
      scanf("%d",&d);
      head = create(head,d);
      printf("\n Do you want to continue(y/n)");
      fflush(stdin);
      ch = getchar();
    }

    preorder(head);
	inorder(head);
    return 0;
}
