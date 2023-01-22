#include<bits/stdc++.h>
using namespace std;

typedef  long long int ll ;
typedef  long double ld;
typedef  vector<ll> vll;
typedef  vector<string> vs;
typedef  vector<pair<int,int>>vpi;
typedef  set<ll>s;
typedef  map<ll,ll>mll;
typedef  pair<int,int> pint;
double   pi = 3.14159265359;
#define  FOR(n,v)             for(int i=0;i<n;i++) cin>>v[i];
#define  pb                    push_back
#define  ttimes(T)            while(T--)
#define  fastIO               ios_base::sync_with_stdio(false);
#define  nl                  "\n";
#define  sort_a(v)             sort(v.begin(),v.end());
#define  sort_d(v)             sort(v.begin(),v.end(),greater<ll>() );
#define  py                  printf("YES\n");
#define  pn                  printf("NO\n");
#define  pmone                 printf("-1\n");

void solve( )
{
    ll n,q;

    cin>>n>>q;
    vll v(n),new_v(n);
    FOR(n,v);
    sort_d(v);
    new_v[0] = v[0];
    for(int i = 1 ; i < n ; i++)
    {
        new_v[i] = new_v[i-1]+v[i];
    }
    while(q--)
    {
        int a;
        cin>>a;
        if(a > new_v[n-1])
        {
            pmone
        }
        else cout<< (lower_bound(new_v.begin(),new_v.end(),a)-new_v.begin() ) + 1<<nl;

    }

}

int main()
{
    fastIO  cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();


    return 0 ;
}
