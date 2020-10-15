#include<bits/stdc++.h>
using namespace std;
void euler_totient(long long int n)
{
    long long int result=n;
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
        while(n%i==0)
        {
            n/=i;
        }
        result -= result/i;
        }
    }
    if(n>1)
    {
        result -= result/n;
    }
    cout<<result<<"\n";
}
int main()
{
    long long int n,t;
    cin>>t;
    for(long long int i=0;i<t;i++)
    {
        cin>>n;
        euler_totient(n);
    }
    return 0;
}
