#include<bits/stdc++.h>

int fun(vector<int> &houses,int i,vector<int> &dp)
{
    if(i == 0 ) return dp[i] = houses[0];
	if(i < 0) return 0;
	if(dp[i] != -1 ) return dp[i];

	int take = houses[i] + fun(houses, i - 2,dp) ;
	int notTake = 0 + fun(houses,i - 1 , dp);

	return dp[i] = max(take,notTake);
}

int maxMoneyLooted(vector<int> &houses, int n)
{
	vector<int> dp(n+1,-1);
	return fun(houses,n - 1,dp);
}
