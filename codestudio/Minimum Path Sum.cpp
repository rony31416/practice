#include <bits/stdc++.h> 

long long int fun(int i,int j,vector<vector<int>> &grid,vector<vector<long long int>> &dp)
{
    if(i == 0 and j == 0) return dp[i][j] = grid[i][j];
    if(i < 0 or j < 0 ) return INT_MAX;

     if(dp[i][j] != -1) return dp[i][j];

    long long int up =  grid[i][j] + fun(i-1,j,grid,dp);
    long long int left = grid[i][j] + fun(i,j-1,grid,dp);

    return dp[i][j] = min(up,left);

}

int minSumPath(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<long long int> > dp(n+1,vector<long long int>(m+1,-1));
    return fun(n-1,m-1,grid,dp);
    
}
