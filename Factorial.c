#include<iostream>
using namespace std;
int main()
{
  	int i,fac=1,num;
  	cout<<"Enter number of which u want to calculate factorial";
  	cin>>num;
	if(num<0)
	{
		cout<<"A negative number doesnt have any factorial !";
	}
	else
	{
		for(i=1;i<=num;i++)
   	 	{
  	    	fac=fac*i;
 	   	}
   		cout<<"factorial of " <<num<< "is:" <<fac<<endl;
	}
  	return 0;
}
