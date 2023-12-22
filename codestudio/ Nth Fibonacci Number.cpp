#include<bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;
int f(int n,vector<int> &dp){
    if(n<=2) return 1;
    if(dp[n] != -1) return dp[n]%MOD;
   return dp[n] = (f(n-1,dp)+f(n-2,dp))%MOD;

}
int fibonacciNumber(int n){
    vector<int> dp(n+1,-1);
    return f(n,dp);
}
int main()
{
        int n;
        cin>>n;
        cout<<fibonacciNumber(n)<<"\n";
}