#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
    ~Node() {
        if(next) {
            delete next;
        }
    }
};

Node* takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

Node* del(Node* head,bool ans)
{
    if(head==NULL)
    {
        return head;
    }
    if(ans)
    {
        return del(head->next,!ans);
    }
    else
    {
        Node* temp=head;
        Node* nhead=del(head->next,!ans);
        temp->next=nhead;
        return temp;
    }
}

void deleteAlternateNodes(Node *head) {
    if(head==NULL || head->next==NULL)
    {
        return;
    }
    Node* temp=head;
    Node* temp2=del(head->next,true);
    head->next=temp2;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    Node *head = takeinput();
    deleteAlternateNodes(head);
    print(head);
    delete head;
    return 0;
}