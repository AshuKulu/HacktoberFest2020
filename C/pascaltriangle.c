Live Demo
#include <stdio.h>

int factorial(int n) {
   int f;
   
   for(f = 1; n > 1; n--)
      f *= n;
      
   return f;
}

int ncr(int n,int r) {
   return factorial(n) / ( factorial(n-r) * factorial(r) );
}

int main() {
   int n, i, j;

   n = 5;

   for(i = 0; i <= n; i++) {
      for(j = 0; j <= n-i; j++)
         printf("  ");
         
      for(j = 0; j <= i; j++)
         printf(" %3d", ncr(i, j));

      printf("\n");
   }
   return 0;
}
