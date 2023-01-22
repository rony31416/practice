#include<bits/stdc++.h>
using namespace std;

typedef  long long ll ;
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
#define  nl                  endl
#define  py                  cout<<"YES"<<nl;
#define  pn                  cout<<"NO"<<nl;

void solve( )
{
    ll n;
    cin>>n;
    vll v(n);
    FOR(n,v)
    if(n%2 == 0)
    {
        for(int i = n-1 ; i>=0 ; i-=2)
        {
            if(v[i] < v[i-1])
            swap(v[i],v[i-1]);
        }
    }
    else
    {
        for(int i = n-1 ; i>0 ; i-=2)
        {
            if(v[i] < v[i-1])
            swap(v[i],v[i-1]);
        }
    }

    if(is_sorted(v.begin(),v.end())) py
    else pn
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
