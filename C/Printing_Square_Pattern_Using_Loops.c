#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,min,min1,min2;
    scanf("%d", &n);
    int len=2*n-1;
  	// Complete the code to print the pattern.
      for(int j=1;j<=len;j++){
      for(int i=1;i<=len;i++){
          min1=i<=len-i?i-1:len-i;
          min2=(j<=len-j)?(j-1):(len-j);
          min=(min1<=min2)?(min1):(min2);
          printf("%d ",n-min);

      }
      printf("\n");}
    return 0;
}
