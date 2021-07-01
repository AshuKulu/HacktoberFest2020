#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void push(struct node **top, int newData){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = newData;

    if(*top == NULL){
        *top = newNode;
        newNode->link = NULL;
    }
    else{
        newNode->link = *top;
        *top = newNode;
    }
}

void pop(struct node **top){
    if(*top == NULL)
        printf("\nstack underflow");
    else if((*top)->link == NULL){
        *top = NULL;
        printf("\nstack is now empty");
    }
    else
        *top = (*top)->link;
}

void print(struct node *top){
    while(top != NULL){
        printf("%d ", top->data);
        top = top->link;
    }
}

int main(){
    struct node *top = NULL;
    push(&top, 5);
    push(&top, 4);
    push(&top, 3);
    print(top);
    pop(&top);
    pop(&top);
    pop(&top);
    pop(&top);
    pop(&top);
    printf("\n");
    print(top);
    return 0;
}