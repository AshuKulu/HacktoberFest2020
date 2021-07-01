#include <iostream>
using namespace std;

void print(int a[], int sz)
{
    for (int i = 0; i < sz; i++) cout << a[i] << " ";
    cout << endl;
}

void merge(int a[], const int low, const int mid, const int high)
{
    int *temp = new int[high-low+1];

    int left = low;
    int right = mid+1;
    int current = 0;
  
    while(left <= mid && right <= high) {
        if(a[left] <= a[right]) { 
            temp[current] = a[left];
            left++;
        }
        else {
            temp[current] = a[right];
            right++;
        }
        current++;
    }
    
    if(left > mid) {
        for (int i = right; i <= high; i++) {
            temp[current] = a[i];
            current++;
        }
    }
    else {
        for(int i=left; i <= mid; i++) {
            temp[current] = a[i];
            current++;
        }
    }
    for(int i=0; i<=high-low;i++) {
        a[i+low] = temp[i];
    }
    delete[] temp;
}

void merge_sort(int a[], const int low, const int high)
{
    if(low >= high) return;
    int mid = (low+high)/2;
    merge_sort(a, low, mid);
    merge_sort(a, mid+1, high);
    merge(a, low, mid, high);
}

int main()
{
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int arraySize = sizeof(a)/sizeof(int);
    print(a, arraySize);
    merge_sort(a, 0, (arraySize-1) );
    print(a, arraySize);
    return 0;
}