Code : Maximum Frequency Number
Send Feedback
You are given an array of integers that contain numbers in random order. Write a program to find and return the number which occurs the maximum times in the given input.
If two or more elements contend for the maximum frequency, return the element which occurs in the array first.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Most frequent element
Constraints :
0 <= N <= 10^8
Sample Input 1 :
13
2 12 2 11 12 2 1 2 2 11 12 2 6 
Sample Output 1 :
2
Sample Input 2 :
3
1 4 5
Sample Output 2 :
1



				PRACTICE

 	
	int highestFrequency(int *input, int n){	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
     	
     	
     	
 	}



				SOLUTION


#include <bits/stdc++.h>
using namespace std;

int highestFrequency(int *input, int n){	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
    int maxf=1;
    int pos=0;
    unordered_map <int,int> m;
    
    for(int i=n-1;i>=0;i--){
        if(m.count(input[i])==0)
            m[input[i]]=1;
        else{
            m[input[i]]+=1;
            if(maxf<=m[input[i]]){
                pos=i;
                maxf=m[input[i]];
            }
        }
    }
    return input[pos];
     	
     	
     	
}

#include<iostream>
using namespace std;
#include "solution.h"

int main()
{
    int n;
    int input[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }
    int maxKey= highestFrequency(input, n);
    cout<<maxKey;
    return 0;
}



