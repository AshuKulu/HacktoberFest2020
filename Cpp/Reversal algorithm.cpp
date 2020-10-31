#include <bits/stdc++.h> 
  
/*Function to reverse arr[]  
from index start to end*/
void reverseArray(int arr[], int start, 
                            int end) 
{ 
    while (start < end) 
    { 
        std::swap(arr[start], arr[end]); 
        start++; 
        end--; 
    } 
} 
  
/* Function to right rotate arr[] 
of size n by d */
void rightRotate(int arr[], int d, int n) 
{ 
    reverseArray(arr, 0, n-1); 
    reverseArray(arr, 0, d-1); 
    reverseArray(arr, d, n-1); 
} 
  
/* function to print an array */
void printArray(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) 
        std::cout << arr[i] << " "; 
} 
  
// driver code 
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5,  
                6, 7, 8, 9, 10}; 
      
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 3; 
      
    rightRotate(arr, k, n); 
    printArray(arr, n); 
  
    return 0; 
}  