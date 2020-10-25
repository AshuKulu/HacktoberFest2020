/// NICOI ALEXANDRU - tr0yyy
/// cpp implementation of finding the max element of an array using divide et impera

#include <iostream>

using namespace std;

int v[1001] , n;

int divide(int p , int u)
{
    int m , nr1 , nr2;
    if(p == u)
        return v[p];
    else{
        m = (p+u)/2;
        nr1 = divide(p,m);
        nr2 = divide(m+1,u);
        if(nr1 > nr2)
            return nr1;
        else return nr2;
    }
}

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> v[i];
    cout << divide(1,n);
}
