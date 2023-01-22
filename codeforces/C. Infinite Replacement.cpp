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

    int ac= 0;
    string s,t;
    cin>>s>>t;
    int x = t.size();
    ll p = s.size();
    ll o = pow(2,p);
    for(int i = 0 ; i< t.size(); i++)
    {
         if(t[i] == 'a') ac++;
    }
    if(ac > 1 || ( ac == 1 && x > 1))
    {
         cout<<"-1"<<nl;
    }

    else if(ac == 1 && x == 1)
    {
         cout<<"1"<<nl;

    }
    else
        cout<<o<<nl;


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
