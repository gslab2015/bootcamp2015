void listInPreOrder(node* hd){
if(hd != NULL) {
        printf("%d, ", hd->value);
        listInPreOrder(hd->left);
        listInPreOrder(hd->right);
    }
}

void listInInOrder(node* hd){
if(hd != NULL) {
        listInInOrder(hd->left); 
        printf("%d, ", hd->value);
        listInInOrder(hd->right);
    }
}
