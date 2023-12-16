//https://leetcode.com/problems/transpose-matrix/description/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {


        int n = matrix.size();
        int m = matrix[0].size();
         vector<vector<int>> tran(m,vector<int> (n,0));
        for(int i = 0 ; i < n ; i++) 
        {
            for(int j = 0 ; j < m ; j++) 
            {
                tran[j][i] = matrix[i][j];
            }
        }
        return tran;
    }
};