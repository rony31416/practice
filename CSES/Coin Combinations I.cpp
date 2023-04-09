#include<bits/stdc++.h>
using namespace std;

typedef  long long int          ll ;
typedef  long double            ld;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<int,int> >  vpi;
typedef  set<ll>                s;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
double   pi = 3.14159265359;
#define  FOR(n,v)              for(ll i=0;i<n;i++) cin>>v[i];
#define  REP(i,n)              for(int i=0;i<n;i++)
#define  pb                    push_back
#define  ttimes(T)             while(T--)
#define  fastIO                ios_base::sync_with_stdio(false);
#define  nl                    "\n";
#define  all(v)                v.begin(),v.end()
#define  sort_a(v)             sort(all(v));
#define  sort_d(v)             sort(all(v),greater<ll>() );
#define  py                    printf("YES\n");
#define  pn                    printf("NO\n");
#define  pmone                 printf("-1\n");
const int M = 1e9+7;

int f(int sum,vector<int> &arr , int n,vector<ll> &dp)
{

    if(sum == 0) return dp[sum] = 1;

    ll ways = 0;
    if(dp[sum] != -1) return dp[sum];
    for(int i = 0 ; i< n ; i++)
    {
        if(sum - arr[i] >= 0)
        ways  = (ways + f(sum-arr[i] , arr, n,dp))%M;
        dp[sum] = ways;
    }
    return dp[sum]%M;
}

void solve()
{
   int n,x;
   cin>>n>>x;
   vector<int> arr;
   vector<ll> dp(x+1,-1);

   for(int i = 0 ; i < n ; i++)
   {
       int a;
       cin>>a;
       arr.pb(a);
   }
   cout<<f(x,arr,n,dp)<<nl;




}


int main()
{
    int t;
  //  cin>>t;
 //   while(t--)
    solve();

    return 0;
}

