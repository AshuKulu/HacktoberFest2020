#include <iostream>
using namespace std;
int main()
{
  int i,fact=1,num;
  cout<<"Enter number for which u want to calculate factorial";
  cin>>num;

    for(i=1;i<=num;i++)
    {
      fact=fact*i;
    }

   cout<<"factorial of " <<num<< "is:" <<fact<<endl;

  return 0;
}
