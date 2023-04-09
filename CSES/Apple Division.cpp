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
ll fun(vector<int> &v, ll curr_sum , ll total , int i)
{
    if(i == 0) return abs((total- curr_sum)- curr_sum);

    ll pick = fun(v,curr_sum+v[i], total , i-1) ;
    ll not_pick = fun(v,curr_sum,total,i-1);
    return min(pick,not_pick);

}

void solve()
{
   int n;
   cin>>n;
   vector<int> v;
   ll total = 0;
   for(int i = 0 ; i< n ; i++)
   {
       int a;
       cin>>a;
       v.pb(a);
       total+=a;
   }
   cout<<fun(v,0,total,n-1)<<nl;
}

int main()
{
    int t;
    //cin>>t;
    //while(t--)
    solve();

    return 0;
}

