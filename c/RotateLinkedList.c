/*
Rotates a linked list by a value k.
*/

#include<stdio.h>
#include<stdlib.h>
struct node             //Defining node structure
{
    struct node* prev;
    int data;
    struct node* next;
}*head = NULL;

int isEmpty()           //to check if linked list in empty
{
    if (!head)
        return 1;
    return 0;
}

void create()           //to create the list
{
    int ch, data;
    do
    {
        printf("\nEnter data.\t");
        scanf("%d", &data);
        struct node* NEW = (struct node*)malloc(sizeof(struct node));
        if (!NEW)
        {
            printf("\nMemory cannot be assigned due to insufficient storage!\n");
            return;
        }
        NEW->prev = NULL;
        NEW->next = NULL;
        struct node* ptr = head;
        if (!ptr)
        {
            NEW->data = data;
            head = NEW;
            printf("\nData insertion successful!\n");
        }
        else
        {
            while (ptr->next != NULL)ptr = ptr->next;
            NEW->prev = ptr;
            NEW->data = data;
            ptr->next = NEW;
            printf("\nData insertion successful!\n");
        }

        printf("Enter 1 to continue data entry.\nEnter 0 to terminate data entry.\n");
        scanf("%d", &ch);
    } while (ch);
}

void display()      //to display the list
{
    struct node* ptr = head;
    if (!ptr)
    {
        printf("\nEmpty list!\nNothing to print.\n");
        return;
    }
    printf("List :\n");
    while (ptr)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int count()             //to count no of node present in the list.
{
    int c = 0;
    struct node* ptr = head;
    while (ptr)
    {
        ptr = ptr->next;
        c++;
    }

    return c;
}

void rotate()           //to rotate the list
{
    int k;
    printf("Enter k.\t");
    scanf("%d", &k);
    int c = count();
    if (k > c)
    {
        printf("Invalid value for k.\n");
        exit(0);
    }
    if(k == 1)
    {
      printf("Rotation successful!\n");
      return;
    }
    struct node* ptr1 = head;
    struct node* ptr2 = head;
    int i = 0;

    while (ptr2->next)ptr2 = ptr2->next;
    while (i++ < k)ptr1 = ptr1->next;

    ptr2->next = head;
    head->prev = ptr2;

    ptr1->prev->next = NULL;
    ptr1->prev = NULL;
    head = ptr1;



    printf("Rotation successful!\n");
    return;
}
int main()
{
    int i;
    create();
    display();
    rotate();
    display();

    return 0;
}
