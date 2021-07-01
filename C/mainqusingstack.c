#include <stdio.h>
#include <stdlib.h>
#define N 5

int top1=-1,top2=-1;
int s1[N]={},s2[N]={};

void push(int val,int n)
{
	if(n==-1)
	{
		if(top1!=N-1)
		{
			s1[++top1]=val;
		}
		else
		{
			printf("\n Queue is full");
		}
	}
	else
	{
		s2[++top2]=val;
	}
}
int pop(int n)
{
	int temp;
	if(n==-1)
	{
		temp=s1[top1--];
	}
	else
	{
		temp=s2[top2--];
	}
	return temp;
}
void insertvalue(int value)
{
	push(value,1);
}
int deletevalue()
{
	int temp;
	if(top1==-1&&top2==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		if(top2!=-1)
		{
			pop(2);
		}
		else
		{
			while(top1!=-1)
			{
				temp=pop(1);
				push(temp,2);
			}
			pop(2);
		}
	}
}
void display()
{
	int i;
	for(i=top2;i>-1;i--)
	{
		printf("%d\n",s2[i]);
	}
	for(i=0;i<=top1;i++)
	{
		printf("%d\n",s1[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[]) {
	int n,value,temp;
	printf("\n 1.Enqueue \t\n 2.Dequeue \t\n 3.Display \t\n 4.EXIT \t\n");
	do
	{
		printf("\nEnter choice = ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("\n Enter value to be inserted = ");
				scanf("%d",&value);
				insertvalue(value);
				break;
			case 2:
				temp=deletevalue();
				printf("%d is deleted\n",temp);
				break;
			case 3:
				display();
				break;
			case 4:
				printf("EXIT");
		}
	}while(n!=4);
	return 0;
}

/* ""OUTPUT""

 1.Enqueue
 2.Dequeue
 3.Display
 4.EXIT

Enter choice = 1

 Enter value to be inserted = 10

Enter choice = 1

 Enter value to be inserted = 20

Enter choice = 1

 Enter value to be inserted = 30

Enter choice = 3
30
20
10


Enter choice = 2
30 is deleted

Enter choice = 3
20
10


Enter choice = 4
EXIT

*/
