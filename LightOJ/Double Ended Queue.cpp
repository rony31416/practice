
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

int main()
{
    int t;
    cin>>t;
    for(int i = 1 ; i <= t ; i++ )
    {
        int n,q,x;
        cin>>n>>q;
        deque<int> d;
        string s;
        cout<<"Case "<<i<<":"<<nl;
       for(int i = 0 ; i<  q ; i++)
        {

            cin>>s;

            if( ( s == "pushLeft" || s == "pushRight" ) && ( d.size()>=n ) )
            {
                cin>>x;
                cout<<"The queue is full\n";
            }
            else if( (s == "popLeft" || s == "popRight" ) && d.size() == 0 )
            {
                cout<<"The queue is empty\n";
            }
            else if( s == "pushLeft" )
            {
                cin>>x;
                d.push_front(x);
                cout<<"Pushed in left: "<<x<<'\n';
            }
            else if( s == "pushRight" )
            {
                cin>>x;
                d.push_back(x);
                cout<<"Pushed in right: "<<x<<'\n';
            }
            else if( s == "popLeft" )
            {
                x=d.front();
                d.pop_front();
                cout<<"Popped from left: "<<x<<'\n';
            }
            else if( s == "popRight" )
            {
                x = d.back();
                d.pop_back();
                cout<<"Popped from right: "<<x<<'\n';
            }

        }

    }
    return 0;
}
