//C++ program to print max subarray sum 
#include<iostream> 
using namespace std; 
int maxSubArraySum(int a[], int size) 
{ 
int max_so_far = a[0]; 
int curr_max = a[0]; 

for (int i = 1; i < size; i++) 
{ 
		curr_max = max(a[i], curr_max+a[i]); 
		max_so_far = max(max_so_far, curr_max); 
} 
return max_so_far; 
} 

//main function to test the program
int main() 
{ 
int a[] = {-1, 5, 8, 9, 2}; 
int n = sizeof(a)/sizeof(a[0]); 
int max_sum = maxSubArraySum(a, n); 
cout << "Maximum subarray sum " << max_sum; 
return 0; 
} 
//output is 24
