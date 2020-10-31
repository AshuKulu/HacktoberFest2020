// Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int curr_min=arr[0],curr_max=arr[0],result=arr[0];
	    for(int i=1;i<arr.size();i++){
            int curr_max_prev=curr_max;
	        curr_max=max(arr[i],max(arr[i]*curr_max,arr[i]*curr_min));
	        curr_min=min(arr[i],min(arr[i]*curr_max_prev,arr[i]*curr_min));
	        result=max(result,curr_max);
	    }
	    return result;
    }
};