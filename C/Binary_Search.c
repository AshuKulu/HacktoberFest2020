#include<stdio.h>
#include<stdlib.h>

void binarySearch(int searchValue, int a[], int n);

void selectionSort(int a[], int n)
{
    int i, j, minimunIndex, temp;

    printf("Just started to sort Using the Selection Sort Algorithm\n");
    // Started Sorting Using Selection sort
    for ( i = 0; i < n; i++)
    {
        minimunIndex = i;

        for ( j = i + 1; j < n; j++)
        {
            if (a[minimunIndex] > a[j])
                minimunIndex = j;    
        }
        temp = a[i];
        a[i] = a[minimunIndex];
        a[minimunIndex] = temp;
    }
    // Now the Array has been sorted in Ascending Order
    printf("Ended Sorting using Selection Sort\n");
}


void main()
{
    int length, i, searchValue;
    printf("Welcome to the Binary Search!!\n");
    printf("You can search the data element from an array, don't worry I will do it for you\n");
    printf("For simplicity here the data elements are considered as integers\n");
    printf("So let me know how many integers you want:\n");
    scanf("%d", &length);
    
    // Creating an array using calloc i.e. array for the user defined length
    int *a = (int *) calloc (length, sizeof(int));

    // Accepting the data elements for the array
    printf("Please enter the integers now:\n");
    for ( i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // Accepting the Value to be searched
    printf("Please enter the value you want me to search for:\n");
    scanf("%d", &searchValue);

    // Binary Search needs the sorted array as input without which the search can't occur
    // Hence sorting elements before the Search
    selectionSort(a, length);
    // Implementing the Binary Search on the Sorted Array
    binarySearch(searchValue, a, length);

    printf("Thanks for Investing time in Me!!");
}

void binarySearch(int searchValue, int a[], int n)
{
    int middle, first, last;
    first = 0;      // First initalized to the first position of the array
    last = n-1;     // Last initialized to the last position of the array

    middle = first + last / 2;      // Middle position of the array is calculated using this formula

    printf("Starting to search the Data element --> %4d\n", searchValue);   
    // Search until the last element is greater then equal to the first element
    while( first <= last)
    {
        // If the searched value is greater then the element at the middle position modify the first position to the upper half of the array
        if(a[middle] < searchValue)
            first = middle + 1;

        // Also check if the the element at the middle position is equal to the searched value
        else if(a[middle] == searchValue)
        {
            printf("The element %d was found at the location %d starting from 0\n", searchValue, middle);
            break;
        }
        // If the searched value is lesser then the element at the middle position modify the last position to the lower half of the array
        else
            last = middle - 1;
        
        middle = first + last / 2; 
    }

    // If first becomes greater then the last position in the array then the element is not at all found in the array
    if (first > last)
    {
        printf("Sorry the element you wanted me to Search doesn't exist in the given array\n");
    }

    printf("Just Ended Binary Search\n");
}