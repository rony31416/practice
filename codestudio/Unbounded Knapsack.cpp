#include <bits/stdc++.h>
int fun(vector<int> &wt, vector<int> &val, int i, int bag,
        vector<vector<int>> &dp) {
  if (i == 0) {
    return (bag / wt[0]) * val[0];
  }
  if (dp[i][bag] != -1)
    return dp[i][bag];

  int notTake = 0 + fun(wt, val, i - 1, bag, dp);
  int take = 0;
  if (wt[i] <= bag)
    take = val[i] + fun(wt, val, i, bag - wt[i], dp);

  return dp[i][bag] = max(take, notTake);
}
int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight) {
  vector<vector<int>> dp(n + 1, vector<int>(w + 2, -1));
  return fun(weight, profit, n - 1, w, dp);
}

