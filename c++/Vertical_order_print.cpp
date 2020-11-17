//C++ Program 
//Vertical Order Print
#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

class node{
	public:
	int data;
	node* left;
	node* right;

	node(int d){
		data = d;
		left = right = NULL;
	}
};

node* createTree(){
	queue<node*> q;
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}

	node* root = new node(d);
	q.push(root);
	int d1,d2;
	
	while(!q.empty()){
		node* x = q.front();
		q.pop();
		cin>>d1>>d2;
		if(d1 == -1){
			x->left = NULL;
		}else{
			x->left = new node(d1);
			q.push(x->left);
		}
		if(d2 == -1){
			x->right = NULL;
		}else{
			x->right = new node(d2);
			q.push(x->right);
		}
	}

	return root;
}

void verticalOrderPrint(node* root,int d,map<int ,vector<int>> &m){
	//base case
	if(root==NULL){
		return;
	}
	m[d].push_back(root->data);
	verticalOrderPrint(root->left,d-1,m);
	verticalOrderPrint(root->right,d+1,m);
	return;
}

int main(){
	int n;
	cin>>n;
	node* root = createTree();

	map<int, vector<int> > m;
	int d = 0;
	verticalOrderPrint(root,d,m);

	for(auto p:m){
		for(auto x:p.second){
			cout<< x<< " ";
		}
		cout<< endl;
	}

	return 0;
}

// Sample Input:
// 4 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 8 -1 9 -1 -1 -1 -1

// Sample Output :
// 4
// 2
// 1 5 6
// 3 8 
// 7
// 9
