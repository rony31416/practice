#include <bits/stdc++.h>

int minSubsetSumDifference(vector<int> &arr, int n) {

  int sum = 0;
  for (auto u : arr)
    sum += u;
  vector<vector<bool>> dp(n, vector<bool>(sum + 1, 0));
  for (int i = 0; i < n; i++) {
    dp[i][0] = true;
  }
  dp[0][arr[0]] = true;
  for (int i = 1; i < n; i++) {
    for (int terget = 1; terget <= sum; terget++) {
      bool nottake = dp[i - 1][terget];
      bool take = false;
      if (terget >= arr[i])
        take = dp[i - 1][terget - arr[i]];

      dp[i][terget] = take | nottake;
    }
  }
  int mini = 1e9;

  for (int i = 0; i <= sum / 2; i++) {
    if (dp[n - 1][i] == true) {
      mini = min(mini, abs((sum - i) - i));
    }
  }
  return mini;
}


