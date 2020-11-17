#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
//------------Node Class
class node{
public:
	int data;
	node* left;
	node* right;


	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

//------------Binary Tree 


 node *buildRec(){
 	//Read the input
 	int d;
 	cin>>d;

 	//Base Case
 	if(d==-1){
 		return NULL;
 	}
 	//Recursive Case
 	node* root = new node(d);
 	root->left = buildRec();
 	root->right = buildRec();
 	return root;
 }

void printPre(node *root){
		if(root==NULL){
			return;
		}
		cout<<root->data<<" ";
		printPre(root->left);
		printPre(root->right);
}
void printIn(node *root){
		if(root==NULL){
			return;
		}
		
		printIn(root->left);
		cout<<root->data<<" ";
		printIn(root->right);
}
void printPost(node *root){
		if(root==NULL){
			return;
		}
		
		printPost(root->left);
		printPost(root->right);
		cout<<root->data<<" ";
}

int count(node*root){
	if(root==NULL){
		return 0;
	}
	int c1 = count(root->left);
	int c2 = count(root->right);
	return 1 + c1 + c2;
}

int height(node*root){
	if(root==NULL){
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	return max(h1,h2) + 1;
}

void printAtLevelK(node*root,int k){
	//Base Case
	if(root==NULL){
		return;
	}
	if(k==0){
		cout<<root->data<<" ";
		return;
	}

	//Rec Case
	printAtLevelK(root->left,k-1);
	printAtLevelK(root->right,k-1);
}

//Tree Sum
int sum(node*root){

	if(root==NULL){
		return 0;
	}
	return root->data + sum(root->left) + sum(root->right);

}

//Replace Sum
int replaceChildSum(node*root){
	if(root==NULL){
		return 0;
	}
	if(root->left==NULL && root->right==NULL){
		return root->data;
	}

	int leftSum = replaceChildSum(root->left);
	int rightSum = replaceChildSum(root->right);

	int temp = root->data;
	root->data = leftSum  + rightSum;
	//	*(root).data = 
	return temp+root->data;
}

void printlevelorder(node*root) //iterative
{
	int h=height(root);
	for(int i=0;i<h;i++)
	 printAtLevelK(root,i);
}

void printLevelOrder(node*root){   //bfs

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* f = q.front();

/* 		if(f==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		} */

		
			cout<<f->data<<" ";
			q.pop();
			if(f->left){
				q.push(f->left);
			}
			if(f->right){
				q.push(f->right);
			
		}

	}

}

int diamerter(node*root)
{
	if (root==NULL)
	{
		return 0;
	}
	int h1=height(root->left);
	int h2=height(root->right);
	int op1=h1+h2;
	int op2=diamerter(root->left);
	int op3=diamerter(root->right);

	return max(op1,max(op2,op3));
}
node* buildLevelOrder(){

	node*root;
	int d;
	cin>>d;

	root = new node(d);
	queue<node*> q;

	q.push(root);

	while(!q.empty()){

		node* f = q.front();
		int c1,c2;
		cin>>c1>>c2;

		if(c1!=-1){
			f->left  = new node(c1);
			q.push(f->left);
		}
		if(c2!=-1){
			f->right = new node(c2);
			q.push(f->right);
		}
		q.pop();
	}
	return root;
}


void mirror(node* root){
	if(root==NULL){
		return;
	}
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}

pair<int,bool> isBalanced(node*root){
	pair<int,bool> p,left,right;

	if(root==NULL){
		p.first = 0;
		p.second = true;
		return p;
	}

	//Rec Case
	left = isBalanced(root->left);
	right = isBalanced(root->right);

	int h = max(left.first,right.first) + 1;

	if(abs(left.first-right.first)<=1 and left.second and right.second){
		return make_pair(h,true);
	}
	return make_pair(h,false);

}



int main(){
	node*root = buildLevelOrder();//buildRec();
	//printPre(root);
	//cout<<endl;
	//cout<<count(root)<<endl;
	cout<<height(root)<<endl;
	cout<<'\n';
	//printAtLevelK(root,2);

	//replaceChildSum(root);
	//printPre(root);
	printLevelOrder(root);
	cout<<'\n';
	cout<<'\n';
	printlevelorder(root);


	return 0;
}

/* 

8
10
1
-1
-1
6
9
-1
-1
7
-1
-1
3
-1
14
13
-1
-1
-1


*/