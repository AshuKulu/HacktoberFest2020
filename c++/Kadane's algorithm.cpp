#include<iostream> 
#include<vector>
#include<climits> 
using namespace std; 
  
int maxSubArraySum(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int sum=0,maxm=nums[0];
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxm=max(maxm,sum);
            if(sum<0){
                sum=0;
            }
        }
        
        return maxm;
        
}
  
/*Driver program to test maxSubArraySum*/
int main() 
{ 
    vector<int> a = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int max_sum = maxSubArraySum(a); 
    cout << "Maximum contiguous sum is " << max_sum; 
    return 0; 
} 