#include <iostream>

using namespace std;

int main()
{

    int choice, index, search, size, flag = 0;

    cout << "Enter the size array" << endl;
    cin >> size;
    int A[size];
    cout << "Enter the array in sorted order" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the Element to be searched" << endl;
    cin >> search;

    while (true)
    {

        cout << "MENU" << endl;
        cout << "Enter 1 for Linear Search" << endl;
        cout << "Enter 2 for Binary Search" << endl;
        cout << "Enter 3 to exit" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "Linear Search" << endl;
            for (int j = 0; j < size; j++)
            {
                if (A[j] == search)
                {
                    index = j;
                    flag = 1;
                }
            }

            if (flag == 1)
            {
                cout << search << " is found at the index " << index << endl;
            }
            else
            {
                cout << search << " is not found in the array" << endl;
            }
            break;
        }

        case 2:
        {
            cout << "Binary Search" << endl;
            int low = 0;
            int high = size - 1;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;

                if (A[mid] == search)
                    cout << search << " Element found at index " << mid << endl;

                if (A[mid] <= search)
                    low = mid + 1;

                else
                    high = mid - 1;
            }
            break;
        }

        case 3:
        {
            exit(0);
        }
        default:
        {
            cout << "No correct option chosen" << endl;
        }
        }
    }
}
