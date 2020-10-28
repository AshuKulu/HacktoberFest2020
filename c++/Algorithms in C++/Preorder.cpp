#include <iostream> 
#include<bits/stdc++.h>
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
  

void printPreorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    cout << node->data << " "; 
    printPreorder(node->left);  
    printPreorder(node->right); 
}  
  
int main() 
{ 
    struct Node *root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->right->left = new Node(3); 
    root->left->left= new Node(4);
    root->left->right = new Node(5);  
  
    cout << "\nPreorder traversal of binary tree is \n"; 
    printPreorder(root); 
  
  
    return 0; 
} 
