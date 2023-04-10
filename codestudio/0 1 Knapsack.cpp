#include <bits/stdc++.h> 

int fun(vector<int> &wt,vector<int> &val,int i , int bag,vector<vector<int>> &dp)
{
	if(i == 0) 
	{
      if(wt[i] <= bag) return val[0];
	  else return 0;
	}
	if(dp[i][bag] != -1 ) return dp[i][bag];

    int notTake = 0 + fun(wt,val,i-1,bag,dp);
	int take = -1e9;
	if(wt[i] <= bag)
	take = val[i] + fun(wt,val,i-1,bag-wt[i],dp);

	return dp[i][bag] = max(take,notTake);

}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>> dp(n+1,vector<int>(maxWeight+1,-1));
    return fun(weight,value,n-1,maxWeight,dp);	

}
