#include <bits/stdc++.h>

int fun(int i, int len, vector<int> &price, vector<vector<int>> &dp) {
  if (i == 0) {
    return len * price[0];
  }
  if (dp[i][len] != -1)
    return dp[i][len];
  int not_take = 0 + fun(i - 1, len, price, dp);
  int take = -1e9;
  int l = i + 1;
  if (l <= len)
    take = price[i] + fun(i, len - l, price, dp);

  return dp[i][len] = max(take, not_take);
}

int cutRod(vector<int> &price, int n) {
  vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
  return fun(n - 1, n, price, dp);
}
