//https://atcoder.jp/contests/dp/tasks/dp_b

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,k;
   cin>>n>>k;
   int h[n+1];
   for(int i = 0 ; i < n ; i++) cin>>h[i];
    
   vector<int> dp(n+1,-1);
   dp[0] = 0;
   for(int  i  = 1 ; i < n ; i ++) {
    int res = INT_MAX;
    for(int j = 1 ; j<= k ; j++) {
        if(i-j>=0) {
            res = min(res,dp[i-j] + abs(h[i] - h[i-j]));
        }
    }
    dp[i] = res;
   }
   cout<< dp[n-1];

}