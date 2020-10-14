/*Lexicographical Order
Send Feedback
Given a number n, print numbers from 1 to n in dictionary(lexicographical) order.
Sample Input
20
Sample Output
1
10
11
12
13
14
15
16
17
18
19
2
20
3
4
5
6
7
8
9*/

#include<bits/stdc++.h>
using namespace std;
void print(int num,int k){
    // base case
    if(k>num) return;
    for (int i=0;i<10;i++){
        if(k<=num){
            cout<<k<<endl;
            print(num,k*10);
            k++;
            if(k%10==0) return;
        }
    }
}
void lexicographicalOrder(int num){
	print(num,1);
}
