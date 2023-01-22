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
#define  sort_a(v)             sort(v.begin(),v.end());
#define  all(v)                v.begin(),v.end()
#define  sort_d(v)             sort(v.begin(),v.end(),greater<ll>() );
#define  py                    printf("YES\n");
#define  pn                    printf("NO\n");
#define  pmone                 printf("-1\n");
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v(k+5);
    FOR(k,v)
    ll ans = v[0]-1;
    for(ll i = 0 ; i< k-1; i++)
    {
            if(v[i] > v[i+1]) ans += n-v[i]+v[i+1];
            else ans+= v[i+1]-v[i];

    }
    cout<<ans<<nl;
}
int main()
{
    int t =1;
    while(t--)
        solve();

    return 0;

}
