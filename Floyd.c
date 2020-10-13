#include <stdio.h>
int main()
{
  int n, i,  c, a = 1;

  printf("Enter the number of rows of Floyd's triangle to print\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (c = 1; c <= i; c++)
    {
      printf("%d ", a); // Please note space after %d
      a++;
    }
    printf("\n");
  }

  return 0;
}
