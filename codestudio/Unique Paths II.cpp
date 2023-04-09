const int M = 1e9+7;
int fun(int i , int j , vector<vector<int>> &mat, vector<vector<int>> &dp)
{ 
     
      if(i >= 0 and j >= 0  and mat[i][j] == -1)return 0;
     if(i == 0 and j == 0 ) return dp[i][j] = 1;
     if(i < 0 or j < 0)return 0;

     if(dp[i][j] != -1) return dp[i][j];

     int up = fun(i-1,j,mat,dp);
     int left = fun(i, j - 1 , mat,dp);

     return dp[i][j] = (up+left)%M;
}

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    
    vector<vector<int> > dp(n+1,vector<int> (m+1,-1));
    
    return fun(n-1,m-1,mat,dp);
}
