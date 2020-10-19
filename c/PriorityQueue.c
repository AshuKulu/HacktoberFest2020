# include<stdio.h>
struct node
	{
	int priority;
	int info;
	struct node *link;
};
typedef struct node NODE;
NODE *front = NULL;

void insert(int item,int priority)
{
	NODE *tmp,*q;

	tmp = (NODE *)malloc(sizeof(NODE));
	tmp->info = item;
	tmp->priority = priority;
	if( front == NULL || priority < front->priority )
	{
		tmp->link = front;
		front = tmp;
	}
	else
	{
		q = front;
		while( q->link != NULL && q->link->priority <= priority )
			q=q->link;
		tmp->link = q->link;
		q->link = tmp;
	}
}
void delete()
{
	NODE *tmp;
	if(front == NULL)
		printf("Queue Underflow\n");
	else
	{
		tmp = front;
		front = front->link;
		free(tmp);
	}
}

void display()
{
	NODE *ptr;
	ptr = front;
	if(front == NULL)
		printf("queue is empty\n");
	else
	{
		printf("queue is :\n");
		printf("Priority \t Item\n");
		while(ptr != NULL)
		{
			printf("%5d \t %5d\n",ptr->priority,ptr->info);
			ptr = ptr->link;
		}
	}
}

void main()
{
	int choice,item,priority;
	do
	{
		printf("choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("item value to be added in the queue: ");
				scanf("%d",&item);
				printf("enter its priority : ");
				scanf("%d",&priority);
				insert(item,priority);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
			break;
				default :
				printf("Wrong choice\n");
		}
	}
	while(choice!=4);
}
