#include<iostream>
using namespace std;
int main()
{
    
    int n;
    
    int p;
    cin >> n>>p;
    float inc = 1.0;
    float ans=0;
    for (int i = 0; i <= p; i++)
    {
        while (ans*ans <= n)
        {
         ans = ans + inc;
        }
        ans = ans-inc;
        inc = inc / 10;
    }
    cout<<ans<<endl;

    return 0;
}