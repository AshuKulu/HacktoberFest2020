#include<iostream>
using namespace std;
void multiply(long long int a[2][2],long long int b[2][2])
{
    long long int m[2][2];
    int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            m[i][j]=0;
            for(k=0;k<2;k++)
            {
                m[i][j]=(m[i][j]+a[i][k]*b[k][j])%1000000007;
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            a[i][j]=m[i][j];
        }
    }
}
void exp(long long int a[2][2],long long int n)
{
    int i,j;
    long long int res[2][2]={1,0,0,1};
    while(n>0)
    {
        if(n%2==1)
        {
            multiply(res,a);
        }
        multiply(a,a);
        n=n/2;
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            a[i][j]=res[i][j];
        }
    }
}
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        long long int a[2][2]={0,1,1,1};
        long long int n;
        cin>>n;
        if(n==0)
            cout<<0<<"\n";
        else if(n==1)
            cout<<2<<"\n";
        else
        {
            exp(a,n+1);
            long long int ans;
            ans=(a[0][1]+a[1][1])%1000000007;
            cout<<ans<<"\n";
        }
    }
    return 0;
}
