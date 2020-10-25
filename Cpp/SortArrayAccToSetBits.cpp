#include <bits/stdc++.h> 
using namespace std; 

void sortArr(int arr[], int n) 
{ 
	multimap<int, int> map; 

	for (int i = 0; i < n; i++) { 
		int count = 0; 
		int k = arr[i]; 

		// Counting no of setBits in arr[i] 
		while (k) { 
			k = k & k - 1; 
			count++; 
		} 

		// The count is subtracted from 32 
		// because the result needs 
		// to be in descending order 
		map.insert(make_pair(32 - count, arr[i])); 
	} 

	// Printing the numbers in descending 
	// order of set bit count 
	for (auto it = map.begin(); it != map.end(); it++) { 
		cout << (*it).second << " "; 
	} 
}
int main() 
{ 
	int arr[] = { 5, 2, 3, 9, 4, 6, 7, 15, 32 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	sortArr(arr, n); 

	return 0; 
} 