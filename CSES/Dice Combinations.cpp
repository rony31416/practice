#include <bits/stdc++.h>
using namespace std;

const int modulo = 1e9 + 7;

int f(int n, vector<int> &dp)
{
   if (n == 0)
      return 1;

   int ans = 0;

   if (dp[n] != -1)
      return dp[n] % modulo;
   ans += f(n - 1, dp);
   ans = ans % modulo;
   if (n > 1)
      ans += f(n - 2, dp);
   ans = ans % modulo;

   if (n > 2)
      ans += f(n - 3, dp);
   ans = ans % modulo;
   if (n > 3)
      ans += f(n - 4, dp);
   ans = ans % modulo;
   if (n > 4)
      ans += f(n - 5, dp);
   ans = ans % modulo;
   if (n > 5)
      ans += f(n - 6, dp);
   ans = ans % modulo;
   return dp[n] = ans;
}

int main()
{

   int n;
   cin >> n;
   vector<int> dp(n + 1, -1);
   cout << f(n, dp) << "\n";
}