#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
int data;
struct node * next;
};
struct node * head;
void reverse(){
struct node *temp,*prevnode,*currnode,*nextnode;
prevnode=NULL;
currnode=head;
nextnode=head;
while(currnode!=NULL){
nextnode=nextnode->next;
currnode->next=prevnode;
prevnode=currnode;
currnode=nextnode;
}
head=prevnode;
}
void main(){
struct node *temp,*newnode;
int choice;
clrscr();
head=NULL;
while(choice){
newnode = (struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL){
head=newnode;
temp=newnode;
}
else{
temp->next=newnode;
temp=newnode;
}
printf("Do you want to continue(0,1)?");
scanf("%d",&choice);
}
temp=head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
reverse();
temp=head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
getch();
}
