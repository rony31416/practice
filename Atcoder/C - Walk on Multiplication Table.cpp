//https://atcoder.jp/contests/abc144/tasks/abc144_c

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
#define  py                    printf("Yes\n");
#define  pn                    printf("No\n");
#define  pmone                 printf("-1\n");
template<typename A, typename B> ostream& operator<<(ostream& os, const pair<A, B>&p) {return os<<'(' << p.first << ", " << p.second << ')';}
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream& os, const T_container& v) {os << '{'; string sep;for(const T& x: v) os << sep << x, sep = ", "; return os << '}';}
void dbg_out() {cerr<<endl;}
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {cerr << " " << H; dbg_out(T...); }

#ifdef SMIE
#define debug(args...) cerr << "(" << #args << "):",dbg_out(args)
#else
#define debug(args...)
#endif

int p(ll a)
{
    int c = 0;
    while(a)
    {
        c++;
        a/=2;
    }

    return c-1;
}

void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(ll i = 1 ; i*i <= n ; i++)
    {
        if(n%i == 0) {
            v.pb({i,n/i});

        }
    }
     //dbg_out(v);
    if(v.size() == 1)
    {
        cout<<n-1<<nl;
    }

    else{
        ll ans = 1e14;
        for(auto u : v)
        {
            ans = min(ans,u.first+u.second-2);
        }
        cout<<ans<<nl;
    }





}


int main()
{
    int t;
    //  cin>>t;
    //  while(t--)
    solve();

    return 0;
}
