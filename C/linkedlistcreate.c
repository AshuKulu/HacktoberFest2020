#include <stdio.h>
struct node 
{
    int data;
    struct node*next;
};
int main()
{
    int n,i;
    struct node *head,*prev,*p;
    printf("enter the size of list:");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
        head=p;
        else
        prev->next=p;
        prev=p;
    }
    display(head);
    return 0;
}
void display(struct node *head)
{
    if(head==NULL)
    printf("NULL");
    else
    {
        printf("%d\t",head->data);
        display(head->next);
    }
}
