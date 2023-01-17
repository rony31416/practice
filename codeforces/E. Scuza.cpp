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

void solve()
{

    int n,q;
    cin>>n>>q;
    vector<ll> v(n+4);
    vector<ll> pre;
    ll ans[n+5] = {0};
    for(int i = 0 ; i < n ; i++) cin>>v[i];
    pre.pb(v[0]);
    for(int i = 2 ; i <=n ; i++)
    {
        ll x = pre.back();
        pre.pb(max(x, v[i-1]));
    }
    ans[1] = v[0];
    for(int i = 2 ; i <=n ; i++)
    {
        ans[i] = ans[i-1]+v[i-1];
    }
    while(q--)
    {
        int a;
        cin>>a;
        cout<<ans[(upper_bound(all(pre),a)-pre.begin())]<<" ";
    }
    cout<<nl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
