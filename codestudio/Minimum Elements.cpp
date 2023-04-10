#include <bits/stdc++.h>

int fun(vector<int> &num, int i, int T, vector<vector<int>> &dp) {
  if (i == 0) {
    if (T % num[0] == 0)
      return T / num[0];
    else
      return 1e9;
  }
  if (dp[i][T] != -1)
    return dp[i][T];
  int notTake = 0 + fun(num, i - 1, T, dp);
  int take = 1e9;
  if (num[i] <= T)
    take = 1 + fun(num, i, T - num[i], dp);

  return dp[i][T] = min(take, notTake);
}

int minimumElements(vector<int> &num, int x) {
  int n = num.size();
  vector<vector<int>> dp(n + 1, vector<int>(x + 1, -1));
  int ans = fun(num, n - 1, x, dp);
  if (ans >= 1e9)
    ans = -1;
  return ans;
}
