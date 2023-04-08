#include <bits/stdc++.h>

int fun(int i , vector<int> &nums,vector<int> &dp)
{
   if(i == 0 ) return dp[i] = nums[i];
   if(i < 0 ) return 0;

   if(dp[i] != - 1) return dp[i];
   
   int pick = nums[i] + fun(i-2,nums,dp);
   int notPick = 0 + fun(i-1,nums,dp);

   return dp[i] = max(pick,notPick);

}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int>dp(n+1,-1);
    return fun(n-1,nums,dp);
}
