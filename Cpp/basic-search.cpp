#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    static int array[]{4,12,56,754,1235,435,64,1,2,3,4};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, array + size);
    int x = 3;

    for(int i = 0; i < size; i++) {
        if (array[i] == x) {
            cout << "Fount at index: " << i;
        }
    }


}
