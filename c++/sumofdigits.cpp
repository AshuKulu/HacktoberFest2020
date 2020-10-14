#include<iostream>
using namespace std;
int main(){
   int n;
   int r,ans=0;
   cin>>n;
   while(n>0){
       r=n%10;
       ans=ans+r;
       n=n/10;
   }
   cout<<"the sum is:"<<ans;
    return 0;
}