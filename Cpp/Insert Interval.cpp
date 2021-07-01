//https://leetcode.com/problems/insert-interval/

//This is the link to the problem you can go and see the problem from there

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int> > ans;
        for(int i = 0; i < n; ++i){
            if(intervals[i][1] < newInterval[0]){
                ans.push_back(intervals[i]);
            }
            else if(newInterval[1] < intervals[i][0]){
                ans.push_back(newInterval);
                newInterval = intervals[i];
            }
            else{
                newInterval[0] = min(newInterval[0],intervals[i][0]);
                newInterval[1] = max(newInterval[1],intervals[i][1]);
            }
            
        }
        ans.push_back(newInterval);
        return ans;
    }
};
