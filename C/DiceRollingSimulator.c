#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(int argc, char **argv) {
    printf("Enter the number of dice: ");
    int n, i;
    scanf("%d", &n);
    printf("The values on dice are: ( ");
    for (i = 0; i < n; i++)
        printf("%d ", (rand() % 6) + 1);
    printf(")");
    return 0;
}
