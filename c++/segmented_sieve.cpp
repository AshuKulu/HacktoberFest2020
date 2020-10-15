#include<iostream>
#include<vector>
using namespace std;
#define MAX 1000001

vector<int>* sieve()
{
    bool is_prime[MAX];
    for(int i=0;i<=MAX;i++)
    {
        is_prime[i]=true;
    }
    for(int i=2;i*i<=MAX;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=MAX;j+=i)
            {
                is_prime[j]=false;
            }
        }
    }
    vector<int>*primes = new vector<int>();
    primes->push_back(2);
    for(int i=3;i<=MAX;i+=2)
    {
        if(is_prime[i])
        {
            primes->push_back(i);
        }
    }
    return primes;
}
void print_primes(int l,int u,vector<int> * & primes)
{
    bool is_prime[u-l+1];
    for(int i=0;i<=(u-l);i++)
    {
        is_prime[i]=true;
    }
    for(int i=0;(primes->at(i)*(primes->at(i)))<=u;i++)
    {
        int currprime = primes->at(i);
        int base = ((l/currprime)*(currprime));
        if(base < l)
        {
            base = base + currprime;
        }
        for(int j = base;j<=u;j += currprime)
        {
            is_prime[j-l]=false;
        }
        if(base == currprime)
        {
            is_prime[base-l]=true;
        }
    }
    for(int i=0;i<=(u-l);i++)
    {
        if(is_prime[i])
        {
            cout<< i+l <<" ";
        }
    }
}
int main()
{
    vector<int> *primes = sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int l[n],u[n];
        for(int i=0;i<n;i++)
        {
            cin>>l[i]>>u[i];
            print_primes(l[i],u[i],primes);
        }
    }
}
