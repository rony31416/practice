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
    int n;
    int even1 = 0,even2=0,odd1=0,odd2=0;
    cin>>n;
    int a[n];
    for(int i = 0 ; i< n ; i++)
    {
        cin>>a[i];

        if(i%2 == 0)
        {
            if(a[i]%2 == 0) even1 = 1 ;
            else odd1 = 1;

        }
        else
        {
            if(a[i]%2 == 0)even2 = 1;
            else odd2 =1;
        }

    }
    if(even1 && odd1)
        pn
        else if(even2 && odd2)
            pn
            else
                py
}

int main()
{
    int t =1;
    cin>>t;
    while(t--)
        solve();

    return 0;

}
