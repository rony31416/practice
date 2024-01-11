
//https://atcoder.jp/contests/abc130/tasks/abc130_b?lang=en

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

void solve()
{

   ll n,x;
   cin>>n>>x;
   ll a[105];
   for(int i = 0 ; i< n ; i++)
    cin>>a[i];

   ll ans = 1,sum =0 ;
   for(int i = 0 ; i< n ;i++)
   {
       sum+=a[i];
       if(sum > x) {
        break;
       }
       else ans++;

   }
   cout<<ans<<nl;


}


int main()
{
    int t;
   // cin>>t;
   // while(t--)
    solve();

    return 0;
}
