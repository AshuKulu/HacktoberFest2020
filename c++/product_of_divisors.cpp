#include<bits/stdc++.h>
using namespace std;
long long int exp(long long int a,long long int b)
{
    long long int res=1;
    while(b>0)
    {
        if(b%2==1)
            res=res*a;
        a=a*a;
        b/=2;
    }
    return res;
}
void pd_of_divisors(long long int n)
{
    long long int n1=n;
    long long int ct=0;
    long long int pd=1,sum;
    while(n%2==0)
    {
        ct++;
        n/=2;
    }
    sum=exp(2,(ct+1)) - 1;
    sum=sum/(2-1);
    pd=pd*sum;
    for(int i=3;i*i<=n;i+=2)
    {
        ct=0;
        while(n%i==0)
        {
            ct++;
            n/=i;
        }
        sum=exp(i,(ct+1)) - 1;
        sum=sum/(i-1);
        pd=pd*sum;
    }
    if(n>1)
    {
        sum=exp(n,2)-1;
        sum=sum/(n-1);
        pd=pd*sum;
    }
    pd=pd-n1;
    cout<<pd<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int n;
        scanf("%lld",&n);
        pd_of_divisors(n);
    }
    return 0;
}
