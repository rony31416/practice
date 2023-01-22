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
#define  sort_a(v)             sort(v.begin(),v.end());
#define  all(v)                v.begin(),v.end()
#define  sort_d(v)             sort(v.begin(),v.end(),greater<ll>() );
#define  py                    printf("YES\n");
#define  pn                    printf("NO\n");
#define  pmone                 printf("-1\n");
void solve()
{
    int n,k;
    cin>>n>>k;
    if(k<n)
    {
        int a = n/k;
        if(n%k != 0)
            k = k*(a+1);
        else k = n;
    }
    if(k%n == 0)
    {
        cout<<k/n<<nl;
    }
    else
    {
        cout<<k/n+1<<nl;
    }



}
int main()
{
    int t =1;
    cin>>t;
    while(t--)
        solve();

    return 0;

}
