#include <iostream>
using namespace std;
int main()
{
    int i=1, j, n;
    cin >> n;
   while(i<=n)
    {
        j=1;
        if (i % 2 != 0)
        {
            while (j <= i)
            {
                cout << 1;
                j++;
            }
        }
        else
        {
            cout << 1;
            while (j <= i - 2)
            {
                cout << 0;
                j++;
            }
            cout << 1;
        }
        cout << endl;
        i=i+1;
    }
    

return 0;
}