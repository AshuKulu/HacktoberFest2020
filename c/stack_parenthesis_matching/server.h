#include <stdio.h>
#include <stdlib.h>

typedef struct List List;
typedef struct Node Node;

struct List {
	Node *head;
	int number_of_Nodes;
};

struct Node {
	int data;
	Node *link;
};

/* initializes a linked list */
void list_initialize(List* list); 

void list_insert_front(List* list, int data);


void list_delete_front(List *list);

/* Returns the element that (*Node_ptr) contains */
const int Node_get_data(Node* Node_ptr); 

/* deallocates resources held by the list */
void list_destroy(List* list); 


typedef struct Stack {
	List *ptr_list;	
} Stack;

void Stack_initialize(Stack* ptr_Stack);
void Stack_push(Stack* ptr_Stack, int data);
void Stack_pop(Stack* ptr_Stack);
int Stack_is_empty(Stack* ptr_Stack);
const int Stack_peek(Stack* ptr_Stack);
void Stack_destroy(Stack* ptr_Stack);

/* The implementations for the above functions are provided below main() */

/* Returns 1 if the parenthesis sequence is well formed, else returns 0 */
int match_parenthesis(const char * string);

/* TODO:
 * Provide suitable implementation for the above function declaration, namely, match_parenthesis()
 */
 
