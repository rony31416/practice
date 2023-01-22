
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

void solve(int i)
{
   ll n ;
   cin>>n;
   ll k = n;
   bool ok = false;
   if(n&1) {
      printf("Case %d: Impossible\n",i);
      return;
   }
   ll ans = 1;
while(n%2 == 0)
{
   ans*=2;
   n/=2;
}
printf("Case %d: %lld %lld\n",i,k/ans,ans);

}
int main()
{

    int t;
    cin>>t;

    for(int i = 1 ; i <=t;i++)
    solve(i);

    return 0;
}
