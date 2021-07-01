#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node;
node *head=NULL, *p, *temp,*temp2;
int main()
{
   int size, start, step,i;
   printf("Enter the size of Circular Linked List");
   scanf("%d", &size);
   for(i=0;i<size;i++){
        p=(node*)malloc(sizeof(node));
        p->data=i+1;
        if(head==NULL){
            head=p;
            temp=head;
            head->next= NULL;
        }
        else{
            temp->next=p;
            p->next=NULL;
            temp=p;
        }
        if(i==size-1){p->next=head;}
   }
   temp=head;
   printf("Your line-up of men is this: \n");
   while(temp->next!=head){printf("%d ", temp->data); temp=temp->next;}
   printf("%d\n", temp->data);
   printf("Enter the starting position: ");
   scanf("%d", &start);
   printf("Enter the step size: ");
   scanf("%d", &step);
   temp=head;
   while(temp->data!=start){
        temp=temp->next;
   }
   while(temp->next!=temp){
        for(i=0;i<step-1;i++){
            temp=temp->next;
            temp2=temp->next;
        }
        temp->next=temp2->next;
        temp2->next=NULL;
        free(temp2);
   }
   printf("\n");
   printf("%d survives! \n", temp->data);
}


