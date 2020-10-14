#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        int val = i;
        for (int c = 1; c <= i; c++)
        {
            cout << val;
            val = val + 1;
        }
        val = val - 2;
        for (int k = 1; k <= i - 1; k++)
        {
            cout << val;
            val = val - 1;
        }

        cout << endl;
    }
    return 0;
}