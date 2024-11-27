//https://lightoj.com/problem/points-in-segments
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
#define  py                    printf("Yes\n");
#define  pn                    printf("No\n");
#define  pmone                 printf("-1\n");

int main()
{
    int t;
    cin>>t;
    for(int i =1 ; i <= t;i++)
    {
        int n,m;
        cin>>n>>m;
        int a[n+5];
        for(int  j= 0 ; j< n ;j++)
        {
            cin>>a[j];
        }
        printf("Case %d:\n",i);
        while(m--)
        {
             int x,y;
            cin>>x>>y;

            int  l1 = lower_bound(a,a+n,x)-a;
            int  l2 = upper_bound(a,a+n,y)-a;
        //    cerr<<l1<<" "<<l2<<nl;
            cout<<l2-l1<<nl;


        }


    }

    return 0;
}
