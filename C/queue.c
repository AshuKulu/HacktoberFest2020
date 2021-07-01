#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void enqueue(struct node **head, int newData){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = newData;
    newNode->link = NULL;
    if(*head == NULL){
        *head = newNode;
    }
    else{
        struct node *tail = *head;
        while(tail->link != NULL)
            tail = tail->link;
        tail->link = newNode;
    }
}

void dequeue(struct node **head){
    if(*head == NULL)
        printf("\nQueue is already empty");
    else if((*head)->link == NULL){
        *head = NULL;
        printf("\nQueue is now empty");
    }
    else{
        *head = (*head)->link;   
    }
}

void print(struct node *head){
    while(head != NULL){
        printf("%d ", head->data);
        head = head->link;
    }
}

int main(){
    struct node *head = NULL;
    enqueue(&head, 1);
    enqueue(&head, 2);
    enqueue(&head, 3);
    print(head);
    dequeue(&head);
    printf("\n");
    print(head);
    dequeue(&head);
    printf("\n");
    print(head);
    dequeue(&head);
    printf("\n");
    print(head);
    dequeue(&head);
    printf("\n");
    print(head);
    return 0;
}