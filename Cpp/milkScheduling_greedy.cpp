// This is a very famous greedy alogrithm
// This is written by me, and this passed as test cases
// U can find the problem from link given below


// https://www.spoj.com/problems/MSCHED/

#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef vector<int> v;
bool cmp(vector<int> a, vector<int> b){
	return (a[0] >= b[0]);
}

int main() {
	int n; cin >> n;
	vector< v > arr;
	for(int i = 0; i < n; i++){
		v t;
		int gallons, dead;
		cin >>  gallons >> dead;
		t.push_back(gallons);
		t.push_back(dead);
		arr.push_back(t);
	}
	bool slot[n];
	sort(arr.begin(), arr.end(), cmp);
	/*for(int i = 0; i < n; i++){
		cout << arr[i][0] << " " << arr[i][1] << "\n";
	}
	*/
	for(int i = 0; i < n; i++) slot[i] = false;
	
	int res = 0;
	for(int i = 0; i < n; i++){
		for(int j = min(n, arr[i][1]) -1; j >= 0; j--){
			if (slot[j] == false){
				res += arr[i][0];
				slot[j] = true;
				break;
			}
		}
	}
	cout << res << "\n";


	return 0;
}
