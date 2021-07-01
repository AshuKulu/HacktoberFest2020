#include<stdio.h>
#include<stdlib.h>
struct node
{   int data;
	struct node* left;
	struct node* right;
};
struct node* createNode(int value){
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = value;
	newNode->left = newNode->right= NULL;
	return newNode;
}
struct node* insert(struct node* root, int data)
{   if (root == NULL) {return createNode(data);}
	if (data < root->data) {root->left  = insert(root->left, data);}
	else if (data > root->data) {root->right = insert(root->right, data);}
	return root;
}
void inorder(struct node* root){
	if(root == NULL) return;
	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);
}
void preorder(struct node* root){
	if(root == NULL) return;
	printf("%d ", root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node* root){
	if(root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ", root->data);
}
int main(){
	int inp, rt;
	struct node *root = NULL;
	printf("Enter the value of the ROOT:\n");
	scanf("%d", &rt);
	root = insert(root, rt);
	while(1){	printf("Enter Value or -1 to STOP:\n");
    			scanf("%d", &inp);
    			if(inp==-1){break;}
    			insert(root, inp);		}
 
	printf("Your INORDER output is:\n"); inorder(root);
	printf("\nYour PREORDER output is:\n"); preorder(root);
	printf("\nYour POSTORDER output is:\n"); postorder(root);
}
