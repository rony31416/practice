#include <bits/stdc++.h>

int fun(int i, int j, vector<vector<int>> &matrix, int m,
        vector<vector<int>> &dp) {
  if (j < 0 or j >= m)
    return -1e9;
  if (i == 0)
    return matrix[0][j];

  if (dp[i][j] != -1)
    return dp[i][j];

  int up = matrix[i][j] + fun(i - 1, j, matrix, m, dp);
  int left = matrix[i][j] + fun(i - 1, j - 1, matrix, m, dp);
  int right = matrix[i][j] + fun(i - 1, j + 1, matrix, m, dp);

  return dp[i][j] = max(up, max(left, right));
}

int getMaxPathSum(vector<vector<int>> &matrix) {
  int n = matrix.size();
  int m = matrix[0].size();
  int maxi = -1e9;
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
  for (int j = 0; j < m; j++) {
    maxi = max(maxi, fun(n - 1, j, matrix, m, dp));
  }
  return maxi;
}
