#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
};
struct node *head,*tail;

void create(){
struct node *newnode;
int choice;
head=NULL;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->prev=NULL;
newnode->next=NULL;
if(head == NULL){
head=newnode;
tail=newnode;
}
else{
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
}
printf("do you want to continue(1,0)?");
scanf("%d",&choice);
}
}

void print(){
struct node * temp;
temp=head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}
void rever(){
struct node * pnode,* nnode;
pnode=head;
while(pnode!=NULL){
nnode=pnode->next;
pnode->next=pnode->prev;
pnode->prev=nnode;
pnode=nnode;
}
pnode=head;
head=tail;
tail=pnode;
}
void main(){
clrscr();
create();
print();
rever();
printf("\n");
print();
getch();
}
