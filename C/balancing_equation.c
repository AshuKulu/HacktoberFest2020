#include<stdio.h>
#define SIZE 50
char stack[SIZE];
int Top = -1;
void push(char item)
{
	if( Top >= SIZE-1 )
	  printf("\nStack overflow.\n");
	else  
	  stack[++Top] = item;
}
char pop()
{
	char item;
	if( Top<0 )
	{
	 printf("\nStack underflow : INVALID EXPRESSION\n");
    }
    else
    {
    	return(stack[Top--]);
	}
}
void checkExp(char exp[])
{
	int i=0;
	char c = exp[i],item;
	while(exp[i]!='\0')
	{
		if(c=='{'||c=='['||c=='(')
		 push(c);
		else if(c=='}')
		{
	     item = pop();
         if( item!='{' )
         {
		   printf("missing pair of %c.\n",item);
		   printf("Non balanced expression.\n");
		   return;
          }
	    }
		else if(c==']')
		{
	     item = pop();
         if( item!='[' ){
          printf("missing pair of %c.\n",item);
          printf("Non balanced expression.\n");
		  return;    
	            }
	    }
		else if(c==')')
		{
	     item = pop();
         if( item!='(' ){
          printf("missing pair of %c.\n",item);
          printf("Non balanced expression.\n");
          return;
		  }
	    }	    
	    c=exp[++i];
	}
	if(Top<0)
	 printf("Balanced Expression.\n"); 
	else
	 printf("Non balanced expression:(Since it has odd number of symbols)\n");
}
int main()
{
	char exp[SIZE];
	printf("Enter expression.\n");
	gets(exp);
	checkExp(exp);
 return 0;	
}
