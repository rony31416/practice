#include <bits/stdc++.h>

int fun(int i, int j, vector<vector<int>> &matrix, int m,
        vector<vector<int>> &dp) {
  if (j < 0 or j >= m)
    return 1e9;
  if (i == 0)
    return matrix[0][j];

  if (dp[i][j] != -1)
    return dp[i][j];

  int up = matrix[i][j] + fun(i - 1, j, matrix, m, dp);
  int left = matrix[i][j] + fun(i - 1, j - 1, matrix, m, dp);
  int right = matrix[i][j] + fun(i - 1, j + 1, matrix, m, dp);

  return dp[i][j] = min(up, min(left, right));
}

int minFallingPathSum(vector<vector<int>> &matrix,int k) {
  int n = k;
  int m =k;
  int mini = 1e9;
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
  for (int j = 0; j < m; j++) {
    mini = min(mini, fun(n - 1, j, matrix, m, dp));
  }
  return mini;
}
