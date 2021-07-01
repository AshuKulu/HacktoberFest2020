#include<stdio.h>
int main(void)
{
    char alpha;
    char *pa=&alpha;
    printf("Enter any alphabet:");
    scanf("%c",pa);
    {
        if(*pa=='a')
            printf("The alphabet is a vowel");
        else if(*pa=='A')
            printf("The alphabet is a vowel");
        else if(*pa=='e')
            printf("The alphabet is a vowel");
        else if (*pa=='E')
            printf("The alphabet is a vowel");
        else if(*pa=='i')
            printf("The alphabet is a vowel");
        else if(*pa=='I')
            printf("The alphabet is a vowel");
        else if (*pa=='O')
            printf("The alphabet is a vowel");
        else if(*pa=='o')
            printf("The alphabet is a vowel");
        else if(*pa=='u')
            printf("The alphabet is a vowel");
        else if (*pa=='U')
            printf("The alphabet is a vowel");
        else
            printf("The alphabet is a consonant");
    }
    return 0;
}
