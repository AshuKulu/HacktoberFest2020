#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void addNodeAtBeg(struct node **head, int newData){
    //Create a new node 
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    //insert data in new node
    newNode->data = newData;
    //it's a new node i.e. it is going to be last node, add NULL to it's link
    newNode->link = NULL;
    //if linked list is empty
    if(*head == NULL){
        *head = newNode;
        return;
    } 
    else{
        newNode->link = *head;
        *head = newNode;
        return;
    }
}

void addNodeAtEnd(struct node **head, int newData){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = newData;
    newNode->link = NULL;

    struct node *last = *head;

    if(*head == NULL)
        *head = newNode;
    else{
        while(last->link != NULL)
            last = last->link;
        last->link = newNode;
    }
}

void insertNodeAfter(struct node **head, int item, int newData){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = newData;

    struct node *find = *head;

    while(find->data != item)
        find = find->link;
    newNode->link = find->link;
    find->link = newNode;
}

void deleteParticularNode(struct node **head, int item){
    struct node *find = *head;
    if(find->data == item){
        *head = find->link;
        free(find);
    }
    else{
        while(find->link->data != item)
            find = find->link;
        find->link = find->link->link;
        free(find->link->link);
    }
}

void reverse(struct node **head){
    struct node *prev = *head;
    struct node *next = *head;
    struct node *current = *head;

    next = next->link->link;
    current = current->link;
    prev->link = NULL;
    
    while(1){
        current->link = prev;
        prev = current;
        current = next;
        if(current == NULL)
            break;
        next = next->link; 
    }
    *head = prev;
}

void printList(struct node *head){
    while(head != NULL){
        printf("%d ", head->data);
        head = head->link;
    }
}

int main(){
    
    struct node *head = NULL;

    addNodeAtBeg(&head, 6);

    addNodeAtBeg(&head, 5);

    addNodeAtEnd(&head, 7);

    insertNodeAfter(&head, 7, 79);

    deleteParticularNode(&head, 7);

    addNodeAtBeg(&head, 2);

    addNodeAtBeg(&head, 3);

    addNodeAtBeg(&head, 4);
    
    printList(head);

    reverse(&head);
    printf("\n");
    printList(head);

    return 0;
}