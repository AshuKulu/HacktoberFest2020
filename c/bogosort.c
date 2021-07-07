// https://bit.ly/2rcvXK5
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

bool is_sorted(int *a, int n)
{
    while (--n >= 1)
    {
        if (a[n] < a[n - 1])
            return false;
    }
    return true;
}

void shuffle(int *a, int n)
{
    int i, t, r;
    for (i = 0; i < n; i++)
    {
        t = a[i];
        r = rand() % n;
        a[i] = a[r];
        a[r] = t;
    }
}

void bogosort(int *a, int n)
{
    while (!is_sorted(a, n))
        shuffle(a, n);
}

int main()
{
    int x[] = {1, 10, 9, 7, 3, 0};
    int i;
    int len = sizeof(x) / sizeof(x[0]);
    printf("Original Array:\n");
    for (i = 0; i < len; i++)
        printf("%d%s", x[i], i == len - 1 ? "\n" : " ");
    printf("\nSorted Array:\n");
    bogosort(x, 6);
    for (i = 0; i < 6; i++)
        printf("%d ", x[i]);
    printf("\n");
}
