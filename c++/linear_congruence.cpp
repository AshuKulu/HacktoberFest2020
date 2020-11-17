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
    int d = extended_euclid(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
void mod_inverse(int a,int b,int m)
{
    int x,y;
    int g;
    g=extended_euclid(a,m,x,y);
    if(b%g!=0)
        cout<<"Modular inverse does not exist!";
    else
    {
        x=x*(b/g);
        x=(x%m+m)%m;
        cout<<"Modular inverse of "<<a<<" is "<<x;
    }
}
int main()
{
    int a,m,b;
    cin>>a>>b>>m;
    mod_inverse(a,b,m);
    return 0;
}
