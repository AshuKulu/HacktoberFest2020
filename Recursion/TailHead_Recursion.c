//Head Recursion
#include <stdio.h>
void fun(int n)
{
 if(n>0)
 {
 fun(n-1);
 printf("%d ",n);

 }
}
int main() {
 int x=3;

 fun(x);
 return 0;
}
Tail Recursion
#include <stdio.h>
void fun(int n)
{
 if(n>0)
 {
 printf("%d ",n);
 fun(n-1);

 }
}
int main() {
 int x=3;
 
 fun(x);
 return
0
;
}