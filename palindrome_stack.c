//pa;indrome checking using stack
#include<stdio.h>
#include<string.h>

struct ArrayStack{
    int top;
    char array[100];
};

void main(){
    struct ArrayStack stack;
    char str[100];
    int i=0;
    printf("Enter the string=");
    gets(str);
    int len=strlen(str);
    stack.top=-1;
    for(i=0;i<len/2;i++){
        stack.top+=1;
        stack.array[stack.top]=str[i];
    }
    int last;
    last=len%2==0?len/2:(len/2)+1;
    for(i=last;i<len;i++){
        if(str[i]==stack.array[stack.top]){
            stack.top-=1;
            continue;
        }
        else{
            printf("Not a palindrome");
            return;
        }
    }
    printf("Palindrome");
}
