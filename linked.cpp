#include<iostream>
#include<string>
using namespace std;
struct Node {
    int data;
    struct Node * next;
};
Node* new_node(int data){
    Node* temp = new Node;
    temp -> data = data;
    temp -> next = NULL;

    return temp;
}
void printList(struct Node * temp)
{
    while(temp!=NULL)
    {
        cout << temp->data<<"->"<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void countElement(Node* temp)
{
    int count{0};
    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    cout<<count<<endl;
}


void midElement(struct Node* temp){
    if(temp!=NULL){
        Node* ptr1 = temp;
        Node* ptr2 = temp;
        while(ptr2->next != NULL && ptr2->next->next != NULL){
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
        cout<<ptr1->data<<endl;
    }
}
void searchValue(int data, struct Node * temp){
    string output;
    while(temp != NULL){
        if(temp ->data == data){
            cout<<"found"<<endl;
            output = "found";
            temp = temp->next;
            
        }
        temp = temp->next;
    
    }
    if(output != "found")
        cout<<"not found"<<endl;
}

void concatinate(struct Node* a, struct Node* b)
{
    if(a!= NULL && b!=NULL)
    {
        if(a->next == NULL){
            a->next = b;
        }
        else{
            concatinate(a->next,b);
        }
    }
}
Node* front(int data, struct Node* a)
{
    Node* temp =  new Node;
    temp ->data = data;
    temp ->next = a;
    a = temp;
    return a;

}
int main()
{
    Node* head = new_node(1);
    head-> next = new_node(2);
    head->next->next = new_node(3);
    head->next->next->next = new_node(4);
    head->next->next->next->next = new_node(5);
    head->next->next->next->next->next = new_node(6);
    head->next->next->next->next->next->next = new_node(7);
    head->next->next->next->next->next->next->next = new_node(8);
    head->next->next->next->next->next->next->next->next = new_node(9);
    head->next->next->next->next->next->next->next->next->next = new_node(10);
    printList(head);
    countElement(head);
    midElement(head);
    searchValue(26, head);
    Node* head1 = new_node(11);
    head1-> next = new_node(12);
    head1->next->next = new_node(13);
    head1->next->next->next = new_node(14);
    head1->next->next->next->next = new_node(15);
    head1->next->next->next->next->next = new_node(16);
    head1->next->next->next->next->next->next = new_node(17);
    head1->next->next->next->next->next->next->next = new_node(18);
    head1->next->next->next->next->next->next->next->next = new_node(19);
    head1->next->next->next->next->next->next->next->next->next = new_node(20);
    concatinate(head,head1);
    printList(head);
    cout<<"Insert an element"<<endl;
    cout<<"1.insert at beginning "<<" 2.insert at end "<<" 3.insert anywhere "<<endl;
    int choice;
    cin>>choice;
    if(choice==1){
        Node * p = new_node(100);
        p->next = head;
        head=p;
        printList(head);

    }
    else if(choice == 2){
        Node * p = new_node(200);
        while(head!=NULL)
        {
            head= head->next;
        }
        if(head==NULL){
            head = p;
            head->next = p->next;

        }
        printList(head);
    }
    else{
        cout<<"invalid options"<<endl;
    }

    
}