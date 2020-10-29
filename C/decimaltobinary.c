#include<stdio.h>
int dtob(int);
void main()
{
    int n;
    printf("Enter any decimal number: ");
    scanf("%d",&n);
    dtob(n);
}
int dtob(int n)
{
    int r;
    if(n==0)
    return 0;
    else
    {
      r=n%2+10*dtob(n/2);
      printf("%d",r);
    }
    return 0;
}
