//Implementing a Queue using two Stacks..
#include <stdio.h>
#include <stdlib.h>

void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void reverse();
void create();
void front_rear();

int s1[100], s2[100];
int top1 = -1, top2 = -1;
int count = 0;

	void main()
	{
	int ch;
	clrscr();
		printf("\n Choose Operations to implement: ");
		printf("\n 1. Insertion");
		printf("\n 2. Deletion");
		printf("\n 3. Display");
		printf("\n 4. Reverse Display");
		printf("\n 5. Front & Rear Element");
		printf("\n 6. Exit Here..\n");
	create();

	while (1)
	{
		printf("\n Enter Operation No.: ");
		scanf("%d", &ch);
	switch (ch)
	{
		case 1: enqueue();
			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		case 4: reverse();
			break;
		case 5: front_rear();
			break;
		case 6: exit(0);
		default: printf("\n Wrong choice !!");
	}
    }
}
//Function to create a queue..
void create()
{
    top1 = top2 = -1;
}
//Function to push the element onto stack - 1..
void push1(int data)
{
    s1[++top1] = data;
}
//Function to pop the element from the stack - 2..
int pop1()
{
    return(s1[top1--]);
}
//Function to push an element onto stack - 2..
void push2(int data)
{
    s2[++top2] = data;
}
//Function to pop an element from the stack - 2..
int pop2()
{
    return(s2[top2--]);
}
//Function to add an element into the queue using stack..
void enqueue()
{
    int data, i;
	printf("\t Insert an element: ");
	scanf("%d", &data);
		push1(data);
		count++;
}
//Function to delete an element from the queue using stack..
void dequeue()
{
    int i;
	printf("\t Element Deleted !!\n");
	for (i=0;i<=count;i++)
	{
		push2(pop1());
	}
	pop2();
	count--;

	for (i=0;i<=count;i++)
	{
		push1(pop2());
	}
}
//Function to display the elements in the Queue..
void display()
{
    int i;
	printf("\t Displaying Elements in Queue: ");
	for (i=0;i<=top1;i++)
	{
		printf(" %d", s1[i]);
	}
	printf("\n");
}
//Function to display the elements in reverse..
void reverse()
{
	int i;
		printf("\t Displaying Reversed Elements in Queue: ");
		for(i=top1;i>=0;i--)
		{
			printf(" %d", s1[i]);
		}
		printf("\n");
}
void front_rear()
{       int i;
		printf("\t Front Element: %d", s1[0]);
		printf("\n\t Rear Element: %d", s1[top1]);
}
