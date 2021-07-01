#include<stdio.h>
#include<stdlib.h>
void linearSearch(int searchValue, int a[], int n);

void main()
{
    int length, j, searchValue;
    printf("Welcome to Linear Search!!\n");
    printf("You can search a data element from an array\n");
    printf("For Simplicity lets start with the data elements as integers.\n");
    printf("Please enter the length of the array you want me to create:\n");
    scanf("%d", &length);

    // Creating an array using calloc i.e. array for the user defined length
    int *a = (int *) calloc (length, sizeof(int));
    
    // Accepting the data elements for the array
    printf("Now you can enter the integers of your choice:\n");
    for(j = 0; j < length; j++)
    {
        scanf("%d", &a[j]);
    } 
    
    // Accepting the Value to be searched
    printf("Now Please enter the value you want me to search\n");
    scanf("%d", &searchValue);

    // Implementing the Linear Search
    linearSearch(searchValue, a, length);

    printf("Thanks For investing time in Me!!");
}

void linearSearch(int searchValue, int a[], int n)
{   
    int i;
    printf("I have just started to search for the Value --> %4d\n", searchValue);
    // Linearly Search for element in the array for the searched value
    for ( i = 0; i < n; i++)
    {
        if (a[i] == searchValue)
        {
            printf("Here you go the element %d is found at %d location from the starting from 0\n",searchValue, i);
            break;
        }        
    }
    // If the whole array is traversed and the searched value is not found at any location then it doesn't exist in the data structure
    if ( i == n)
    {
        printf("Sorry, the element you wanted me to found doesn't exist in the given array.\n");
    }
    printf("The Linear Search has Ended\n");    
}