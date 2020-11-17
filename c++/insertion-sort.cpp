// Program which displays insertion sort in C++ :
#include <iostream>
using namespace std;

class insertionSort {
  public:
  int arr[50], n, i, j, temp;
  void get_ele() {
    cout << "Enter the number of elements: ";
    cin >> n;
    for (i = 0; i < n; i++) {
      cout << "Enter number: ";
      cin >> arr[i];
    }
  }
  void find() {
    for (i = 1; i < n; i++) {
      temp = arr[i];
      j = i - 1;
      while (temp < arr[j] && j >= 0) {
        arr[j + 1] = arr[j];
        --j;
      }
      arr[j + 1] = temp;
    }
    cout << "\nSorted Elements are: " << endl;
    for (i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
  }
};
int main() {
  insertionSort obj;
  obj.get_ele();
  obj.find();
}