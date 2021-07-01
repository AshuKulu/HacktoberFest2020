#include<stdio.h>

int main()
{
    char a[1000], r[1000];
    int i = 0, j = 0;
    printf("Enter the string: ");
    gets(a);

    while(a[i] != '\0')
    {
        if(a[i] != ' ')
        {
            r[j]=a[i];
            j++;
        }
        i++;
    }
    r[j] = '\0';
    printf("\nResult String without whitespace is:- \n%s", r);
    return 0;
}
