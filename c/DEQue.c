/*
menu driven program to implement Deques (both Input-restricted and Output-restricted) operations such as Enqueue, Dequeue,
Peek, Display of elements, IsEmpty, IsFull using array.
*/

#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int que[10000];
}q;

void create(int n){
    q.size=n;
    q.front = -1;
    q.rear = -1;
}

void enQueue_front(int data){
    if(q.front == (q.rear + 1) % q.size){
   	 printf("Overflow!\n");
   	 return;
    }
    if(q.front == -1)
   	 q.front = q.rear = 0;
    else{
   	 if(q.front == 0)
   		 q.front = q.size-1;
   	 else
   		 q.front--;
    }
    q.que[q.front] = data;
    printf("Data insertion successful!\n");
    return ;
}

void enQueue_rear(int data){
    if(q.front == (q.rear + 1) % q.size){
   	 printf("Overflow!\n");
   	 return;
    }

    if(q.front == -1)
   	 q.front = q.rear = 0;
    else
   	 q.rear = (q.rear + 1) % q.size;
    q.que[q.rear] = data;
    printf("Data insertion successful!\n");
    return ;
}

int deQueue_front(){
    int data = -1;
    if(q.front == -1){
   	 printf("Underflow!\n");
   	 return data;
    }
    data = q.que[q.front];
    if(q.front == q.rear)
   	 q.front = q.rear = -1;
    else
   	 q.front = (q.front+1) % q.size;
    return data;
}

int deQueue_rear(){
    int data = -1;
    if(q.front == -1){
   	 printf("Underflow!\n");
   	 return data;
    }
    data = q.que[q.rear];
    if(q.front == q.rear)
   	 q.front = q.rear = -1;
    else{
   	 if(q.rear == 0)
   		 q.rear = q.size-1;
   	 else
   		 q.rear--;
    }
    return data;
}

int peekAtFront(){
    int data = -1;
    if(q.front == -1)
   	 return data;
    data = q.que[q.front] ;
    return data;
}

int peekAtRear(){
    int data = -1;
    if(q.front == -1)
   	 return -1;
    data = q.que[q.rear];
    return data;
}

void display(){
    int i = q.front;
    if(i == -1)
   	 printf("Empty Queue!\n");
    do
    {
   	 printf("%d ",q.que[i]);
   	 i = (i+1)%q.size;
   	 if(i != (q.rear+1)%q.size)
   		 printf("-> ");
    }while(i != (q.rear+1)%q.size);
    printf("\n");
    return;
}
int isEmpty(){
    if(q.front == -1)
   	 return 1;
    return 0;
}

int isFull(){
    if(q.front == (q.rear + 1) % q.size )
   	 return 1;
    return 0;
}

void IRDQ(){
    int data,choice,ch;
    while(choice)
    {
   	 printf("Enter 1 to enQueue.\nEnter 2 to deQueue.\nEnter 3 to peek at front.\nEnter 4 to peek at rear.\nEnter 5 to display.\nEnter 6 to check if empty.\nEnter 7 to check if full.\nEnter 0 to exit.\n");
   	 scanf("%d",&choice);
   	 switch(choice)
   	 {
   		 case 1:
   			 printf("Enter data.\t");
   			 scanf("%d",&data);
   			 enQueue_rear(data);
   			 break;
   		 case 2:
   			 printf("Enter 1 to deQueue at front.\nEnter 2 to deQueue at rear.\n");
   			 scanf("%d",&ch);
   			 if(ch != 1 && ch != 2){
   				 printf("Invalid input!\n");
   				 break;
   			 }
   			 if(ch == 1)
   				 data=deQueue_front();
   			 else
   				 data=deQueue_rear();
   			 if(data != -1)
   				 printf("%d : Data deleted successfully!\n",data);
   			 break;
   		 case 3:
   			 data=peekAtFront();
   			 if(data == -1)
   				 printf("No data in queue!\n");
   			 else
   				 printf("Data at front : %d\n",data);
   			 break;
   		 case 4:
   			 data=peekAtRear();
   			 if(data == -1)
   				 printf("No data in queue!\n");
   			 else
   				 printf("Data at rear : %d\n",data);
   			 break;
   		 case 5:
   			 display();
   			 break;
   		 case 6:
   			 printf(isEmpty()?"TRUE\n":"FALSE\n");
   			 break;
   		 case 7:
   			 printf(isFull()?"TRUE\n":"FALSE\n");
   			 break;
   		 case 0:
   			 printf("Program terminated successfully.\n");
   			 break;
   		 default:
   			 printf("Invalid choice.\n");
   			 choice =0;
   			 break;
   	 }
    }
    return ;
}

void ORDQ(){
    int data,choice,ch;
    while(choice)
    {
   	 printf("Enter 1 to enQueue.\nEnter 2 to deQueue.\nEnter 3 to peek at front.\nEnter 4 to peek at rear.\nEnter 5 to display.\nEnter 6 to check if empty.\nEnter 7 to check if full.\nEnter 0 to exit.\n");
   	 scanf("%d",&choice);
   	 switch(choice)
   	 {
   		 case 1:
   			 printf("Enter 1 to enQueue at front.\nEnter 2 to enQueue at rear.\n");
   			 scanf("%d",&ch);
   			 if(ch != 1 && ch != 2){
   				 printf("Invalid input.\n");
   				 break;
   			 }
   			 printf("Enter data.\t");
   			 scanf("%d",&data);
   			 if(ch == 1)
   				 enQueue_front(data);
   			 else
   				 enQueue_rear(data);
   			 break;
   		 case 2:
   			 data=deQueue_front();
   			 if(data != -1)
   				 printf("%d : Data deleted successfully!\n",data);
   			 break;
   		 case 3:
   			 data=peekAtFront();
   			 if(data == -1)
   				 printf("No data in queue!\n");
   			 else
   				 printf("Data at front : %d\n",data);
   			 break;
   		 case 4:
   			 data=peekAtRear();
   			 if(data == -1)
   				 printf("No data in queue!\n");
   			 else
   				 printf("Data at rear : %d\n",data);
   			 break;
   		 case 5:
   			 display();
   			 break;
   		 case 6:
   			 printf(isEmpty()?"TRUE\n":"FALSE\n");
   			 break;
   		 case 7:
   			 printf(isFull()?"TRUE\n":"FALSE\n");
   			 break;
   		 case 0:
   			 printf("Program terminated successfully.\n");
   			 break;
   		 default:
   			 printf("Invalid choice.\n");
   			 choice =0;
   			 break;
   	 }
    }
    return;
}

int main()
{
    int n,data,choice=1;
    printf("Enter size of queue.\t");
    scanf("%d",&n);

    printf("Enter 1 to create Input Restricted DEQueue.\nEnter 2 to create Output restricted DEQueue.\n");
    scanf("%d",&choice);
    create(n);
    if(choice == 1)
   	 IRDQ();
    else if(choice == 2)
   	 ORDQ();
    else
   	 printf("Invalid input!\n");
    return 0;
}
