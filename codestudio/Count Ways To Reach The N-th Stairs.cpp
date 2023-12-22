//https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
long long MOD = 1e9+7;
long long int  f(int ind,vector<long long int>&dp) 
{
    if(ind == 0) return 1;
    if(dp[ind] != -1) return dp[ind];
    int left = f(ind-1,dp);
    int right = 0;
    if(ind > 1) right = f(ind-2,dp);
    return dp[ind] = (left+right)%MOD;
}
long long int countDistinctWays(int nStairs) {
    vector<long long int > dp(nStairs+1,-1);
     return f(nStairs,dp);
}