#include<iostream>
using namespace std;

int main(){
	int digit,num,n,rev;
	cout<<"Enter a number = ";
	cin>>num;
	n=num;
	while(num!=0){
		digit= num%10;
		rev=(rev*10)+digit;
		num= num/10;
	}
	if(n==rev){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not a palindrome"<<endl;
	}
	return 0;
}
