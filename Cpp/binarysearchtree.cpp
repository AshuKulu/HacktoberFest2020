#include<stdlib.h>
#include<conio.h>
#include<iostream>
struct node
{
    int data;
    struct node*left ,*right;
}*root;
void create()
{
    struct node*par,*newnode,*temp;
    int x,n,val;
    std::cout<<"Enter the number of nodes: ";
    std::cin>>n;
    while(n!=0)
    {
        if (root==NULL)
        {
            std::cout<<"enter the value of root node: ";
            std::cin>>val;
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=val;
            root=newnode;
            n--;
        }
        else
        {
            std::cout<<"enter value of node: ";
            std::cin>>val;
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=val;
            temp=root;
            while(temp!= NULL)
            {
                par=temp;
                if(temp->data>val)
                {
                    temp=temp->left;
                }
                else
                {
                    temp=temp->right;
                }
            }
            if(val<par->data)
            {
                par->left=newnode;
            }
            else
            {
                par->right=newnode;
            }
            n--;
        }
    }
}
void delete1()
{
    int val;
    struct node*temp,*par,*successor,*parsucc;
    std::cout<<"Enter the value to be deleted: ";
    std::cin>>val;
    temp=root;
    while(temp!=NULL&&temp->data!=val)
    {
        if(temp->data>val)
        {
            par=temp;
            temp=temp->left;
        }
        else
        {
            par=temp;
            temp=temp->right;
        }
    }
    if(temp==NULL)
    {
        printf("Value not found");
    }
    else if(temp->left==NULL&&temp->right==NULL)
    {
        free(temp);
    }
    else if(temp->left!=NULL&&temp->right==NULL)
    {
        if(temp==par->left)
        {
            par->left=temp->left;
        }
        else
        {
            par->right=temp->left;
        }
        free(temp);
    }
    else if(temp->left==NULL&&temp->right!=NULL)
    {
        if(temp==par->left)
        {
            par->left=temp->right;
        }
        else
        {
            par->right=temp->right;
        }
        free(temp);
    }
    else
    {
        successor=temp->left;
        parsucc=temp;
        while(successor->right!=NULL)
        {
            parsucc=successor;
            successor=successor->right;
        }
        temp->data=successor->data;
        parsucc->right=successor->left;
        free(successor);
    }
    
}
void display(struct node*temp)
{
    if(temp!=NULL)
    {
        display(temp->left);
        display(temp->right);
        
        std::cout<<temp->data<<"\t";
    }
}
int main()
{
    int s;
    do
    {
        std::cout<<"\n---MENU---\t1.create\t2.display\t3.delete\t4.exit\nSelect option: ";
        std::cin>>s;
        switch(s)
        {
            case 1: 
            create(); 
            break;
            case 2:
            std::cout<<"Post order: ";
            display(root);
            break;
            case 3: 
            delete1(); 
            break;
        }
    }while(s!=4);
    return 0;
}
