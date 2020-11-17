#include<stdio.h>


void main()
{
 int a[2][2],b[2][2],c[2];
 int i,j;
 for(i=0;i<=1;i++)
 {
 for(j=0;j<=1;j++)
  {
   a[i][j]=(i&&j);
   b[i][j]=(i||j);
  }
 }

 for(i=0;i<=1;i++)
 {
 c[i]=(!i);
 }

 printf("\nThe Truth Table for AND Gate( && ) is..\n");
 printf("   A    B     :    C=A&&B\n");
for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
    printf("   %d    %d     :    %d\n",i,j,a[i][j]);
   }
 }
 printf("\nThe Truth Table for OR Gate( || ) is..\n");
 printf("   A    B     :    C=A||B\n");
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
    printf("   %d    %d     :    %d\n",i,j,b[i][j]);
   }
 }
 printf("\nThe Truth Table for NOT Gate (!) is..\n");
 printf("   A   :  B = !A\n");
 for(i=0;i<=1;i++)
 {
   printf("   %d   :  %d\n",i,c[i]);
 }
}
