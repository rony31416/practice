//https://atcoder.jp/contests/abc238/tasks/abc238_d?lang=en


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
#define  py                       printf("Yes\n");
#define  pn                       printf("No\n");
#define  pmone                 printf("-1\n");
void solve()
{

  ll  a,s;
  cin>>a>>s;
  if(a>s){
  pn
  return;

  }
  ll x = a;
  ll y = (s-a);
  ll p = x&y;
  if(p == x){
  py
  }
  else pn










/*
     ll n , m;
       cin>>n>>m;
       vector<ll> v;
       for(int i = 0 ; i< n ;i++)
       {
            ll a;
            cin>>a;
              v.pb(a);
       }
       sort(all(v));

       ll ans = INT_MAX ;

       for(int  i = 0 ;i < m ; i++)
       {
       ll p;
       cin>>p;
       ll x = lower_bound(v.begin(),v.end(),p)-v.begin();
       ll y = upper_bound(all(v),p)-v.begin();

       //cout<<x<< "  " <<y<<nl;
       if(x>0 &&)
       ans = min(ans,min(abs(p-v[x]) ,abs(p-v[y])));

       }
       cout<<ans<<nl;
       */




}
int main()
{
    fastIO


    int t =1;
    cin>>t;
    while(t--)
        solve();

    return 0;

}


































