/*
This is implementation of Radix sort for variable base
@Author Srinidh Reddy
*/

#include <stdio.h>
#include <stdlib.h>

//Function to find max element in array 
int find_max(int a[] , int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }   
    }
    return max;
}

//Function for countsort
// The digit is represented by dgt. 
void countsort(int a[],int n,int dgt,int base){

    int i;
    int arr_bucket[base];
    int temp[n];
    for(i=0;i<base;i++)
    {
        arr_bucket[i] = 0;
    }
        
    for(i=0;i<n;i++)
    {
        arr_bucket[(a[i]/dgt)%base]++;
    }

    for(i=1;i<base;i++)
    {
        arr_bucket[i]=arr_bucket[i]+arr_bucket[i-1];
    }

    for(i=n-1;i>=0;i--)
    {
        temp[arr_bucket[(a[i]/dgt)%base]-1] = a[i];
        arr_bucket[(a[i]/dgt)%base]--;
    }

    for(i=0;i<n;i++)
    {
        a[i] = temp[i];
    }
    
}

//Function for radixsort
void radixsort(int a[] , int n, int base)
{
    int max;
    max = find_max(a, n);

    for(int dgt = 1; max/dgt > 0 ; dgt = dgt * base)
    {
        countsort(a, n , dgt, base);
    }
}

int main()
{
    int x, n, base;
    printf("Enter the number of elements for Sorting: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements for Sorting: ");
    for(x = 0; x < n; x++)
    {
        scanf("%d",&a[x]);
    }
    printf("Enter the base that has to be used for Sorting: ");
    scanf("%d",&base);
    radixsort(a , n ,base);
    printf("The Sorted elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}    
    
