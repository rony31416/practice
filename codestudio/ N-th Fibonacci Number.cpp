//https://www.codingninjas.com/studio/problems/nth-fibonacci-number_1115780?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 

int fibonacciNumber(int n){

    int fib[n];

    fib[0]=0;

    fib[1]=1;

    for(int i=2;i<=n;i++)

    {

        fib[i]=(fib[i-1]+fib[i-2]) % 1000000007;

    }

    return fib[n];

}



//another approach
#include <bits/stdc++.h> 
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