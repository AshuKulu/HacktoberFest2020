#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

void addAtBeg(struct node **head, int newData){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    
    newNode->data = newData;

    if(*head == NULL){
        *head = newNode;
        newNode->next = NULL;
        newNode->prev = NULL;
    }
    else{
        newNode->prev = NULL;
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

void addAfter(struct node **head, int look, int newData){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    
    newNode->data = newData;

    struct node *link = *head;
    while(link->data != look){
        link = link->next;
    }
    newNode->prev = link;
    newNode->next = link->next;
    link->next = newNode;
}

void removeNode(struct node **head, int key){
    struct node *link = *head;

    while(link->next->data != key){
        link = link->next;
    }
    link->next->next->prev = link;
    link->next = link->next->next;
}

void reverse(struct node **head){
    struct node *current = *head;
    struct node *temp = NULL;
    while(current != NULL){
        temp = current->prev;
        current->prev = current->next; 
        current->next = temp;                
        current = current->prev; 
    }
    if(temp != NULL ) 
        *head = temp->prev; 
}

void print(struct node *head){
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
}

int main(){
    struct node *head = NULL;
    struct node *tail = NULL;
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    addAfter(&head, 5, 6);
    addAfter(&head, 6, 7);
    removeNode(&head, 6);
    reverse(&head);
    print(head);
    return 0;
}