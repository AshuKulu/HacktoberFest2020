// cpp program to find the median of incoming numbers in O(nlog(n)) complexity

#include <iostream>
using namespace std;
#include <queue>

int main() {
	int n; cin >> n;
	priority_queue<int> leftMxPq;
	priority_queue <int, vector<int>, greater<int>> rgtMnPq;
	float cm = 0.0f; //cm = current median
	int left_size;
	int right_size;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		left_size = leftMxPq.size();
		right_size = rgtMnPq.size();
		if (x > cm){
			if (right_size > left_size){
				int t = rgtMnPq.top();
				leftMxPq.push(t);
				rgtMnPq.pop();
			}
			rgtMnPq.push(x);
		}
		else{
			if (left_size > right_size){
				int t = leftMxPq.top();
				rgtMnPq.push(t);
				leftMxPq.pop();
			}
			leftMxPq.push(x);
		}
		left_size = leftMxPq.size();
		right_size = rgtMnPq.size();
		if (left_size == right_size)
		    cm = (leftMxPq.top() + rgtMnPq.top())/2.0f;
		else if (left_size > right_size)
			cm = leftMxPq.top();
		else
		    cm = rgtMnPq.top();
		
		printf("%.2f ", cm);
	}
	return 0;
}
