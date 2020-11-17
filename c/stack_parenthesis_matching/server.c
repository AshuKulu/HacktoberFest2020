#include "server.h"

static Node* create_Node(int data, Node* link)
 {
// TODO - create and allocate dynamic space
Node* newnode=(Node*)malloc(sizeof(Node));
newnode->data=data;
newnode->link=link; 
return newnode;
}


void list_initialize(List* ptr_list) 
{
//TODO - initialize structure members to default values
ptr_list->head=NULL;
ptr_list->number_of_Nodes=0;
}


void list_insert_front(List* ptr_list, int data) 
{
//TODO - perform linked list implementation of push operation.
Node* newnode=create_Node(data,ptr_list->head);
ptr_list->head=newnode;
}


const int Node_get_data(Node *Node_ptr) 
{
//TODO - return the top most element
return Node_ptr->data;
}

void list_delete_front(List* ptr_list) 
{
//TODO - perform linked list implementation of pop operation.
Node* q;
if(ptr_list->head==NULL) return;
else
{
q=ptr_list->head;
ptr_list->head=q->link;
free(q);
}
}

void list_destroy(List* ptr_list) 
{
Node* c=ptr_list->head;
Node* p;
while(c!=NULL)
{
p=c;
c=c->link;
free(p);
}
free(ptr_list);
}
//TODO - free the allocated space
void Stack_initialize(Stack *ptr_Stack) 
{
//TODO - get the memory allocation for stack, and intern call list initialize
ptr_Stack->ptr_list=(List*)malloc(sizeof(List));
list_initialize(ptr_Stack->ptr_list);
}

void Stack_push(Stack *ptr_Stack, int key) 
{
//TODO- call the function list_insert_front
list_insert_front(ptr_Stack->ptr_list,key);
}

void Stack_pop(Stack *ptr_Stack) 
{
//TODO- call the function list_delete_front
list_delete_front(ptr_Stack->ptr_list);
}

int Stack_is_empty(Stack *ptr_Stack) 
{
//TODO	- return 0 if stack is not empty
if(ptr_Stack->ptr_list->head==NULL) return 1;
return 0;
}

const int Stack_peek(Stack *ptr_Stack) 
{
//TODO	- return the top most element of the stack
return ptr_Stack->ptr_list->head->data;
}

void Stack_destroy(Stack *ptr_Stack)
 {
//TODO	- deallocate
list_destroy(ptr_Stack->ptr_list);
free(ptr_Stack);

}

int match_parenthesis(const char* string)
{
//TODO - implement the code to match paranthesis in a string which is passed as a parameter.
int i;
char ch,x;
i=0;
Stack *St=(Stack*)malloc(sizeof(Stack));
Stack_initialize(St);
while(string[i]!='\0')
{
ch=string[i];
switch(ch)
{
case '(':
case '[':
case '{':Stack_push(St,ch-'0');
	break;
case ')':
	if(!Stack_is_empty(St))
	{
	x=(char)(Stack_peek(St)+48);
	if(x=='(')
	{
	Stack_pop(St);
	break;
	}
	else return 0;
	}
	else return 0;
case '}':
	if(!Stack_is_empty(St))
	{
	x=(char)(Stack_peek(St)+48);
	if(x=='{')
	{
	Stack_pop(St);
	break;
	}
	else return 0;
	}
	else return 0;
case ']':	
	if(!Stack_is_empty(St))
	{
	x=(char)(Stack_peek(St)+48);
	if(x=='[')
	{
	Stack_pop(St);
	break;
	}
	else return 0;
	}
	else return 0;
}
i++;
}
if(Stack_is_empty(St)) return 1;
return 0;
}
	


 

