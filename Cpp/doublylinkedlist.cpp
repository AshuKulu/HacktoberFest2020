#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node* prev;

};
struct Node* head= NULL;

void insertAtstart(int node_data){
	Node* newnode= new Node;
	newnode->data=node_data;
	newnode->prev=NULL;
	newnode->next=head;
	if(head!=NULL){
		head->prev=newnode;
	}
	head=newnode;	
}
void append(int node_data){
	Node* newnode= new Node;
	Node* last=head;
	newnode->data=node_data;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=newnode;
	newnode->prev=last;
}

void deletefirstnode(){
	if(head==NULL){
		cout<<"List Empty"<<endl;
	}
	else{
		Node*ptr=head;
		head=head->next;
		head->prev=NULL;
		cout<<"Element deleted"<<endl;
		delete ptr;

	}
}
void deletelastnode(){
	if(head==NULL){
		cout<<"List Empty"<<endl;
	}
	else{
	    Node* temp=head;
	    while(temp->next!=NULL){
		    temp=temp->next;
	    }
	    temp->prev->next=NULL;
	    delete temp;
	}
}
void displayList(){
    cout<<"\n The doubly linked list is: \n";
    Node* temp=head;
    while(temp!=NULL){
    	cout<<temp->data<<"<-->";
    	temp=temp->next;
    }
    cout<<"null";
}
int main(){
	int ch,val;
	do{
		cout<<endl;
		cout<<"\n1. Insert at beginning:\n";
		cout<<"\n2.Insert at end:\n";
		cout<<"\n3. Delete from beginning:\n";
		cout<<"\n4. Delete at end:\n";
		cout<<"\n5. Display:\n";
		cout<<"\n6. Quit:\n";
		cout<<"\n Enter Choice(1-6) \n";
		cin>>ch;
		cout<<endl;
		switch(ch){
			case 1:
			cout<<"Element to be inserted: ";
			cin>>val;
			insertAtstart(val);
			break;

			case 2:
			cout<<"Element to be inserted: ";
			cin>>val;
			append(val);
			break;

			case 3:
			deletefirstnode();
			break;

			case 4:
			deletelastnode();
			break;

			case 5:
			displayList();
			break;

			case 6:
            cout<<"Exit\n";
            break;

            default: cout<<"Incorrect!\n";

		}


	}while(ch!=6);
	return 0;
}