//https://atcoder.jp/contests/abc212/tasks/abc212_c?lang=en


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
#define  pb                       push_back
#define  ttimes(T)             while(T--)
#define  fastIO                 ios_base::sync_with_stdio(false);
#define  nl                        "\n";
#define  sort_a(v)             sort(v.begin(),v.end());
#define  all(v)                   v.begin(),v.end()
#define  sort_d(v)             sort(v.begin(),v.end(),greater<ll>() );
#define  py                       printf("YES\n");
#define  pn                       printf("NO\n");
#define  pmone                 printf("-1\n");
void solve()
{


    ll n , m;
     cin>>n>>m;
     vector<ll> v,v1;
     for(int i = 0 ; i< n ;i++)
     {
          ll a;
          cin>>a;
            v.pb(a);
     }
     for(int i = 0 ; i< m ; i++)
     {
       ll f;
       cin>>f;
       v1.pb(f);

     }
  //   v.pb(-INT_MAX);
     sort(all(v));
     sort(all(v1));

     ll ans = INT_MAX ;
     for(int  i = 0 ;i < m ; i++)
     {

     ll x = lower_bound(v.begin(),v.end(),v1[i])-v.begin();
     ll y = upper_bound(all(v),v1[i])-v.begin();

    // cout<<x<< "  " ;
     ans = min(ans,min(abs(v1[i]-v[x]) ,abs(v1[i]-v[y])));

     }
     for(int  i = 0 ;i < n ; i++)
     {

     ll x = lower_bound(v1.begin(),v1.end(),v[i])-v1.begin();
     ll y = upper_bound(all(v1),v[i])-v1.begin();

    // cout<<x<< "  " ;
     ans = min(ans,min(abs(v[i]-v1[x]) ,abs(v[i]-v1[y])));

     }
   //  cout<<nl;
     cout<<ans<<nl;




}
int main()
{
    fastIO


    int t =1;
    //cin>>t;
    while(t--)
        solve();

    return 0;

}


































