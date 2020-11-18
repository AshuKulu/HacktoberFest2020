/*EVALUATING A POSTFIX EXPRESSION
Author:Debargha Mukherjee
GitHub: https://github.com/Debargha-arch
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50

//A Stack ADT created for maintaining the expression
struct stack
{
	char s[max];
    int top;
};


//Function for postfix evaluation
int eval_postfix(struct stack *p,char exp[max])
{
	int i;
	int n=strlen(exp);
    exp[n]=')';
    for(i=0;exp[i]!=')';i++)
	{
         if(isdigit(exp[i]))
           push(p,exp[i]-'0');
         else
		 {
           int op1=pop(p);
           int op2=pop(p);
           switch(exp[i])
		   {
               case '+':
               push(p,op2+op1);
               break;
               case '-':
               push(p,op2-op1);
               break;
               case '*':
               push(p,op2*op1);
               break;
               case '/':
               push(p,op2/op1);
               break;
           }
		 }
	}
    return pop(p);
}


//Function to push element into a stack
void push(struct stack *p,int n)
{
    if((*p).top==max-1)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        ((*p).top)++;
        (*p).s[(*p).top]=n;
    }
}


//Function to pop/remove element from a stack
int pop(struct stack *p)
{
    int n;
	if((*p).top==-1)
	{
		printf("\nUNDERFLOW\n");
		return 0;
	}
	else
	{
        n=(*p).s[(*p).top];
		((*p).top)--;
        return n;
	}
}

int main()
{
	struct stack p;
	p.top=-1;
	char exp[max];
	printf("Enter Postfix Expression:\n");
	gets(exp);
	int a=eval_postfix(&p,exp);  //the poped element returned is stored in integer variable a  
	printf("\nThe Evaluated Expression: %d",a);
}
