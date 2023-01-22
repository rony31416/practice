
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
int i = 1;
void solve()
{
    int n;

    cin>>n;
    vector<int> v(n),v1(n);
    for(int i = 0 ; i< n ;i++)cin>>v[i];
    for(int i = 0 ; i< n ;i++)cin>>v1[i];
    ll ans = 0;
    for(int i = 0 ; i< n ; i++)
    {
        int k = v1[i]-v[i]-1;
        if(k>0)
        ans ^= k;
        //dbg(ans);
    }
   if(!ans) {
    cout<<"Case "<<i<<": black wins"<<nl;
   }
   else{
    cout<<"Case "<<i<<": white wins"<<nl;
   }
   i++;

}

int main()
{
    int t ;
    cin>>t;
    while(t--)
        solve();

    return 0;

}
