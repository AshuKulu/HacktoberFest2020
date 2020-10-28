/*
This is an algorithm for solving the problem of rotating a 2D Image by 90-degrees clockwise.
The code is commented for better understanding.
Refer to this link for attempting this problem: https://leetcode.com/problems/rotate-image/

--------------------------------
Author: Mudassar Raza(https://github.com/mraza1312)
Suggestions are most welcome.
--------------------------------
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // 1-first do reverse up side down
        int n=matrix.size(); 
        
        for(int i=0; i<n/2 ; i++)           // or use function: reverse(mat.begin(), mat.end())
            swap(matrix[i], matrix[n-1-i]);     
        
        // swap symmetry ie take transpose
        
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                swap(matrix[i][j], matrix[j][i]);
    }
};
