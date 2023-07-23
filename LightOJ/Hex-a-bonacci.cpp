#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f;
int fn(int n,vector<int> &dp,int mod){
    if (n == 0) return dp [n] = a;
    if (n == 1) return dp [n] = b;
    if (n == 2) return dp [n] = c;
    if (n == 3) return dp [n] = d;
    if (n == 4) return dp [n] = e;
    if (n == 5) return dp [n] = f;
    if(dp[n] != -1 ) return dp[n]%mod;
    return dp [n] = fn(n-1,dp,10000007)%mod + fn(n-2,dp,10000007)%mod + fn(n-3,dp,10000007)%mod + fn(n-4,dp,10000007)%mod + fn(n-5,dp,10000007)%mod + fn(n-6,dp,10000007)%mod;
}
int main() {
    int n, cases;
    scanf("%d",&cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {

        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
         vector<int> dp(n+1,-1);
        printf("Case %d: %d\n", caseno, fn(n,dp,10000007)%10000007);
    }
    return 0;
}

