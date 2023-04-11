#include <bits/stdc++.h>
int fun(int i, int pre, int arr[], int n,vector<vector<int>>&dp) {
  if (i == n)
    return 0;
  if(dp[i][pre+1] != -1) return dp[i][pre+1];
  
  int notTake = 0 + fun(i + 1, pre, arr, n,dp);
  if (pre == -1 || arr[i] > arr[pre])
   notTake =  max(1 + fun(i + 1, i, arr, n,dp), notTake);

   return dp[i][pre+1] = notTake;
}
int longestIncreasingSubsequence(int arr[], int n) { 
    vector<vector<int>> dp(n,vector<int>(n+1,-1));
    return fun(0,-1,arr,n,dp); 
    }

