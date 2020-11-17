#include<bits/stdc++.h>
using namespace std;
int extended_euclid(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int d=extended_euclid(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
int modular_inverse(int a,int m)
{
    int g,x,y;
    g=extended_euclid(a,m,x,y);
    return (x%m+m)%m;
}
void chinese_rem(int n,int num[],int rem[])
{
    int prd=1,ans=0;
    for(int i=0;i<n;i++)
    {
        prd=prd*num[i];
    }
    int pp[n],pi[n];
    for(int i=0;i<n;i++)
    {
        pp[i]=prd/num[i];
        pi[i]=modular_inverse(pp[i],num[i]);
        ans=(pp[i]*pi[i]*rem[i])+ans;
    }
    ans=ans%prd;
    cout<<ans;
}
int main()
{
    int n;
    cin>>n;
    int num[n],rem[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>rem[i];
    }
    chinese_rem(n,num,rem);
    return 0;
}
