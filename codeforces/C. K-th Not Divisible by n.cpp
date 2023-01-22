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

ll f(ll i,ll a)
{
    return i-i/a;
}

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll low = 1,mid=0, high = 200000000000;
    while(low < high)
    {
        mid = low + high >> 1;
        if(b <= f(mid,a))
        {
            high = mid;
        }
        else
        {
            low = mid+1;
        }
    }
    cout<<low<<nl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
