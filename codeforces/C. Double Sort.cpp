#include<bits/stdc++.h>
using namespace std;

typedef  long long int ll ;
typedef  long double ld;
typedef  vector<ll> vll;
typedef  vector<string> vs;
typedef  vector<pair<int,int>> vpi;
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
    int n;
    cin>>n;
    int a[n+3],b[n+3];
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=n; i++)cin>>b[i];
    vector<pair<int,int> > v;
    for(int i=1; i<=n; i++)
    {
            for(int j=1; j<n; j++)
            {
                    if(a[j]>a[j+1] || b[j]>b[j+1])
                    {
                            swap(a[j],a[j+1]);
                            swap(b[j],b[j+1]);
                            v.push_back({j,j+1});
                    }
            }
    }
    int ans=0;
    for(int i=1; i<n; i++)
    {
            if(a[i]>a[i+1] || b[i]>b[i+1])
            {
                    ans=-1;
                    break;
            }
    }
    if(ans!=0)cout<<-1<<endl;
    else
    {
            cout<<v.size()<<endl;
            for(int i=0; i<v.size(); i++)cout<<v[i].first<<" "<<v[i].second<<endl;
    }

}
int main()
{
    fastIO
    int t,a;
    cin>>t;
    while(t--)
        solve();
    return 0 ;
}
