#include<stdio.h>
#include<stdlib.h>
//Problem : AVL Tree Implementation


//Node Structure Declaration

struct Node{
        int data;
        struct Node *left;
        struct Node *right;
        int height;

}*root=NULL;

//Calculate Height

int Nodeheight(struct Node *p){
    int hl,hr;
    hl=p && p->left?p->left->height:0;
    hr=p && p->right?p->right->height:0;
    return hl>hr?hl+1:hr+1;

}

//Calculate Balance Factor
int balanceFactor(struct Node *p){
    int hl,hr;
    hl=p && p->left?p->left->height:0;
    hr=p && p->right?p->right->height:0;
    return hl-hr;
}



//Right Rotation
struct Node *RRotation(struct Node *p){
    struct Node *pl=p->left;
    struct Node *T2=pl->right;

    pl->right=p;
    p->left=T2;


    p->height=Nodeheight(p);
    pl->height=Nodeheight(pl);

    if(root==p)
        root=pl;

    return pl;

}

//Left Rotation
struct Node *LRotation(struct Node *p){
    //Write your code here
	struct Node *pr = p -> right;
	struct Node *T2 = pr-> left;

	pr -> left = p;
	p -> right = T2;

	p-> height = Nodeheight(p);
	pr -> height = Nodeheight(pr);

	if(root == p) {
		root = pr;
	}	

	return pr;
}

//Left-Right Rotation

struct Node *LRRotation(struct Node *p){
    //Write your code here
	struct Node *pl = p -> left;
	struct Node *tr = pl -> right;

	pl -> right = tr -> left;
	p -> left = tr -> right;
	tr -> left = pl;
       	tr ->right = p;

	p -> height = Nodeheight(p);
	pl -> height = Nodeheight(pl);
	tr -> height = Nodeheight(tr);

	if(root == p) {
		root = tr;
	}	

	return tr;
}

//Right-Left Rotation
struct Node *RLRotation(struct Node *p){
    //write your code here
	struct Node *pr = p -> right;
	struct Node *tl = pr -> left;

	pr -> left = tl -> right;
	p -> right = tl -> left;
	tl -> right = pr;
       	tl -> left = p;

	p -> height = Nodeheight(p);
	pr -> height = Nodeheight(pr);
	tl -> height = Nodeheight(tl);

	if(root == p) {
		root = tl;
	}

	return tl;
}


//Insert

struct Node *RInsert(struct Node *p,int key){
    struct Node *temp=NULL;

    if(p==NULL){
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=key;
        temp->height=1;
        temp->left=temp->right=NULL;
        return temp;
    }
    if(key < (p->data)) {
        p->left=RInsert(p->left,key);
    }
    else if(key > (p->data)) {
        p->right=RInsert(p->right,key);
    }
    
        p->height=Nodeheight(p);

        if(balanceFactor(p)==2 && balanceFactor(p->left)==1)
            return RRotation(p);
        else if(balanceFactor(p)==-2 && balanceFactor(p->right)==-1)
            return LRotation(p);
        else if(balanceFactor(p)==-2 && balanceFactor(p->right)==1)
            return RLRotation(p);
        else if(balanceFactor(p)==2 && balanceFactor(p->left)==-1)
            return LRRotation(p);

        return p;
}

struct Node * Inorder(struct Node *p){
    if(p == NULL)
        return NULL;
    Inorder(p->left);
    printf("%d,",p->data);
    Inorder(p->right);
    return p;

}


int main()
{
    root=RInsert(root,811);
    RInsert(root,488);
    RInsert(root,679);
    RInsert(root,600);
    RInsert(root,55);
    RInsert(root,70);
    RInsert(root,65);
    RInsert(root,500);
    RInsert(root,450);
    RInsert(root,20);
    RInsert(root,10);
    RInsert(root,-5);
    RInsert(root,205);

    Inorder(root);

    //Accept the values from user
    int num = 0;
    printf("\nPress Ctrl + d if you don't want to insert values further \nInsert Values:");
    while(scanf("%d", &num) != -1) {
    	RInsert(root,num);
    }
    Inorder(root);
    
	return 0;

}
