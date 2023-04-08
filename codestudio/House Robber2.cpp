#include <bits/stdc++.h>

long long int fun(vector<int> &houses,int i,vector<long long int> &dp)
{   if(i < 0) return 0;
    if(i == 0 ) return dp[i] = houses[0];

	if(dp[i] != -1 ) return dp[i];

	long long int take = houses[i] + fun(houses, i - 2,dp) ;
	long long int  notTake = 0 + fun(houses,i - 1 , dp);

	return dp[i] = max(take,notTake);
}
long long int houseRobber(vector<int>& valueInHouse)
{
    int n = valueInHouse.size();

   vector<int> temp1,temp2;
   vector<long long int>dp1(n+1,-1),dp2(n+1,-1);
   temp2 = temp1 = valueInHouse;
   temp1.pop_back();
   temp2.erase(temp2.begin());
   if(n == 1) return valueInHouse[0];
   long long int ans1 = fun(temp1,temp1.size()-1,dp1);

   long long int ans2 = fun(temp2,temp2.size()-1,dp2);

   return max(ans1,ans2);



}
