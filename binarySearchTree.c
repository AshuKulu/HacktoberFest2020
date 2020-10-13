#include<bits/stdc++.h>
using namespace std;
struct node
{   int data;
	 node* left;
	 node* right;
};
struct node* createNode(int value){
	 node* newNode = new node();
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
	cout << root->data << " ";
	inorder(root->right);
}
void preorder(struct node* root){
	if(root == NULL) return;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node* root){
	if(root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}
int main(){
	int inp, rt;
    node *root = NULL;
	cin >> rt;
	root = insert(root, rt);
	while(1){
    			cin >> inp;
    			if(inp==-1){break;}
    			insert(root, inp);		}

	 inorder(root);
	 cout << endl;
	 preorder(root);
	 cout << endl;
	 postorder(root);
	 cout << endl;
}
