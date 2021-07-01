#include <iostream>
using namespace std;

int main()
{
    static int array[]{4,12,56,754,1235,435,64,1,2,3,4};
    int max = array[0];
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    int bookkeeping[max];

    for (int i = 0; i < sizeof(bookkeeping)/sizeof(bookkeeping[0])+1; i++) {
        bookkeeping[i] = 0;
    }

    for(int i : array) {
        bookkeeping[i] = bookkeeping[i]+1;
    }

    int count = 0;

    for (int i = 0; i < sizeof(bookkeeping)/sizeof(bookkeeping[0])+1; i++) {
        if (bookkeeping[i] != 0) {
            array[count++] = i;
            bookkeeping[i]--;
            i--;

        }
    }

    for (int i = 0; i < sizeof(array)/sizeof(array[0]);i++) {
        cout << array[i] << " ";
    }
}