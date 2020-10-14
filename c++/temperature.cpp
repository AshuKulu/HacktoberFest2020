#include <iostream>
using namespace std;
int main()
{
    int f=0;
    int c;
    int n;
    cin >> n;
    while (f <=n)
    {
        c = (5 * (f - 32)) / 9;
        cout << f << " " <<c<< endl;
        f = f + 20;
    }
    
    return 0;
}