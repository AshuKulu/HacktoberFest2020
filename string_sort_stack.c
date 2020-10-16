//string sorting using stack
#include<stdio.h>
#include<string.h>

struct ArrayStack{
    int top;
    char array[100];
};

void main(){
    struct ArrayStack stack,tmp;
    int i;
    char topval;
    tmp.top=-1;
    printf("Enter the string-");
    gets(stack.array);
    int len=strlen(stack.array);
    if(len>0){
        stack.top=len-1;
        while(stack.top!=-1){
            topval=stack.array[stack.top];  //stack pop
            stack.top-=1;

            while(tmp.top!=-1 && tmp.array[tmp.top]>topval){
                stack.top+=1;
                stack.array[stack.top]=tmp.array[tmp.top];
                tmp.top-=1;
            }

            tmp.top+=1;
            tmp.array[tmp.top]=topval;  //tmp push
        }
                                                    //tmp is sorted Stack
        char str[100];
        for(i=0;i<len;i++){
            str[i]=tmp.array[tmp.top];  //tmp popping into string
            tmp.top-=1;
        }
        printf("\nSorted string= ");
        puts(str);
    }
    else
        printf("\nNo string inputed\n");
}

