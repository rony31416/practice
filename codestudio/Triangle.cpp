#include <bits/stdc++.h> 

int fun(vector<vector<int>> &tri,int i,int j,int n,vector<vector<int>> &dp)
{
 
  if(i == n ) return dp[i][j] =  tri[i][j];
  
  if(dp[i][j] != -1) return dp[i][j];  
  int left = tri[i][j] + fun(tri,i+1,j,n,dp);
  
  int up = tri[i][j] + fun(tri,i + 1, j + 1,n,dp);

  return dp[i][j] =  min(up,left);

}

int minimumPathSum(vector<vector<int>>& triangle, int n){

         vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
	return fun(triangle,0,0,n-1,dp);
}
