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
#define  FOR(n,v)              for(int i=0;i<n;i++) cin>>v[i];
#define  pb                    push_back
#define  ttimes(T)             while(T--)
#define  fastIO                ios_base::sync_with_stdio(false);
#define  nl                    "\n";
#define  sort_a(v)             sort(v.begin(),v.end());
#define  sort_d(v)             sort(v.begin(),v.end(),greater<ll>() );
#define  py                    printf("YES\n");
#define  pn                    printf("NO\n");
#define  pmone                 printf("-1\n");
void solve()
{
    ll n ;
    cin>>n;

    vector<string> v(n);
    map<char,int> first,second;
    map<string,int> m;

    for(int i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }

    ll total = 0 ;
    for(int i = 0 ; i < n; i++)
    {
        total += (first[v[i][0]] + second[v[i][1]]- 2* m[v[i]]);
        first[v[i][0]]++;
        second[v[i][1]]++;
        m[v[i]] ++;
    }
    cout<<total<<nl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0 ;
}
