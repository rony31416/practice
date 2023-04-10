#include <bits/stdc++.h>
long fun(int *a, int i, int T, vector<vector<long>> &dp) {
  if (i == 0)
    return (T % a[0] == 0);

  if (dp[i][T] != -1)
    return dp[i][T];

  long notTake = fun(a, i - 1, T, dp);
  long take = 0;
  if (a[i] <= T) {
    take = fun(a, i, T - a[i], dp);
  }
  return dp[i][T] = take + notTake;
}

long countWaysToMakeChange(int *denominations, int n, int value) {
  vector<vector<long>> dp(n + 1, vector<long>(value + 1, -1));
  return fun(denominations, n - 1, value, dp);
}
