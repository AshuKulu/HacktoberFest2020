#include <iostream> 

using namespace std; 
void downheapify(int arr[], int n, int i) 
{ 
//g=greatest
//l=left
//r=right
	int g = i; 
	int l = 2*i + 1; 
	int r = 2*i + 2; 
	if (l < n && arr[l] > arr[g]) 
		g = l; 

	if (r < n && arr[r] > arr[g]) 
		g = r;  
	if (g != i) 
	{ 
		swap(arr[i], arr[g]); 
		downheapify(arr, n, g); 
	} 
} 

void heapsort(int arr[], int n) 
{  
	for (int i = n / 2 - 1; i >= 0; i--) 
		downheapify(arr, n, i); 

	for (int i=n-1; i>0; i--) 
	{ 
		swap(arr[0], arr[i]);
		downheapify(arr, i, 0); 
	} 
} 

int main() 
{ 
	int arr[] = {5,4,3,2,1}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	heapsort(arr, n); 

	cout << "Sorted array is \n"; 
	for (int i=0; i<n ; i++)
  cout << arr[i] << " ";
} 
