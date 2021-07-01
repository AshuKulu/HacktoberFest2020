#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    static int array[]{4,12,56,754,1235,435,64,1,2,3,4};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, array + size);
    int x = 3;
    int a = 0;
    int b = size-1;

    while (a <= b) {
        int k = (a+b)/2;
        if (array[k] == x) {
            cout << "Found at index: " << k;
        }
        if (array[k] > x) {
            b = k-1;
        } else {
            a = k+1;
        }
    }


}
