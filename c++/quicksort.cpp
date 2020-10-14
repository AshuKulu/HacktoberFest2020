#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[j], &arr[i]);
    }
  }

  swap(&arr[high], &arr[i + 1]);
  return (i + 1);
}

void qSort(int arr[], int low, int high)
{
  if (low < high) {
    int pi = partition(arr, low, high);
    qSort(arr, low, pi - 1);
    qSort(arr, pi + 1, high);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(void) {
  int arr[] = {10, 7, 8, 9, 1, 5};  
  int n = sizeof(arr) / sizeof(arr[0]);  
  qSort(arr, 0, n - 1);  
  cout << "Sorted array: \n";  
  printArray(arr, n);
  return 0;
}