#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int  num1, i;
    printf("Enter the number to find the factors of :  ");
    scanf("%d",&num1);
    printf("\n\n\nFactors of %d are \n\n", num1);

    for(i = 1; i <= num1/2; i++)
    {
        if(num1%i == 0)
            printf("\t\t\t%d\n", i);
    }

    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
