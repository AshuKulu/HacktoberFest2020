/*****************************************/
#include<stdio.h>
#include<stdlib.h>
/*****************************************/
/******Struct Node***********************/
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *h;
};
/*****************************************/
/********MakeNode*************************/
struct node *MakeNode(int x)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
/*****************************************/
/*************AVL Insertion***************/
 AVLInsrtion(struct node **tree ,int key)
{
    struct node *p,*q,*r;
    p=*tree;
    q=NULL;
    if(p==NULL)
    {
        p=MakeNode(key);
    }
    else
    {
        if(key<p->data)
        {
            p->left=(AVLInsrtion((&p->left),key));
            {
                if(BalanceFactor(p)==2)
                {
                    if(key<p->left->data)
                    {
                        p=RotateLL(p);
                    }
                    else
                    {
                        p=RotateLR(p);
                    }
                }
            }
        }
        else
        {
            p->right=(AVLInsrtion((&p->right),key));
            {
                if(BalanceFactor(p)==-2)
                {
                    if(key>p->right->data)
                    {
                        p=RotateRR(p);
                    }
                    else
                    {
                        p=RotateRL(p);
                    }
                }
            }
        }
    }
    p->h=Height(p);
    return p;

}
/*****************************************/
/********RotateLeft***********************/
RotateLeft(struct node *x)
{
    struct node *y,*z,*w;
    y=x->right;
    w=y->left;
    y->left=x;
    x->right=w;
    return y;
}
/*****************************************/
/*******RotateRight***********************/
RotateRight(struct node *x)
{
    struct node *y,*z,*w;
    y=x->left;
    w=y->right;
    y->right=x;
    x->left=w;
    return y;
}
/*****************************************/
/*******RotateLL**************************/
RotateLL(struct node *x)
{
    struct node *y;
    y=RotateRight(x);
    return y;
}
/*****************************************/
/**********RotateRR***********************/
RotateRR(struct node *x)
{
    struct node *y;
    y=RotateLeft(x);
    return y;
}
/*****************************************/
/*********RotateLR************************/
RotateLR(struct node *x)
{
    struct node *y,*z;
    y=x->left;
    z=RotateLeft(y);
    x->left=z;
    z=RotateRight(x);
    return z;
}
/*****************************************/
/*********RotateRL************************/
RotateRL(struct node *x)
{
    struct node *y,*z;
    y=x->right;
    z=RotateRight(y);
    x->right=z;
    z=RotateLeft(x);
    return z;
}
/*****************************************/
/*****Balance Factor*********************/
BalanceFactor(struct node *Tree)
{
 struct node *p;
   int lh,rh;
   p=Tree;
   if(p->left==NULL)
   {
       lh=0;
   }
   else
    lh=1+(p->left)->h;
   if(p->right==NULL)
    rh=0;
   else
    rh=1+(p->right)->h;
   return (lh-rh);

}
/*****************************************/
/*********Max Function********************/
max(int *p,int *q)
{
    if(p>q)
        return p;
    else
        return q;
}
/*****************************************/
/**************Height*********************/
Height(struct node *Tree)
{
   struct node *p;
   int lh,rh;
   p=Tree;
   if(p->left==NULL)
   {
       lh=0;
   }
   else
    lh=1+(p->left)->h;
   if(p->right==NULL)
    rh=0;
   else
    rh=1+(p->right)->h;
   return max(lh,rh);
}

/*****************************************/
/*******Inorder Traversal*****************/
void InOrderTraversal(struct node *tree)
{
    if(tree!=NULL)
    {
        InOrderTraversal(tree->left);
        printf("\t%d",tree->data);
        InOrderTraversal(tree->right);
    }
}
/*****************************************/
/********Main*****************************/
void main()
{
    struct node *root,*p;
    root=NULL;
    int q,r,i,A[10]={400,50,70,120,500,520,660,590,20,100};
    printf("AVL Tree  by in order Traversal=>");
     root=MakeNode(A[0]);
    for(i=1;i<=9;i++)
    {
        AVLInsrtion(&root,A[i]);
    }
    InOrderTraversal(root);
    printf("\n");
    q=BalanceFactor(root);
    printf("Balance Factor of tree=%d",q);
   }
/*****************************************/

