#include<iostream>
using namespace std;

int main(){
	int digit,num,n,rev=0;
	cout<<"Enter a number = ";     // Eg:131
	cin>>num;
	n=num;
	while(num!=0){
		digit= num%10;            // digit=131%10=1
		rev=(rev*10)+digit;       // rev= (0*10)+1= 1
		num= num/10;              // 131/10 = 13
		                          // again the loop will iterate with num=13 till the condition num!=0 is satisfied
	}
	if(n==rev){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not a palindrome"<<endl;
	}
	return 0;
}
