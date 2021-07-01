#include <iostream>
using namespace std;
#define mod 1000000007
int main()
{
   long long int a,b;
   cin >> a >> b;
   long long int res=1;
   while(b>0)
   {
      if(b & 1)
         res=(res*a)%(long long int)mod;
      a=(a*a)%(long long int)mod;
      b=b>>1;
    }
      cout << res;
  }
