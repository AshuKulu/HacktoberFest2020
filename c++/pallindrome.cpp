#include<iostream>
using namespace std;
int main()
{
	int a,rem,rev=0,b;
	cout << "Enter number\n";
	cin >>a;
	b=a;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	if(rev==b)
	{
		cout <<b<< " is palindrome"<<endl;
	}
	else
	{
		cout <<b<< " is not pallindrome";
	}
}
