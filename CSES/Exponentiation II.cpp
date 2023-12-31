//https://cses.fi/problemset/task/1712/

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
const ll mod = 1000000007;
ll power(ll a, ll n, ll d)
{
	ll res = 1;
	while(n)
	{
		if(n%2)
		{
			res = ((res%d)*(a%d))%d;
			n--;
		}
		else
		{
			a = ((a%d)*(a%d))%d;
			n/=2;
		}
	}
	return res;
}


void solve()
{

   ll a,b,c;
   cin>>a>>b>>c;

   ll b_c = power(b,c,mod-1);
   ll ans = power(a,b_c,mod);
   cout<<ans<<nl;

}


int main()
{
    fastIO
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;

}
