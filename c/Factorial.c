#include <iostream>
using namespace std;
int main()
{
  int i,fac=1,num;
  cout<<"Enter number of which you want to calculate factorial";
  cin>>num;
    if(num>=0)
    {
       for(i=1;i<=num;i++)
      {
        fac=fac*i;
      }
   cout<<"factorial of " <<num<< "is:" <<fac<<endl;
    }
    else
    {
     cout<<"can't find factorial for negative numbers";

  return 0;
}
