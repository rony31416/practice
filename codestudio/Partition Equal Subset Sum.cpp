
#include <bits/stdc++.h>

bool fun(int i, int k, vector<int> &arr, vector<vector<int>> &dp) {
  if (k == 0)
    return true;
  if (i == 0)
    return (arr[i] == k);

  if (dp[i][k] != -1)
    return dp[i][k];

  bool notpick = fun(i - 1, k, arr, dp);
  bool pick = false;
  if (k >= arr[i])
    pick = fun(i - 1, k - arr[i], arr, dp);
  return dp[i][k] = notpick || pick;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
  vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
  return fun(n, k, arr, dp);
}
bool canPartition(vector<int> &arr, int n) {
  int sum = 0;
  for (auto u : arr)
    sum += u;
  if (sum & 1)
    return false;
  return subsetSumToK(n, sum / 2, arr);
}
