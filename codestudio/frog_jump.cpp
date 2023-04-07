#include <bits/stdc++.h> 

int fun(int i,vector<int> &heights,vector<int> &dp)
{
    if(i == 0 ) return 0;
    if(dp[i] != -1) return dp[i];

    int left = fun(i-1, heights,dp)+ abs(heights[i] - heights[i-1]);

    int right = INT_MAX;
    if(i > 1) 
     right = fun(i-2, heights,dp)+ abs(heights[i] - heights[i-2]);

    return dp[i] =  min(left,right);


}
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n+1,-1);
    return fun(n-1,heights,dp);
}
