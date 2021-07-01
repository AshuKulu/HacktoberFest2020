#include<stdio.h>
 int main()
 {
  int n, rev=0,t;
   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d", &n);
  t=n;
  while(t!=0)
  {
  
    rev=rev*10+t%10;
    t=t/10;

  }
 if(rev==n)
 printf("%d is a palindrome number.\n",n);
 else
 {
   printf("%d is not a palindrome number.\n",n);
 }
 
  return 0;
}
