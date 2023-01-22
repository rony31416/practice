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

void solve()
{
    int h,m,k;
    string s;
    cin>>s;
    cin>>k;

    h = (s[0]-'0')*10+(s[1]-'0');
    m = (s[3]-'0')*10+(s[4]-'0');

    int mini = h*60+m;
    int ans = 0;
    vll v(50000);
    while(1)
    {
        if(v[mini] == 1) break;
        v[mini] = 1;

        int H = mini/60;
        int M = mini%60;

        int a = (H/10)%10;
        int b = H%10;
        int c = (M/10)%10;
        int d = M%10;
        if(b==c && a==d)ans++;
        mini+=k;
        mini%=1440;
    }
    cout<<ans<<nl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
