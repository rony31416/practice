#include<bits/stdc++.h>

int fun(vector<vector<int>> &points,int day, int last,vector<vector<int>> &dp)
{
   if(day == 0 ) 
   {
      int maxi = 0;
      for(int i = 0 ; i < 3 ; i++) 
      {
          if(i != last)
          maxi = max(maxi,points[0][i]);
      }
      return maxi;
   }
   if(dp[day][last] != -1) return dp[day][last];

   int maxi = 0;
   int i,j = -1;
   for( i = 0 ; i < 3 ; i++) 
   {
      if(i != last) 
      {   
         int point = points[day][i] + fun(points,day-1,i,dp);
         maxi = max(maxi,point);
          
      }

   }
   return dp[day][last] = maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n,vector<int>(4,-1));
    return fun(points,n-1,3,dp);
}
