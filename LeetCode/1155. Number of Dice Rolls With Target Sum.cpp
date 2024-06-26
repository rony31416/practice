//https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/description/


class Solution {
public:
    const int MOD = 1e9+7;

    int f( vector<vector<int>> &dp,int n,int k,int target) {
        if(target == 0 and n == 0) return 1;
        if(n == 0 || target <= 0) return 0;

        if(dp[n][target] != -1) return dp[n][target]%MOD;
        int ways = 0;
        for(int  i = 1 ; i<= k ; i++) {
            ways = (ways+(f(dp,n-1,k,target-i)))%MOD;
        }
        return dp[n][target] = ways%MOD;
    }

    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
        return f(dp,n,k,target);
    }
};