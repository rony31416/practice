//https://lightoj.com/problem/combinations

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
const ll mod = 1000003;
ll factorial[mod];
void fac()
{
     factorial[0] = 1;
     for(int i = 1 ; i<= mod ;i++)
     {

         factorial[i] = (factorial[i-1]%mod*i%mod)%mod;
     }

}
ll power(ll a, ll b)
{
	if(b == 0) return 1;
	if(b%2 == 0 )
        return power((a%mod*a%mod)%mod,b/2);
    else
        return (a%mod*power(a,b-1)%mod)%mod;
}

ll lucas_(ll n, ll r)
{
    if(n < r) return 0;

    ll a = factorial[n];
    ll b = factorial[r];
    ll c = factorial[n-r];
    ll x = (b%mod*c%mod)%mod;
    ll y = (a%mod*power(x,mod-2)%mod)%mod;
    return y;

}

 ll ncr_mod(ll n,ll r)
 {
     if(n<r) return 0;
     if(r == 0 ) return 1;
     //ll factorial[n+1];

     ll last_n = n%mod;
     ll last_r = r%mod;
     return ncr_mod(n/mod,r/mod)*lucas_(last_n,last_r)%mod;

 }

void solve(int cas)
{
    ll n,r;
    scanf("%lld %lld",&n,&r);
    cout<<"Case "<<cas<<": "<<ncr_mod(n,r)<<nl;


}


int main()
{
    fastIO
    cin.tie(NULL);
    fac();
    int t;
    scanf("%d",&t);
    for(int i = 1 ; i<=t;i++)
        solve(i);
    //cout<<ncr_mod(n,r,p);

    return 0;

}
