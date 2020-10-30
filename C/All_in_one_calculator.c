#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    //Calculator in C for Addition, Substraction, Multiplication, and Print N numbers.
    while (1)
    {
    int num, a, b, c;
    printf("\n\nEnter a number to Select What you Want to do\n1.Addition\n2.Substraction\n3.muitiplication\n4.Print N numbers\n5.Exit\nEnter Your Choice :");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("enter two number here to add-:\n");
        scanf("%d%d",&a,&b);
        printf("Sum of %d and %d is %d", a,b, a+b);
        break;
    case 2:
        printf("Enter two number here to susbstract-:\n");
        scanf("%d%d", &a, &b);
        printf("The substraction of %d and %d is %d", a,b, a-b);
        break;
    case 3:
        printf("Enter two number to multiply-:");
        scanf("%d%d", &a, &b);
        printf("The multiplication of %d and %d is %d\n", a,b, a*b);
        break;
    case 4:
        printf("Enter N number to print : ");
        scanf("%d",&a);
        for ( b = 1; b<=a; b++)
        {
            printf("%d",b);
        }
        break;
    case 5:
         printf("Thank You....Welcome Again!!!");
        exit(0);
        default:
        printf("Sorry Input cannot find..(;-C)");
        break;
    }
  }  
    return 0;
  
}
