#include <bits/stdc++.h>

bool fun(int i, int k, vector<int> &arr, vector<vector<int>> &dp)
{
    if(k == 0 ) return true;
    if(i == 0) return (arr[i] == k);
    
    if(dp[i][k] != -1) return dp[i][k];

    bool notpick = fun(i-1,k,arr,dp);
    bool pick = false;
    if(k>= arr[i])
    pick = fun(i-1,k-arr[i],arr,dp);
    return dp[i][k] = notpick || pick;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(n+1,vector<int> (k+1,-1));
    return fun(n,k,arr,dp);
}
/*
#include <bits/stdc++.h>

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n,vector<bool> (k+1,0));
    for(int i = 0 ; i < n ; i++) 
    {
        dp[i][0] = true;
    }
    dp[0][arr[0]] = true;
    for(int i = 1 ; i < n ; i++) 
    {
        for(int terget = 1 ; terget <= k ; terget++)
        {
            bool nottake = dp[i-1][terget];
            bool take = false;
            if(terget>= arr[i])
            take = dp[i-1][terget-arr[i]];

            dp[i][terget] = take | nottake;
        }
        
    }
    return dp[n-1][k];
}
*/

