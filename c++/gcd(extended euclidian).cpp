#include<iostream>
using namespace std;
int gcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    else
    {
        int x1,y1;
        int d=gcd(b,a%b,x1,y1);
        x=y1;
        y=x1-(a/b)*y1;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    int x,y;
    int res;
    res=gcd(a,b,x,y);
    cout<<a<<" "<<b<<" "<<x<<" "<<y;

}
