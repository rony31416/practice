#include <bits/stdc++.h>

int fun(string &s1, string &s2, int i, int j, vector<vector<int>> &dp) {

  if (i < 0 or j < 0)
    return 0;
  if (dp[i][j] != -1)
    return dp[i][j];

  if (s1[i] == s2[j])
    return 1 + fun(s1, s2, i - 1, j - 1, dp);

  return dp[i][j] = max(fun(s1, s2, i - 1, j, dp), fun(s1, s2, i, j - 1, dp));
}

int getLengthOfLCS(string &str1, string &str2) {
  int i = str1.size();
  int j = str2.size();
  vector<vector<int>> dp(i + 1, vector<int>(j + 1, -1));
  return fun(str1, str2, i - 1, j - 1, dp);
}
