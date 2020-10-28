#include <iostream> 
using namespace std; 
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
void printPostorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 

    printPostorder(node->left); 
    printPostorder(node->right); 
    cout << node->data << " "; 
} 
  
int main() 
{ 
    struct Node *root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->right->left = new Node(3); 
    root->left->left= new Node(4);
    root->left->right = new Node(5); 
  
    cout << "\nPostorder traversal of binary tree is \n"; 
    printPostorder(root); 
  
    return 0; 
} 
